#include <stdio.h>

void array(int n){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = 0;
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
		if (a[i] > max){
			max = a[i];
		}
	}
	printf("\nMax value is: %d", max);
}

int main(){
	int x = 5;
	array(x);
	return 0;
}

