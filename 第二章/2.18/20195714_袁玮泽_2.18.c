/*
 2.18

 This program was written by Weize Yuan
 Produced date 10/17/2019, Northeastern University,China
 ��Ŀ:���дһ���������û����������������ȡ�û����������������ӡ���нϴ���Ǹ���
 �������Ŵ�ӡ��is larger���������������ȣ���ӡ��Ϣ��These numbers are equal����
 ֻʹ�ñ�����ѧ����if���ĵ���֧ѡ����ʽ
 */
#include <stdio.h>

int main()
{
int a,b;
printf("please enter two integer\n");
scanf("%d%d",&a,&b);
if ( a == b )
    printf("these numbers are equal");
else if ( a > b )
    printf("%d is larger than %d",a,b);
else
    printf("%d is larger than %d",b,a);
return 0;
}
