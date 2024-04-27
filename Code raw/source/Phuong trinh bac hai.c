#include<stdio.h>
#include<math.h>

main()
{
	float a, b, c, d, x1, x2, x;
	printf ("Ham so co dang f(x) = ax^2 + bx + c");
	printf ("\nNhap a=");
	scanf ("%f", &a);
	printf ("\nNhap b=");
	scanf ("%f", &b);
	printf ("\nNhap c=");
	scanf ("%f", &c);
	
	if (a==0) {
		 printf ("x=(-c)/b\n");
	   scanf ("%0.2f", x);
	}
	  
	else {
		d = b*b - 4*a*c;
		x = (-b)/(2*a);
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
		
		if (d<0)
		printf ("Phuong trinh vo nghiem\n");
		else if (d==0)
		printf ("x=%0.2f\n", x);
		else
		printf ("x1=%0.2f & x2=%f\n", x1, x2);
	}
	return 0;
}

