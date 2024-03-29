#include <bits/stdc++.h>
using namespace std;
/**
 1 push()

 1 front()
 1 back()
 1 pop()

 1 size()
 1 clear()
 1 empty()
 1 insert()
 1 emplace()
 1 remove(2)
 remove all 2
 1 reverse()
 1 sort()
 1 unique()
 only unique number return
 1 swap()
 1 marge()
 print method
   for(auto i:li){
        cout<<i<<endl;
    }
 * 
*/
int main()
{
    queue<int>li;
    li.push(1);
    li.push(2);
    li.push(3);
    li.push(4);
    li.push(5);
    li.push(5);
    while(li.size()>0){
        cout<<li.front()<<endl;
        li.pop();
    }
    deque<int>l={1,1,2,2,2,3,4,4,4,2,5,6,7,7,8,9,0,1,2};
    //l.remove(1);
    //l.sort();
    //l.unique();
  
  cout << "hello";
  return 0;
}