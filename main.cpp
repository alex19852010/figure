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

  virtual double setArea() = 0;
  
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
      cout << setArea() << endl;
      
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
     double setArea()override 
     {
       
        return atan(1) * 4 * radius;
     }


};

// Класс для квадрата
class Square:public Shape
{
  public:   
  double side;

  Square(double x, double y, Color color, double parametr)
  {
    this->x = x;
    this->y = y;
    this->color = color;
    this->side = parametr;
  }

  // Метод для нахождения площади квадрата
     double setArea()override 
     {
     
      return side * side;
     }

};

// Класс для равностороннего треугольника
class EquilateralTriangle:public Shape
{
    public:
    double side; // Длина стороны треугольника

    EquilateralTriangle(double x, double y, Color color, double parametr)
  {
    this->x = x;
    this->y = y;
    this->color = color;
    this->side = parametr;
  }
  // Метод для нахождения площади треугольника
     double setArea()override 
     {
      
      return side * side * sqrt(3) / 4;
     }
};

// Класс для прямоугольника
class Rectangle:public Shape
{
public:
double width; // Ширина прямоугольника
double height; // Высота прямоугольника

Rectangle(double x, double y, Color color, double parametr, double parametr2)
  {
    this->x = x;
    this->y = y;
    this->color = color;
    this->width = parametr;
    this->height = parametr2;
  }

   // Метод для нахождения площади прямоугольника
     double setArea()override 
     {
      
      return width * height;
     }
};


int main()
{

Color colors;

string choice;
double x;
double y;
double color;
double parametr;
double parametr2;

cout << "enter command circle, square, triangle, rectangle: ";
cin >> choice;


    if(choice == "circle")
    {
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = Color(color);
    cout <<  "enter radius ";
    cin >> parametr;
    Circle* circle = new Circle(x, y, colors, parametr);
    circle->setArea();
    circle->printInfo();
    }

    else if(choice == "square")
    {
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = Color(color);
    cout <<  "enter side ";
    cin >> parametr;
    Square* square = new Square(x, y, colors, parametr);
    square->setArea();
    square->printInfo();
    }

    else if(choice == "triangle")
    {
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = Color(color);
    cout <<  "enter side ";
    cin >> parametr;
    EquilateralTriangle* equilateralTriangle = new EquilateralTriangle(x, y, colors, parametr);
    equilateralTriangle->setArea();
    equilateralTriangle->printInfo();
    }

    else if(choice == "rectangle")
    {
    cout << "enter x ";
    cin >> x;
    cout << "enter y ";
    cin >> y;
    cout << "enter 0 if not color, enter 1 if red color, enter 2 if blue color, enter 3 if green color ";
    cin >> color;
    colors = Color(color);
    cout <<  "enter weight ";
    cin >> parametr;
    cout <<  "enter height ";
    cin >> parametr2;
    Rectangle* rectangle = new Rectangle(x, y, colors, parametr, parametr2);
    rectangle->setArea();
    rectangle->printInfo();
    }
  
    return 0;
}