#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "maforme.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void testForm();

private slots:
    void on_BoutonArret_clicked();

private:
    Ui::MainWindow *ui;
    maforme *FormMessage;
};
#endif // MAINWINDOW_H
