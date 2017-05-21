#ifndef MEMORY_BLOCK_H
#define MEMORY_BLOCK_H

#include <QButtonGroup>
#include <QObject>
#include <iostream>
#include <QThread>
#include <QTimer>
#include <QTime>
#include <cmath>
#include "ui_mainwindow.h"
using namespace std;

class memory_block : public QObject
{
    Q_OBJECT
public:
    memory_block(Ui::MainWindow *ui) {
        this->uiCopy = ui;
        this->steps = 0;
        for (int i = 0; i < 4; i++) {
            blocksUse[i] = 0;
            blockStore[i] = -1;
        }
        memoryBlocks = new QButtonGroup();
        seqSteps = 0;
        lossNum = 0;

        nowAchieve = -1;
        nextAchieve = -1;

    }



    void LRU();

private:

    int searchIns(int nowAchieve);
    int randomIns();

    //判断执行了几步顺序执行 实现分支、顺序
    int seqSteps;

    //Ui界面
    Ui::MainWindow *uiCopy;
    //内存块
    QButtonGroup *memoryBlocks;
    //执行了多少步了，最多320条指令，320步
    int steps;

    //当前和下一条执行的指令
    int nowAchieve;
    int nextAchieve;

    //缺页数
    int lossNum;

    //每一块block被使用的时间据现在时间
    int blocksUse[4];

    //每一个block存储的页
    int blockStore[4];

signals:

public slots:
    void oneStep();
    void allSteps();

    void remake();


friend class MainWindow;
};

#endif // MEMORY_BLOCK_H
