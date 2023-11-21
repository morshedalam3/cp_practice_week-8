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
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
int occ[26];
 
void doit(){
    ll n,x;
        cin>>n>>x;
        ll arr[n],temp[n];
        ll prev=INT_MIN;
        bool ascending=true;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<prev)
                ascending=false;
            prev=arr[i];
            temp[i]=arr[i];
        }
        sort(temp,temp+n);
        if(ascending)
        {
            cout<<"YES"<<endl;
            return;
        }
        bool halwa=true;
        for(ll i=0;i<n;i++)
        {
            if((i+1+x)>n && (i+1-x)<=0)
            {
                if(arr[i]!=temp[i]){
                    halwa=false;
                    break;
                }
            }
        }
        if(halwa)
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


