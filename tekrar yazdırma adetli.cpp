#include <stdio.h>
#include <conio.h>
main()
{
	
	char kelime[20]="";
	printf("bir kelime girin: ");
	scanf("%s",kelime);
	int tekrar=0;
	printf("tekrar sayýsý= ");
	scanf("%d",&tekrar);
	for(int i= 0 ; i < tekrar ; i++)
		printf("%s \n",kelime);
	
	getch();
}
