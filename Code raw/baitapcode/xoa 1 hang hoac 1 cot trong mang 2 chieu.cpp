#include <stdio.h>

int main()
{   
    int i,j,m,n,a[100][100],xoa,xoaHang,xoaCot;
    printf("nhap so hang: ");
    scanf("%d",&m);
    printf("nhap so cot: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("nhap du lieu cho mang:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
    	}
    }
    printf("ma tran ban da nhap la: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("nhap 1 la xoa hang nhap 0 la xoa cot: ");
    Nhap:
    scanf("%d",&xoa);
    if(xoa!=0&&xoa!=1){
        printf("nhap sai, chi nhap 0 hoac 1, moi nhap lai: ");
        goto Nhap;
    }
    else if(xoa==1){
        printf("nhap so hang can xoa: ");
        Nhap1:
        scanf("%d",&xoaHang);
        if(xoaHang<1||xoaHang>m){
        	printf("hang can xoa khong ton tai, moi nhap lai: ");
        	goto Nhap1;
		}
        if(xoaHang==m){
            for(i=0;i<m-1;i++){
                for(j=0;j<n;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        }
        else{
            for(i=xoaHang-1;i<m;i++){
                for(j=0;j<n;j++){
                    if(i==m-1) break;
                    a[i][j]=a[i+1][j];
                }
            }
            for(i=0;i<m-1;i++){
                for(j=0;j<n;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if(xoa==0){
    	printf("nhap so cot can xoa: ");
        Nhap2:
        scanf("%d",&xoaCot);
        if(xoaCot<1||xoaCot>n){
        	printf("cot can xoa khong ton tai, moi nhap lai: ");
        	goto Nhap2;
		}
        if(xoaCot==n){
            for(i=0;i<m;i++){
                for(j=0;j<n-1;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        }
        else{
            for(i=0;i<m;i++){
                for(j=xoaCot-1;j<n;j++){
                    if(j==n-1) break;
                    a[i][j]=a[i][j+1];
                }
            }
            for(i=0;i<m;i++){
                for(j=0;j<n-1;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        }
	}
    return 0;
}
