/* test 5.30
 * This program was written by Fawei Liang .
 * Produced date 7/10/2020 , Northeastern University,China
 * ��Ŀ:(Ͷ��Ӳ��)���дһ��������ģ��Ͷ��Ӳ�ҡ�����ÿһ��Ͷ�������򽫴����Heads��(����)
 * ��Tails��(����)���ó���ģ��Ͷ��Ӳ��100�Σ���ͳ��Ӳ��ÿһ����ֵĴ���������ӡ�������
 * �ó��򽫵���һ�������ĺ���flip�������������Ҫ����ʵ�Σ�����0��ʾ���棬1��ʾ���棨ע��
 * ��������ܹ���ʵģ��Ӳ��Ͷ������ôÿһ����ֵĴ��������Ƶ���Ͷ��������һ�룬���ڱ���
 * ���ԣ������50�����棬50�η��棩��
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int flip();  // function prototype

// function main begins program execution
int main(void)
{
   int counter = 1, heads = 0, tails = 0;

   // randomize random number generator using current time
   srand( time(NULL) );

   for (;counter <= 100;counter++ ) {
      if ( flip() == 1 ) {
         Sleep(20);  // wait for 0.02s
         puts( "Heads" );
         heads++;  // increment heads
      }  // end if
      else {
         Sleep(20);  // wait for 0.02s
         puts( "Tails" );
         tails++;  // increment tails
      }  // end else
   }  // end for

   // display result
   system( "cls" );  // clean up output window
   printf( "%4s%13s\n", "Face", "Frequency" );
   printf( "%5s%12d\n", "heads", heads );
   printf( "%5s%12d\n", "tails", tails );

}

int flip()
{
   int n;
   n = rand() % 2;
   return n;
}
