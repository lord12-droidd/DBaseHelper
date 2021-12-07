#ifndef CREATECOLUMNFORM_H
#define CREATECOLUMNFORM_H

#include <QDialog>

namespace Ui {
class CreateColumnForm;
}

class CreateColumnForm : public QDialog
{
    Q_OBJECT

public:
    explicit CreateColumnForm(QWidget *parent = nullptr);
    ~CreateColumnForm();

private:
    Ui::CreateColumnForm *ui;
};

#endif // CREATECOLUMNFORM_H
