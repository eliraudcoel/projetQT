// Importations
#include <QStringList>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSet>

class ChatServeur : public QTcpServer {
    Q_OBJECT

    public:
        ChatServeur(QObject *parent=0);

    private slots:
        void readyRead();
        void disconnected();
        void sendUserList();

    protected:
        void incomingConnection(int socketfd); // méthode de réception des connexions

    private:
        QSet<QTcpSocket*> clients; // stockage des clients sous forme de socket TCP
        QMap<QTcpSocket*,QString> users; // stockage des utilisateurs : [socket TCP, Pseudo]
        QMap<QString, QString> user_images; // stockage des utilisateurs : [socket TCP, Pseudo]
};
