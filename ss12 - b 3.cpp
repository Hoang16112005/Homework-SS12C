#include <stdio.h>

int factorial(int n){
	int fact = 1;
    for (int i = 1; i <= n; i++){
    	fact *= i;
	}
	return fact; 
}

int main(){
	int x = 5;
	int giaiThua = factorial(x);
	printf("%d", giaiThua);
}
