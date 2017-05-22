#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    mem = new memory_block(ui);

    //初始化部分

    this->closeApp = ui->close;

    //初始化block显示
    this->initButton();
    //初始化随机数函数
    QTime t;
    t= QTime::currentTime();
    qsrand(t.msec()+t.second()*1000);

    //随机选择一个初始指令
    mem->nowAchieve = qrand() % 319;
    mem->nextAchieve = mem->nowAchieve;
    ui->now_address->setNum(mem->nowAchieve);
    //初始化按钮
    QObject::connect(ui->one_step, SIGNAL(clicked(bool)), mem, SLOT(oneStep()));
    QObject::connect(ui->all_steps, SIGNAL(clicked(bool)), mem, SLOT(allSteps()));
    QObject::connect(ui->remake, SIGNAL(clicked(bool)), mem, SLOT(remake()));

    QObject::connect(mem->memoryBlocks, SIGNAL(buttonClicked(int)), mem, SLOT(keep(int)));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::initButton() {
    mem->memoryBlocks->addButton(ui->block_1, 0);
    mem->memoryBlocks->addButton(ui->block_2, 1);
    mem->memoryBlocks->addButton(ui->block_3, 2);
    mem->memoryBlocks->addButton(ui->block_4, 3);

    mem->memoryBlocks->setExclusive(false);

}


