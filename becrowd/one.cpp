#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> v;
    v.push_back(100); // Declare a vector to store the user's input
     v.push_back(2); 
     v.push_back(3); 
     v.push_back(4); 
     v.push_back(5); 
     v.push_back(6); 
     v.push_back(7); 
     //v.erase(v.begin()+0,v.begin()+2);
    v.insert(v.begin()+1,5,3);
    sort(v.begin(), v.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
     }

    return 0;
}
