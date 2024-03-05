#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int num) {
   
    if (num <= 9) {
        return num; 
    }

    int sum = 0;
    
    while (num > 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit from the number
    }

    return sum; 
}
void solve(){
    
       int r=0;
    int y;
    cin>>y;
    for(int i=1;i<=y;i++){
        r+=sumOfDigits(i);
    }
    
    cout<<r<<endl;
    
}
int main(){
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    return 0;
}