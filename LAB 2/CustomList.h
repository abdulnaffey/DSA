//#pragma once
#include "Mylist.h"
class CustomList : public MyList
{
public:
    CustomList();
    CustomList(int max);
    CustomList(const CustomList& obj);
    ~CustomList();
    int sum_ofPrime();
    int secondMaxEven();
    int secondMinOdd();
    void printDuplicates();
    void rotateClockwaise(int r);
    void rotateanitclockwaise(int rt);
};

                            