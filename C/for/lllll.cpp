#include<stdio.h>
main()
{
	int m;
	int y;
	
	printf("enter m,y");
	scanf("%d%d",&m,&y);
	switch(m)
	{
		case 1 :   printf("31 days");
		           break;
		if(y%4==0)
		case 2:    printf("29 days");
		else
		case 2: printf("28 days");
		           break;
	     case 3:printf("31 days");
	     break;
	     case 4:printf("30 days");
	     break;
	     case 5:printf("31 days");
	     break;
	     case 6:printf("30 days");
	     break;
	     case 7:printf("31 days");
	     break;
	     case 8:printf("31 days");
	     break;
	     case 9:printf("30 days");
	     break;
	     case 10:printf("31 days");
	     break;
	     case 11:printf("30 days");
	     break;
         case 12:printf("31 days");
         break;
        defalt :print("normal year");
 }
}

