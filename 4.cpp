#include<iostream>
using namespace std;

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
	public:
  // default class constructor (with no arguments):
		Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
   		Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  		void Move(int dx, int dy);

  // member functions for getting values of x, y:
  		int Get_X() const;
  		int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
		void Set_X(int xval);
  		void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:

  		void print(void);

// private data members x, y represent coordinates of the point:
	private:
  		int X;
  		int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point(){
	X = 0;
  	Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval){
  	X = xval;
  	Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy){
  	X += dx;
  	Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const{
  	return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const{
  	return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval){
  	X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval){
  	Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print(void){
	cout <<"("<<Get_X()<<","<<Get_Y()<<")";
}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************
//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 

class rectangle{
	//making the declaration public
	public:
		rectangle();
		rectangle(Point p, Point q);
		void form(Point p, Point q);
		void printrect(void);
		int gets1(Point p, Point q);
		int gets2(Point p, Point q);
		int area(int l, int b);
	
	private:
		Point p1,p2,p3,p4;
		int length(Point p,Point q);
		int breadth(Point p,Point q);
	
};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 

rectangle::rectangle(){
	p1.Set_X(0); 
	
	p1.Set_Y(0); 
	
	p2.Set_X(1); 
	
	p2.Set_Y(0);
	
	p3.Set_X(0);
	
	p3.Set_Y(1); 
	
	p4.Set_X(1); 
	
	p4.Set_Y(1);
}

void rectangle::form(Point x, Point y){
	int x1,x2,x3,x4,y1,y2,y3,y4;
			
	x1=p1.Get_X();	

	x2=0;

	x3=0;

	x4=p4.Get_X();

	y1=p1.Get_Y();

	y2=0;

	y3=0;

	y4=p4.Get_Y();

	p2.Set_X(x4);

	p2.Set_Y(y1);

	p3.Set_X(x1);

	p3.Set_Y(y4);
}

rectangle::rectangle(Point p, Point q){
	p1=p; p4=q;
	form(p1,p4);
}

void rectangle::printrect(void){
	p1.print();
	cout<<",";
	
	p2.print();
	cout<<",";
	
	p3.print();
	cout<<",";
	
	p4.print();
	cout<<",";
				
	cout<<endl;
}
int rectangle::gets1(Point p, Point q){
	return length(p,q);
}

int rectangle::gets2(Point p, Point q){
	return breadth(p,q);
}

int rectangle::length(Point p, Point q){
	int a;
	a = p.Get_X()-q.Get_X();
	return a;
}

int rectangle::breadth(Point p, Point q){
	int b;
	b = p.Get_Y()-q.Get_Y();
	return b;
}

int rectangle::area(int a,int b){
	int ar = a*b;
	return ar;
}

// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************


// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
	Point p1;
  	cout<< "The value of abscissa for p1 is " << p1.Get_X() << endl;
  	cout<< "The value of ordinate for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  	Point p2(2, 3);
  	cout<< "The value of abscissa for p2 is " << p2.Get_X() << endl;
  	cout<< "The value off ordinate for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  	p2.Move(1, -1);
  	cout<< "After the move:" << endl;
  	
	cout<< "The value of abscissa for p2 is " << p2.Get_X() << endl;
  	
	cout<< "The value of ordinate for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"The coordinate of first point is : ";
	p1.print();
	cout<<endl;
	
	cout<<"The coordinate of second point is : ";
	p2.print();
	cout<<endl;

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
// Declaring using default constructor
  	rectangle r1;
// Declaring using personal constructor
  	rectangle r2(p1,p2);
  	cout<<endl<<endl;
  
  	cout<<"Rectangle 1:-"<<endl;
  	r1.printrect();
  
  	cout<<"Rectangle 2:-"<<endl;
  	r2.printrect();
  
  int a = r2.gets1(p1,p2);
  int b = r2.gets2(p1,p2);
  int k = r2.area(a,b);
  cout << "Area of second rectangle is " << k << endl;
  return 0;
}

