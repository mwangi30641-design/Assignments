//ct100/g/30641/26
//shanice wangechi
#include<stdio.h>
int attendance;
int average_marks;

int main()
{
    printf("enter attendance");
    scanf("%i",&attendance);
    printf("enter average_marks");
    scanf("%i",&average_marks);
    
  if(attendance>=75 && average_marks>=40)
    printf("eligible");
  else 
     printf("not eligible");
    return 0;
}