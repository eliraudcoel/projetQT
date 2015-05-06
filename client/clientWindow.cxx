// importations
#include "clientWindow.h"
#include <QRegExp>

// Création de la fenetre principale
ClientWindow::ClientWindow(QWidget *parent) : QMainWindow(parent) {
    // Affichage de la page de connexion
    setupUi(this);
    stackedWidget->setCurrentWidget(loginPage);

    // Création d'une nouvelle socket TCP
    socket = new QTcpSocket(this);

    // Implémentation des SLOTS
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
}

// Méthode au clic du bouton "connexion"
void ClientWindow::on_loginButton_clicked() {
    // Connexion au port 4200 à l'adresse demandé
    socket->connectToHost(serverLineEdit->text(), 4200);
}

// Méthode au clic du bouton "envoi"
void ClientWindow::on_sayButton_clicked() {
    // On récupère le message dans une variable QT
    // trimmed() => enlève les espaces en trop (début/fin)
    QString message = sayLineEdit->text().trimmed();

    // On envoi au serveur si le message n'est pas vide
    if(!message.isEmpty()) {
        socket->write(QString(message + "\n").toUtf8());
    }

    // Clear
    sayLineEdit->clear();
    sayLineEdit->setFocus();
}

// Méthode de lecture
void ClientWindow::readyRead() {
    while(socket->canReadLine()) {
        // On récupère le message dans une variable QT
        // trimmed() => enlève les espaces en trop (début/fin)
        QString line = QString::fromUtf8(socket->readLine()).trimmed();

        // Reconnaissance Message : "pseudo:message"
        QRegExp messageRegex("^([^:]+):(.*)$");

        // Reconnaissance de "/users" qui représentent la liste des utilisateurs
        QRegExp usersRegex("^/users:(.*)$");

	// Message d'un nouvel utilisateur
        if(usersRegex.indexIn(line) != -1) {
            QStringList users = usersRegex.cap(1).split(",");
            userListWidget->clear();

            // On ajoute l'utilisateur dans la liste avec l'image
            foreach(QString user, users)
                new QListWidgetItem(QPixmap(":/user.png"), user, userListWidget);
        }
	// Message d'un utilisateur
        else if(messageRegex.indexIn(line) != -1)
        {
            QString user = messageRegex.cap(1);
            QString message = messageRegex.cap(2);

            roomTextEdit->append("<b>" + user + "</b>: " + message);
        }
    }
}

// Méthode de connexion
void ClientWindow::connected() {
    // On ajoute à la page actuelle du chat
    stackedWidget->setCurrentWidget(chatPage);

    // Envoi du pseudo du nouvel utilisateur au serveur
    socket->write(QString("/moi:" + userLineEdit->text() + "\n").toUtf8());
}
