/*3.16
 *This program was written by Yachen Chang
 *Produced date 10/17/2019, Northeastern University,China
 *��Ŀ����ʻԱ�������Լ�������ʻ���������һλ��ʻԱͨ����¼ÿ�μ��ͺ���ʻ�Ĺ�����
 *��ʹ�õ�ȼ�������˽�ÿ�μ��͵�������������дһ�������ĳ��򣺶�����ʻ��Ӣ������ÿ�μ��ͺ�ʹ�õ�ȼ��������λ�����أ�
 *���㲢��ʾÿ�μ��ͺ��ÿ����ƽ����ʻ���������
 */
#include<stdio.h>
int main(void)
{
    float gallons, miles,totlemiles=0,totlegallons=0;//Declare four floating point variable
    printf("Enter the gallons used(-1 to end):");//Prompt the user to enter or terminate the program
    scanf("%f",&gallons);
    while (gallons!=-1)//Determine whether to terminate the procedure
     {
         printf("Enter the miles driven:");
         scanf("%f",&miles);
         printf("\nThis miles/gallon for this tank was %f",miles/gallons);
         totlemiles+=miles;//Calculate the total distance
         totlegallons+=gallons;
         printf("\n\nEnter the gallons used(-1 to end):");
         scanf("%f",&gallons);


     }
     if(totlemiles||totlegallons)//Check whether the user has entered data
        printf("\n\nThe overall average miles/gallon was %f",totlemiles/totlegallons);
     else printf("\nPlease enter again");
}

