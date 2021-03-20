#include <stdio.h>

void is_prime(int);

int main(void)
{
	//소수 판별 프로그램 만들기------1단계 20분
	//2부터 n까지의 약수의 개수 찾기-2단계 10분
	int input1;
	printf("원하는 자연수를 하나 입력하세요:");
	scanf_s("%d", &input1);

	is_prime(input1);

	


	return 0;
}

void is_prime(int prime)
//소수는 자기 자신과 1으로만 나누어지는 수 이다.
{
	int i, rprime;
	int array[50] = { 0 };
	if (prime > 0)
	{
		for (i = 1; i <= prime; i++)
		{
			
			
			if (prime % i == 0)
			{
				array[i - 1] = i;
				//printf("입력한 자연수는 소수가 아닙니다.");
				
			}
			
		}
		printf("\n");
		printf("압력한 자연수의 2부터 입력한 자연수%d까지의 약수는 ",prime);
		for (int k = 0; k < prime; k++)
		{
			if (array[k] > 0)
				printf("%d ", array[k]);
		}
		printf("가 있습니다.");
		//rprime = i;

		//if (i == prime)
			//printf("입력한 자연수%d는 소수입니다.\n",rprime);
	}


}