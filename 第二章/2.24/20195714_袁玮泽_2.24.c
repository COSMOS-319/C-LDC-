/* 2.24
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 * ��Ŀ:���дһ�����򣺶���һ��������Ȼ���ж�����ż��������������ӡ���
 * ����ʾ��ʹ�������������ż����2�ı������κ�2�ı�������2��õ���������0��
 */
#include <stdio.h>

int main()
{
    int a,b=1;
    printf("������һ������\n");
    scanf("%d",&a);
    if( a % 2 == 0)
        b = 0;
    printf("%d��һ��",a);
    if (b)
        printf("����");
    else
        printf("ż��");
return 0;
}
