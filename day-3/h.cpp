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
    ll n; cin>>n;
		ll a[n];
        for(ll i = 0;i<n;i++){
            cin>>a[i];
        }
		ll bit[30];
          for(ll i = 0;i<30;i++)bit[i]=0;
		for(ll i=0; i<30; i++){
			ll num=(1ll<<i);
			for(ll j=0; j<n; j++){
				if((a[j]&num)!=0) bit[i]++; 
			}

		}
		for(ll k=1; k<=n; k++){
			bool ok=0;
			for(ll i=0; i<30; i++){
				if((bit[i]%k)!=0){
					ok=1;
					break;
				}
			}
			if(ok==0) cout<<k<<" ";
		}
		cout<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}