#ifndef MAFORME_H
#define MAFORME_H

#include <QWidget>

namespace Ui {
class maforme;
}

class maforme : public QWidget
{
    Q_OBJECT

public:
    explicit maforme(QWidget *parent = nullptr);
    ~maforme();

private:
    Ui::maforme *ui;
};

#endif // MAFORME_H
