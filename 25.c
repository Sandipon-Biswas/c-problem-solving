// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a;
printf("Enter a and b \n");
scanf("%d",&a);
switch(a){
    case 1: printf("january"); break;
    case 2: printf("february"); break;
    case 3 : printf("March\n"); break;
    case 4: printf("April"); break;
    case 5: printf("may"); break;
    case 6: printf("june"); break;
    case 7: printf("july"); break;
    case 8: printf("Aguest"); break;
    case 9: printf("september"); break;
    case 10: printf("Octobor"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
    default : printf("Input a number between 1 to 12.");
}
    return 0;
}