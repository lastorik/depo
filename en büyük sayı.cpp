#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,sayi3,sayi4,sayi5,enbuyuk;
	
	printf("birinci sayýyý giriniz=");
	scanf("%d",&sayi1);
	
	printf("ikinci sayýyý giriniz=");
	scanf("%d",&sayi2);
	
	printf("üçüncü sayýyý giriniz=");
	scanf("%d",&sayi3);
	
	printf("dördüncü sayýyý giriniz=");
	scanf("%d",&sayi4);
		
		printf("beþinci sayýyý giriniz=");
	scanf("%d",&sayi5);
	
	enbuyuk=sayi1;
	if(sayi2>enbuyuk)
	enbuyuk=sayi2;
	if(sayi3>enbuyuk)
	enbuyuk=sayi3;
	if(sayi4>enbuyuk)
	enbuyuk=sayi4;
	if(sayi5>enbuyuk)
	enbuyuk=sayi5;
	
	printf("girdiðiniz en büyük sayý %d",enbuyuk);
	
	
	getch();	
}
