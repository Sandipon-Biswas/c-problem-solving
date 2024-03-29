#include <bits/stdc++.h>
using namespace std;
/**
 * insert()
 * size()
 * max_size()
 * begin, end()
 * empty()
 * erase()
 * clear()
 * find()
 * count()//0,1
 * lower_bound()
 * upper_bound()
 * emplace()
 * swap()
 * operater=
 * 
 *
 *  **/
int main()
{
    set<int, greater <int> >s;
    s.insert(6);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(6);
    set<int>::iterator it;
    set<int>::iterator it2;
    set<int>::iterator it3;
    it3=s.lower_bound(2);
    it2=s.begin();
    advance(it2,2);
    s.erase(it2);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
  cout << "hello";
  return 0;
}