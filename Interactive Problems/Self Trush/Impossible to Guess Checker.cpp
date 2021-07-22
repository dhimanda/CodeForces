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
	freopen("input.c", "r", stdin) ; 
    int t=1;
    //scanf("%d" , &t);
    forr(i,1,t){
        //printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
int n ; 
int ans[105] ;
int a[55][5] ; 
void Q(int l,int r){
	//cout << "Q "<< l << " " << r << endl; 
}
void sol(){
	printf("A ");
	int sum=0 ;
	for(int i=1 ; i < n ; i++) {
		//printf("%d ", ans[i] );
		sum += ans[i] ; 
	}
	cout << ((n*(n+1))/2) - sum << endl ; 
	ans[n] = ((n*(n+1))/2) - sum  ; 
}
void dhimanda(){
	cin >> n ; 

	// extra for debug 

	int b [n+1] ; 
	for(int i=1 ; i <= n ; i++) {
		cin >> b[i] ; 
	}

	//===================
	mset0(ans) ; 
	memset(a, 0 , sizeof(a));
	if(n <= 5){
		if(n <= 2){
			cout <<"Q "<< 1 << " " << 1 << endl ; 
			cin >> ans[1] ; 
			ans[2] = 3 - ans[1] ;  
			sol() ; 
			return ; 
		}
		int l=1,r=2 ; 
		int total = ceil(n/2.0) ; 
		debug(total) ; 
		for(int i=1 ; i <= total ; i++){
			Q(l,r) ; 
			int x = abs(l-r)+1 ; 
			for(int j=1 ; j <= x ; j++) cin >> a[i][j] ; 
			l++,r++ ; 
		}

		forr(i,1,total-1){
			std::map<int, int> map; map.clear() ; 
			map[a[i][1]]++ ; 
			map[a[i][2]]++ ; 
			map[a[i+1][1]]++ ; 
			map[a[i+1][2]]++ ; 
			for(auto &it:map){
				if(it.S==2) ans[i+1] = it.F ; 
			}
			if(a[i][1]==ans[i+1]) ans[i] = a[i][2] ; 
			else ans[i] = a[i][1] ; 
			if(a[i+1][1]==ans[i+1]) ans[i+2] = a[i+1][2] ; 
			else ans[i+2] = a[i+1][1] ; 
		}
		sol() ; 
	}
	else{
		int l=1,r=3 ; 
		int total = ceil(n/2.0) ; 
		for(int i=1 ; i <= total ; i++){
			if(i == 1 ) l = 1 , r = 3 ;  
			else if(i==2) l++ , r++ ;  
			else if(i==total) l = r , r++ ; 
			else if(i==3)  l++ , r += 2 ; 
			else l = r , r += 2 ; 
			Q(l,r) ; 
			int x = abs(l-r)+1 ; 
			for(int j=1 ; j <= x ; j++) cin >> a[i][j] ; 
		}

		// forr(i,1,total){
		// 	forr(j,1,4){
		// 		cout << a[i][j] << ' ' ; 
		// 	}
		// 	printf("\n");
		// }

		for(int i=2 ; i <= total ; i++){
			std::map<int, int> map; map.clear() ; 
			if(i==2){
				forr(j,1,3){
					map[a[i][j]]++ ; 
					map[a[i-1][j]]++ ; 
				}
				int onefour[2] ; int idx=0; 
				int twothree[2] ; int jdx = 2 ; 
				for(auto &it:map){
					if(it.S==1){
						onefour[idx] = it.F ; 
						idx++ ;
					}else{
						ans[jdx] = it.F ; 
						jdx++; 
					}

				}
				ans[1] = onefour[0] , ans[4] = onefour[1] ; 
				if(!binary_search(a[1], a[1] + 4, onefour[0])){
					swap(ans[1],ans[4]) ; 
				}
				if(binary_search(a[3], a[3] + 4, ans[3])){
					swap(ans[2],ans[3]) ; 
				}
				//sol() ; 
			}
			else if(i==total){
				if(total>3) {
					//debug(total) ; 
					int pos = (i*2)-2 ;
					if(!binary_search(a[i],a[i]+4,ans[pos])){
						swap(ans[pos],ans[pos-1]) ; 
					}
					int now = (2*i)-1 ; 
					ans[now] = a[i][1] ; 
					if(ans[now]==ans[now-1]) ans[now] = a[i][2] ; 

				}
				else{
					ans[i*2-1] = a[i][1] ;
					for(int k=1 ; k <= 3 ; k++){
						if(a[i-1][k]==a[i][1]){
							ans[i*2-1] = a[i][2] ; 
						}
					}
				}



			}
			else if (i==3){
				for(int k = 1 ; k <= 4 ; k++){
					if(a[i][k]==ans[4]) a[i][k]=0;
				}
				for(int ii=1 ; ii <= 4 ; ii++){
					for(int jj=1 ; jj <= 3 ; jj++){
						if(a[3][ii]!=0){
							if(a[3][ii]==a[2][jj] or a[3][ii]==a[1][jj]){
								ans[3] = a[3][ii] ; 
								a[3][ii] = 0 ; 
								break ; 
							}
						}
					}
				}
				ans[2] = (a[1][1]+a[1][2]+a[1][3]) - (ans[1]+ans[3]) ; 
				int idx3 = 5 ; 
				for(int k = 1 ; k <= 4 ; k++){
					if(a[3][k]!=0){
						ans[idx3] = a[3][k] ; 
						idx3++ ; 
					}
				}

			}
			else{
				int pos = (i*2)-2 ; 
				//16
				//debug(i);
				if(!binary_search(a[i],a[i]+4,ans[pos])){
					swap(ans[pos],ans[pos-1]) ; 
					//debug(pos) ; 
				}
				int idxi = pos+1 ; 
				for(int k = 1 ; k <= 3 ; k++) {
					if(ans[pos]!=a[i][k]){
						ans[idxi] = a[i][k] ; 
						idxi++ ; 
					}
				}
			}

		}
		sol();


	} // 2 1 5 3 6 4
	// 6 5 4 3 2 1


	// Check =================
	bool hoise = true ; 
	for(int dhiman = 1 ; dhiman <= n ; dhiman++ ){
		if(ans[dhiman]!=b[dhiman]) {
			debug(ans[dhiman],b[dhiman]) ;
			hoise = false ;
		} 
	}
	hoise ? yes : no ; 
}


 //  6 5 4 3 2 1 10 9 8 7


// 11 9 20 10 6 16 8 17 1 18 7 19 14 15 3 5 4 13 2 12
// 11 9 20 10 6 16 8 17 1 18 7 19 14 15 3 5 4 13 2 12







// Contact : chessdhiman@gmail.com 

