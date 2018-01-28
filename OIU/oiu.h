#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_oiu.h"

class OIU : public QMainWindow
{
	Q_OBJECT

public:
	OIU(QWidget *parent = Q_NULLPTR);

private:
	Ui::OIUClass ui;
};
