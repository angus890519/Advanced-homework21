/* �p������׹��-�i���m�ߧ@�~-�@�~21*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h> //��ܮw 
#include <stdlib.h>//��ܮw 

long long int factor(int);

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~21\n");
    printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
	int i, input;
	float sum;
	
	printf("�п�J�n�p���X��:");
	scanf("%d", &input);
    for (i=2; i<=input; i++)
    {
       printf("1/%d!+", i); 
       sum=sum+1.0/factor(i);
    }

	printf("\b= %9.6f\n", sum);
    return 0;//�^�ǭ� 0 
}

long long int factor(int n)
{
	if (n==0 || n==1) return 1;
	else return n*factor(n-1); 
}
