#include "luxury_ticket_pnr.h"

Luxury_Ticket_PNR::Luxury_Ticket_PNR()
{

}

bool Luxury_Ticket_PNR::setSeat_Num(int Num)
{
    if(Num >= Min_Seat_Num && Num <= Max_Seat_Num)
    {
        Seat_Num = Num;
        return true;
    } else
    {
        return false;
    }
}

void Luxury_Ticket_PNR::setSeat_Type(QString Type)
{
    if(Type == "Bottom" || Type == "bottom")
    {
        Seat_Type = Bottom;
    }
    if(Type == "Upper" || Type == "upper")
    {
        Seat_Type = Upper;
    }
}

QString Luxury_Ticket_PNR::getSeat_Type()
{
    if(Seat_Type == Upper)
    {
        return "Upper";
    } else
    {
        return "Bottom";
    }
}
