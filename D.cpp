
#include <iostream> 
#include <set> 
#include<stdio.h>
#include<vector>
#define vi vector < int >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define foreach(it,v) for( __typeof((v).begin())it = (v).begin() ; it != (v).end() ; it++ )
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()
#define BLK 340
using namespace std;
int main()
{
    ll n,t,l1,h1,l2,x,h2;
    cin>>n;
    vector<int> arr1(n,0);
    vector<int> arr2(n,0);
    set<ll> sss;
     
    for(ll i=0;i<n;i++){
        cin>>arr1[i];
        sss.insert(arr1[i]);
    }
    for(ll i=0;i<n;i++){
        cin>>arr2[i];
        sss.insert(arr2[i]);
        
    }
    // cout<<sss.size();
    // for(auto y:sss)
    // {
    //     cout<<y<<" ";
    // }
    set <ll> s;
    
    cin>>x;
    for(ll t=0;t<x;t++)
    {
        cin>>l1;l1-=1;
        cin>>h1;h1-=1;cin>>l2;l2-=1;cin>>h2;h2-=1;
        
        for(int i=l1;i<=h1;i++)
            s.insert(arr1[i]);
        for(int i=l2;i<=h2;i++)
            s.insert(arr2[i]);
        // cout<<s.size()<<endl;
        // for(auto i:s)
        //  cout<<" "<<i;
        cout<<sss.size()-s.size()<<endl;
        s.clear();
    }
    return 0;
}
