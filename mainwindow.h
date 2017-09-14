#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "widget1.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
        int* valueneeded;
        Widget1 *a;

    private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

        void on_QuitButton_clicked();

    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
