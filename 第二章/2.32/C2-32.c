/*2.32
 *This program was written by Yachen Chang
 *Produced date 10/16/2019, Northeastern University,China
 *��Ŀ������BMI�Ĺ�ʽ���£�BMI=weightInPounds*703/(heightInches*heightInInches)
 *                           =weightInKilograms/(heightInMeters*heightInMeters)
 *  �봴��һ��BMI������Ӧ�ó��򡣸ó����ȶ�ȡ�԰�(pound)Ϊ��λ���û�����Ӣ��(inch)Ϊ��λ�����
 *(���ߣ������ϰ�ߵĻ���Ҳ������ǧ����Ϊ�û����صĵ�λ������Ϊ�û���ߵĵ�λ��
 *Ȼ����㲢��ʾ�û�����������ָ�������⣬�˳���Ӧ��ʾ�ɽ������������/���������о�Ժ�ṩ��������Ϣ�Ա��û�������/����BMI��
 *BMI VALUES
 *Underweight�� less than 18.5
 *Normal��      between 18.5 and 24.8
 *Overweight��  between 25 and 29.9
 *Obese��       30 or greater
 *��ע�⣺�ڱ����У�ѧ����ʹ��int���ͱ�ʾ����������intֵ������BMIʱ�����������������
 �ڵ����£���ѧ��ʹ��double��������ʾ��С��������֡���ʹ��double��������BMIʱ����������С���������--���Ǳ���Ϊ��������
 */
 #include<stdio.h>
 int main(void)
   {
       int weight, height , BMI ;//Declare three integer variables
       printf ("Please enter your weight (pounds) and height (inch):");//Prompt user for data
       scanf("%d%d",&weight,&height);//Get input data from keyboard
       BMI = weight * 703 / (height * height);//Calculate and assign BMI
       printf ("\nYour BMI is %d \n",BMI);//Output user's BMI
       printf ("%-15s\t%-15s\n","Underweight","less than 18.5");
       printf ("%-15s\t%-15s\n","Normal��","between 18.5 and 24.8");
       printf ("%-15s\t%-15s\n","Overweight��","between 25 and 29.9");
       printf("%-15s\t%-15s\n","Obese��","30 or greater");
       return 0;


    }
