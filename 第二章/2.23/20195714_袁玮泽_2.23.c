/*2.23
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 *��Ŀ�����дһ�����򣺶���5��������Ȼ��ȷ�����е����ֵ����Сֵ����ӡ���
 *Ҫ���ʹ�ñ�����ѧ���ı�̼���
 */


#include <stdio.h>

int main()
{
    int a,b,c,d,e,maximum,minimum;
    printf("�������������\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if ( a > b )
    {
        maximum = a;
        minimum = b;
    }
    else
    {
        maximum = b;
        minimum = a;
    }
    if ( c > maximum )
        maximum = c;
    if ( c < minimum )
        minimum = c;
    if ( d > maximum )
        maximum = d;
    if ( d < minimum )
        minimum = d;
    if ( e > maximum )
        maximum = e;
    if ( e < minimum )
        minimum = e;
    printf("�����Ϊ%d\n��С��Ϊ%d\n",maximum,minimum);
    return 0;
}
