#include "focusablelineedit.h"

FocusableLineEdit::FocusableLineEdit(QWidget *parent): QLineEdit(parent)
{

}

FocusableLineEdit::~FocusableLineEdit()
{

}

void FocusableLineEdit::focusInEvent(QFocusEvent *e)
{
  QLineEdit::focusInEvent(e);
  emit(focussed(true));
}

void FocusableLineEdit::focusOutEvent(QFocusEvent *e)
{
  QLineEdit::focusOutEvent(e);
  emit(focussed(false));
}
