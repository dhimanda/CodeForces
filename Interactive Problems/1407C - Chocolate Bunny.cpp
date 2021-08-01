// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// 
// Today 02/08/2021 Bangladesh Standard Time  02:45:40 am 
// ---------------------  Problem Info  ---------------------
// Problem: C. Chocolate Bunny
// Contest: Codeforces - Codeforces Round #669 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1407/C
// ----------------------------------------------------------


/*
	(c) copyright : dhimanda
*/
 
#include<bits/stdc++.h>
using namespace std;
#define    	F           first
#define    	S           second
#define    	pb          push_back
#define    	popb        pop_back
#define    	pf          push_front
#define    	popf        pop_front
#define    	forr(i,l,r) for(int i = int(l); i <= int(r); i++)
#define    	for0(i,n)   for(int i = 0; i < int(n); i++)
#define    	lcm(a,b)    (a*b)/gcd(a,b)
#define    	gcd(a,b)    _gcd(a,b)
#define    	pi          2*acos(0)
#define    	elif        else if
#define    	ll          long long
#define    	nl          '\n'
#define    	endl        '\n'
#define    	sp          fixed << setprecision
#define    	all(x)      x.begin(),x.end()
#define    	power(n,p)  pow_mod(n, p, (1LL<<62))
#define	   	mset0(x)    memset(x, 0, sizeof x);
#define    	mset1(x)    memset(x, -1, sizeof x);
#define    	yes         printf("YES\n")
#define    	no         	printf("NO\n")
#define     dbg(arr)    cerr <<"##->> " <<  (#arr) << " = [ " ;  for(int i=0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++) cerr << arr[i] << " " ;  cerr << "]\n" 

 
// ===================== DEBUG  ==========================
#ifndef ONLINE_JUDGE
template<typename T>void showSTL(T H);template<typename T,typename V>void showSTL(pair<T,V> H);
template<typename T>void showSTL(priority_queue<T> H);template<typename T>void showSTL(stack<T> H);
template<typename T,typename V>void showSTL(map<T,V> H);
template<typename T,typename V>void showSTL(multimap<T,V> H);template<typename T>void showSTL(vector<T> H);
template<typename T>void showSTL(set<T> H);template<typename T>void showSTL(multiset<T> H);
template<typename T>void showSTL(list<T> H);void showSTL(char *H);
template<typename T>void showSTL(deque<T> H);template<typename T>void showSTL(queue<T> H);
template<typename T>void showSTL(T H){stringstream ss;ss<<H;cerr<<ss.str();}
template<typename T,typename V>void showSTL(pair<T,V> H){cerr<<"(";showSTL(H.first);cerr<<"=>";showSTL(H.second);cerr<<")";}
template<typename T>void showSTL(priority_queue<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}cerr<<endl;}
template<typename T>void showSTL(stack<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}}
template<typename T,typename V>void showSTL(map<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T,typename V>void showSTL(multimap<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T>void showSTL(vector<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(set<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(multiset<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(list<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
void showSTL(char *H){for(int i=0;i<strlen(H);i++){showSTL(H[i]);};}
template<typename T>void showSTL(deque<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(queue<T> H){cerr<<"[ ";while(!H.empty()){showSTL(H.front());cerr<<' ';H.pop();}cerr<<"]";}
vector<string>vec_spltr(string s){s+=',';vector<string>res;while(!s.empty())
res.push_back(s.substr(0, s.find(','))),s=s.substr(s.find(',')+1);return res;}
void dbg_out(vector<string>__attribute__((unused))args,__attribute__((unused))int idx,__attribute__((unused))int LINE_NUM)
{cerr<<endl;}template<typename Head,typename... Tail>
void dbg_out ( vector <string> args, int idx, int LINE_NUM, Head H, Tail... T)
{if(idx>0)cerr<<", ";else cerr << "Line(" << LINE_NUM << "):";
cerr<<" "<<args[idx]<<" = ";showSTL(H);dbg_out(args,idx+1,LINE_NUM, T...);}
#define    	debug(...)  dbg_out(vec_spltr(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#define	   	in_file     freopen("input.c", "r", stdin)
#define    	out_file    freopen("output.c", "w", stdout)
#define    	fast        0
#else
#define	   	debug(...)  0
#define    	in_file     0
#define    	out_file    0
#define    	fast        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#endif
// ===================== custom function ==========================
ll pow_mod(ll nn, ll pp, ll mm) { ll res = 1; while(pp > 0) { if(pp&1) res = (res * nn) % mm; pp = pp >> 1; nn = (nn * nn) % mm; } return res; }
ll _gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
void dhimanda();
// ===================== Main function ==========================
int main(){
    int t=1;
    //scanf("%d" , &t);
    forr(i,1,t){
        //printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
int n ;
int l=1 , r = 2 ; 

int ans[10005] ; 
int nextL(int x){
	++x ; 
	for(int i=x ; i <= n ; i++){
		if(ans[i]==0){
			if(i==r) {
				continue ;  
			} 
			return i ; 
		}
	}
	return n ; 
}
int nextR(int x){
	++x ; 
	for(int i=x ; i <= n ; i++){
		if(ans[i]==0){
			if(i==l) {
				continue ;  
			} 
			return i ; 
		}
	}
	return n ; 
}
void dhimanda(){
	cin >> n ; 
	if(n==1){
		cout << "! 1" << endl ; 
		return ; 
	} 
	for(int i=1 ; i <= n ; i++) {
		debug(i) ; 
		if(l==r) {
			if(l==n) break ;
			else r++ ; 
		} 
		cout << "? " << l << ' ' << r << endl ; 
		int x  ; cin >> x ; 
		cout << "? " << r << ' ' << l << endl ; 
		int y  ; cin >> y ; 
		if(x==0){ 
			ans[r] = y ; 
			r = nextR(r) ; 
		}
		else if(y==0){ 
			ans[l] = x ; 
			l = nextL(l) ;  
			}
		else{
			int val = max(x,y); 
			if(x>y) {
				ans[l] = val ; 
				l = nextL(l) ;  
			}
			else {
				ans[r] = val ; 
				r = nextR(r) ; 
			} 
		}
	}
	int sum = (n*(n+1))/2 ;  
	int idx = 0 ; 
	forr(i,1,n){
		if(ans[i]==0) idx = i ; 
		sum -= ans[i] ; 
	} 
	ans[idx] = sum ; 
	printf("! ");
	forr(i,1,n) cout << ans[i] << " " ; printf("\n");
}
 










// Contact : chessdhiman@gmail.com 

