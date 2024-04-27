//Bài tập mảng một chiều
#include <stdio.h>
int main()
{
    int i,n,a[2004],ssc=0,ssl=0,tc=0,tl=0,tam,j,e,h,c[2004],l[2004],chan,le,find,countf=0;
    printf("nhap so phan tu mang: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("nhap tung phan tu mang: a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    fflush(stdin);
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            tc+=a[i];
            ssc++;
        }
        else {
            tl+=a[i];
            ssl++;
        }
    }
    if(ssc>0) printf("trung binh chan la %.2f\n",(float)tc/ssc);
    else printf("ko co phan tu chan\n");
    if(ssl>0) printf("trung binh le la %.2f\n",(float)tl/ssl);
    else printf("ko co phan tu le\n");
    printf("in nguoc mang: ");
    for(i=n-1;i>=0;i--){printf("%d ",a[i]);}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(a[i]>a[j]){
            tam=a[i];
            a[i]=a[j];
            a[j]=tam;
            }
        }
    }
    printf("\nsap xep giam dan: ");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);}
    h=0;
    e=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            c[h]=a[i];
            h++;
        }    
        else {
            l[e]=a[i];
            e++;
        }
    } 
	int maxh=ssc;
    if(h==0){
    	printf("\nkhong co phan tu chan.");
    	goto N;
	}
    printf("\nmang phan tu chan: ");
    for(h=0;h<maxh;h++){
        printf("%d ",c[h]);
    }
    int maxe=ssl;
    N:
    if(e==0){
    	printf("\nkhong co mang phan tu le.");
    	goto M;
	}
    printf("\nmang phan tu le: ");
    for(e=0;e<maxe;e++){printf("%d ",l[e]);}
    M:
	printf("\nnhap gia tri can tim: ");
	scanf("%d",&find);
	for(i=0;i<n;i++){
		if(find==a[i]){
			countf++;
		}
	}
	if(countf==0) printf("phan tu khong xuat hien trong mang.");
	else printf("phan tu co xuat hien trong mang va xuat hien %d lan",countf);
    return 0;
}

