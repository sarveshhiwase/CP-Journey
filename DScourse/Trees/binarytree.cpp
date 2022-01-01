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
	int val;
	struct Node* left;
	struct Node* right;
	Node(int data){
		val = data;
		left = NULL;
		right = NULL;
	}
};

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

void printrecursivetreepostorder(struct Node *p){
	disnew(p->val)
	if(p->right != NULL and p->left != NULL){
		printrecursivetreepostorder(p->right);
		printrecursivetreepostorder(p->left);
	}
}

void printrecursivetreepreorder(struct Node *p){
	disnew(p->val)
	if(p->right != NULL and p->left != NULL){
		printrecursivetreepreorder(p->left);
		printrecursivetreepreorder(p->right);
	}
}

void solve()
{
	// int rootval;
	// cin >> rootval;
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	struct Node* leftnode = root->left;
	leftnode->left = new Node(4);
	leftnode->right = new Node(5);
	// disnew(root->left->left->val)
	struct Node* rightnode = root->right;
	rightnode->left = new Node(6);
	rightnode->right = new Node(7);
	printrecursivetreepreorder(root);
	disnew("----------")
	printrecursivetreepostorder(root);

}
