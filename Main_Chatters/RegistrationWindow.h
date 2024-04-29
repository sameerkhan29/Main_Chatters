#include "ui_RegistrationWindow.h"
#include <QtWidgets/QMainWindow>

class Register_Windows : public QMainWindow {
	Q_OBJECT
public:
	Register_Windows(QWidget* parent = nullptr);
	~Register_Windows();
private:
	Ui::RegistrationWindow ui;
};