#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------------------------------------------------------//

/*
int main()
{
    int array[4], i = 0;

    // for ѭ����ʼ������
    for(i=0; i<4; i++)
    {
        array[i] = 0;
    }

    for(i=0; i<4; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
    //---------------------------------------------------------------------------------------------------------------------//

    // ֱ�ӳ�ʼ������
    int array[4] = {0,0,0,0}, i = 0;
    // int array[4] = {0};   // �����İ������ʼ��Ϊ 0 , ��Ϊ����ֻд��һ����Ա��ֵ, �����ֵҲ���Զ���ʼ��Ϊ 0
    for(i=0; i<4; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;

    //---------------------------------------------------------------------------------------------------------------------//
}
*/

//---------------------------------------------------------------------------------------------------------------------//

/*
// �����鴫�ݸ�����
void display(int *array, int arraySize);
int main(int argc, char *argv[])
{
    int array[4] = {10, 15, 3};

    // ��ʾ��ֵ������
    display(array, 4);

    return 0;
}

void display(int *array, int arraySize)
{
    int i;

    for(i=0; i<arraySize; i++)
    {
        printf("%d\n", array[i]);
    }
}
*/

//---------------------------------------------------------------------------------------------------------------------//

/*
// �������ƽ��ֵ
double arrayAverage(int array[], int arraySize);
int main(int argc, char *argv[])
{
    int array[5] = {66, 77, 79, 89, 91};

    printf("�������ƽ��ֵΪ: %f\n", arrayAverage(array, 5));
    return 0;
}

double arrayAverage(int array[], int arraySize)
{
    int i;
    double  sum = 0;
    for(i=0; i<arraySize; i++)
    {
        sum += array[i];
    }
    return sum/arraySize;
}
*/

//---------------------------------------------------------------------------------------------------------------------//

/*
// һ������, ��������, ��һ������, �ڶ��������С, ���������ֵ���������������г�Ա��ֵ�������ֵ, �򽫴˳�Ա��ֵ��Ϊ 0
void arrayMax(int array[], int arraySize, int valueMax);

int main(int argc, char *argv[])
{
    int array[5] = {55, 65, 75, 85, 95};
    int max = 50;
    arrayMax(array, 5, max);
    return 0;
}

void arrayMax(int array[], int arraySize, int valueMax)
{
    int i;
    for(i=0; i<arraySize; i++)
    {
        if(array[i] > valueMax)
        array[i] = 0;
        printf("array[%d] = %d\n", i, array[i]);
    }
}
*/

//---------------------------------------------------------------------------------------------------------------------//

// ����Ŀ���: ��������������, ��һ�͵ڶ���������������, �����������������С������һ������ (����) �����ݿ������ڶ������� (����) ��.
void copyArray(int originalArray[],int copyArray[],int arraySize);

int main(int argc, char *argv[])
{
    int arrayOne[3] = {11, 22, 33};
    int arrayTwo[3] = {0};
    copyArray(arrayOne, arrayTwo, 3);
    return 0;
}

void copyArray(int originalArray[],int copyArray[],int arraySize)
{
    int i;
    for(i=0; i<arraySize; i++)
    {
        copyArray[i] = originalArray[i];
    }
    printf("����������Ϊ: Array{%d, %d, %d}\n", copyArray[0], copyArray[1],copyArray[2]);
}
