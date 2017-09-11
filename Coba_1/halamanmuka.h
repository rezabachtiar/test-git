#ifndef HALAMANMUKA_H
#define HALAMANMUKA_H

#include <QMainWindow>

namespace Ui {
class HalamanMuka;
}

class HalamanMuka : public QMainWindow
{
    Q_OBJECT

public:
    explicit HalamanMuka(QWidget *parent = 0);
    ~HalamanMuka();

private:
    Ui::HalamanMuka *ui;
};

#endif // HALAMANMUKA_H
