#ifndef FRMPRESTAMO_H
#define FRMPRESTAMO_H

#include <QWidget>

namespace Ui {
class frmprestamo;
}

class frmprestamo : public QWidget
{
    Q_OBJECT

public:
    explicit frmprestamo(QWidget *parent = nullptr);
    ~frmprestamo();

private:
    Ui::frmprestamo *ui;
};

#endif // FRMPRESTAMO_H
