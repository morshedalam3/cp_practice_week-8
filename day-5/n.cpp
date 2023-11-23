/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
problem link: 
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
int occ[26];
 
void doit(){
        ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll>mpp;
    vector<ll>a,b;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
        if(mpp[arr[i]]>1&&arr[i]<=n)
        {
            a.PB(arr[i]);
        }
        else if(arr[i]>n)
        {
            a.PB(arr[i]);
        }
    }
    sort(a.begin(),a.end());
    ll aa=a.size();
    reverse(a.begin(),a.end());
    for(int i = 0;i<n;i++)
    {
        if(mpp[i+1]==0)
        {
            ll z=a.back();
            a.pop_back();
            ll y=i+1;
            if(z%(z-y)==y)
            {
                continue;
            }
            else
            {
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    cout<<aa<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}