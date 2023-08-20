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
  double area;
  Color color;

  virtual void setArea(double var) = 0;
  
  //Метод для вывода информации о фигуре
     void printInfo()
     {
      cout << "color: ";
      switch(color)
      {
        case None:  cout << "none, ";
                    break;

        case Red:  cout << "red, ";
                    break; 

       case Blue:  cout << "blue, ";
                    break; 

       case Green:  cout << "green, ";
                    break;                                            
      }
      cout << "area " << area << endl;
      
     }

};

// Класс для круга
 class Circle:public Shape
{
  public:   
  double radius;

  Circle(double x, double y, Color color, double parametr)
  {
    this->x = x;
    this->y = y;
    this->color = color;
    this->radius = parametr;
  }

   // Метод для нахождения площади круга
     void setArea(double var)override 
     {
        area = atan(1) * 4 * radius;
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
double x;
double y;
double color;
double parametr;

cout << "enter command circle, square, triangle, rectangle ";
cin >> choice;


    if(choice == "circle")
    {
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = static_cast<Color>(color);
    cout <<  "enter radius ";
    cin >> parametr;
    Circle* circle = new Circle(x, y, colors, parametr);
    circle->setArea(parametr);
    circle->printInfo();
    }
    
  
    return 0;
}