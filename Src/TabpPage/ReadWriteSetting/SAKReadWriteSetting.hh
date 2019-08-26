﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2019 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifndef RWPARAMETER_HH
#define RWPARAMETER_HH

#include <QDialog>
#include <QLineEdit>
#include <QCheckBox>
#include <QComboBox>


namespace Ui {
class SAKReadWriteSetting;
};

class SAKReadWriteSetting:public QDialog
{
    Q_OBJECT
public:
    SAKReadWriteSetting(QWidget* parent = nullptr);
private:
    Ui::SAKReadWriteSetting *ui = nullptr;

    QCheckBox* readDelayEnableCheckBox  = nullptr;
    QCheckBox* writeDelayEnableCheckBox = nullptr;
    QComboBox* readDelayComboBox        = nullptr;
    QComboBox* writeDelayComboBox       = nullptr;
    QCheckBox* readCustomDelayCheckBox = nullptr;
    QCheckBox* writeCustomDelayCheckBox = nullptr;
    QLineEdit* readLineEdit             = nullptr;
    QLineEdit* writeLineEdit            = nullptr;

    void initUi();
    void changedReadDelayTime();
    void changedWriteDelayTime();

    void setEnableReadDelay();
    void setEnableWriteDelay();
signals:
    void readDelayTimeChanged(int ms);
    void writeDelayTimeChanged(int ms);
};

#endif
