#include <stdio.h>
#include <conio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,sayi3,sayi4,sayi5,enbuyuk;
	
	printf("birinci say�y� giriniz=");
	scanf("%d",&sayi1);
	
	printf("ikinci say�y� giriniz=");
	scanf("%d",&sayi2);
	
	printf("���nc� say�y� giriniz=");
	scanf("%d",&sayi3);
	
	printf("d�rd�nc� say�y� giriniz=");
	scanf("%d",&sayi4);
		
		printf("be�inci say�y� giriniz=");
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
	
	printf("girdi�iniz en b�y�k say� %d",enbuyuk);
	
	
	getch();	
}
