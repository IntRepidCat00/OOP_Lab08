#ifndef LAB08_PNR_H
#define LAB08_PNR_H

#include <QMainWindow>
#include "train_ticket_pnr.h"
#include "coupee_ticket_pnr.h"
#include "luxury_ticket_pnr.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Lab08_PNR; }
QT_END_NAMESPACE

class Lab08_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Lab08_PNR(QWidget *parent = nullptr);
    ~Lab08_PNR();

    Train_Ticket_PNR *tickets[18+36];

private slots:
    void on_btnPrint_PNR_clicked();

    void on_btnPrint2_PNR_clicked();

    void on_btnSet_PNR_clicked();

    void on_btnSort_PNR_clicked();

    void on_btnSet_PNR_2_clicked();

private:
    Ui::Lab08_PNR *ui;
};
#endif // LAB08_PNR_H
