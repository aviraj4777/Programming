#include <stdio.h>
int main()
{
    int phy, chem, maths;
    printf("Enter physics marks \n");
    scanf("%d", &phy);
    printf("Enter chemistry marks \n");
    scanf("%d", &chem);
    printf("Enter maths marks \n");
    scanf("%d", &maths);
    float total = (phy + chem + maths)/3;
    if (total<40 || phy<33 || chem<33 || maths<33)
     printf("Your total percentage is %f and you are fail\n" , total);
     else 
     printf("Your total percentage is %f and you are passed\n" , total);

    return 0;
}