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
void dhimanda(){
	int a[7] = {0,4, 8, 15, 16, 23, 42} ; 
	std::map<int, pair <int,int> > map; map.clear() ; 
	forr(i,1,6){
		forr(j,1,6){
			//cout <<a[i]<< " x " << a[j] << " = " << a[i]*a[j] << endl ; 
			if(i!=j)map[a[i]*a[j]] = {a[i],a[j]} ; 
		}
	}
	int ans[7] ; 
	mset0(ans); 
	cout << "? 1 2" << endl ;
	int x ; 
	cin >> x ; 
	int gun[10] ; 
	gun[0] = x ; 
	int tmp[4] ; 
	tmp[0] = map[x].F ; 
	tmp[1] = map[x].S ;
	cout << "? 2 3" << endl ;
	cin >> x ; 
	gun[1] = x ; 
	tmp[2] = map[x].F ; 
	tmp[3] = map[x].S ; 
	std::map<int, int> lula; lula.clear() ; 
	for0(i,4) lula[tmp[i]]++ ; 
	for(auto &i:lula){
		if(i.S==2) ans[2] = i.F ; 
	}
	ans[1] = gun[0]/ans[2] ; 
	ans[3] = gun[1]/ans[2] ; 
	cout << "? 3 4" << endl ;
	cin >> gun[2] ; 
	ans[4] = gun[2]/ans[3] ; 
	cout << "? 4 5" << endl ; 
	cin >> gun[3] ; 
	ans[5] = gun[3]/ans[4] ; 
	ans[6] = 108 - (ans[1]+ans[2]+ans[3]+ans[4]+ans[5]) ; 
	printf("! ");
	forr(i,1,6) cout << ans[i] << " " ; 
	printf("\n"); 
}
 










// Contact : chessdhiman@gmail.com 

