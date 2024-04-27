#include<stdio.h>

int main()
{
	char A, B, C, D, kq;
	printf ("Con nguoi co may chan");
    printf ("\nA.1\nB.2\nC.3\nD.4");
    printf("\nkq:");
	kq = getchar();
	switch (kq){
		case 'A':
		case 'C':
		case 'D':{
			printf ("\nBan da chon sai");
		    break;
		}
		
		
	    case 'B':{
		    printf ("\aXin chuc mung, ban da chon dung");
		    break;
	}
	    default:
	    	printf ("dap an ban chon khong phu hop");
}
     return 0;
}

