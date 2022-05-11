#ifndef TRAIN_TICKET_PNR_H
#define TRAIN_TICKET_PNR_H

#include <QMainWindow>

enum Place{Upper, Bottom};

class Train_Ticket_PNR
{
public:
    Train_Ticket_PNR();
    virtual ~Train_Ticket_PNR() {}
    void setPassenger_Name(QString Name) {Passenger_Name = Name;}
    void setCar_Num(int Num) {Car_Num = Num;}
    QString getPassenger_Name() const {return Passenger_Name;}
    int getCar_Num() const {return Car_Num;}
    virtual QString print() const {return "Train_Ticket_PNR";}
    virtual double getPrice() const{return 0;}
    virtual int getSeat_Num() const {return 0;}
    virtual QString getSeat_Type() {return "";}
    virtual bool setSeat_Num(int Num) {return true;}
    virtual void setPrice(double New_Price) {}
    virtual void setSeat_Type(QString Type) {}
protected:
    QString Passenger_Name{"NN"};
    int Car_Num{0};
};

#endif // TRAIN_TICKET_PNR_H
