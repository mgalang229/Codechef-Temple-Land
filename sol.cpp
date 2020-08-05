#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int h[100], n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> h[i];
	if(h[0]!=1) {
		cout << "no" << "\n";
		return;
	}
	if(n%2==0) {
		cout << "no" << "\n";
		return;
	}
	bool ok=1;
	for(int i=0; i<n-1; ++i) {
		if(abs(h[i]-h[i+1])!=1) {
			ok=0;
			break;
		}
	}
	for(int i=0; i<n/2; ++i)
		if(h[i]>=h[i+1])
			ok=0;
	for(int i=n/2; i<n-1; ++i)
		if(h[i]<=h[i+1]) 
			ok=0; 
	cout << (ok ? "yes" : "no") << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--)	
		solve();
}
