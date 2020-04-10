/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// Problem Link : http://codeforces.com/contest/1141/A

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
    unsigned long long a,b;
    cin >> a >> b;
    vector <unsigned long long> v;
    v.clear();
    unsigned long long am = a , bm = b , rest = b/a , rm = rest;
    int c = 0;
    while(rest>0) {
        if(rest%3==0){
            rest /= 3;
            v.pb(3);
            c++;
        }
        elif(rest%2==0){
            rest /= 2 ;
            v.pb(2);
            c++;
        }
        else break;
    }
    for(int i=c-1 ; i>=0 ; i--){
            cerr<< v[i] <<" ";
        am *= v[i];
    }
    if(am == bm) cout << c <<endl;
    else cout <<"-1"<<endl;
}

// Contact : chessdhiman@gmail.com


