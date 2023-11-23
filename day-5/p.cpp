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
        ll ans;
        ll ar[n];
        ll mx=1;
        map<ll,ll>mp;
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            st.insert(ar[i]);
            mp[ar[i]]++;
            mx=max(mx,mp[ar[i]]);
 
        }
        ans=1e18;
        vector<ll> v;
        for(ll j:st)
        {
            v.PB(mp[j]);
        }
        sort(v.begin(),v.end());
 
        ll m=v.size();
        ll pre[m];
        pre[0]=v[0];
        for(ll i=1; i<m; i++)
        {
            pre[i]=v[i]+pre[i-1];
        }
 
        for(ll i=0; i<=mx; i++)
        {
            ll cnt=0;
            ll z=lower_bound(v.begin(),v.end(),i)-v.begin();
            ll tot=pre[m-1];
            if(z>0)
            {
                cnt+=pre[z-1];
                tot-=pre[z-1];
            }
 
            ll l=z,r=m-1;
            cnt+=tot-((r-l+1)*i);
 
            ans=min(ans,cnt);
        }
        cout<<ans<<endl; 
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}