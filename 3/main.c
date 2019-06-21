#include <stdio.h>

///////////////////////////////////////////////
//  分支语句
///////////////////////////////////////////////
// 0 表示假，其他表示真
void Test()
{
    int i = 0;
    printf("请输入一个数：");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("num = 1\n");
    }
    else 
    {
        printf("num != 1\n");
    }
}

//  判断奇数
void JudgeNumIsOdd()
{
    int num = 0;
    if ((num & 1) == 1)
    {
        printf("%d is odd\n", num);
    }
    else 
    {
        printf("%d is not odd!\n", num);
    }
}

///////////////////////////////////////////////
// switch case 
///////////////////////////////////////////////
// 表达式是整型
// case 1+1 对
// 可嵌套
void TestSwitch()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
        default:
            printf("其他\n");
            break;
    }
}

int main()
{
    Test();
    return 0;
}
