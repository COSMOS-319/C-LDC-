/*
  2.19

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  ��Ŀ:���дһ�����򣺴Ӽ�������������ͬ��������Ȼ���ӡ���ǵĺ͡�ƽ��ֵ���˻���
  ��С�����������ֻʹ�ñ�����ѧ����if���ĵ���֧ѡ����ʽ��
 */
#include <stdio.h>

int main()
{
    int a,b,c,sum,product,minimum,maximum;
    float average;
    printf("enter 3 different integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum = a + b + c;
    product = a * b * c;
    average = sum / 3;
    if (a > b)
    {
        maximum = a;
        minimum = b;
    }
    else
    {
        maximum = b;
        minimum = a;
    }
    if (c > maximum)
        maximum = c;
    if (c < minimum)
        minimum = c;
    printf("sum is %d\n",sum);
    printf("product4 is %d\n",product);
    printf("minimum is %d\n",minimum);
    printf("maximum is %d\n",maximum);
    printf("average is %f\n",average);
    return 0;
}
