#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    int InputNumber, GuessNumber;
    const int MAX = 100, MIN = 1;
    // ���������: ������ 1~100 ֮���һ�������, ��ֵ�� InputNumber
    srand(time(NULL));
    InputNumber = (rand() % (MAX - MIN + 1)) + MIN;
    // ���в�����
    do{
        printf("�²�������Ƕ��٣�!\n");
        scanf("%d", &GuessNumber);
        if(InputNumber > GuessNumber)
            printf("��С��, �ٲ²£�\n");
        else if(InputNumber < GuessNumber)
            printf("�´���, �ٲ²£�\n");
        else
            printf("��ϲ��¶��ˣ�����\n");
    }while(GuessNumber != InputNumber);
    return 0;
}
