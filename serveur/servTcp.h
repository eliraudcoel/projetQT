// Definition de la classe ServeurTCP
#include <QtWidgets>
#include <QtNetwork>
#include <QObject>
#include <QString>

class ServeurTcp : public QTcpServer {
   Q_OBJECT
   public : 
   	ServeurTcp(QObject *parent=0);
   private slots : 
   	void demande_connexion();
   	void lecture();
   signals : 
   	void vers_IHM_connexion();
   	void vers_IHM_texte(QString);
   private :
     	QTcpSocket *clientConnection;
};
