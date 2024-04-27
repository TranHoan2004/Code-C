#include <stdio.h>
#include <stdlib.h>
#include "songuyento.h"

int songuyento(int a){
	int i, result;
	for (i=2; i<=a/2; i++){
		if (a%i==0) return 0;
	}
	return 1;
}
