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
    int n;cin>>n;
    vector<int>a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
                
    bool same=true;
     for(int i=1;i<n;i++)
     {
        if(a[i]!=a[0])
        {
            same=false;
            break;
        }
     }
     if(same){
        cout<<-1<<"\n";
        return;
     }
      int maxFish =*max_element(a.begin(),a.end());
            for(int i=0;i<n;i++){

                if(a[i]==maxFish){
                    
                    if(i-1>=0 && a[i-1]<a[i]){
                        cout<<i+1<<endl;
                        return;
                    }
                    if(i+1<n && a[i+1]<a[i]){
                        cout<<i+1<<endl;
                        return;
                    }
                }
            }

}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}