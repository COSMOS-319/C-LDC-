/* test 5.30
 * This program was written by Fawei Liang .
 * Produced date 7/10/2020 , Northeastern University,China
 * ��Ŀ:(ѧ���ɼ��ļ���)���дtoQualityPoints���������Ĺ�����:����ѧ����ƽ���ɼ���
 * ���ɼ���90��100֮�䣬����4�����ɼ���80��89֮�䣬����3�����ɼ���70��79֮�䣬
 * �򷵻�2�����ɼ���60��69֮�䣬����1�����ɼ�����60������0��
 */


#include <stdio.h>
#include <stdlib.h>

int toQualityPoints(int);  // function prototype

// function main begins program execution
int main(void)
{
    int averageGrade;
    printf( "%s", "Please enter student's average grade: " );
    scanf( "%d", &averageGrade );
    printf( "The student's quality point is: %d\n", toQualityPoints(averageGrade) );
}

int toQualityPoints(int a)
{
    int point;
    if ( a >= 90 && a <= 100 ) {
        point = 4;
    }
    if ( a >= 80 && a <= 89 ) {
        point = 3;
    }
    if ( a >= 70 && a <= 79 ) {
        point = 2;
    }
    if ( a >= 60 && a <= 69 ) {
        point = 1;
    }
    if ( a < 60 ) {
        point = 0;
    }
    return point;
}
