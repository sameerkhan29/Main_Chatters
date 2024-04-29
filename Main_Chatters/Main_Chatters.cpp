#include "Main_Chatters.h"
#include "LoginWindow.h"

Main_Chatters::Main_Chatters(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    
    QObject::connect(ui.pushButton, &QPushButton::clicked, this ,&Main_Chatters::LetsGo);
}

Main_Chatters::~Main_Chatters()
{}
void Main_Chatters::LetsGo() {
    
    LoginWindow *uyi = new LoginWindow(nullptr);
    
    uyi->showMaximized();
    this->close();
    
}
