#include <bits/stdc++.h>
using namespace std;
/**
 1 push_back()
 1 push_front()
 1 front()
 1 back()
 1 pop_front()
 1 pop_back()
 1 size()
 1 clear()
 1 empty()
 1 insert()
 1 erase()
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
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_front(5);
    // list<int>::iterator it;
    // for (it=li.begin();it!=li.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    // for(auto i:li){
    //     cout<<i<<endl;
    // }
    list<int>l={1,1,2,2,2,3,4,4,4,2,5,6,7,7,8,9,0,1,2};
    //l.remove(1);
    //l.sort();
    //l.unique();
    l.merge(li);
    for(auto i:l){
        cout<<i<<endl;
    }
  cout << "hello";
  return 0;
}