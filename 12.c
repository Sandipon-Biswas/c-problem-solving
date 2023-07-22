#include <stdio.h>
void main()
 {
int a,b,c;
printf("Enter three intiger number: ");
scanf("%d%d%d",&a,&b,&c);
(a>b && a>c)?printf("the larges number is b %d",a) : (b>a&&b>c) ?printf("the larges number is b %d",b):printf("the largest number is c%d",c);

}
