/// Coded by Dhiman Sarker Bappi (Dhimanda)
// Problem Link : http://codeforces.com/contest/1328/problem/B

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >>k;
        ll all  = (n*(n-1))/2;
        ll range = (k*(k+1))/2;
        ll b = floor((sqrt(1+(8*k))-1)/2.0);
        b++;
        ll e = ceil((sqrt(1+(8*k))-1)/2.0);
        e++;
 
        ll rB = (b*(b-1))/2;
        //rB++;
        ll rE = (e*(e-1))/2;
//       cout << rB << " " << k <<" " << rE <<endl ;
       int pos1 = k - rB;
       int pos2 = (rE-k)+pos1+1;
       if(pos1==0) {pos1=b;pos2=pos1-1;}
       //cout<< "pos1= "<<pos1<<" pos2="<<pos2<<" b="<<b<<endl;
      //  cout << all  - range ;
 
        if (all == k) {
                cout<<"bb";
                for(int i=3; i <= n ; i++) cout <<'a';
                cout<<endl;
        }
        else if(k==1) {
            for(int i=1; i <= n-2 ; i++) cout <<'a';
            cout<<"bb"<<endl;
        }
        else{
            string ans="";
            for(int i=1 ; i<= n ; i++){
                if(i==pos1 || i==pos2) ans += 'b';
                else ans += 'a';
            }
            reverse(ans.begin() , ans.end());
            cout<<ans<<endl;
        }
 
    }
}
