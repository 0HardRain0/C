// vending machine


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int coin;                                 

int nomi(int c);                             
int change(int c);							

int main()
{

	int morecoin;							
	int nk[5] = { 120,110,120,80 };			

	printf("**********************Vending Machine**********************\n");			
	printf("\n");
	printf("Cola[%d] Cidar[%d] Fanta[%d] Water[%d]\n", nk[0], nk[1], nk[2], nk[3]);	
	printf("Please, insert Coin or 1000¡Í\n");
	scanf_s("%d", &coin);																
	printf("***********************************************************\n");
	printf("You have %d¡Í!!!\n", coin);													
	printf("\n");
	while (1)																			
	{
		if (coin <= 79)																	
		{
			printf("I Need more coin\n");												
			printf("Please, Insert more coin\n");
			scanf_s("%d", &morecoin);
			coin += morecoin;														
		}
		else																			
		{
			break;
		}
	}
	nomi(coin);																			
	change(coin);																		

	
	return 0;
}

int nomi(int c)																			
{
	int	i;																				
	char name[5][80] = { "Cola", "Cidar", "Fanta", "Water" };							

	while (1)																			
	{
		printf("Choose Drink\n");														
		printf("1 = Cola, 2 = Cidar, 3 = Fanta, 4 = Water\n");
		scanf("%d", &i);

		if ((i == 1) && (c > 119))														
		{
			i--;																		
			printf("¡Ú¡Ú%s¡Ú¡Ú comes out of a vending machine!!\n", name[i]);			
			coin -= 120;																
			break;
		}
		else if ((i == 2) && (c > 109))													
		{
			i--;																		
			printf("¡Ú¡Ú%s¡Ú¡Ú comes out of a vending machine!!\n", name[i]);
			coin -= 110;																
			break;
		}
		else if ((i == 3) && (c > 119))													
		{
			i--;																		
			printf("¡Ú¡Ú%s¡Ú¡Ú comes out of a vending machine!!\n", name[i]);			
			coin -= 120;																
			break;
		}
		else if (i == 4)																
		{
			i--;																		
			printf("¡Ú¡Ú%s¡Ú¡Ú comes out of a vending machine!!\n", name[i]);
			coin -= 80;																	
			break;
		}
		else																			
		{
			printf("\n");
			printf("!!!!!!!!WARING!!!!!!!!\n");
			printf("Choose drink again\n");
			printf("\n");
		}
    }

	return c;																			

}

int change(int c)																		
{
	int exchange;																		
	int  cnt_500, cnt_100, cnt_50, cnt_10, cnt_1;										


	
	cnt_500 = c / 500;																	
	c = c - (500 * cnt_500);
	cnt_100 = c / 100;
	c = c - (100 * cnt_100);
	cnt_50 = c / 50;
	c = c - (50 * cnt_50);
	cnt_10 = c / 10;
	c = c - (10 * cnt_10);
	cnt_1 = c;

	exchange = (cnt_500 * 500) + (cnt_100 * 100) + (cnt_50 * 50) + (cnt_10 * 10) + (c);
	
	printf("Exchange = %d¡Í\n", exchange);												

	printf("500¡Í : %d piece, 100¡Í : %d piece, 50¡Í : %d piece, 10¡Í : %d piece, 1¡Í : %d piece\n", cnt_500, cnt_100, cnt_50, cnt_10, cnt_1);		
																						
	return c;																		
}

