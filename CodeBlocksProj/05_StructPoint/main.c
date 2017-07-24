#include <stdio.h>
//#include <stdlib.h>

//---------------------------------------------------------------------------------------------------------------------//

// �ṹ��ָ����Ϊ������������:
/*
typedef struct Coordinate
{
    int x;
    int y;
} Coordinate;

void initializerStruct(Coordinate *point);  // ����ԭ��

int main(int argc, char *argv[])
{
    Coordinate myPoint;

    //initializeCoordinate(&myPoint);    // �����Ĳ����� myPoint �ĵ�ַ
    Coordinate *myPointPointer = &myPoint;

    myPoint.x = 10;     // �ýṹ��ķ�ʽ�޸� myPoint �е� x ��ֵ
    myPointPointer->y = 15; // �ýṹ��ָ��ķ�ʽ�޸� myPoint �е� y ֵ

    printf("x value is %d\n", myPoint.x);
    printf("y value is %d\n", myPoint.y);
    return 0;
}

void initializeCoordinate(Coordinate *point)
{
    // ���ýṹ���ʼ���Ĵ���
    //*point.x = 0;
    //*point.y = 0;    ---- �������Ǳ��벻����, Ϊʲô�أ�

    //(*point).x = 0;
    //(*point).y = 0;   // ������Ҫ�����������ͨ��, �Ķ������ǲ��Ǻ��鷳�أ� ������ʹ�����µķ���  '->'

    point->x = 0;
    point->y = 0;   // '->' �������ֻ������ָ����
}
*/

//---------------------------------------------------------------------------------------------------------------------//

// union �� struct �������������
/*
//typedef union ProgrammerLeague
//{
//    char character;     // size is 1
//    int memberNumber;   // size is 4
//    double rate;        // size is 8
//}ProgrammerLeague;
// �ֱ���� union �� struct �Ĵ�С


typedef struct ProgrammerLeague
{
    char character;     // size is 1
    int memberNumber;   // size is 4
    double rate;        // size is 8
}ProgrammerLeague;

int main(int argc, char *argv[])
{
    ProgrammerLeague programmerLeague;

    printf("This union size is %1u\n", sizeof(programmerLeague));

    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------//

/// enum

typedef enum Shape Shape;

enum Shape
{
    THIN,
    MEDIUM,
    FAT
};

int main(int argc, char *argv[])
{
    Shape shape = THIN;
    printf("THIN = %d\n", shape);

    shape = MEDIUM;
    printf("MEDIUM = %d\n", shape);

    shape = FAT;
    printf("FAT = %d\n", shape);

    return 0;
}       // �������Կ��� enum ÿ��ȡ����һ��ֵ, �� union ������, ���� enum �ĳ�Ա���ǳ��������Ǳ���;


