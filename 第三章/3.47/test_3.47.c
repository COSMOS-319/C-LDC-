/* test 3.47
 * This program was written by Fawei Liang.
 * produced data 3/10/2020 , Northeastern University,China
 * ��Ŀ��(�������ʼ�����)�ڶ���ʱ������ʹ��һ�����ʼ������������������Ƿ������
 * ������ҽ������İ�ȫ��Χ�ڡ����������������ϻ�(American Heart Association,AHA),
 * ������ʵļ��㹫ʽ��ÿ����220�μ�ȥ������䣬�����������������������ʵ�50%��85%
 * ֮��(ע��:��Щ���㹫ʽ����AHA�ṩ�ġ����ھ���ĳ���˵�������ʺ��ڴ����ʣ��������
 * ����״�������ʺ��Ա�������仯���ڿ�ʼ��ı���Ķ����ƻ�ǰ���������ѯҽ����������
 * �ʵı�������)�����дһ�����򣬶����û������պ͵�ǰ����(����ϸ���ꡢ�¡���)��Ȼ��
 * �������ʾ�û������䣨��λ���꣩��������ʺ��������ʡ�
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    int day1, month1, year1;  // declare variables to read the date of user's birth
    int day2, month2, year2;  // declare variables to read the current date
    int age, maximumHeartRate;  // declare variables
    float expectedHeartRate1, expectedHeartRate2;  // declare variables

    printf( "%s", "Please enter the date of your birth( day month year ): " );  // prompt to input
    scanf( "%d %d %d", &day1, &month1, &year1 );  // read the date of user's birth from user

    printf( "%s", "Please enter the current date( day month year ): " );  // prompt to input
    scanf( "%d %d %d", &day2, &month2, &year2 );  // read the current date from user

    system( "cls" );  // clean up output window

    // calculate user's age
    if( month2 - month1 >= 0 && day2 - day1 >= 0 ){
       age = year2 - year1;
    }  // end if
    else{
       age = year2 - year1 - 1;
    }  // end else

    maximumHeartRate = 220 - ( year2 - year1 );  // calculate the maximum heart rate
    expectedHeartRate1 = maximumHeartRate * 0.5;  // calculate maximum expected heart rate
    expectedHeartRate2 = maximumHeartRate * 0.85;  // calculate minimum expected heart rate

    printf( "Your age is: %d\n", age );  // display user's age
    printf( "Your maximum heart rate is: %d\n", maximumHeartRate );  // display user's maximum heart rate
    printf( "Your expected heart rate is: %.0f��%.0f\n", expectedHeartRate1, expectedHeartRate2 );  // display user's expected heart rate
}  // end function main
