#ifndef REG_MULT_H
#define REG_MULT_H

#include <QMainWindow>

namespace Ui {
class REG_MULT;
}

class REG_MULT : public QMainWindow
{
    Q_OBJECT

public:
    explicit REG_MULT(QWidget *parent = 0);
    ~REG_MULT();
    double X1_RM[6];//x1's column
    double X2_RM[6];//x2's column
    double Y_RM[6];//y's column
    double f[3][4];//matrix

private:
    Ui::REG_MULT *ui;
public slots:
    void procesar_RM();//processing slot
    void borrar_RM();//claning slot
};

#endif // REG_MULT_H
