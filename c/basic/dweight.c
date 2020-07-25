#include <stdio.h>

int main(void){
    int height, length, width, volumn, weight;
    height = 8;
    length = 12;
    width = 10;
    volumn = height * length * width;
    weight = (volumn + 165) / 166;
    printf("Demensions: %dx%dx%d\n", length, width, height);
    printf("Demensions wight: %d\n", weight);
}