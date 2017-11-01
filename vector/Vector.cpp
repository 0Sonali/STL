#include <iostream>
#include <vector>
#include <string>

using namespace std;

int printVector(vector <string> s)
{
	
	cout << "vector has: "<< s.size() <<" elements" <<endl;
	for(auto iter = s.begin();iter != s.end();++iter)
	{
		cout << *iter <<'\t';
	}
	cout <<endl;
}
int main()
{
	vector <string> students;

	//Add elements to the vector	
	cout << "Adding 4 elements in vector" << endl;
	students.push_back("sonali");
	students.push_back("Archana");
	students.push_back("Neha");
	students.push_back("Anushka");
	printVector(students);
	
	cout << "\nRemoving one element" <<endl;
	students.pop_back();
	printVector(students);
	
	//Insert element at begining
	cout <<"\nInsert element in the begining" <<endl;
	students.insert(students.begin(),"Saee");
	printVector(students);

	//Delete 3rd element
	cout <<"\nDelete 3rd element"<<endl;
	students.erase(students.begin()+2);
	printVector(students);
	
	//Get element at certain position 
	cout << "\nElement at 2nd position: " ;
	cout << students.at(1)<<endl;

	//Get reference of last element on vector
	cout << "\nLast element in vector is : ";
	cout << students.back()<<endl; 

	//clear the list
	cout << "\nCLear the list" <<endl;
	students.clear();
	cout << "vector has: "<< students.size() <<" elements" <<endl;

	//Assign the list
	cout << "\nAssign list with some value " << endl;
	students.assign(3,"sonali");
	printVector(students);	

	//check vector capacity
	cout << "\nvector has: "<< students.size() <<" elements" <<endl;
	cout << "capacity of vector is :" << students.capacity()<<endl;

	//reserve storage capacity
	students.reserve(100);
	cout << "capacity of vector after reserve is :" << students.capacity()<<endl;

	//shrink vector to fit existing elemets
	students.shrink_to_fit();
	cout << "capacity of vector after shrink is :" << students.capacity()<<endl;

	//resize the vector
	students.resize(10);
	printVector(students);
	cout << "capacity of vector is : " << students.capacity()<<endl;

	students.resize(12,"sharad");
	printVector(students);
	cout << "capacity of vector is : " << students.capacity()<<endl;
	
	students.resize(3);
	printVector(students);
	cout << "capacity of vector is : " << students.capacity()<<endl;
	cout << "Max size of vector is : " << students.max_size()<<endl;

	//access data(pointer to first element)
	cout <<"\naccessing and modifying first and 3rd element"<<endl;
	string * s = students.data();
	*s = "soha";
	s[2] = "heena";
	printVector(students);

	vector <string> teachers{"prashant","kiran","leena"};
	cout << "\nStudents vector:"<<endl;
	printVector(students);
	cout << "\nTeachers vector:"<<endl;
	printVector(teachers);
	cout << "\nswap teachers and students vectors" <<endl;

	students.swap(teachers);

	cout << "\nStudents vector after swaping :"<<endl;
	printVector(students);
	cout << "\nTeachers vector after swaping:"<<endl;
	printVector(teachers);
}	

