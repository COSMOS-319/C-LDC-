/*
  2.26

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  ��Ŀ:���дһ�������ĳ��򣺶�������������ȷ�ϵ�һ�����Ƿ��ǵڶ������ı�������ӡ�������ʾ��ʹ�������������
 */

 #include <stdio.h>

int main()
{
    int a,b;
    printf("please input two integers\n");
    scanf("%d%d",&a,&b);
    if ( a % b == 0 )
        printf("the first integer is a multiple of the second");
    else
        printf("the first integer is not a multiple of the second");
    return 0;
}
