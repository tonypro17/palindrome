#ifndef FOCUSABLELINEEDIT_H
#define FOCUSABLELINEEDIT_H

#include <QLineEdit>

class FocusableLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    FocusableLineEdit(QWidget *parent = 0);
    ~FocusableLineEdit();

signals:
    void focussed(bool hasFocus);

protected:
    virtual void focusInEvent(QFocusEvent *e);
    virtual void focusOutEvent(QFocusEvent *e);
};

#endif // FOCUSABLELINEEDIT_H
