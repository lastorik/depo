#include <stdio.h>
#include <conio.h>
main()
{
	
	int sayi;
	int top=0;
	printf("say�y� gir= ");
	scanf("%d",&sayi);
	for(int i=50;i<=200;i++)
	{
	
		if(sayi%i==0)
			top++;
	
	}
	printf("%d \a",top);
}
