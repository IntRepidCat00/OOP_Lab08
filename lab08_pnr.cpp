#include "lab08_pnr.h"
#include "ui_lab08_pnr.h"

Lab08_PNR::Lab08_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab08_PNR)
{
    ui->setupUi(this);

    for(int i{0}; i < 36; i++)
    {
        tickets[i] = new Coupee_Ticket_PNR;
    }
    for(int i{36}; i < 36+18; i++)
    {
        tickets[i] = new Luxury_Ticket_PNR;
    }

}

Lab08_PNR::~Lab08_PNR()
{
    delete ui;
}


void Lab08_PNR::on_btnPrint_PNR_clicked()
{
    QString text = "";

    Train_Ticket_PNR *trainTicket = new Train_Ticket_PNR;
    text+=trainTicket->print();
    text+="\n";
    delete trainTicket;
    trainTicket = new Coupee_Ticket_PNR;
    text+=trainTicket->print();
    text+="\n";
    delete trainTicket;
    trainTicket = new Luxury_Ticket_PNR;
    text+=trainTicket->print();
    text+="\n";
    delete trainTicket;

    ui->plainTextEdit_PNR->setPlainText(text);
}


void Lab08_PNR::on_btnPrint2_PNR_clicked()
{
    QString text = "";
    for(int i{0}; i < 36+18; i++)
    {
        text += QString::number(i);
        text += ") | ";
        text += tickets[i]->print();
        text += " | Passenger's Name: ";
        text += tickets[i]->getPassenger_Name();
        text += " | Car's Num: ";
        text += QString::number(tickets[i]->getCar_Num());
        text += " | Ticket Price: ";
        text += QString::number(tickets[i]->getPrice());
        text += " | Seat Num: ";
        text += QString::number(tickets[i]->getSeat_Num());
        text += " | Seat Type: ";
        text += tickets[i]->getSeat_Type();
        text += "\n";
    }
    ui->plainTextEdit2_PNR->setPlainText(text);
}


void Lab08_PNR::on_btnSet_PNR_clicked()
{
    int index = ui->spinBoxElemAt_PNR->value();

    int carNum = ui->spinBoxCar_PNR->value();
    int seatNum = ui->spinBoxSeat_PNR->value();
    QString passName = ui->lineEditPassengerName_PNR->text();
    QString place = ui->comboBoxPlace_PNR->currentText();
    double price = ui->lineEditPrice_PNR->text().toDouble();

    bool setOrNo = true;

    for(int i{0}; i < 54; i++)
    {
        if(tickets[i]->getSeat_Num() == seatNum && tickets[i]->getCar_Num() == carNum && i != index)
        {
            setOrNo = false;
        }
    }

    if(setOrNo)
    {
        if(tickets[index]->setSeat_Num(seatNum))
        {
            tickets[index]->setSeat_Type(place);
            tickets[index]->setCar_Num(carNum);
            tickets[index]->setPassenger_Name(passName);
            tickets[index]->setPrice(price);
            ui->lblMsgText_PNR->setText("Element was successfully set");
        } else
        {
            ui->lblMsgText_PNR->setText("Element wasn't set");
        }
    } else
    {
        ui->lblMsgText_PNR->setText("Element wasn't set");
    }

    Lab08_PNR::on_btnPrint2_PNR_clicked();
}


void Lab08_PNR::on_btnSort_PNR_clicked()
{
    int i, j;
    for (i = 0; i < 54 - 1; i++)
    {
        for (j = 0; j < 54 - i - 1; j++)
        {
            if (tickets[j]->getPrice() < tickets[j + 1]->getPrice())
                {
                    Train_Ticket_PNR *temp{tickets[j]};
                    tickets[j] = tickets[j+1];
                    tickets[j+1] = temp;
                }
        }
    }

    ui->lblMsgText_PNR->setText("Array was sorted");
    Lab08_PNR::on_btnPrint2_PNR_clicked();
}


void Lab08_PNR::on_btnSet_PNR_2_clicked()
{
    double sum{0};

    for(int i{0}; i < 54; i++)
    {
        sum += tickets[i]->getPrice();
    }

    ui->lblSumVal_PNR->setText(QString::number(sum));
}

