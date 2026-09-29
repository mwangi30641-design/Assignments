//ct100/g/30641/26
//shanice wangechi

#include<stdio.h>

int main()
{
float height=4.5;
double bank_ballance=4000;
char phone_no[11]="0712345678";

    printf("enter height\t");
    scanf("%f",&height);
    printf("enter bank_ballance\t");
    scanf("%lf",&bank_ballance);
    printf("enter phone_no");
    scanf("%s",&phone_no);
    
    printf("height is %f\n",height);
    printf("bank_ballance is %lf\n", bank_ballance);
    printf("phone no is %s\n", phone_no);
    
    return 0;
}