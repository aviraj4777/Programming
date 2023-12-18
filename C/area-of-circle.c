#include <stdio.h>
#include <string.h>
int main()
{
  char code = "K";
  switch(code)
  {
    case "A" : printf("ABS");break;
    case "K" : printf("King");break;
    default:printf("NOKINg");
  }

  return 0;
}