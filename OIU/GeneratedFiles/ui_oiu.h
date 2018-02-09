/********************************************************************************
** Form generated from reading UI file 'oiu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OIU_H
#define UI_OIU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OIUClass
{
public:
    QAction *action_save;
    QAction *action_saveas;
    QAction *action_importaudiofile;
    QAction *action_importproject;
    QAction *action_exportaudiofile;
    QAction *action_exportproject;
    QAction *action_closeapp;
    QAction *action_closeproject;
    QAction *action_closefile;
    QAction *action_newaudiofile;
    QAction *action_newproject;
    QAction *action_fileoptions;
    QAction *action_options;
    QAction *action_20to20000;
    QAction *action_20to5000;
    QAction *action_20to120;
    QAction *action_helpOIU;
    QAction *action_aboutOIU;
    QAction *action_aboutOIUSDK;
    QAction *action_6000to20000;
    QAction *action_200to6000;
    QAction *action_20to60;
    QAction *action_openaudiofile;
    QAction *action_openproject;
    QWidget *OIU_Widget;
    QListView *listView;
    QPushButton *pushnewfile;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_8;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OIUClass)
    {
        if (OIUClass->objectName().isEmpty())
            OIUClass->setObjectName(QStringLiteral("OIUClass"));
        OIUClass->resize(960, 540);
        OIUClass->setMinimumSize(QSize(960, 540));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(161, 0, 64, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(199, 199, 199, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(184, 184, 184, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush4(QColor(193, 0, 74, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        QBrush brush5(QColor(25, 25, 25, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(9, 9, 9, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(215, 0, 82, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(125, 0, 215, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        QBrush brush9(QColor(229, 229, 229, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        QBrush brush10(QColor(139, 0, 55, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        QBrush brush11(QColor(92, 0, 162, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        OIUClass->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Historic"));
        OIUClass->setFont(font);
        action_save = new QAction(OIUClass);
        action_save->setObjectName(QStringLiteral("action_save"));
        action_save->setCheckable(false);
        action_saveas = new QAction(OIUClass);
        action_saveas->setObjectName(QStringLiteral("action_saveas"));
        action_saveas->setCheckable(false);
        action_importaudiofile = new QAction(OIUClass);
        action_importaudiofile->setObjectName(QStringLiteral("action_importaudiofile"));
        action_importaudiofile->setCheckable(false);
        action_importproject = new QAction(OIUClass);
        action_importproject->setObjectName(QStringLiteral("action_importproject"));
        action_importproject->setCheckable(false);
        action_exportaudiofile = new QAction(OIUClass);
        action_exportaudiofile->setObjectName(QStringLiteral("action_exportaudiofile"));
        action_exportaudiofile->setCheckable(false);
        action_exportproject = new QAction(OIUClass);
        action_exportproject->setObjectName(QStringLiteral("action_exportproject"));
        action_exportproject->setCheckable(false);
        action_closeapp = new QAction(OIUClass);
        action_closeapp->setObjectName(QStringLiteral("action_closeapp"));
        action_closeapp->setCheckable(false);
        action_closeproject = new QAction(OIUClass);
        action_closeproject->setObjectName(QStringLiteral("action_closeproject"));
        action_closeproject->setCheckable(false);
        action_closefile = new QAction(OIUClass);
        action_closefile->setObjectName(QStringLiteral("action_closefile"));
        action_closefile->setCheckable(false);
        action_newaudiofile = new QAction(OIUClass);
        action_newaudiofile->setObjectName(QStringLiteral("action_newaudiofile"));
        action_newaudiofile->setCheckable(false);
        action_newproject = new QAction(OIUClass);
        action_newproject->setObjectName(QStringLiteral("action_newproject"));
        action_newproject->setCheckable(false);
        action_fileoptions = new QAction(OIUClass);
        action_fileoptions->setObjectName(QStringLiteral("action_fileoptions"));
        action_fileoptions->setCheckable(false);
        action_options = new QAction(OIUClass);
        action_options->setObjectName(QStringLiteral("action_options"));
        action_options->setCheckable(false);
        action_20to20000 = new QAction(OIUClass);
        action_20to20000->setObjectName(QStringLiteral("action_20to20000"));
        action_20to20000->setCheckable(false);
        action_20to5000 = new QAction(OIUClass);
        action_20to5000->setObjectName(QStringLiteral("action_20to5000"));
        action_20to5000->setCheckable(false);
        action_20to120 = new QAction(OIUClass);
        action_20to120->setObjectName(QStringLiteral("action_20to120"));
        action_20to120->setCheckable(false);
        action_helpOIU = new QAction(OIUClass);
        action_helpOIU->setObjectName(QStringLiteral("action_helpOIU"));
        action_helpOIU->setCheckable(false);
        action_aboutOIU = new QAction(OIUClass);
        action_aboutOIU->setObjectName(QStringLiteral("action_aboutOIU"));
        action_aboutOIU->setCheckable(false);
        action_aboutOIUSDK = new QAction(OIUClass);
        action_aboutOIUSDK->setObjectName(QStringLiteral("action_aboutOIUSDK"));
        action_aboutOIUSDK->setCheckable(false);
        action_6000to20000 = new QAction(OIUClass);
        action_6000to20000->setObjectName(QStringLiteral("action_6000to20000"));
        action_6000to20000->setCheckable(false);
        action_200to6000 = new QAction(OIUClass);
        action_200to6000->setObjectName(QStringLiteral("action_200to6000"));
        action_200to6000->setCheckable(false);
        action_20to60 = new QAction(OIUClass);
        action_20to60->setObjectName(QStringLiteral("action_20to60"));
        action_20to60->setCheckable(false);
        action_openaudiofile = new QAction(OIUClass);
        action_openaudiofile->setObjectName(QStringLiteral("action_openaudiofile"));
        action_openaudiofile->setCheckable(false);
        action_openproject = new QAction(OIUClass);
        action_openproject->setObjectName(QStringLiteral("action_openproject"));
        action_openproject->setCheckable(false);
        OIU_Widget = new QWidget(OIUClass);
        OIU_Widget->setObjectName(QStringLiteral("OIU_Widget"));
        listView = new QListView(OIU_Widget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, -60, 70, 2000));
        listView->setMinimumSize(QSize(70, 600));
        listView->setMaximumSize(QSize(70, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(33, 33, 33, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush12);
        listView->setPalette(palette1);
        listView->setFrameShape(QFrame::NoFrame);
        listView->setLineWidth(0);
        pushnewfile = new QPushButton(OIU_Widget);
        pushnewfile->setObjectName(QStringLiteral("pushnewfile"));
        pushnewfile->setGeometry(QRect(0, 0, 70, 70));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(pushnewfile->sizePolicy().hasHeightForWidth());
        pushnewfile->setSizePolicy(sizePolicy);
        pushnewfile->setMinimumSize(QSize(70, 70));
        pushnewfile->setMaximumSize(QSize(70, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush13(QColor(51, 51, 51, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush13);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::NoRole, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::NoRole, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::NoRole, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush13);
        pushnewfile->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft Tai Le"));
        pushnewfile->setFont(font1);
        pushnewfile->setCursor(QCursor(Qt::PointingHandCursor));
        pushnewfile->setFocusPolicy(Qt::StrongFocus);
        pushnewfile->setContextMenuPolicy(Qt::NoContextMenu);
        pushnewfile->setAutoDefault(false);
        pushnewfile->setFlat(true);
        OIUClass->setCentralWidget(OIU_Widget);
        menuBar = new QMenuBar(OIUClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menu);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_8 = new QMenu(menu);
        menu_8->setObjectName(QStringLiteral("menu_8"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menu_5);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_7 = new QMenu(menuBar);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        OIUClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OIUClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OIUClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OIUClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(57, 57, 57, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Active, QPalette::NoRole, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::NoRole, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::NoRole, brush14);
        statusBar->setPalette(palette3);
        OIUClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_7->menuAction());
        menu->addAction(menu_4->menuAction());
        menu->addAction(menu_8->menuAction());
        menu->addSeparator();
        menu->addAction(action_save);
        menu->addAction(action_saveas);
        menu->addSeparator();
        menu->addAction(menu_3->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addSeparator();
        menu->addAction(action_closefile);
        menu->addAction(action_closeproject);
        menu->addAction(action_closeapp);
        menu->addSeparator();
        menu_2->addAction(action_importaudiofile);
        menu_2->addAction(action_importproject);
        menu_3->addAction(action_exportaudiofile);
        menu_3->addAction(action_exportproject);
        menu_4->addAction(action_newaudiofile);
        menu_4->addAction(action_newproject);
        menu_4->addSeparator();
        menu_4->addAction(action_fileoptions);
        menu_8->addAction(action_openaudiofile);
        menu_8->addAction(action_openproject);
        menu_5->addAction(action_options);
        menu_5->addSeparator();
        menu_5->addAction(menu_6->menuAction());
        menu_6->addAction(action_20to20000);
        menu_6->addAction(action_6000to20000);
        menu_6->addAction(action_200to6000);
        menu_6->addAction(action_20to5000);
        menu_6->addAction(action_20to120);
        menu_6->addAction(action_20to60);
        menu_7->addAction(action_helpOIU);
        menu_7->addSeparator();
        menu_7->addAction(action_aboutOIU);
        menu_7->addAction(action_aboutOIUSDK);

        retranslateUi(OIUClass);
        QObject::connect(action_openaudiofile, SIGNAL(triggered()), OIUClass, SLOT(close()));

        pushnewfile->setDefault(false);


        QMetaObject::connectSlotsByName(OIUClass);
    } // setupUi

    void retranslateUi(QMainWindow *OIUClass)
    {
        OIUClass->setWindowTitle(QApplication::translate("OIUClass", "OIU", Q_NULLPTR));
        action_save->setText(QApplication::translate("OIUClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_save->setShortcut(QApplication::translate("OIUClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_saveas->setText(QApplication::translate("OIUClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_saveas->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_importaudiofile->setText(QApplication::translate("OIUClass", "\320\220\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", Q_NULLPTR));
        action_importproject->setText(QApplication::translate("OIUClass", "\320\237\321\200\320\276\321\215\320\272\321\202", Q_NULLPTR));
        action_exportaudiofile->setText(QApplication::translate("OIUClass", "\320\220\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", Q_NULLPTR));
        action_exportproject->setText(QApplication::translate("OIUClass", "\320\237\321\200\320\276\321\215\320\272\321\202", Q_NULLPTR));
        action_closeapp->setText(QApplication::translate("OIUClass", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        action_closeproject->setText(QApplication::translate("OIUClass", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\321\215\320\272\321\202", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_closeproject->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+[", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_closefile->setText(QApplication::translate("OIUClass", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\260\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_closefile->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+]", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_newaudiofile->setText(QApplication::translate("OIUClass", "\320\220\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_newaudiofile->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_newproject->setText(QApplication::translate("OIUClass", "\320\237\321\200\320\276\321\215\320\272\321\202", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_newproject->setShortcut(QApplication::translate("OIUClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_fileoptions->setText(QApplication::translate("OIUClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\204\320\260\320\271\320\273\320\276\320\262", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_fileoptions->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_options->setText(QApplication::translate("OIUClass", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_options->setShortcut(QApplication::translate("OIUClass", "Ctrl+K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_20to20000->setText(QApplication::translate("OIUClass", "\320\241\320\273\321\203\321\205 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260 (20-20000\320\223\321\206)", Q_NULLPTR));
        action_20to5000->setText(QApplication::translate("OIUClass", "\320\235\320\270\320\267\320\272\320\270\320\265 \320\270 \321\201\321\200\320\265\320\264\320\275\320\270\320\265 (20-5000\320\223\321\206)", Q_NULLPTR));
        action_20to120->setText(QApplication::translate("OIUClass", "\320\221\320\260\321\201\321\213 (20-120\320\223\321\206)", Q_NULLPTR));
        action_helpOIU->setText(QApplication::translate("OIUClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\264\320\273\321\217 OIU", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_helpOIU->setShortcut(QApplication::translate("OIUClass", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_aboutOIU->setText(QApplication::translate("OIUClass", "\320\236\320\261 OIU...", Q_NULLPTR));
        action_aboutOIUSDK->setText(QApplication::translate("OIUClass", "\320\236\320\261 OIU SDK...", Q_NULLPTR));
        action_6000to20000->setText(QApplication::translate("OIUClass", "\320\222\321\213\321\201\320\276\320\272\320\270\320\265 (6000-20000\320\223\321\206)", Q_NULLPTR));
        action_200to6000->setText(QApplication::translate("OIUClass", "\320\241\321\200\320\265\320\264\320\275\320\270\320\265 (200-6000)", Q_NULLPTR));
        action_20to60->setText(QApplication::translate("OIUClass", "\320\241\320\260\320\261\320\261\320\260\321\201 (20-60\320\223\321\206)", Q_NULLPTR));
        action_openaudiofile->setText(QApplication::translate("OIUClass", "\320\220\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_openaudiofile->setShortcut(QApplication::translate("OIUClass", "Ctrl+Shift+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_openproject->setText(QApplication::translate("OIUClass", "\320\237\321\200\320\276\321\215\320\272\321\202", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_openproject->setShortcut(QApplication::translate("OIUClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushnewfile->setText(QString());
        menu->setTitle(QApplication::translate("OIUClass", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("OIUClass", "\320\230\320\274\320\277\321\202\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("OIUClass", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214...", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("OIUClass", "\320\235\320\276\320\262\321\213\320\271", Q_NULLPTR));
        menu_8->setTitle(QApplication::translate("OIUClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        menu_5->setTitle(QApplication::translate("OIUClass", "\320\237\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        menu_6->setTitle(QApplication::translate("OIUClass", "\320\255\320\272\320\262\320\260\320\273\320\260\320\271\320\267\320\265\321\200", Q_NULLPTR));
        menu_7->setTitle(QApplication::translate("OIUClass", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OIUClass: public Ui_OIUClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OIU_H
