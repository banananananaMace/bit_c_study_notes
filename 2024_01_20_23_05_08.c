#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define SIZE 100 //定义数组大小为100

int main()
{
    int array[SIZE]; //定义一个整形数组
    srand(time(NULL)); //设置随机数种子
    for (int i = 0; i < SIZE; i++) //循环生成随机数并赋值给数组
    {
        array[i] = rand() % 1000; //生成0到99之间的随机数
    }
    for (int i = 0; i < SIZE; i++) //循环输出数组
    {
        printf("%d\t", array[i]); //输出数组元素
        if ((i + 1) % 10 == 0) //每输出10个元素换行一下
        {
            printf("\n");
        }
    }
    return 0;
}

