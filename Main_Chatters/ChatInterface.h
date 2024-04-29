#include "ui_ChatInterface.h"
#include <QtWidgets/QMainWindow>
class chat_interface : public QMainWindow
{
    Q_OBJECT

public:
    chat_interface(QWidget* parent = nullptr);

    ~chat_interface();

private slots:

private:

    Ui::chat_interface ui;
};
