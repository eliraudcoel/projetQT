// La fct main du serveur UDP
#include <QCoreApplication>

#include "servTcp.h"

int main(int N, char *P[]) {
    QCoreApplication app(N, P);
    ServeurTcp su;
    su.show();
    return app.exec();
}

