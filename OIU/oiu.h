/******************************
*
* Code written by Anton Vertver, 2018 (c)
* Header of oiu.cxx
*
******************************/
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_oiu.h"

#define CPP 199711L

class OIU : public QMainWindow
{
	Q_OBJECT

public:
	OIU(QWidget *parent = Q_NULLPTR);

	// void setPortAudioContext(ScopedPAContext* pactx);		don't use in Qt version 
	void getDeviceInfo();

private:
	Ui::OIUClass ui;

public slots:
	void on_openfile_triggered();			// not used method
	void openfile();						// opening file
	void updateDetails(int i);				// update the waveform details
	void refreshDevices();					// for checking the new of it
};
