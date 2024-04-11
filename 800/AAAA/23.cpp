#include <bits/stdc++.h>

using namespace std;
bool isSquare(int x1, int y1, int x2, int y2) {
    // Calculate the differences in x and y coordinates
    int diffX = abs(x2 - x1);
    int diffY = abs(y2 - y1);
    
    // Check if the differences are equal and not both zero
    return (diffX == diffY) && (diffX != 0 || diffY != 0);
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(isSquare(a,b,c,d)){
        cout<<"yes";
    }else{
        int d = abs(c - a);
        cout<<"NO";
    }

  return 0;
}