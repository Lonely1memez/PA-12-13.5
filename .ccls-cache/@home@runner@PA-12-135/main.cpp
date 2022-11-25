#include<string>
#include<iostream>
using namespace std; 
int main() 
{ 
	string inputName; 
	int age;
	// Set exception mask for cin stream
   	cin.exceptions(ios::failbit);

	cin >> inputName;
   	while(inputName != "-1") 
	{   
      	try 
	{
         cin >> age;
         
      	}
	catch(exception ex) 
	{
	 
         	cin.clear();
            cin.ignore(1000, '\n');
            age=-1;
	
      	}
	 cout << inputName << " " << (age + 1) << endl;   
	
	cin >> inputName;
   }
	return 0;
}