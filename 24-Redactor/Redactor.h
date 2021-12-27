#ifndef REDACTOR_H
#define REDACTOR_H

#include<iostream>

using namespace std;

class Redactor
{
public:
    virtual void move(double,double);
    virtual void rotate(double) = 0;
    virtual void scale(double) = 0;
    virtual void show() = 0;
};

class Circle :public Redactor
{
private:
    double cord_x;
    double cord_y;
    double rad;
    
public:
    Circle(double, double, double);
    virtual void rotate(double);
    virtual void scale(double);
    virtual void show();
    virtal void move(double,double);
        
};

class Square :public Redactor
{
private:

    double cord_x;
    double cord_y;
    double length;
    double angle;
    
public:
   Square(double, double, double, double);
   virtual void rotate(double);
   virtual void scale(double);
   virtual void show();
   virtal void move(double,double);
};
#endif