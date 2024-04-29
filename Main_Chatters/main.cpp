#include "Main_Chatters.h"
#include "LoginWindow.h"
#include "RegistrationWindow.h"
#include "ChatInterface.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chat_interface w;
    w.showMaximized();
    return a.exec();
}