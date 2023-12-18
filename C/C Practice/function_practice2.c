#include <stdio.h>
float convert(float a);
int main()
{
    float celcius;
    printf("Input temperature in celcius \n ");
    scanf("%f", &celcius);
    printf("The temperatur in farenheit %.1f", convert(celcius));
    return 0;
}
float convert(float a){
    float far;
    far = (a*9/5) + 32;
    return far;
}