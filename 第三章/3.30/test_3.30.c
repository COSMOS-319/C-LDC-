/* test 3.30
 * This program was written by Fawei Liang.
 * Produced date 2/10/2020 , Northeastern University,China
 * ��Ŀ��������else���⣩��ֱ�ȷ��x=9��y=1��x=11��y=9ʱ�����г���������
 * ע�⣬����������Ե�C�����е�������������ͨ����else����һ��if��������
 * ��ͨ��������{}��ָ��������ϵ������һ�ۺ���ȷ���ĸ�if���ĸ�elseƥ�䣬��
 * �Գ�Ϊ��֮Ϊ������else�����⡣������Ĵ����У�Ϊʹ���������ս�ԣ��ڴ�
 * �޳���������ʾ��ʹ��ѧϰ����������������
 *
 * (a)  if ( x < 10 )          (b) if ( x < 10 ) {
 *      if ( y < 10 )              if ( y < 10 )
 *      puts( "*****" );           puts( "*****" );
 *      else                       }
 *      puts( "#####" );           else {
 *      puts( "$$$$$" );           puts( "#####" );
 *                                 puts( "$$$$$" );
 *                                 }
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
   int x = 9, y = 1;
// int x =11, y = 9;

   // (a) when x = 9, y = 1 output "*****\n$$$$$\n"
   //     when x = 11, y =9 output "$$$$$\n"
   if ( x < 10 )
      if ( y < 10 )
         puts( "*****" );
      else
         puts( "#####" );
   puts( "$$$$$" );

//-------------------------------------------------

   /* (b) when x = 9, y = 1 output "*****\n"
          when x = 11, y =9 output "#####\n$$$$$\n"
   if ( x < 10 ) {
      if ( y < 10 )
         puts( "*****" );
   }
   else {
      puts( "#####" );
      puts( "$$$$$" );
   }
   */
}  // end function main
