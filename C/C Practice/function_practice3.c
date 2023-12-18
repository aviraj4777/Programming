#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter mass(in kg) of the body on earth \n");
    scanf("%f", &m);
    printf("Force(N) exerted by earth on the mass m is \n %.1f", force(m));
    return 0;
}
float force(float m)
{
    float g = 9.8;
    float F = m*g;
    return F;
}