#include <stdio.h>
int main()
{
    float income, tax;
    printf("Enter the income of a employee (in Lac) \n");
    scanf("%f", &income);
    if (income < 2.5){
        printf("There is no tax for you");
    }
        else if (income > 2.5 && income < 5.0)
        {
            tax = (5 * income) / 100;
            printf("Tax paid by employee(in Lac) is %f", tax);
        }
    else if (income > 5.0 && income < 10.0)
    {
        tax = (20 * income) / 100;
        printf("Tax paid by employee(in Lac) is %f", tax);
    }
    else
    {
        tax = (30 * income) / 100;
        printf("Tax paid by employee(in Lac) is %f", tax);
    }
    return 0;
}