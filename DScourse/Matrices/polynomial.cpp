#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

class Term{
public:
	int coef;
	int expo;
};

class Polynomial{
public:
	int n;
	Term *t;
	Polynomial(int size){
		n = size;
		t = new Term[size];
	}
	Polynomial * operator+(Polynomial &p){
		int i,j,k;
		i = j = k = 0;
		Polynomial *p1 = new Polynomial(n+p.n);
		while(i < n && j < p.n){
			if(t[i].expo > p.t[j].expo){
				p1->t[k++] = t[i++];
			} else if(t[i].expo < p.t[j].expo){
				p1->t[k++] = p.t[j++];
			} else {
				p1->t[k] = t[i];
				p1->t[k++].coef  = t[i++].coef +  p.t[j++].coef;
			}
		}
		while(i < n){
			p1->t[k++] = t[i++];
		}
		while(j < p.n){
			p1->t[k++] = p.t[j++];
		}
		p1->n = k;
		return p1;
	}
	//Insertion and extraction operator overloading
	friend istream & operator>>(istream &is,Polynomial &p);
	friend ostream & operator<<(ostream &os,Polynomial &p);
};
istream & operator>>(istream &is,Polynomial &p){
	//Enter elements
		for (int i = 0; i < p.n; i++)
		{
			cin >> p.t[i].coef >> p.t[i].expo;
		}
	return is;
}

ostream & operator<<(ostream &os, Polynomial &p){
	int k = 0;
		for (int i = 0; i < p.n - 1; i++)
		{
			if(p.t[i].expo == 0){
				cout << p.t[i].coef << " + ";
			} else {
				cout << p.t[i].coef << "x^" << p.t[i].expo << " + ";
			}
		}
		if(p.t[p.n-1].expo == 0){
				cout << p.t[p.n-1].coef;
			} else {
				cout << p.t[p.n-1].coef << "x^" << p.t[p.n-1].expo;
			}
		return os;
}



void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	Polynomial p1(5);
	Polynomial p2(5);
	cin >> p1;
	cout << p1;
	disnew("")
	cin >> p2;
	cout << p2;
	disnew("")
	Polynomial *p3 = p1 + p2;
	cout << *p3;
}
