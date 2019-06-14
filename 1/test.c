/***********************************
 * 文件名称: test.c
 * 文件描述: C语言复习
 * 编译环境: Linux
 * 作者相关: 心文花雨
***********************************/

#include <stdio.h>
#include <string.h>

#include "sum.c"

///////////////////////////////////////////////
//  类型大小
///////////////////////////////////////////////
void Test1()
{
    printf("char = %d\n", sizeof(char));
    printf("short = %d\n", sizeof(short));
    printf("int = %d\n", sizeof(int));
    printf("long = %d\n", sizeof(long));
    printf("long long = %d\n", sizeof(long long));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
}

///////////////////////////////////////////////
//  输入
///////////////////////////////////////////////
void Test2()
{
    printf("请输入两个数字：");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b);
    printf("请输入两个数字：");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
}

///////////////////////////////////////////////
//  修改 const
///////////////////////////////////////////////
void Test3()
{
    const int a = 10;
    printf("%d\n", a);
    int* b = (int*)&a;
    *b = 20;
    printf("%d\n", a);
}

///////////////////////////////////////////////
//  转义字符
///////////////////////////////////////////////
void Test4()
{
    printf("%d\n", strlen("fadgfd"));
    printf("%d\n", strlen("fadg\32fd"));
    printf("%d\n", strlen("fadg\234fd"));
}

///////////////////////////////////////////////
//  for 循环
///////////////////////////////////////////////
void Test5()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

///////////////////////////////////////////////
//  前置++ 后置++
///////////////////////////////////////////////
void Test6()
{
    int a = 1;
    int b = a++;
    a = 1;
    int c = ++a;
    printf("a++ = %d\n", b);
    printf("++a = %d\n", c);
}

///////////////////////////////////////////////
//  << >> 
///////////////////////////////////////////////
void Test7()
{
    int a = 8;
    int b = a >> 1;
    int c = a << 1;
    printf("a>>1 = %d\n", b);
    printf("a<<1 = %d\n", c);
}

///////////////////////////////////////////////
//  register -- 寄存器
///////////////////////////////////////////////
void Test8()
{
    // 建议把 num 放在寄存器上
    register int num = 10;
    printf("num = %d\n", num);
}

///////////////////////////////////////////////
//  static 
///////////////////////////////////////////////
// 修饰局部变量
//     改变了生命周期
// 修饰全局变量
//     改变了作用域
// 修饰函数
//     改变了作用域
void Test()
{
    int a = 0;
    a++;
    printf("a = %d\n", a);
}
void _Test()
{
    static int s_a = 0;
    s_a++;
    printf("s_a = %d\n", s_a);
}
void Test9()
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        Test();
        _Test();
    }
}
extern int g_val;
void Test10()
{
    int sum = g_val + 2;
    printf("%d\n", sum);
}
int main()
{
    // Test1();    
    // Test2();
    // Test3();
    // Test4();
    // Test5();
    // Test6();
    // Test7();
    // Test9();
    Test10();
    return 0;
}
