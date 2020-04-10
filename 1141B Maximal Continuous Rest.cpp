/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// Problem Link : http://codeforces.com/contest/1141/problem/B
// Maximal Continuous Rest

#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision
#define    nl          '\n'
#define    endl        '\n'
#define    forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    fora(i,n)   for(int (i)=0; (i) < (n); (i)++)


int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010
void dhimanda();
int main()
{
    //fast;
    //in_file;
    //out_file;
    int t=1;
    //int t=Int;
    forr(i,1,t){
        //printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
    ll n;
    cin >> n;
    bool f=0;
    ll first=0,last=0;
    ll c=0,ans=0;
    for(int i=1; i<= n ; i++) {
        int x;
        cin >> x;
        if(x==1) {
            if(f==0) first++;
            c++;
            if(i==n) last = c;
        }
        else{
            if(c>ans) ans = c;
            c=0;
            f=1;
        }
    }
    if(last+first > ans ) ans = last + first ;
    cout << ans <<endl;
}

// Contact : chessdhiman@gmail.com


