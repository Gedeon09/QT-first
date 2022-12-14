#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->FormMessage = new maforme() ;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BoutonArret_clicked()
{


              this->testForm();
}

void MainWindow::testForm()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    clickedButton->setText("Arret");
    bool vis = this->FormMessage->isVisible();
    this->FormMessage->setVisible(true);
    vis = this->FormMessage->isVisible();
    this->FormMessage->show();
    QMessageBox msgBox;
            //msgBox.setText("Saisi du code.");
            msgBox.setInformativeText("voulez-vous arreter l'app!!");
            QMessageBox::StandardButton reply;
                  reply = QMessageBox::question(this, "Test", "Arreter ",
                                                QMessageBox::Yes|QMessageBox::No);
                  if (reply == QMessageBox::Yes) {
                    qDebug() << "Yes was clicked";
                    QApplication::quit();
                  } else {
                    qDebug() << "Yes was *not* clicked";
                  }
}

