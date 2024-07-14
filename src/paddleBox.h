#pragma once
#include "ui_paddleBox.h"
#include <QMainWindow>

class paddleBox : public QMainWindow {
    Q_OBJECT
    
public:
    paddleBox(QWidget* parent = nullptr);
    ~paddleBox();

private:
    Ui_paddleBox* ui;
};