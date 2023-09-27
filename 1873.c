#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    while(x--){
        int y;
        scanf("%d",&y);
        int a[y];
        for(int i=0;i<y;i++){
            scanf("%d",&a[i]);
        }
        int min =a[0],l=0;
        for(int i=0;i<y;i++){
            if(min>a[i]){
                min=a[i];
                l=i;
            }
        }
        a[l]=a[l]+1;
        int r=1;
        for(int i=0;i<y;i++){
            r=r*a[i];
        }
        printf("%d\n",r);
    }

    return 0;
}