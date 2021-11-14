#include<stdio.h> 
#define PI 3.1415
int main()
{
    float radius,area;
    printf("Plese Enter the radius ");
    scanf("%f", &radius);
    area = PI*radius*radius;//Here used the value  of PI
    printf("Area=%.2f\n",area);
    return 0;
}
