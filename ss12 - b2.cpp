#include <stdio.h>

void array(int n){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int x = 6;
	array(x);
	return 0;
}

