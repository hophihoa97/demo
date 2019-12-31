#include "createac.h"
#include "ui_createac.h"
#include "QMessageBox"
#include "qdebug.h"
#include"QPixmap"

CreateAc::CreateAc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAc)
{
    ui->setupUi(this);
    QPixmap pix(":/Resource/img/Bkav.png.jpeg");
    ui->label_pic2->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

CreateAc::~CreateAc()
{
    delete ui;
}

void CreateAc::on_create_cursorPositionChanged(int arg1, int arg2)
{

}

void CreateAc::on_waitting_clicked()
{
    QString create=ui->create->text();
    if (create=="hoahp"){

        QMessageBox::warning(this,"WARNING","Đã có Account");
    }
    else if(create==NULL){
        QMessageBox::warning(this,"WARNING","Nhập Account của bạn");
    }
    else {
        QMessageBox::warning(this,"WARNING","Chờ cấp quản lý phía trên xác nhận");
        qDebug()<<create;
    }

}
