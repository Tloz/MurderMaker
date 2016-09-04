#ifndef DATAINPUT_H
#define DATAINPUT_H

#include <QtGui/QWidget>

namespace Ui {
class DataInput;
}

class DataInput : public QWidget
{
    Q_OBJECT
    
public:
    explicit DataInput(QWidget *parent = 0);
    ~DataInput();
    
protected:
    void changeEvent(QEvent *e);
    
private:
    Ui::DataInput *ui;
};

#endif // DATAINPUT_H
