// Importations
#include "serveurChat.h"
#include <QCoreApplication>

int main(int argc, char **argv) {
    QCoreApplication app(argc, argv);

    // Cretion du serveur de réception
    ChatServeur *server = new ChatServeur();

    // Lecture au port 4200
    bool success = server->listen(QHostAddress::Any, 4200);
    if(!success) {
        qFatal("Impossible de lire sur le port 4200.");
    }

    qDebug() << "Serveur Pret";
    return app.exec();
}
