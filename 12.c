#include <stdio.h>
void main()
 {
float weight1,weight2,result;
int quantity1,quantity2;
printf("Enter the item1 weight and quantity in single line :");
scanf("%f %d",&weight1,&quantity1);
printf("Enter the item2 weight and quantity in single line :");
scanf("%f %d",&weight2,&quantity2);

result=(weight1*quantity1+weight2*quantity2)/(quantity1+quantity2);
printf("The result is: %f\n", result);

}