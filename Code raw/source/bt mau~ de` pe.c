////bt1: x, y double, tinh bieu thuc ((x*x)+(y*y))/2
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main() {
//system("cls");
////INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//double x, y, i, j;
//scanf("%lf", &x);
//scanf("%lf", &y);
//	i= x*x;
//	j= y*y;
//	//result= (i+j)/2;
//
//
//// Fixed Do not edit anything here.
//printf("\nOUTPUT:\n");
////@STUDENT: WRITE YOUR OUTPUT HERE:
//printf("%0.2lf",(i+j)/2);
//
////--FIXED PART - DO NOT EDIT ANY THINGS HERE
//printf("\n");
//system("pause");
//return(0);
//}

//bt2:doi he 10 ->8, 10 -> 16

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main() {
//system("cls");
////INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//
//int n;
//scanf("%d",&n);
//
//// Fixed Do not edit anything here.
//printf("\nOUTPUT:\n");
////@STUDENT: WRITE YOUR OUTPUT HERE:
//printf("%o\n",n);
//printf("%x",n);
//
////--FIXED PART - DO NOT EDIT ANY THINGS HERE
//printf("\n");
//system("pause");
//return(0);
//}

//bt: nhap vao day nhi phan bat ki roi no se dao nguoc day so. VD 011 --> 110

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//int Length(char s[])
//{
//    int i = 0;
//    while (s[i] != NULL)
//        ++i;
//    return i - 1;
//}
// 
// 
//void InDaoNguoc(char str[]){
//    int length = Length(str);
//	int i;
//    for ( i = length - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//}
//
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//
//
//    char s[100];
//    fgets(s, 100, stdin); // nên dùng hàm fgets
//  
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//
//
//    
//    InDaoNguoc(s);
//
//
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}

//Tong binh phuong cac so le trong day

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//  int a[100],n,i,s;
//  scanf("%d",&n);
//  for(i=0;i<n;i++) scanf("%d",&a[i]);
//  s = 0;
//  for(i=0;i<n;i++)
//    if(a[i]%2==1) s += a[i]*a[i];
//  
//  
//  
//  
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//  printf("%d",s);
//
//
//
//
//
//
//
//  
//  
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}




