/******************************
*
* Code written by Anton Vertver, 2018 (c)
* The methods for opening the files to buffer
*
******************************/

#include "oiu.h"
#include "ui_oiu.h"
#include <QtWidgets/QApplication>
#include <QStatusBar>

#include <../libs/PortAudio/include/portaudio.h>

#define SAMPLE_RATE (44100)
#define FRAMES_PER_BUFFER (512)
#define NUM_SECONDS (10)
#define DITHER_FLAG (0)		// or (paDitherOff)

// select float point
#if 1
#define PA_SAMPLE_TYPE paFloat32
#define SAMPLE_SIZE (4)
#define SAMPLE_SILENCE (0.0f)
#define PRINTF_S_FORMAT "%.8f"
#elif 0
#define PA_SAMPLE_TYPE paInt16
#define SAMPLE_SIZE (2)
#define SAMPLE_SILENCE (0)
#define PRINTF_S_FORMAT "%d"
#elif 0
#define PA_SAMPLE_TYPE paInt24
#define SAMPLE_SIZE (3)
#define SAMPLE_SILENCE (0)
#define PRINTF_S_FORMAT "%d"
#elif 0
#define PA_SAMPLE_TYPE paInt8
#define SAMPLE_SIZE (1)
#define SAMPLE_SILENCE (0)
#define PRINTF_S_FORMAT "%d"
#else
#define PA_SAMPLE_TYPE paUInt8
#define SAMPLE_SIZE (1)
#define SAMPLE_SILENCE (128)
#define PRINTF_S_FORMAT "%d"
#endif



