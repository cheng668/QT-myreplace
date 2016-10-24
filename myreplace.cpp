#include "myreplace.h"
#include "ui_myreplace.h"
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QRegExp>
#include <QTextStream>
myreplace::myreplace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myreplace)
{
    ui->setupUi(this);
    //ui->filecontentTextEdit->setVisible(false);
   // ui->filecontentLabel->setVisible(false);
}

myreplace::~myreplace()
{
    delete ui;
}

void myreplace::on_addBtn_clicked()
{
    //获取要修改的文件的路径
    QString openfilename = QFileDialog::getOpenFileName(this,QStringLiteral("添加文件"),"/JR/KAMC/trunk/src/client","bat file(*.bat)");
    ui->ListWidget->addItem(openfilename);
}

void myreplace::on_cancelBtn_clicked()
{
    //删除listWidget中条目
    ui->ListWidget->takeItem(ui->ListWidget->currentRow());
}

void myreplace::on_replaceBtn_clicked()
{
    int i = 0;
    for(;i < ui->ListWidget->count();i++)
    {
        QString filename(ui->ListWidget->item(i)->text());
        QFile file(filename);
        //读入文件
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug()<<tr("Can't open the readonly file:%1").arg(filename)<<endl;
            continue;
        }
        QTextStream stream(&file);
        QString readall = stream.readAll();
        QStringList strlist = readall.split("\n");
        file.close();
        //重新打开文件为Truncate形式，准备覆盖文件
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
        {
            qDebug()<<tr("Can't open the WriteOnly file:%1").arg(filename)<<endl;
            continue;
        }
        //匹配文件正则表达式
        QRegExp rx(tr("\\b%1").arg(ui->findLineEdit->text()));
        QString replacetext(ui->replaceLineEdit->text());
        //逐行更改文件和写入文件
        for(int j = 0;j < strlist.count();j++)
        {
           strlist[j].replace(rx,replacetext);
           if(j == strlist.count()-1)
           {
               stream << strlist.at(j);
           }
           else
           {
               stream << strlist.at(j) << tr("\n");
           }
        }
        file.close();

    }
}



void myreplace::on_ListWidget_itemSelectionChanged()
{
    QString filename(ui->ListWidget->currentItem()->text());
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<tr("Can't open the readonly file:%1").arg(filename)<<endl;
        return;
    }
    //（！）中文会乱码
    ui->filecontentTextEdit->setPlainText(QObject::trUtf8(file.readAll()));
    file.close();
}

//void myreplace::on_contentBtn_toggled(bool checked)
//{
//    ui->filecontentTextEdit->setVisible(checked);
//    ui->filecontentLabel->setVisible(checked);
//    if(checked)
//    {
//        ui->contentBtn->setText(QStringLiteral("隐藏文件内容>>>"));
//    }
//    else{
//        ui->contentBtn->setText(QStringLiteral("显示文件内容>>>"));
//    }
//}

void myreplace::on_closeBtn_clicked()
{
    close();
}
