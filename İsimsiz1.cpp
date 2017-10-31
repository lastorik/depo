#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2;
	printf("birinci sayýyý giriniz=");
	scanf("%d",&sayi1);
	
	printf("ikinci sayýyý giriniz=");
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2)
		printf("birinci sayý ikinci sayýdan küçüktür");
		
	if(sayi2>sayi1)
		printf("ikinci sayý birinci sayýdan büyüktür");
		
	else
		printf("sayýlar eþittir");	
	
	getch();	
}
