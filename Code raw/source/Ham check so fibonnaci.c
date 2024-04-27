int check(int x){
    int n1=1, n2=0, val1, val2;
    while(n1<x){
    	val1=n1+n2;
    	n2=val1;
    	val2=n1+n2;
    	n1=val2;
    	if(val1==x||val2==x) return 1;
	}
	return 0;
}
