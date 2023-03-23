#include "CustomList.h"
CustomList::CustomList()
{

}
CustomList::CustomList(int max) : MyList(max)
{

}
CustomList::CustomList(const CustomList& obj) : MyList(obj)
{

}
CustomList::~CustomList()
{

}
int CustomList::sum_ofPrime()
{
    int* t = getArr();
    int n;
    bool is_prime = true;
    int sum = 0;
    for (int j = 0; j < getCurrentSize(); j++)
    {
        n = t[j];
        if (n == 0 || n == 1) {
            is_prime = false;
        }
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            sum+=n;
    }
    return sum;
}
int CustomList::secondMaxEven()
{
    
    int* t = getArr();
    int secMax = t[0], max = t[0];
    for (int j = 0; j < getCurrentSize(); j++)
    {
        if (t[j] % 2 == 0)
        {
            if (max < t[j])
            {
                max = t[j];
            }
        }
    }
    for (int j = 0; j < getCurrentSize(); j++)
    {
        if (t[j] % 2 == 0)
        {
            if (secMax < t[j]&&t[j]!=max)
            {
                secMax = t[j];
            }
        }
    }
    return secMax;
}
int CustomList::secondMinOdd()
{

    int* t = getArr();
    int secMin = t[0], min = t[0];
    for (int j = 0; j < getCurrentSize(); j++)
    {
        if (t[j] % 2 != 0)
        {
            if (min > t[j])
            {
                min = t[j];
            }
        }
    }
    for (int j = 0; j < getCurrentSize(); j++)
    {
        if (t[j] % 2 != 0)
        {
            if (secMin > t[j] && t[j] != min)
            {
                secMin = t[j];
            }
        }
    }
    return secMin;
}
void CustomList::printDuplicates()
{
    int* t = getArr();
    for (int j = 0; j < getCurrentSize(); j++)
    {
        
        if (t[j] % 2 != 0)
        {
           
        }
    }
}
void CustomList::rotateClockwaise(int r){ }
void CustomList::rotateanitclockwaise(int rt){}