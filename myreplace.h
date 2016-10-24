#ifndef MYREPLACE_H
#define MYREPLACE_H

#include <QWidget>

namespace Ui {
class myreplace;
}

class myreplace : public QWidget
{
    Q_OBJECT

public:
    explicit myreplace(QWidget *parent = 0);
    ~myreplace();

private:
    Ui::myreplace *ui;

private slots:
    void on_addBtn_clicked();

    void on_cancelBtn_clicked();

    void on_replaceBtn_clicked();

    void on_ListWidget_itemSelectionChanged();

    void on_closeBtn_clicked();
};

#endif // MYREPLACE_H
