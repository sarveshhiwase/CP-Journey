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

class Element{
	public:
		// row no
		int row;
		// col no
		int col;
		// element
		int x;
};

class Sparse{
	public:
		// rows
		int m;
		// cols
		int n;
		// no. of non zero elements
		int num;
		Element *el;
	Sparse(int r,int c,int size){
		m = r;
		n = c;
		num = size;
		el = new Element[num];
	}
	Sparse * operator+(Sparse &s){
		int i,j,k;
		i = j = k = 0;
		if(m != s.m || n != s.n){
			return NULL;
		}
		Sparse *sum = new Sparse(m,n,num + s.num);
		while(i < num && j < s.num){
			if(el[i].row > s.el[j].row){
				sum->el[k++] = s.el[j++];
			} else if(el[i].row < s.el[j].row){
				sum->el[k++] = el[i++];
			} else {
				if(el[i].col > s.el[j].col){
					sum->el[k++] = s.el[j++];
				} else if(el[i].col < s.el[j].col){
					sum->el[k++] = el[i++];
				} else {
					sum->el[k] = el[i];
					sum->el[k++].x = el[i++].x + s.el[j++].x;
				}
			}
		}
		while(i < num){
			sum->el[k++] = el[i++];
		}
		while(j < s.num){
			sum->el[k++] = s.el[j++];
		}
		s->num = k;
		return sum;
	}
	//Insertion and extraction operator overloading
	friend istream & operator>>(istream &is,Sparse &s);
	friend ostream & operator<<(ostream &os,Sparse &s);

};

istream & operator>>(istream &is,Sparse &s){
	//Enter elements
		for (int i = 0; i < s.num; i++)
		{
			cin >> s.el[i].row >> s.el[i].col >> s.el[i].x;
		}
	return is;
}

ostream & operator<<(ostream &os, Sparse &s){
	int k = 0;
		for (int i = 0; i < s.m; i++)
		{
			for(int j = 0; j < s.n; j++){
				if(i == s.el[k].row && j == s.el[k].col){
					dis(s.el[k++].x)
				} else {
					dis(0)
				}
			}
			cout << "\n";
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
	Sparse s1(5,5,6);
	Sparse s2(5,5,6);
	cin >> s1;
	cin >> s2;
	cout << s1;
	disnew("")
	cout << s2;
	disnew("") 
	Sparse *s3;
	s3 = s1 + s2;
	cout << *s3;
}
