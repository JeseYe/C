#include <stdio.h>

int main(void){
    int height, length, width, volumn, weight;
    height = 8;
    length = 12;
    width = 10;
    volumn = height * length * width; // 赋值运算的右侧可以是一个含有常量、变量和运算符的公式(在C语言的术语中称为表达式)
    weight = (volumn + 165) / 166;
    printf("Demensions: %dx%dx%d\n", length, width, height);
    printf("Demensions wight: %d\n", weight);
}