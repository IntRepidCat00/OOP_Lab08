#ifndef COUPEE_TICKET_PNR_H
#define COUPEE_TICKET_PNR_H

#include "train_ticket_pnr.h"

class Coupee_Ticket_PNR : public Train_Ticket_PNR
{
public:
    Coupee_Ticket_PNR();
    virtual ~Coupee_Ticket_PNR() {}
    QString print() const {return "Coupee_Ticket_PNR";}
    bool setSeat_Num(int Num);
    void setMin_Seat_Num(int Num) {Min_Seat_Num = Num;}
    void setMax_Seat_Num(int Num) {Max_Seat_Num = Num;}
    void setPrice(double New_Price) {Price = New_Price;}
    void setSeat_Type(QString Type);
    int getMin_Seat_Num() const {return Min_Seat_Num;}
    int getMax_Seat_Num() const {return Max_Seat_Num;}
    int getSeat_Num() const {return Seat_Num;}
    double getPrice() const {return Price;}
    QString getSeat_Type();
private:
    int Seat_Num{0};
    int Min_Seat_Num{1};
    int Max_Seat_Num{36};
    double Price {0};
    Place Seat_Type{Bottom};
};

#endif // COUPEE_TICKET_PNR_H
