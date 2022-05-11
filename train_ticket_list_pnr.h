#ifndef TRAIN_TICKET_LIST_PNR_H
#define TRAIN_TICKET_LIST_PNR_H

#include "train_ticket_pnr.h"

struct TRList
{
    Train_Ticket_PNR *Ticket;

    TRList *Next = nullptr;
};

class Train_Ticket_List_PNR
{
public:
    Train_Ticket_List_PNR();
    ~Train_Ticket_List_PNR();

    Train_Ticket_PNR* getListAt(int index);
    void addNewElement();
    void deleteElementAt(int index);
private:
    struct TRList *List = new TRList;
};

#endif // TRAIN_TICKET_LIST_PNR_H
