/* test 2.27
 * This program was written by Fawei Liang.
 * Produced date 1/10/2020 , Northeastern University,China
 * ��Ŀ������*�Ŵ�ӡ�����������̣���8��printf�����ʾ��������
 * ����ͼ����Ȼ����ʹ�þ������ٵ�printf���ﵽͬ��Ч����
 *
 *    * * * * * * * *
 *   * * * * * * * *
 *    * * * * * * * *
 *   * * * * * * * *
 *    * * * * * * * *
 *   * * * * * * * *
 *    * * * * * * * *
 *   * * * * * * * *
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    printf( " * * * * * * * *\n" );
    printf( "  * * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "  * * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "  * * * * * * * *\n" );
    printf( " * * * * * * * *\n" );
    printf( "  * * * * * * * *\n" );
} // end function main



// else

/*

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int n; // declare variable

   for ( n = 1 ; n <= 8 ; n++ ) {  // loop while n less than or equal to 8
      if( n % 2 != 0 ){
         printf( "  * * * * * * * *\n" );
      } // end if

      else{
         printf( "   * * * * * * * *\n" );
      } // end else
   }  // end for
}  // end function main



*/




/*

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
  int line , asterisk;  // declare variables
      for ( line = 1 ; line <= 8 ; ){
         if ( line  % 2 == 0 ){
            printf( " " );
            Sleep(100);  // wait for 0.1s
         }  // end if

         asterisk = 1;  // intialize the number of asterisk

         while ( asterisk <= 8 ){
            printf( " *" );
            asterisk ++;  // increment asterisk
            Sleep(100);  // wait for 0.1s
         }  // end while

         line ++;  // increment line
         Sleep(100);  // wait for 0.1s
         puts( "" );  // line feed

      }  // end for
}  // end function main

*/
