#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2;
	printf("birinci say�y� giriniz=");
	scanf("%d",&sayi1);
	
	printf("ikinci say�y� giriniz=");
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2)
		printf("birinci say� ikinci say�dan k���kt�r");
		
	if(sayi2>sayi1)
		printf("ikinci say� birinci say�dan b�y�kt�r");
		
	else
		printf("say�lar e�ittir");	
	
	getch();	
}
