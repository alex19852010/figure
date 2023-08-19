#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Перечисление для цветов фигур
enum Color
{
  None,
  Red,
  Blue,
  Green
};


// Базовый класс для геометрических фигур
class Shape
{
  public:
  double x;
  double y;
  Color color;

};

// Класс для круга
 class Circle:public Shape
{
  public:   
  double radius;

  Circle(double x, double y, Color color, double radius)
  {
    this->x = x;
    this->y = y;
    this->color = color;
    this->radius = radius;
  }
 

};

// Класс для квадрата
class Square:public Shape
{
  private:   
  double Side;
};

// Класс для равностороннего треугольника
class EquilateralTriangle:public Shape
{
private:
    double side; // Длина стороны треугольника
};

// Класс для прямоугольника
class Rectangle:public Shape
{
private:
double width; // Ширина прямоугольника
double height; // Высота прямоугольника
};


int main()
{

Color colors;
string choice;
cout << "enter command circle, square, triangle, rectangle ";
cin >> choice;
double x;
double y;
double color;
double radius;


if(choice == "circle")
{
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = static_cast<Color>(color);
    double radius;
    cout <<  "enter radius ";
    cin >> radius;
    Circle* circle = new Circle(x, y, colors, radius);

    cout << circle->color;

    

}
 
   
    return 0;
}