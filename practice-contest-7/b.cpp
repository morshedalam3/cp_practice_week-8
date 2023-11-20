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
   int n;
   cin>>n;
   vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int firstPos = 0,lastPos = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 1){
                firstPos = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] == 1){
                lastPos = i;
                break;
            }
        }
        int count = 0;
        for(int i=firstPos; i<=lastPos; i++){
            if(a[i] == 0){
                count++;
            }
        }
        cout<<count<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}