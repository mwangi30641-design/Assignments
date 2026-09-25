//shanice wangechi
//CT100/G/30641/26
#include <stdio.h>

int main(){
int age = 21;
int Annualincome = 21000;
printf("Enter age\t");
scanf("%i",&age);
printf("Enter Anual income\t");
scanf("%i",&Annualincome);
if(age<21)
printf("Unfortunately, we are unable to offer you a loan at this time ");
if(Annualincome<21000)
printf("Unfortunately, we are unable to offer you a loan at this time ");
else printf("Congratulations you qualify for a loane");
return 0;
}