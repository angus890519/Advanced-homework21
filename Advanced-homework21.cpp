/* 計算機概論實務-進階練習作業-作業21*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h> //函示庫 
#include <stdlib.h>//函示庫 

long long int factor(int);

int main(void)
{
	printf("計算機概論實務-進階練習作業-作業21\n");
    printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
	int i, input;
	float sum;
	
	printf("請輸入要計算到幾位:");
	scanf("%d", &input);
    for (i=2; i<=input; i++)
    {
       printf("1/%d!+", i); 
       sum=sum+1.0/factor(i);
    }

	printf("\b= %9.6f\n", sum);
    return 0;//回傳值 0 
}

long long int factor(int n)
{
	if (n==0 || n==1) return 1;
	else return n*factor(n-1); 
}
