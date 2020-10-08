/* test 5.34
 * This program was written by Fawei Liang.
 * Produced date 7/10/2020 , Northeastern University,China
 * ��Ŀ:(�ݹ�����)���дһ���ݹ麯��power(base, exponent)���������±��ʽ��ֵ:
 * base^exponent
 * ���磬power(3, 4)=3*3*3*3������exponent��һ�����ڻ��ߵ���1��������baseҲ��
 * ��������ʾ:�ݹ鲽�����ù�ϵ
 * base^exponent = base * base^(exponent - 1)
 * ͬʱ��ֹ����Ϊ��exponent����1������Ϊ
 * base^1 = base��
 */

#include <stdio.h>
#include <stdlib.h>

// function prototype
long int power(int base , int exponent);

// function main begins program execution
int main(void)
{
    printf( "%ld\n", power(3,4) );  // display result
}

long int power(int base , int exponent)
{
    //  base case
    if ( 1 == exponent ) {
        return base;
    }
    else {  // recursive step
        return base * power(base, exponent - 1);
    }
}
