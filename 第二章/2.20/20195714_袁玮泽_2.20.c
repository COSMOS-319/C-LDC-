/*
  2.20

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  ��Ŀ:���дһ�����򣺶���һ��Բ�İ뾶��Ȼ���ӡ��ֱ�����ܳ����������ȡ����3.14159��
  ÿ�����㶼��printf�������ɣ���ʹ��ת��˵����%f
 */
#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    float radius;
    printf("please input the radius\n");
    scanf("%f",&radius);
    printf("the length of the circle is %f\n",radius*2);
    printf("the perimeter of the circle is %f\n",radius*PI*2);
    printf("the area of the circle is %f\n",radius*radius*PI);
    return 0;
}
