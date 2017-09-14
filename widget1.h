#ifndef WIDGET1_H
#define WIDGET1_H

#include <QWidget>

namespace Ui {
class Widget1;
}

class Widget1 : public QWidget
{
        Q_OBJECT

    public:
        explicit Widget1(QWidget *parent = 0, int *i=0);
        ~Widget1();
        int changedValue;

    private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_pushButton_3_clicked();




    private:
        Ui::Widget1 *ui;
};

#endif // WIDGET1_H
