#include "clientWindow.h"
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    ClientWindow clientWindow;
    clientWindow.show();

    return app.exec();
}
