#include <stdio.h>
//#include <stdlib.h>

/* one_test
void transformMinutes(int hours, int minutes);

int main(int argc, char *argv[])
{
    int hours = 0, minutes = 90;

    transformMinutes(hours, minutes);
    printf("%d Сʱ �� %d ����\n", &hours, &minutes);
    return 0;
}

void transformMinutes(int hours, int minutes)
{
    hours = minutes / 60;   // 90 / 60 = 1
    minutes = minutes % 60; // 90 % 60 = 30
}
*/

//-------------------------------------------------------------------------------------------------------------------------//
// ָ�봫�ݸ�������ʽ 1
/*
void triplePointer(int *pointerOnNumber);
int main(int argc, char *argv[])
{
    int number = 5;

    triplePointer(&number); // �� number �����ĵ�ַ���ݸ� triplePointer ����
    printf("%d\n", number);
    return 0;
}

void triplePointer(int *pointerOnNumber)
{
    *pointerOnNumber *= 3;  // �� pointerOnNumber ��ֵ���� 3
}
*/
//-------------------------------------------------------------------------------------------------------------------------//
// ָ�봫�ݸ�������ʽ 2
/*
void triplePointer(int *pointerOnNumber);

int main(int argc, char *argv[])
{
    int number = 5;

    int *pointer = &number; // pointer ���洢����� number ��ֵ; (*pointer ��ʾֵ)
    triplePointer(pointer); // �� pointer (ֵ�� number �ĵ�ַ)���ݸ�����
    printf("%d\n", *pointer);   // �� *pointer ����ʾ number ��ֵ

    return 0;
}

void triplePointer(int *pointerOnNumber)
{
    *pointerOnNumber *= 3;  // �� pointerOnNumber ��ֵ���� 3
}
*/
//-------------------------------------------------------------------------------------------------------------------------//
// ��� ne_test �ļ�������: ʹ������Ϊ: x Сʱ, x ����!
void transformMinutes(int *hours, int *minutes);

int main(int argc, char *argv[])
{
    int hours = 0, minutes = 100;

    transformMinutes(&hours, &minutes);
    printf("%d Сʱ �� %d ����\n", hours, minutes);
    return 0;
}

void transformMinutes(int *hours, int *minutes)
{
    // �ǵ�, ��Ҫ����ȡֵ���� (*) , �����ſ��Ըı������ֵ, ���������ǵĵ�ַ.
    *hours = *minutes / 60;   // 90 / 60 = 1
    *minutes = *minutes % 60; // 90 % 60 = 30
}


