/******************************
*
* Code written by Anton Vertver, 2018 (c)
* loading process
*
******************************/

#include "oiu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	OIU w;
	w.show();
	return a.exec();
	
}

