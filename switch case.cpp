#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	char harf;
	printf("l�tfen bir karakter giriniz \n");
	scanf("%c",&harf);
	switch(harf) // if(harf=='a')
	{
		case'a':
			printf("a harfine bast�n�z \n");break;
		case 'b':
			printf("b harfine bast�n�z\n");break;
		case 'c':
			printf("c harfine bast�n�z\n");break;
		default:
			printf("a,b,c ye basmad�n�z\n");break;
				
	}
	
	
	getch();	
}
