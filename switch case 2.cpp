#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0;
	printf("haftanýn gün sayýlarýný giriniz= ");
	scanf("%d",&sayi);
	switch (sayi) //if(sayi==1)
	{
		case 1:
			printf("pazartesi");break;
		case 2:
			printf("salý");break;
		case 3:
			printf("çarþamba");break;
		case 4:
			printf("perþembe");break;
		case 5:
			printf("cuma");break;
		case 6:
			printf("cumartesi");break;
		case 7:
			printf("pazar");break;
	}
	
	
	getch();	
}
