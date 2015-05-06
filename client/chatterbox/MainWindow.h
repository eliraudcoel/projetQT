// Importations
#include <QMainWindow>
#include <QTcpSocket>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow, public Ui::MainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent=0);

    private slots:
        void on_loginButton_clicked(); // Clic sur le bouton "connexion"
        void on_sayButton_clicked();   // Clic sur le bouton "envoi"
        void readyRead();
        void connected();

    private:
        QTcpSocket *socket;
};
