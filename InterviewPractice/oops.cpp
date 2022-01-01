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

//To show data hiding using access specifiers in oops
class Abstract{
	int x;
public:
	int z;
	Abstract(){
		x = 1;
		z = 1;
	}
};

//To show encapsulation in oops
class Encaps{
public:
	int x;
	void set(int n){
		x = n;
	}
	void show(){
		disnew(x)
	}
	int get(){
		return x;
	}
};
//to avoid stack overhead, inline functions are usable than
//macro preproccessors, when using small function it is preferred to
//use inline functions, it also makes program faster

inline int sadness(int x){
	return x-100;
}

//operator overloading
class Timepass{
public:
	int a;
	void operator ++(int){
		a += 10;
	}
	Timepass(int x){
		a = x;
	}
	Timepass(){
		a = 10;
	}
	void display(){
		disnew(a)
	}
};

//Inheritance (single)
class Animal{
public:
	string name;
	int strength;
	Animal(){
		disnew("I'm animal")
	}
};


class Dog:public Animal{
public:
	Dog(){
		name = "dog";
		strength = 500;
		disnew(name)
		disnew(strength)
	}
	void display(){
		disnew("I have to do something")
	}
};

//Function overloading
int sum(int a,int b){
	return a+b;
}

int sum(int a,int b, int c){
	return a+b+c;
}

double sum(double a,double b){
	return a + b;
}

//function overriding using inheritance
class Father{
public:
	virtual void car(){
		disnew("Father's car")
	}
	void home(){
		disnew("Father's home")
	}
};

class Son:public Father{
public:
	void car(){
		disnew("Son's car")
	}
};

//Abstract class
//must have atleast one pure virtual function
//These help us acheive abstraction in cpp
class Shape{
public:
	int width;
	int height;
	virtual void area() = 0;
	void setHeight(int h){
		height = h;
	}
	void setWidth(int w){
		width = w;
	}
};

class Triangle: public Shape{
public:
	void area(){
		disnew((width * height) / 2) 
	}
};

class Rectangle: public Shape{
public:
	void area(){
		disnew((width * height))
	}
};


//Virtual destructor
// deleting derived class object using base class pointer that has virtual destructor
// it helps in deleting both derived and base class object simultaneously
class Base{
public:
	Base(){
		disnew("Base Class Constructor")
	}
	virtual ~Base(){
		disnew("Base Class destructor")
	}
};

class Derived: public Base{
public:
	Derived(){
		disnew("Derived Class Constructor")
	}
	~Derived(){
		disnew("Derived Class destructor")
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

void solve()
{
	//Abstraction
	Abstract a;
	//This will not work as variable x is private.
	//will result in compiler error
	// disnew(a.x)
	//This will work fine as variable z is public.
	disnew(a.z)

	/* ---------------------------------- */

	disnew("-----------------------------------")

	//Encapsulation
	Encaps e;
	e.show();
	disnew(e.get())
	//This shows all data members and function operate in 
	//same object and outer functions cannot affect
	//them directly and this helps in security


	/* ---------------------------------- */

	disnew("-----------------------------------")


	//Inheritance
	Dog d;
	d.display();
	//Animal is base class and dog is derived class
	//all attributes of animal class is available to
	//it's child class, this helps in code reuse and minimisation.

	disnew("-----------------------------------")


	/* ---------------------------------- */

	//Polymorphism
	//Compile time
	//1.Function overloading
	// This helps in using correct function according to various inputs
	//here sum will be called according to the no. of parameter is passed
	disnew(sum(4,5))
	disnew(sum(4,5,7))
	disnew(sum(4.55,5.48))

	disnew("-----------------------------------")

	Father *f = new Son();
	f->car();

	disnew("-----------------------------------")

	//2.Operator overloading
	Timepass t;
	t++;
	t.display();

	disnew("-----------------------------------")


	//Abstraction (abstract classes and interfaces)
	Triangle tr;
	tr.setWidth(3);
	tr.setHeight(4);
	Rectangle r;
	r.setWidth(7);
	r.setHeight(6);
	
	tr.area();
	r.area();

	disnew("-----------------------------------")

	//Virtual Destructors
	//we can directly safely delete derived class objects using the base pointers itself
	Derived *derive1 = new Derived();
	Derived *derive2 = new Derived();

	Base *bas = derive1;
	delete bas;
	bas = derive2;
	delete bas;

}

//virtual
//normalisation
//sql
//joins
//oops
//puzzles
//basics all ds and algos(linkedlist,stack)
