// Importations
#include <QMainWindow>
#include <QTcpSocket>
#include <QStringList>
#include <QString>
#include <QMap>
#include "ui_clientWindow.h"

class ClientWindow : public QMainWindow, public Ui::MainWindow {
    Q_OBJECT

    public:
        ClientWindow(QWidget *parent=0);

    private slots:
        void on_loginButton_clicked(); // Clic sur le bouton "connexion"
        void on_sayButton_clicked();   // Clic sur le bouton "envoi"
        void readyRead();
        void connected();

    private:
        QTcpSocket *socket;
	QStringList colors;
        QMap<QString,QString> user_colors; // stockage des utilisateurs : [socket TCP, Couleur]
        QString user_image; // stockage de l'image de l'utilisateur
};
