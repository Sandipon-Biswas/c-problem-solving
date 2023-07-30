#include <stdio.h>
int main() {
		
	int x, y, temp, i, sum=0;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);	
	if(x > y) {
		temp = y;
		y = x;
		x = temp;
	}
	
	for(i = x; i <= y; i++) {
		if((i % 17) != 0) {
			sum += i;
		}
	}
	
	printf("\nSum: %d\n", sum);
	
	return 0;
}