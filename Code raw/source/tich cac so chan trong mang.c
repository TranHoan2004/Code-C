// Nhap mang, in ra tich cac so chan trong mang
int main (){
 	int a[100];
 	int i,j,n; 
 	
	printf("So luong phan tu = ");
 	scanf("%d",&n);
 	
	for (i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d:  ",i+1);
		scanf("%d",&a[i]);
	}
	 
	int sum=1;
	
	for(i=0;i<n;i++){
		if (a[i]%2==0){
			sum *= a[i];
		}
	}
	
	printf("\nTich cac so chan: %d",sum);
	
return 0;
}
