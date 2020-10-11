/* test 3.46
 * This program was written by Fawei Liang.
 * produced data 3/10/2020 , Northeastern University,China
 * ��Ŀ���������ϲ�ѯ��ǰ���������˿����Լ�ÿ����������˿������ʡ�дһ��
 * ������������Щ����Ȼ����ʾ�������1�ꡢ2�ꡢ3�ꡢ4�ꡢ5���������˿ڡ�
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    int year;
    long long int worldPopulation;
    float rate;  // annual growth rate of world population

    // get current world population and annual growth rate from user
    printf( "%s", "Please enter the current world population: ");  // prompt for input
    scanf( "%lld", &worldPopulation );  // read world population from user

    printf( "%s", "Please enter annual growth rate of world population( example: 0.1 ): "  );  // prompt for input
    scanf( "%f", &rate );  // read rate from user

    system( "cls" );  // clean up output window

    // population prediction
    printf( "Current world population: %lld\t", worldPopulation );  // display world population
    printf( "Annual growth rate: %f\n\n", rate );  // display annual growth rate

    for ( year = 1;year <= 5;year++ ) {  // loop while year is less than or equal to 5
       worldPopulation = worldPopulation * ( 1.0 + rate );  // calculate the projected world population
       if ( year == 1 ) {
           printf( "The population %d year from now: %lld\n", year, worldPopulation );  // display projected world population
       }  // end if
       else {
           printf( "The population %d years from now: %lld\n", year, worldPopulation );  // display projected world population
       }  // end else
    }  // end for
}  // end function main
