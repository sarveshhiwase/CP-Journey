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

struct Node {
	int data;
	struct Node *next;
} *first = NULL;

void circulardisplay(struct Node *p){
	do{
		dis(p->data)
		p = p->next;
	} while(p != first);
	disnew("")
}

void recursivecirculardisplay(struct Node *p){
	static int flag = 0;
	if(p != first || flag == 0){
		flag = 1;
		dis(p->data)
		recursivecirculardisplay(p->next);
	}
	flag = 0;
}

Node* create(int arr[],int n){
	// disnew("sarvesh")
	struct Node *p;
	//create two extra pointers to nodes
	struct Node *t,*l;
	// create a new node in a heap
	p = new Node;

	//assign data to first's data
	p->data = arr[0];
	// assign the next to NULL
	p->next = NULL;
	//finally assign last to first
	// we create a temp last to as like temp variable
	// in swap function
	l = p;

	for (int i = 1; i < n; i++)
	{
		t = new Node;
		t->data = arr[i];
		t->next = NULL;
		l->next = t;
		l = t;
	}
	//creating a circular linked list
	l->next = p;
	return p;
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
	int arr[5] = {1,2,3,4,5};
	first = create(arr,5);

	circulardisplay(first);

}
