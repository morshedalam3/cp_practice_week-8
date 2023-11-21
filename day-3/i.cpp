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
     int n;
        cin>>n;
        int ar[n+3];
        int ans=0;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            int ind=0;
            for(int j=2;j<=i+1;j++)
            {
                if(ar[i]%j!=0)
                {
                    ind=1;
                    break;
                }
            }
            if(ind==0)
            {
                ans=1;
                break;
            }
        }
        if(ans==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}