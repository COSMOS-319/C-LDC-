/* test 3.31
 * This program was written by Fawei Liang.
 * Produced date 2/10/2020 , Northeastern University,China
 * ��Ŀ��������һ������else���⣩���޸�����Ĵ����Բ�����չʾ�������
 * ��ʹ���ʵ����������������˲��뻨�����⣬���ܽ����������ġ���������
 * ���Գ����е�������������Ĵ����У�Ϊ��ʹ���������ս�ԣ��ڴ��޳���
 * ����ע�⣺���ܲ��ø��ģ���
 *   if ( y == 8 )
 *   if ( x == 5 )
 *   puts( "@@@@@" );
 *   else
 *   puts( "#####" );
 *   puts( "$$$$$" );
 *   puts( "&&&&&" );
 *
 *   (a)����x = 5��y = 8,������������:    (b)����x = 5��y = 8,������������:
 *           @@@@@                                     @@@@@
 *           $$$$$
 *           &&&&&
 *
 *
 *   (c)����x = 5��y = 8,������������:    (c)����x = 5��y = 7,������������:
 *           @@@@@                                     #####
 *           &&&&&                                     $$$$$
 *                                                     &&&&&
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
   // (a)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 )
      if ( x == 5 )
         puts( "@@@@@" );
      else
         puts( "#####" );
   puts( "$$$$$" );
   puts( "&&&&&" );

//��������������������������������������������

  /* (b)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }  // end if
   else {
      puts( "#####" );
      puts( "$$$$$" );
      puts( "&&&&&" );
   }  // end else

   */

//��������������������������������������������

   /* (c)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }  // end if
      else{
         puts( "#####" );
         puts( "$$$$$" );
      }  // end else
   puts( "&&&&&" );

   */

//��������������������������������������������

   /* (d)

   int x = 5, y = 7;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }
      else
         puts( "#####" );
   puts( "$$$$$" );
   puts( "&&&&&" );

   */
}  // end function main

