#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
    int i,b[50],size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
    printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}
int platform1D(int ar[], int size)
{
    int maxCounter = 1, currentCounter = 1;
    int i = 0;
    for (i = 1; i < size; i++){
        if (ar[i] == ar[i-1]){
            currentCounter++;
        }
        else {
            if (maxCounter < currentCounter){
                maxCounter = currentCounter;
            }
            currentCounter = 1;
        }
    }
    /* Reason why you need this is lets take the example "1 2 2 2"
        once index 3 is processed, the loop ends and the code inside the "else" block isn't executed for the final plaform*/
    if (maxCounter < currentCounter){
        maxCounter = currentCounter;
    }
    return maxCounter;
}