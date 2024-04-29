#include <QtWidgets/QMainWindow>
#include "ui_LoginWindow.h"
#include <QRegularExpression>
#include <QPushButton>
class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget* parent = nullptr);

    ~LoginWindow();

private slots:

private:

    Ui::MainWindow ui;
};
