#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;


class Vector
{
private:
    vector<double> data;
    static const int MAX_SIZE = 1000;

public:
    // Конструкторы
    Vector();
    Vector(int);
    Vector(const Vector&);
    Vector(Vector&&);

    // Деструктор
    ~Vector();

    // Методы
    void setSize(int);
   

    int getSize() const;
   

    double getElement(int ) const;
   

    void setElement(int , double );
    

    void scalarOperation(double , char );
    

    double length() const;
    

    void elementwiseOperation(const Vector& , char );
   

    void print() const;
   

    void input();
    

    void fillRandom();
    
};
