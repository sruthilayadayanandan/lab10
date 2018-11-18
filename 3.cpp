#include<iostream>
using namespace std;

class rectangle {
	public:
	int a;
	int b;
	int area(void){
		return a*b;
	}
	int perimeter(void){
		int p = (a+b);
		return 2*p;
	}
};
//use the main function


int main(){
	rectangle r1;
	rectangle r2;

	cout << "enter the dimensions of the first rectangle : " << endl;
	cin >> r1.a;
	cin >> r1.b;
	cout << "enter the dimensions the second rectangle : " << endl;
	cin >> r2.a;
	cin >> r2.b;

	if(r1.area()>r2.area()){
	cout << "The area of the first rectangle is greater." << endl;}
	
	else if(r1.area()<r2.area()){
	cout << "The area of the second rectangle is greater." << endl;}

	else {
	cout << "The areas of both the rectangles are same." << endl;}

	//conditions for comparing the perimeters
	if(r1.perimeter()>r2.perimeter()){
	cout << "The perimeter of the first rectangle is greater." << endl;}

	else if(r1.perimeter()<r2.perimeter()){
	cout << "The perimeter of the second rectangle  is greater." << endl;}

	else {
	cout << "The perimeters of both the rectangles are same." << endl;}

return 0;
}
