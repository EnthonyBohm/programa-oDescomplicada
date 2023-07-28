#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INT_MIN -2147483647

void biggestCounter (int *array, int arraySize, int* BiggestValue, int* repetition);

int main(){
        int ArraySize, BiggestValue, repetition;
        int* Array;
        char choice;

        printf ( "What is the Size of The array you desire? " ) ;
        scanf ( "%d", &ArraySize);
        getchar(); // TO CLEAN BUFFER

        Array = (int *) malloc(ArraySize * sizeof(int));

        printf ( "Do you want to automatically generate the numbers? (y/n) " ) ;
        scanf("%c", &choice);

        if ( choice == 'Y' || choice == (char) ('Y' + 32 )){
            for ( int i = 0; i < ArraySize; i++ ) {
                Array [ i ] = rand()%20;
                printf("%d - ", Array[i]);
            }
        }
        else {
            for ( int i = 0; i < ArraySize; i++ ) {
                printf("%d Value of array: ", i+1);
                scanf( "%d", &Array[i]);
            }
        }

        biggestCounter(Array, ArraySize, &BiggestValue, &repetition);

        printf("\tBiggest Value: %d\n", BiggestValue);
        printf("\tValue Repetition: %d", repetition);
}

void biggestCounter (int *array, int arraySize, int* BiggestValue, int* repetition){
    int i;
    *BiggestValue = INT_MIN;
    *repetition = 0;

    for ( i = 0; i < arraySize; i++ ){
        if(array[i] > *BiggestValue){
            *repetition = 1;
            *BiggestValue = array[i];
        }
        else if (array[i] == *BiggestValue)
            repetition++;
        else
            continue;
    }
}