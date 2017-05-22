#include "memory_block.h"

void memory_block::oneStep() {
    //if只执行一次
    if (this->steps < 319) {
        LRU();
        this->steps++;
    }
}

void memory_block::allSteps() {
    //while会一致执行
    while (this->steps < 319) {
        LRU();
        this->steps++;
    }
}

void memory_block::LRU() {
    //现在需要执行的指令
    this->nowAchieve = nextAchieve;
    uiCopy->now_address->setNum(this->nowAchieve);

    int nowBlock = searchIns(this->nowAchieve);
    //指令在内存块中
    if (nowBlock != -1) {
        //实现显示
        this->nextAchieve = this->randomIns();
        uiCopy->next_address->setNum(this->nextAchieve);
        uiCopy->is_loss->setText("否");

        //实现LRU
        for (int m = 0; m < 4; m++) {
            if (m == nowBlock) {
                this->blocksUse[m] = 0;
            }
            else {
                this->blocksUse[m]++;
            }
        }

        return;
    }
    //指令不在，需要调换
    else {
        //处理 缺页数 和 缺页率 显示
        this->lossNum++;
        uiCopy->loss_number->setNum(this->lossNum);
        double lossRate = double(lossNum)/double(steps+1);
        uiCopy->loss_rate->setText(QString::number(lossRate, 10, 4));

        //实现显示
        this->nextAchieve = this->randomIns();
        uiCopy->next_address->setNum(this->nextAchieve);
        uiCopy->is_loss->setText("是");
        //实现替换
        int tempBlock = 0;
        int temp = 0;
        for (int m = 0; m < 4; m++) {
            if (this->blocksUse[m] > temp) {
                temp = this->blocksUse[m];
                tempBlock = m;
            }
        }
        int changePage = (nowAchieve - nowAchieve % 10) / 10;
        this->blockStore[tempBlock] = changePage;
        cout << tempBlock << endl;
        cout << changePage << endl;

        //显示
        this->memoryBlocks->button(tempBlock)->setText(QString::number(changePage, 10));

        this->memoryBlocks->button(tempBlock)->setChecked(true);

        //实现LRU
        for (int m = 0; m < 4; m++) {
            if (m == tempBlock) {
                this->blocksUse[m] = 0;
            }
            else {
                this->blocksUse[m]++;
            }
        }

        return;
    }

}

int memory_block::searchIns(int nowAchieve) {
    int changePage = (nowAchieve - nowAchieve % 10) / 10;

    //查找是不是在里面
    for (int i = 0; i < 4; i++) {
        if (this->blockStore[i] == changePage) {
            //在
            return i;
        }
    }
    //不在
    return -1;
}

int memory_block::randomIns() {
    if (this->seqSteps == 0 || this->seqSteps == 2) {
        int temp = this->nowAchieve + 1;
        seqSteps++;
        return temp;
    }

    else if (this->seqSteps == 1) {
        int temp = qrand() % this->nowAchieve;
        seqSteps++;
        return temp;
    }

    else {
        int temp = this->nowAchieve + qrand() % (319 - this->nowAchieve);
        seqSteps = 0;
        return temp;
    }
}

void memory_block::remake() {
    this->steps = 0;
    for (int i = 0; i < 4; i++) {
        blocksUse[i] = 0;
        blockStore[i] = -1;
        this->memoryBlocks->button(i)->setText("");
        this->memoryBlocks->button(i)->setChecked(false);
    }
    this->seqSteps = 0;
    this->lossNum = 0;

    //随机选择一个初始指令
    this->nowAchieve = qrand() % 319;
    this->nextAchieve = this->nowAchieve;
    uiCopy->now_address->setNum(this->nowAchieve);

    uiCopy->next_address->setText("?");
    uiCopy->loss_number->setText("?");
    uiCopy->loss_rate->setText("?");
    uiCopy->is_loss->setText("?");

}

void memory_block::keep(int i) {
    if (this->memoryBlocks->button(i)->isChecked() == true) {
        this->memoryBlocks->button(i)->setChecked(false);
    }
    else {
        this->memoryBlocks->button(i)->setChecked(true);
    }
}
