//ct100/g/30641/26
//shanice wangechi
#include<stdio.h>

int main()
{
float height,radius;
float volume,surface_area;
const float PI=3.14159;

    printf("enter radius of cylinder\t");
    scanf("%f",&radius);
    printf("enter height of cylinder");
    scanf("%f",&height);
    
    volume=PI * radius * radius * height;
    surface_area=2 * PI * radius * radius
    + 2 * PI * radius * height;
    
    printf("radius:%.2f\n",radius);
    printf("height:%.2f\n",height);
    printf("volume:%.2f\n",volume);
    printf("surface_area:%.2f\n",surface_area);
    
    return 0;
}