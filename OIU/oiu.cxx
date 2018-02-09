/****************************** 
*
* Code written by Anton Vertver, 2018 (c)
* OIU - main namespace
* Ui_OIUClass - UI class
* Use a OIU::OIU for a loading main types and libraries
*
******************************/

#include "oiu.h"
#include "ui_oiu.h"
#include "../libs/PortAudio/include/portaudio.h"
#include <QStatusBar>
#include <QFileDialog>

#define SAMPLE_RATE (44100)

// patest Callback for init sound channel
static int patestCallback(const void *inputBuffer, void *outputBuffer, unsigned long framesPerBuffer,
	const PaStreamCallbackTimeInfo* timeInfo, PaStreamCallbackFlags statusFlags, void *userData) {

}


OIU::OIU(QWidget *parent)
	: QMainWindow(parent) {								
	ui.setupUi(this);			
	statusBar()->showMessage(tr("Loading complete"));	

}


void OIU::getDeviceInfo() {

}

void OIU::updateDetails(int i) {

}


void OIU::refreshDevices() {

}

void OIU::on_openfile_triggered() {
	statusBar()->showMessage(tr("Clicked!"), 4000);
}

void OIU::openfile() {
    PaStream *stream;
	QString files = QFileDialog::getOpenFileName(this, "Select file ", "/home", 
		"Audiofiles (*.wav *.aif *.mp3)");

	if (files != NULL) {
		statusBar()->showMessage(tr("File loaded"), 4000);
	}
	else
	{
		statusBar()->showMessage(tr("Error: file can't open"), 4000);
	}
	PaError err;
	
	// err = Pa_OpenDefaultStream(&stream, 0, 2, paFloat32, SAMPLE_RATE, 256, patestCallback, &data);
	// QFileDialog dialog(this);
	// dialog.exec();
}	