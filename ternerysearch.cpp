#include <bits/stdc++.h>
using namespace std;
int ternarySearch(int l, int r, int key, int ar[])
{
	if (r >= l) {
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;
		if (ar[mid1] == key) {
			return mid1;
		}
		if (ar[mid2] == key) {
			return mid2;
		}
		if (key < ar[mid1]) {
			return ternarySearch(l, mid1 - 1, key, ar);
		}
		else if (key > ar[mid2]) {
			return ternarySearch(mid2 + 1, r, key, ar);
		}
		else {
			return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
		}
	}
	return -1;
}

// Driver code
int main()
{
	int l, r, p, key,n;
    cin>>n;
    cin>>key;
    int ar[n] ;
    for(int i=0;i<n;i++)
        cin>>ar[i];
	l = 0;
	r = n-1;
	p = ternarySearch(l, r, key, ar);
	cout << "Index of " << key
		<< " is " << p << endl;
}