/*
---In order to output Chinese in the console normally, the code of this program is GB2312---
---If it does not display correctly in the editor, please change the code to GB2312---
---Ϊ���������ڿ���̨��������ģ�������ı���ΪGB2312---
---����ڱ༭������ʾ����ȷ���뽫�������ΪGB2312---

This program was written by Haoyu Zhang
Produced date 11/23/2019, Northeastern University,China

5.27���޸ĵ���������Ϸ��
�޸��������Craps˫������Ϸ�������ע���ƣ���ʼӵ��1000��Ԫ��ÿ�ֵĶ�ע������������룬
��ÿ�ֽ������ʵ��Ĵ�ӡһЩ��ʾ����������Ϸ��Ȥζ��

��ԭ��Ŀ���������������޸ģ�������һ��С�˵���ʹ�û���һ��ʼ����ѡ������ͨ��Ļ��߶�ע���craps��Ϸ
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int zhuangtai = 0;//zhuangtaiȫ�ֱ�������ÿ�ֵ���Ӯ״̬����0��1��ʾ������ֵ��craps1�����޸�
enum Status
{
    CONTINUE,
    WON,
    LOST
};
enum Status gamestatus;
//check����ͨ�������״̬��ӯ��ֵ��ʣ��ֵ���ʵ��ش�ӡһЩ��ʾ��
void check(int stat, int money, int bank)
{
    if (stat == 1)
    {
        if (money >= 200 && money < 500)
        {
            puts("��������׬��һ��Ŷ��");
        }
        if (money >= 500)
        {
            puts("wow~����׬һ�ʰ���");
        }
    }
    else
    {
        if (bank <= 200)
        {
            puts("Ŷ�����Ҫ�Ʋ��ˣ���");
        }
        if (money >= 200 && money < 500)
        {
            puts("��Ҫ���ģ����л��ᣡ");
        }
        if (money >= 500)
        {
            puts("��Ҫ���٣�ʤ���˱��ҳ��£�");
        }
    }
}

int rollDice() //������������ӣ����ѽ����ʾ����
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    Sleep(300); //����ͣ��Ч�������Ӵ̼��У���ǿ��Ϸ���飡
    printf("���������Ľ��Ϊ��%d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}
void craps1()//�����������Ӻ���
{
    int mypoint;
    int sum = rollDice();
    switch (sum)
    {
    case 7:
    case 11:
        gamestatus = WON; //����7��11ֱ����Ӯ
        break;
    case 2:
    case 3:
    case 12:
        gamestatus = LOST; //����2��3��12ֱ������
        break;
    default: //�������
        gamestatus = CONTINUE;
        mypoint = sum;                  //�������ĵ�����ΪĿ��
        printf("����Ϊ %d\n", mypoint); //��ʾ�����ĵ���
        break;
    }
    while (gamestatus == CONTINUE)
    {
        sum = rollDice();   //����Ͷ������
        if (sum == mypoint) //������Ϊmypoint��Ӯ
        {
            gamestatus = WON;
        }
        else if (sum == 7)
            gamestatus = LOST; //����7������
    }
    if (gamestatus == WON)
    {
        puts("\n��ϲ����Ӯ�ˣ���");
        zhuangtai = 1;
    }
    else
    {
        puts("\n�ܲ��ң������ˣ�");
        zhuangtai = 0;
    }
}
void craps2()//����Ǽ��˶�ע���Ƶ�craps��Ϸ
{
    int wager;
    int bank = 1000;
    puts("���Ǯ������������$1000Ŷ���¸���ע�ɣ�����ֻ֧������Ŷ�������С���ᱻ����Ŷ��");
    while (1)
    {
        scanf("%d", &wager);
        fflush(stdin);
        if (wager <= 0)
            puts("��עӦ�����ڵ���0������������");
        else if (wager > bank)
            puts("emm������û����ô��Ǯ�������������룡");
        else
        {
            craps1();
            if (zhuangtai == 1)
            {
                bank = bank + wager;
                check(1, wager, bank);
                printf("�������Ǯ��������$%d�ˣ�", bank);
                printf("\n����һ�Σ���ע�ɣ�");
            }
            else if (zhuangtai == 0)
            {
                bank = bank - wager;
                if (bank <= 0)
                {
                    puts("�Բ������Ѿ��Ʋ��ˡ���");
                    break;
                }
                else
                {
                    check(0, wager, bank);
                    printf("�������Ǯ�����滹��$%d��", bank);
                    printf("\n����һ�Σ���ע�ɣ�");
                }
            }
        }
    }
}

int main()
{
    char set;
    srand(time(NULL));
    puts("��ӭ����Craps��Ϸ��");
    puts("�����������ͨ��Craps��Ϸ��������1");
    puts("�����������¶�ע�ĵ�Craps��Ϸ��������2");

    while (1) //����Ϸ��жϺ���ת
    {
        scanf("%c", &set);
        fflush(stdin); //���������������س�����һЩ����Ԥ�ϵĺ��
        if (set == '1')
        {
            puts("��Ϸ��ʼ!");
            craps1();
            break;
        }
        else if (set == '2')
        {
            puts("��Ϸ��ʼ!");
            craps2();
            break;
        }
        else
        {
            puts("������ļȲ���1Ҳ����2Ŷ��������һ�Σ�");
        }
    }
    system("pause");
    return 0;
}