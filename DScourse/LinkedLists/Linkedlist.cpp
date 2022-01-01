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

class Node{
public:
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

class Linkedlist{
private:
	Node *first;
public:
	Linkedlist(int n){
		int x;
		Node *last,*t;
		first = new Node(cin>>x);
		last = first;
		for (int i = 1; i < n; i++)
		{
			cin >> x;
			t = new Node(x);
			last->next = t;
			last = t;
		}
	}
	~Linkedlist(){
		Node *p = first;
		while(first){
			first = first->next;
			delete p;
			p = first;
		}
	}
	void display(){
		Node *p = first;
		while(p != NULL){
			dis(p->data);
			p = p->next;
		}
	}
};

struct Node{
	int data;
	struct Node *next;
} *first,*last, *second;

void countnodes(struct Node *p){
	int count = 0;
	while(p != NULL){
		count++;
		p = p->next;
	}
	disnew(count)
}

int recursivecountnodes(struct Node *p){
	if(p != NULL){
		return recursivecountnodes(p->next) + 1;
	} else {
		return 0;
	}
}

void sumoflinkedlist(struct Node *p){
	int sum = 0;
	while(p != NULL){
		sum += p->data;
		p = p->next;
	}
	disnew(sum)
}

int recursivesumll(struct Node *p){
	if(p != NULL){
		return p->data + recursivesumll(p->next);
	} else {
		return 0;
	}
}

int maxinlinkedlist(struct Node *p){
	int maxi = INT_MIN;
	while(p != NULL){
		maxi = max(maxi,p->data);
		p = p->next;
	}
	return maxi;
}

int mininlinkedlist(struct Node *p){
	int mini  = INT_MAX;
	while(p != NULL){
		mini = min(mini,p->data);
		p = p->next;
	}
	return mini;
}

int recursivemax(struct Node *p){
	int x;
	if(p == NULL)
		return INT_MIN;
	x = recursivemax(p->next);
	return max(x,p->data);
}

struct Node* searchinll(struct Node *p, int key){
	while(p != NULL){
		if(p->data == key)
			return p;
		p = p -> next;
	}
	return NULL;
}

struct Node* recursivesearchinll(struct Node *p, int key){
	if(p == NULL)
		return NULL;
	if(p->data == key)
		return p;
	return recursivesearchinll(p->next,key);
}

struct Node* searchwithmovetofirst(struct Node *p,int key){
	struct Node* q = NULL;
	while(p != NULL){
		if(p->data == key){
			q->next = p->next;
			p->next = first;
			first = p;
			return first;
		}
		q = p;
		p = p -> next;
	}
	return NULL;
}

void display(struct Node *p){
	while(p != NULL){
		dis(p->data);
		// basically we are iterating over nodes until we
		// find last node
		p = p->next;
	}
	disnew("")
}

void insertingnode(struct Node *p,int key,int pos){
	if(pos < 0 || pos > recursivecountnodes(p))
		return;
	//if pos is 0, means we have to insert it before first
	// if pos is last of ll, means we have to insert it
	// after last
	struct Node *q = new Node;
	q->data = key;
	q->next = p;
	if(pos == 0){
		first = q;
		return;
	} 
	pos--;
	while(pos--){
		p = p->next;
	}
	q->next = p->next;
	p->next = q;
}

void insertingnodeatlast(int x){
	struct Node *t = new Node;
	t->data = x;
	t->next = NULL;

	// if link list is empty i.e first == NULL
	if(first == NULL){
		first = last = t;
	} else {
		last->next = t;
		last = t;
	}
}

void insertingnodeinsortedlist(struct Node *p,int x){
	struct Node *t = new Node;
	t->data = x;
	t->next = NULL;
	if(first->data > x){
		t->next = first;
		first = t;
		return;
	} 
	struct Node *q = NULL;
	while(p && p->data < x){
		q = p;
		p = p->next;
	}
	q->next = t;
	t->next = p;
}

void DeleteNode(struct Node *p,int pos){
	if(pos < 0 || pos > recursivecountnodes(p))
		return;
	if(pos == 0){
		struct Node *t = first;
		first = first->next;
		delete t;
		return;
	}
	struct Node *q = NULL;
	pos--;
	while(pos--){
		q = p;
		p = p->next;
	}
	q->next = p->next;
	delete p;
}

bool islistsorted(struct Node *p){
	int x;
	x = p->data;
	while(p != NULL){
		if(x > p->data)
			return false;
		x = p->data;
		p = p->next;
	}
	return true;
}

void removeduplicatesfromsortedlist(struct Node *p){
	struct Node *q = p;
	p = p->next;
	while(p != NULL){
		if(p->data != q->data){
			q = p;
			p = p->next;
		} else {
			q->next = p->next;
			p = q->next;
		}
	}
}

void reverselinkedlist(struct Node *p){
	// basically there are two approaches
	//1. Change the elements in links.
	//2. change the links itself.
	// we usually perform 2nd one.


	// Idea is to use 3 sliding pointers (one following another, another one follwoing the other one)
	struct Node *r = NULL;
	struct Node *q = NULL;
	while(p != NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

void reverselinkedlistinrange(struct Node *p,int left,int right){
	if(left == right){
		return;
	}
	left--;
	right--;
	right -= left;
	struct Node *t1 = NULL;
	struct Node *t2 = NULL;
 	while(left--){
		t1 = p;
		p = p->next;
	}

	while(right--){
		p = p->next;
	}
	t2 = p->next;
	p->next = NULL;
	reverselinkedlist(t1->next);
	
}

void recursivereverselinkedlist(struct Node *q,struct Node *p){
	if(p != NULL){
		recursivereverselinkedlist(p,p->next);
		p->next = q;
	} else {
		first = q;
	}
// 1 2 3 4 5
}

Node* mergetwosortedlinkedlists(struct Node *f,struct Node *sec){
	struct Node *third;
	struct Node *l;
	l = third = NULL;
	if(f->data < sec->data){
		third = l = f;
		f = f->next;
		l->next = NULL;
	} else {
		third = l = sec;
		sec = sec->next;
		l->next = NULL;
	}
	while(f != NULL && sec != NULL){
		if(f->data < sec->data){
			l->next = f;
			l = f;
			f = f->next;
			l->next = NULL;
		} else {
			l->next = sec;
			l = sec;
			sec = sec->next;
			l->next = NULL;
		}
	}
	while(f){
		l->next = f;
		l = f;
		f = f->next;
		l->next = NULL;
	} 
	while(sec){
		l->next = sec;
		l = sec;
		sec = sec->next;
		l->next = NULL;
	}
	return third;
}

bool isLoop(struct Node *p){
	struct Node *fast,*slow;
	fast = slow = p;
	do{
		slow = slow->next;
		fast = fast->next->next;
	} while(slow && fast && slow != fast);
	if(slow == fast){
		return true;
	}
	return false;
}

void firstoddtheneven(struct Node *p){
	struct Node *t = p;
	struct Node *newhead = NULL;
	struct Node *tailnode = NULL;
	while(t != NULL){
		if((t->data) % 2 != 0){
			if(newhead == NULL){
				newhead = new Node;
				tailnode = new Node;
				newhead->data = t->data;
				newhead->next = NULL;
				tailnode = newhead;
			} else {
				struct Node *tp = new Node;
				tp->data = t->data;
				tp->next = NULL;
				tailnode->next = tp;
				tailnode = tp;
			}
		}
		t = t->next;
	}
	t = p;
	while(t != NULL){
		if((t->data) % 2 == 0){
			struct Node *tp = new Node;
			tp->data = t->data;
			tp->next = NULL;
			tailnode->next = tp;
			tailnode = tp;
		}
		t = t->next;
	}
	display(newhead);
}

void deletelastnodeandpointtofirst(struct Node *p){
	struct Node *t = p;
	//we will be at second last node
    while(t->next->next->data != -1){
        t = t->next;
    }
    // disnew(t->data)
    struct Node *sad = t->next->next;
    t->next->next = p;
    p = t->next;
    t->next = sad;

    display(p);
}

void deletealternatenodes(struct Node *p){
	struct Node *t = p;
	struct Node *q = NULL;
	while(t->next != NULL && t->next->next != NULL){
	    q = t->next->next;
        t->next = q;
        t = q;
    }
    if(t->next != NULL){
        t->next = NULL;
    }
}

void recurisvedisplay(struct Node *p){
	if(p != NULL){
		dis(p->data);
		recurisvedisplay(p->next);
	} else {
		disnew("")
	}
}

void recurisvedisplayreverse(struct Node *p){
	if(p != NULL){
		recurisvedisplayreverse(p->next);
		dis(p->data)
	} 
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
	int arr1[5] = {1,3,5,7,9};
	int arr2[5] = {2,4,6,8,10};
	first = create(arr1,5);
	recursivereverselinkedlist(NULL,first);
	display(first);
}
