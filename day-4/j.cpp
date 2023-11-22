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
        ll arr[n],b[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<n;i++)
            cin>>b[i];
        sort(arr,arr+n);
        sort(b,b+n);
        bool check=true;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==b[i]-1 || arr[i]==b[i])
                continue;
            else
            {
                check=false;
                break;
            }
        }
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}