#ifndef BEGIN_H
#define BEGIN_H

#include <QtGui/QWidget>

namespace Ui {
class begin;
}

class begin : public QWidget
{
    Q_OBJECT
    
public:
    explicit begin(QWidget *parent = 0);
    ~begin();
    
protected:
    void changeEvent(QEvent *e);
    
private:
    Ui::begin *ui;
};

#endif // BEGIN_H
