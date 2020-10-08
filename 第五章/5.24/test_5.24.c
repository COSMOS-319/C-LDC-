/*
 * This program was written by Fawei Liang .
 * Produced date 5/10/2020 , Northeastern University,China
 * ��Ŀ�����¶�ת����ʵ����������������
 * ��a�������뻪���¶ȵȼ۵������¶ȵ� toCelsius ������
 * ��b�������������¶ȵȼ۵Ļ����¶ȵ� toFahrenheit ������
 * ��c�����дһ����������Щ��������ӡ�������¶�0��100��
 * ��Ӧ�Ļ����¶ȣ��Լ������¶�32��212�ȶ�Ӧ�������¶ȡ�
 * ��ӡ���ü򵥵ı����ʽ�����ڱ�֤�ɶ��Ե�ǰ�������õ���
 * �����١�
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// function prototypes
float toCelsius(float);
float toFahrenheit(float);

// function main begins program execution
int main(void)
{
    float fahrenheit, celsius;
    int line;

    printf( "%s%17s%34s%17s\n", "Celsius", "Fahrenheit", "Fahrenheit", "Celsius" );

    for (line = 0, celsius = 0, fahrenheit = 32;line <= 180;) {
        if (line <= 100) {
           printf( "%7.0f%17.1f", celsius, toFahrenheit(celsius) );
           printf( "%34.0f%17.1f", fahrenheit, toCelsius(fahrenheit) );
           puts( "" );  // line feed
           Sleep(50);  // wait for 0.02s
           celsius++;  // increment celsius
           fahrenheit++;  // increment fahrenheit
           line++;  // increment line
        }  // end if
        else {
           printf( "%7s%17s", " ", " " );
           printf( "%34.0f%17.1f", fahrenheit, toCelsius(fahrenheit) );
           puts( "" );  // line feed
           Sleep(50);  // wait for 0.02s
           fahrenheit++;  // increment fahrenheit
           line++;  // increment line
        }  // end else
    }  // end for
}  // end function main


float toCelsius(float f)
{
   float c;
   c = (f - 32) / 1.8;
   return c;
}

float toFahrenheit(float c)
{
   float f;
   f = c * 1.8 + 32;
   return f;
}
