#include <iostream>
using namespace std;

double hatSize(double height, double weight){
	
	return 2.9*weight/height;
};

double jacketSize(double height, double weight, double age){
	double jacketSize = height*weight/288;
	if (age < 40)
		return jacketSize;
	else
		return jacketSize + 1.0/8 * int((age - 30)/10);
};

double waist(double weight, double age){
	double waist = weight/5.7;
	if (age < 30)
		return waist;
	else
		return waist + 1.0/10 * int((age - 28)/2);
};


int main(){
	
	
	double height, weight, age;
	bool repeat;
	
	
	do{
		
		cout<<"Please, enter a height (inches), a weight (pounds) and an age "
		"(years)to compute the hat size, a jacket size and a waist:\n";
		cin>> height>>weight>>age;
		
		cout<<"\nThe hat size is " <<hatSize(height, weight)<<" inches,."
		"the jacket size is" <<jacketSize(height, weight,age)<<" inches and the"
		" waist is " <<waist(weight, age)<<" inches.";
		
		cout<<"\nPlease, if you want to repeat the computation enter 1"
		" otherwise enter 0: ";
		cin>>repeat;
}
	while(repeat);
	
return 0;}