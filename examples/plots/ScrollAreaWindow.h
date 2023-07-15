//
// Created by yanhuajian on 2023/7/15.
//

#ifndef QCUSTOMPLOT_SCROLLAREAWINDOW_H
#define QCUSTOMPLOT_SCROLLAREAWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class ScrollAreaWindow; }
QT_END_NAMESPACE

class ScrollAreaWindow : public QMainWindow {
Q_OBJECT

public:
    explicit ScrollAreaWindow(QWidget *parent = nullptr);

    ~ScrollAreaWindow() override;

private:
    Ui::ScrollAreaWindow *ui;
};


#endif //QCUSTOMPLOT_SCROLLAREAWINDOW_H
