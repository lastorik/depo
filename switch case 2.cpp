#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0;
	printf("haftan�n g�n say�lar�n� giriniz= ");
	scanf("%d",&sayi);
	switch (sayi) //if(sayi==1)
	{
		case 1:
			printf("pazartesi");break;
		case 2:
			printf("sal�");break;
		case 3:
			printf("�ar�amba");break;
		case 4:
			printf("per�embe");break;
		case 5:
			printf("cuma");break;
		case 6:
			printf("cumartesi");break;
		case 7:
			printf("pazar");break;
	}
	
	
	getch();	
}
