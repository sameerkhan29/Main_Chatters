#include "ui_Main_Chatters.h"
#include <QtWidgets/QMainWindow>
#include<QMessageBox>
class Main_Chatters : public QMainWindow
{
    Q_OBJECT

public:
    Main_Chatters(QWidget *parent = nullptr);
    ~Main_Chatters();
private slots:
    void LetsGo();
private:
    Ui::Main_ChattersClass ui;
};
