/* 2.30
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 * ��Ŀ:���ָ�һ�������ĸ������֣����дһ�������ĳ��򣺶���һ��5λ�����ָ��������
 * ��λ�ϵ����ֲ����ָ�������Լ��3���ո����ʽ���δ�ӡ�������ʾ�����ʹ�����������������������
 */
#include <stdio.h>

int main()
{
    int number,a,b,c,d,e,temp;
    printf("������һ����λ����\n");
    scanf("%d",&number);
    a = number / 10000;
    temp = number - a * 10000;
    b = temp / 1000;
    temp -= b * 1000;
    c = temp / 100;
    temp -= c * 100;
    d = temp / 10;
    temp -= d * 10;
    e = temp;
    printf("%d   %d   %d   %d   %d",a,b,c,d,e);
return 0;
}
