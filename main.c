#include <stdio.h>
#include <stdlib.h>
#include "DlinkedList.h"



int i=0 ;
int main()
{
    for( i= 0; i < 50; i++)
    {
        addClient(i);
        printf("Data = %d\n", pTail->data);
    }
    structure client* pCur=pHead;

    insertClient(99, 25);
    for( i= 0; i < 51; i++)
    {
        printf("Data = %d\n", pCur->data);
        pCur=pCur -> pNext;
    }
    return 0;
}


