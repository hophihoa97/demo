#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dialog.h"
#include "createac.h"
//#include "RemoteCommand.dll"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

//    void on_Account_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

    void on_label_pic_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    CreateAc *createac;
};
#endif // MAINWINDOW_H
