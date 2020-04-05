/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
//Problem Link : http://codeforces.com/contest/977/problem/C

#include<bits/stdc++.h>
using namespace std;
#define in_file freopen("input.txt", "r", stdin)
#define out_file freopen("output.txt", "w", stdout)
#define    F    first
#define    S    second
#define    pb    push_back
#define    popb    pop_back
#define    pf    push_front
#define    popf    pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi    2*acos(0)
#define    elif    else if
#define    ll    long long
int Int(){int x;scanf("%d", &x);return x;}
#define Int Int()
#define mx 100010
int arr[mx];
int tree[mx*4];
void init(int node,int b,int e){
    if(b==e){
        tree[node]=arr[e];
        return;
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    init(lft,b,mid);
    init(rgt,mid+1,e);
    tree[node] = min(tree[lft],tree[rgt]);
}

int q(int node,int b,int e,int l,int r){
    if(l > e | r < b){
        return mx;
    }
    if(b >= l && e<=r){
        return tree[node];
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    int x = q(lft,b,mid,l,r);
    int y = q(rgt,mid+1,e,l,r);
    return min(x,y);
}
 int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    //in_file;
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0 ; i < n ; i++) cin >>a[i];
    sort(a,a+n);
    if(k == 0){
		if(a[0] != 1) cout << 1 << endl;
		else cout << -1 << endl;
		return 0;
	}
	if(k == n) cout << a[n-1] << endl;
    else {
		if(a[k-1] != a[k]) cout << a[k-1] << endl;
		else cout << -1 << endl;
	}
    return 0;
}
