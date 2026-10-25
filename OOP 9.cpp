#include <iostream>
using namespace std;

class Shape{
public:
    virtual void DRAW(){
        cout<<"Drawing A Shape"<<endl;
    }
    virtual ~Shape() {} 
};

class Circle : public Shape{
public:
    void DRAW() override{
        cout<<"Drawing A Circle"<<endl;
    }
};

class Rectangle : public Shape{
public:
    void DRAW() override{
        cout<<"Drawing A Rectangle"<< endl;
    }
};

int main(){
  
    Shape shape;
    Circle circle;
    Rectangle rectangle;

    shape.DRAW();
    circle.DRAW();
    rectangle.DRAW();
   
    Shape *shapePtr = &circle;
    shapePtr->DRAW();
    shapePtr = &rectangle;
    shapePtr->DRAW();
    
    return 0;
}
