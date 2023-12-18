#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;
    long int b;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &f, &d);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%0.3f\n", f);
    printf("%0.9f\n", d);
    return 0;
}