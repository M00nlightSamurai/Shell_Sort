#include <stdio.h>

void shellSort(int array[],int length);


int main() {
    int input[] = {10,3, 0, -1, 2, 12, -5};
    int n = 7; //number of array obj OR array size
    printf("Input array: ");
    shellSort(input, n);
    return 0;
}
