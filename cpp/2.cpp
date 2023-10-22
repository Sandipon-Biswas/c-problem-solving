#include <bits/stdc++.h>
using namespace std;
int main()
{
string input;

    // Read a line of text from standard input (cin).
    getline(cin, input);

    // Convert the entire line to uppercase.
    transform(input.begin(), input.end(), input.begin(), ::toupper);

    // Display the converted line.
    for(int i=0;i<input.size();i++){
        if(input[i]==' '){ 
            cout<<"\n";
        }else{
            cout<<input[i];
        }
    }



}