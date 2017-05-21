#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "memory_block.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initButton();

    memory_block *mem;



private:
    Ui::MainWindow *ui;

//    QButtonGroup *memoryBlocks;
};

#endif // MAINWINDOW_H
