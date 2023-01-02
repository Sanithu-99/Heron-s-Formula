//Sanithu Hulathduwage
//A program to calculate the area of a triangle using Heron's Formula by using functions.

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

//functions
void heading();
void getSides(double &a, double &b, double &c);
double semiPerim(double a, double b, double c);
double area(double a, double b, double c);

int main()    //main
{
  
  double side1, side2, side3, triangleArea;
  heading();
  getSides(side1, side2, side3);
  triangleArea = area(side1, side2, side3);
  cout << fixed << setprecision(2);
  cout << "The area of your triangle is " << triangleArea << "\n";
  return 0;
} 

//heading function
void heading()
{
  cout << "Sanithu Hulathduwage \n";
  cout << "This is a program to calculate the area of a triangle \n";
  cout << "using Heron's Formula by using functions. \n\n";
  cout << "(For easier understanding: The First side = a, )\n";
  cout << "(Second side = b, Third side = c of the triangle) \n";

  cout << "\n";
  cout << "        /\\  \n";
  cout << "     a /  \\ \n";
  cout << "      /    \\ c \n";
  cout << "     /______\\ \n";
  cout << "         b \n\n\n";
}

//getsides function
void getSides(double &a,double &b, double &c)
{
  cout << "Enter first side of the triangle: ";
  cin >> a;
  cout << "Enter second side of the triangle: ";
  cin >> b;
  cout << "Enter third side of the triangle: ";
  cin >> c;
  cout << "\n";
}

//semiperimeter function: a calculation(formula) is there in this function
double semiPerim(double a, double b, double c)
{
  return (a+b+c)/2;
}

double area(double a, double b, double c)
{
  double s,A;
  s = semiPerim(a,b,c);
  A = sqrt(s*((s-a)*(s-b)*(s-c)));
  return A;
}
