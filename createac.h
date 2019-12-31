#ifndef CREATEAC_H
#define CREATEAC_H

#include <QDialog>

namespace Ui {
class CreateAc;
}

class CreateAc : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAc(QWidget *parent = nullptr);
    ~CreateAc();

private slots:
    void on_create_cursorPositionChanged(int arg1, int arg2);

    void on_waitting_clicked();

private:
    Ui::CreateAc *ui;
};

#endif // CREATEAC_H
