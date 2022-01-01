#include<bits/stdc++.h>

using namespace std;

//templates
//function templates
template<typename T>
void myPrinter(T const& to_print){
	cout << to_print << endl;
}

//class templates
template<typename T>
class MyArray{
public:
	vector<T> elements;
	void printmyarray(){
		for (int i = 0; i < elements.size(); i++)
		{
			cout << elements[i] << " ";
		}
		cout << '\n';
	}
	void push(T const& ele){
		elements.push_back(ele);
	}
};

int main(){
	//exception handling
	int flag = 0;
	//in case of multiple catches suitable exception catch block will run.
	try {
		if(flag)
			throw 5;
		else
			throw "sarvesh";
	} catch(const int e) {
		cout << e << endl;
	} catch(const char* s){
		cout << s << endl;
	}

	cout << "-------------------------" << '\n';

	//pointers
	int a = 10;
	int *p;
	p = &a;

	cout << *p << endl;
	cout << p << endl;
	cout << &a << endl;
	cout << &p << endl;

	cout << "-------------------------" << '\n';


	//references
	int b = 20;
	int &c = b;
	//references must be intialised
	//it's like a copy name given to b or like alias
	cout << b << " " << c << endl;

	cout << "-------------------------" << '\n';


	//templates(definition at the top)
	int d = 45;
	string s = "learning cpp";

	myPrinter(d);
	myPrinter(s);

	MyArray<int> ma;
	ma.push(4);
	ma.push(5);
	ma.printmyarray();

	cout << "-------------------------" << '\n';

	//Pointers size
	string myname = "sarvesh";
	string *sa = &myname;
	int *t;
	float *f;
	//pointers have the same regardless of the type, but when you deference them
	// they will have original data type size that you initially declared
	cout << t << " ";
	cout << sizeof(t) << endl;

	cout << "-------------------------" << '\n';



	return 0;
}