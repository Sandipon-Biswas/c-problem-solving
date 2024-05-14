#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// 
#define sandipon 1

//S pee d
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Sandipon cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;



//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

//Debug
#ifdef sandipon
#define dd(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}




//Sorting

//Bits

//Check

//Code by sandipon
//Language C++
//Practice->Success

//Code
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll r=0;
    if((b/2)>=a){
        r=a*n;
    }else{
        r=(n/2)*b;
        if(n%2!=0){
            r+=a;
        }
    }
   cout<<r<<endl;
}
//Main
int main()
{
Code By Sandipon
//  int n;
//  cin>>n;
//  vll v(n);
//  cin>>v;
//  cout<<v; 
//  cout<<sumvec(v);
 



    
    ll t;
    cin>>t;
    fl(i,t)
    {
        solve();
    }
    // asquare();
    // fl(i,t) //Kickstart
    // {
    //     cout<<"Case #"<<i+1<<": ";
    //     asquare();
    //     cout<<"\n";
    // }
    return 0;
}
//End