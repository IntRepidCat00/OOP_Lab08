#ifndef LUXURY_TICKET_PNR_H
#define LUXURY_TICKET_PNR_H

#include "train_ticket_pnr.h"

class Luxury_Ticket_PNR : public Train_Ticket_PNR
{
public:
    Luxury_Ticket_PNR();
    virtual ~Luxury_Ticket_PNR() {}
    QString print() const {return "Luxury_Ticket_PNR";}
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
    int Max_Seat_Num{18};
    double Price {0};
    Place Seat_Type{Bottom};
};

#endif // LUXURY_TICKET_PNR_H
