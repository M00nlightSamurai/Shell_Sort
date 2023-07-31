#include <stdio.h>
void arrayPrint(int output[], int length)
{
    int i;
    for (i = 0; i <length-1; i++)
    {
    printf("%d, ",output[i]);
    }
    printf("%d\n",output[i]);
}
