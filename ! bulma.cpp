#include <stdio.h>
#include <conio.h>
main()
{
	
	int sayi = 0;
	int sonuc = 1;
	printf("sayýyý gir= ");
	scanf("%d",&sayi);
	for(int i=sayi;i>=1;i--)
		sonuc= sonuc * i;
	printf("%d != %d \a",sayi , sonuc);
}
