#include<stdio.h>

int main()
{
	int luaChon;
	printf ("\nList: \n1. Tich hai so nguyen\n2. Tong 2 so nguyen"
	"\n3. Hieu 2 so nguyen\n4. Thuong 2 so nguyen\n5. Chia lay du hai so nguyen\n0. Khong thuc hien phep tinh nao\nBan chon?\n");
	scanf ("%d", &luaChon);
	
	switch (luaChon){
	    case 0: break;
		
		case 1:{
			int a, b;
			printf ("a=");
			scanf ("%d", &a);
			printf ("b=");
			scanf ("%d", &b);		
			printf ("\n%d*%d=%d", a, b, a*b);
		    scanf ("%d%d", &a, &b, a*b);
		    break;
		}  
		
		case 2:{
		    int a, b;
			printf ("a=");
			scanf ("%d", &a);
			printf ("b=");
			scanf ("%d", &b);		
			printf ("\n%d+%d=%d", a, b, a+b);
		    scanf ("%d%d", &a, &b, a+b);
		    break;
		}
		
		case 3:{
		    int a, b;
			printf ("a=");
			scanf ("%d", &a);
			printf ("b=");
			scanf ("%d", &b);		
			printf ("\n%d-%d=%d", a, b, a-b);
		    scanf ("%d%d", &a, &b, a-b);
		    break;
		}
		
		case 4:{
			int a, b;
			printf ("a=");
			scanf ("%d", &a);
			printf ("b=");
			scanf ("%d", &b);		
			printf ("\n%d/%d=%d", a, b, a/b);
		    scanf ("%d%d", &a, &b, a/b);
		    break;
		}
		
		case 5:{
		    int a, b;
			printf ("a=");
			scanf ("%d", &a);
			printf ("b=");
			scanf ("%d", &b);		
			printf ("\n%d %% %d = %d", a, b, a % b);
		    scanf ("%d%d%d", &a, &b, a % b);
		    break;
		}
	}
	return 0;
}

