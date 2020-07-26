#include <stdio.h>

#define FREEZING_PI 32.0f  // 每条预处理指令都要求独立成行
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Farenheit temperature:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PI) * SCALE_FACTOR;

    printf("Celsius equivalent: %.lf\n", celsius);
    return 0;
}

// C语言是一连串记号（token）, 即许多不改变意思的基础上不能再分割的字符组
// C语言允许在记号之间插入任意数量的间隔，这些间隔可以是空格符、制表符和换行符
// GCC: GNU C Compiler. 现在指GNU Compiler Collection ,因为最新本版的GCC能够编译用Ada、 C、C++、 Fortran、Java和Objective-C多种语言编写的程序
// GCC和其他GNU软件对Linux操作系统至关重要。Linux本身只是操作系统的内核（处理程序调度和基本输入/输出服务的部分）
// -c 指只编译(compile)源文件但不连接, 会把.c或者.cc的c源程序编译成目标文件, 一般是.o文件。
// -o 指输出(out)文件名。不用-o的话， 一般会在当前文件夹下生成默认的a.out文件作为可执行程序。