#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H

#include <QDialog>

namespace Ui {
class ErrorWindow;
}

class ErrorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorWindow(QWidget *parent = nullptr, QString errorMessage = nullptr);
    ~ErrorWindow();

private slots:
    void on_closeButton_clicked();

private:
    Ui::ErrorWindow *ui;
};

#endif // ERRORWINDOW_H
