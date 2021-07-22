// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// 
// Today 22/07/2021 Bangladesh Standard Time  15:54:11 pm 
// ---------------------  Problem Info  ---------------------
// Problem: A. Bear and Prime 100
// Contest: Codeforces - Codeforces Round #356 (Div. 1)
// URL: https://codeforces.com/contest/679/problem/A
// ----------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}; 
	for(int i=0 ; i <= 3 ; i++) {
		cout << primes[i] << endl ;
		string a ; 
		cin >> a ; 
		//fflush(stdout);
		if(a=="yes") {
			int x = primes[i] ; 
			for(int j=i ;  x * primes[j]<=100 ; j++){
				cout << primes[j] * x << endl ;
				cin >> a ; 
				//fflush(stdout);
				if(a=="yes"){
					printf("composite\n");
					return 0; 
				}
			}
			break ; 
		} 
	}
	cout << "prime" << endl; 
}
