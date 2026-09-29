//ct100/g/30641/26
//shanice wangechi

#include<stdio.h>
int units;
double amount;

int main()
{
    printf("enter no of units consumed");
    scanf("%i",&units);
    
    if(units>=0 && units<=30)
      amount=units*20;
    else if(units>=31 && units<=60)
      amount=units*25;
    else
      amount=units*30;
    
    printf("total water amount: %.2fkes",amount);
    
    return 0;
}