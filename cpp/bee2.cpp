#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int x=0;
    float sum=0;
    while(x<2){
        float y;
        cin>>y;
        if(y<0||y>10){
            cout<<"nota invalida"<<endl;
        }else{
            sum=sum+y;
            x++;
        }
    }
      cout << "media = " << fixed << setprecision(2) << sum / 2 << endl;
    return 0;
}