//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_YourLastName

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <stack>
#include <cassert>
#include <set>
#include <utility>
#include <map>
using namespace std; 
typedef map<string, int > MapT;
typedef MapT::const_iterator MapIterT;

bool less_than_7(int value)
{
	return value < 7;
};


//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 //Class member is an object
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector2 //Class member is object, Initialize using intialer list
{
  private:
	  vector<int> vec;
  public:
	MyClassVector2 (vector<int> v): vec(v)
	{
	}
	void print()
	{
		/// print the value of vector 
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
	}
};
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector3 //class member is vector and reference 
{
private:
	vector<int>& vec;
public:
	MyClassVector3 (vector<int>& arr) : vec(arr)
	{
	}
	void print()
	{
		/// print the value of vector 
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
	}
};
//value indentifier

int main(int argc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(13.05);
    vd.push_back(60.5);
    vd.push_back(17.38);
    
    //add 3 elements to the vi vector
	vi.push_back(1999);
	vi.push_back(682);
	vi.push_back(15);

   // add 3 elements to the vs vector
	string y = "yokai", 
		t = "tiger", 
		w = "wolve";
	vs.push_back(y);
	vs.push_back(t);
	vs.push_back(w);

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
   cout << "\nValues in vi: \n";
   for (int vals : vi)
   {
	   cout << vals << endl;
   }
   cout << "\nAnother way to print vector: " << endl;
   for (int i = 0; i < vi.size(); i++)
   {
	   cout << vi[i] << endl;
   }
   // display the 3 elements in the vs vector
   cout << "\nValues in vs: \n";
   for (string vals : vs)
   {
	   cout << vals << endl;
   }
   cout << "\nAnother way to print vector: " << endl;
   for (int i = 0; i < vs.size(); i++)
   {
	   cout << vs[i] << endl;
   }
   
   
   
   /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector1_as_Class_Member" << endl; 
    vector<int> vec1;						 //adding numbers to vec and obj to fix conflicts
        for (int i = 1; i <= 5; i++) 
            vec1.push_back(i); 
        MyClassVector1 obj1(vec1); 
        obj1.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
		cout << "\nVector2_as_Class_Member" << endl;
		vector<int> vec2;
		for (int i = 1; i <= 5; i++)
			vec2.push_back(i);
		MyClassVector2 obj2(vec2);
		obj2.print();

		cout << "\nVector3_as_Class_Member" << endl;
		vector<int> vec3;
		for (int i = 1; i <= 5; i++)
			vec3.push_back(i);
		MyClassVector3 obj3(vec3);
		obj3.print();



    /****Section_Name***STL_Iterators*/ 
		cout << "\n\nIterators";
		vector< int > vint(10);
		vint[0] = 10;
		vint[1] = 20;
		vint[2] = 30;
		vint[3] = 40;
		vint[4] = 50;
		vint[5] = 60; 
		vint[6] = 70;
		vint[7] = 80; 
		vint[8] = 90;
		vint[9] = 100;
		//Display elements
		vector< int > ::iterator it; 
		for (it = vint.begin(); it != vint.end(); ++it) { 
			cout << "\n " << *it;
		}

    /****Section_Name*** Stack*/
	//Write comments that help one better understand what the code is doing.
		stack< int > st;

		st.push(100);			 //Push number on stack
		assert(st.size() == 1);  //verify one element is on the stack
		assert(st.top() == 100); //Verify element value

		st.top() = 456;			//Assign new value
		assert(st.top() == 456);

		st.pop();				//Remove element
		assert(st.empty() == true);

		//A stack is a container that allows for insertion and extraction of elements from top only
    

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
	//Write comments that help one better understand what the code is doing.
		cout << "\n\nSet" << endl;
		set<int> iset;  //Set of unique integer numbers

		iset.insert(-11); //populate set with some values
		iset.insert(11);
		iset.insert(55);
		iset.insert(22);
		iset.insert(22);
		if (iset.find(55) != iset.end()) //is value already stored?
		{
			iset.insert(55);
		}
		assert( iset.size() == 4);
		set<int>::iterator it1;  //it1 to clear interference with it under STL_Iterations
		for (it1 = iset.begin(); it1 != iset.end(); it1++ ) 
		{
			cout << " " << *it1;
		}
		//A set is a container that conatins only unique elements

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
	//Write comments that help one better understand what the code is doing.
	//Container with only 2 elements
		pair< string, string> strstr; //pairing two words
		strstr.first = "hello";
		strstr.second = "world";

		pair< int, string> intstr; //pairng a word and a number
		intstr.first = 1;
		intstr.second = "one";

		pair< string, int> strint("two", 2);  //pairng a number and word using assert
		assert( strint.first == "two");
		assert(strint.second == 2);



    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert
    //Write comments that help one better understand what the code is doing.
	//Inserting an item only if it is not already present

		MapT amap;
		pair< MapIterT, bool> result =
			amap.insert(make_pair("Fred", 45));

		assert(result.second == true);
		assert(result.first->second == 45);

		result = amap.insert(make_pair("Fred", 45));

		//Fred was already in the map, and reuslt.first simply points there now
		assert(result.second == false);
		assert(result.first->second == 45);



    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary
    //Write comments that help one better understand what the code is doing.  
	//Map is a container that holds unique pairs of keys and values
	//Elements in std::map always sorted by it's keys
		cout << "\n\nMap Summary" << endl;
		map< string, string> phone_book;
		phone_book["411"] = "Directory";
		phone_book["911"] = "Emergency";
		phone_book["508-678-2811"] = "BCC";
		if (phone_book.find("411") != phone_book.end())
		{
			phone_book.insert(
				make_pair(
					string("411"),
					string("Directory")
				)
			);
			assert(phone_book.size() == 3);
			map< string, string>::const_iterator it;
			for (it = phone_book.begin(); it != phone_book.end(); it++) {
				cout << " " << it->first
					<< " " << it->second
					<< endl;
			}
		}



    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example
    //Write comments that help one better understand what the code is doing.
		int arr[100];
		sort(arr, arr + 100);
		
		vector <int> v1; //add <int> to declare arguement list
		sort(v1.begin(), v1.end());


    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function
    //Write comments that help one better understand what the code is doing. 

	
	vector <int> value;
		int count_less = count_if(value.begin(), value.end(), less_than_7);

      return 0; 
 }