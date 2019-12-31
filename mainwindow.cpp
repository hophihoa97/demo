#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QtNetwork/QHostAddress"
#include"QtNetwork/QHostInfo"
#include"QtNetwork/QIPv6Address"
#include"QtNetwork/QNetworkInterface"
#include "qnetworkinterface.h"
#include "QPixmap"
#include "QtSql/QSqlDatabase"
#include"QtSql/qsqldatabase.h"
//#include "QtRemoteObjects/QRemoteObjectHostBase"
//#include"QtRemoteObjects/QRemoteObjectHost"
//#include "QtRemoteObjects/QRemoteObjectNode"
//#include"qdesktopservices.h"
//#include"QUrl"
//#include"QtWebSockets/QWebSocket"
//#include"QtWebSockets/QWebSocketServer"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Resource/img/Bkav.png.jpeg");
    ui->label_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString getMacAddress()
{
    foreach(QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
    {
        if (!(netInterface.flags() & QNetworkInterface::IsLoopBack))
            return netInterface.hardwareAddress();
    }
    return QString();
}

void MainWindow::on_pushButton_clicked()
{
    QString Account= ui->Account->text();
    QString Password= ui->Password->text();

    if(Account=="hoahp"&&Password=="1")
    {

        dialog =new Dialog(this);
        dialog->show();
        QHostInfo info;
        QString qstr = info.localHostName();
        qDebug() <<"USERNAME"<< qstr << endl;
        QHostInfo info2 ( QHostInfo ::fromName ( qstr ) );
        QList <QHostAddress> hostaddr = info2.addresses();
        qDebug()  <<"IPv6Address-IPv4Address"<< hostaddr << endl;
        qDebug()<<"MACAddress"<<getMacAddress() ;
    }
    else if (Account==NULL||Password==NULL){
        ui->statusbar->showMessage("Nhập Account và Password",5000);
    }
    else{
        QMessageBox::warning(this,"WARNING","Account hoặc mật khẩu chưa đúng");
        //ui->statusbar->showMessage("Account hoặc mật khẩu chưa đúng ",5000);
   }


}
void MainWindow::on_pushButton_2_clicked()
{
    createac=new CreateAc(this);
    createac->show();
//    QString link ="https://bmsa.bkav.com/WebService/WSBMSA.asmx";
//    QDesktopServices::openUrl(QUrl(link));





}

void MainWindow::on_label_pic_linkActivated(const QString &link)
{

}



