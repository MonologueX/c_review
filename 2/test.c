#include <stdio.h>

///////////////////////////////////////////////
//  指针数组
///////////////////////////////////////////////
void Test1()
{
    char arr1[] = "abcdef";
    char arr2[] = "abcdef";
    char* p1 = "abcdef";
    char* p2 = "abcdef";
    if (arr1 == arr2)
    {
        printf("arr1 = arr2\n");
    }
    if (p1 == p2)
    {
        printf("p1 = p2\n");
    }
}

///////////////////////////////////////////////
//  数组指针
///////////////////////////////////////////////
void Test2()
{
    int arr[10];
    int (*p)[10] = &arr;
    int* arr2[10];
    // 错误
    // p = &arr2;
    int* (*p2)[10] = &arr2;
}

void Test3()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int (*p) = arr;
    int (*p)[10] = &arr;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", (*p)[i]);
    }
    printf("\n)");
}

void Test()
{
    char* c[] = {"ENTRY", "NEW", "POINT", "FIRST"};
    char** cp[] = {c+3, c+2, c+1, c};
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp+3);
    printf("%s\n", **cpp[-2]+3);
    printf("%s\n", cpp[-1][-1]+1);
}

int main()
{
    // Test1();
    // Test2();
    Test3();
    return 0;
}
