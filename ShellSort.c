void arrayPrint(int output[], int length);

void shellSort(int array[],int length){
    int gap;
    int i,j,temp;
    for(gap = length/2; gap>0; gap/=2) // gap = gap / 2
    {
        for(i = gap; i<length; i++)
        {
            arrayPrint(array, length);

            temp = array[i];

            for (j = i; j-gap >= 0 && array[j-gap] >temp; j-=gap)
            {
            array[j] = array[j-gap];
            }
            array[j] = temp;
        }
    }
}
