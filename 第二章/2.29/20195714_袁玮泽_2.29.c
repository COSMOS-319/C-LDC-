/*
  2.29

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  ��Ŀ:���дһ����ӡĳЩ��д��ĸ��Сд��ĸ�����ֺ������������Ӧ������C���Գ���
  ���٣�ȷ�����·��ŵ�������ʾ��A��B��C��a��b��c��0��1��2��$��*��+��/���ո�
 */
#include <stdio.h>

int main()
{
    int i;
    int a[14] = {'A','B','C','a','b','c','0','1','2','$','*','+','/',' '};
    for (i=0;i<14;i++)
        printf("the ASCLL code of %c is %d\n",a[i],a[i]);
    return 0;
}
