/* 2.31
  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  ��Ŀ:��ʹ�ñ�����ѧϰ�ļ��������дһ�������0~10��������ƽ���������ĳ��򣬲�ʹ��
  ˮƽ�Ʊ����tab����ӡ������ֵ�����ԣ�
 */
#include <stdio.h>

int main()
{
    int i,j,k;//���֣�ƽ��������
    printf("number  square  cube  \n");
    for( i = 0 ; i <= 10 ; i++ )//����ʹ��10��printf̫�޴����Ҿ���ʹ��forѭ����ʵ��
        {
        j = i * i;//����ƽ��
        k = j * i;//��������
        printf("%d\t%d\t%d\n",i,j,k);//������λ���
        }
    return 0;
}
