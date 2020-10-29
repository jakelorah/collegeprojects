#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int min, int max) {
    int num;

    srand(time(0));
    num = (rand() % (max - min + 1)) + min;
    
    return num;
}