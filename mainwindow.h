#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
<<<<<<< HEAD
    int Funcion();
    double Funcion2();
    ~MainWindow();

=======
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

>>>>>>> refs/remotes/origin/master
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
