//
// Created by yanhuajian on 2023/7/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ScrollAreaWindow.h" resolved

#include "ScrollAreaWindow.h"
#include "ui_ScrollAreaWindow.h"
#include "mainwindow.h"

ScrollAreaWindow::ScrollAreaWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::ScrollAreaWindow) {
    ui->setupUi(this);
    for(int i = 0; i < 21; ++i) {
        auto w = new MainWindow(this);
        w->setupDemo(i);
        w->setFixedSize(542, 390);
        ui->gridLayout->addWidget(w, i / 2, i % 2);
    }
}

ScrollAreaWindow::~ScrollAreaWindow() {
    delete ui;
}
