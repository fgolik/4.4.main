#include "Vector.h"
#define _CRT_SECURE_NO_WARNINGS


    // Конструкторы
    Vector::Vector() : data(MAX_SIZE) {}
    Vector::Vector(int size) : data(size) {}
    Vector::Vector(const Vector& v) : data(v.data) {}
    Vector::Vector(Vector&& v) : data(move(v.data)) {}

    // Деструктор
    Vector::~Vector() {}

    // Методы
    void Vector::setSize(int size)
    {
        if (size <= MAX_SIZE)
        {
            data.resize(size);
        }
    }

    int Vector::getSize() const
    {
        return data.size();
    }

    double Vector::getElement(int index) const
    {
        if (index >= 0 && index < data.size())
        {
            return data[index];
        }
        return -1;
    }

    void Vector::setElement(int index, double value)
    {
        if (index >= 0 && index < data.size())
        {
            data[index] = value;
        }
    }

    void Vector::scalarOperation(double scalar, char operation)
    {
        for (int i = 0; i < data.size(); i++)
        {
            switch (operation)
            {
            case '+':
                data[i] += scalar;
                break;
            case '-':
                data[i] -= scalar;
                break;
            case '*':
                data[i] *= scalar;
                break;
            case '/':
                if (scalar != 0) {
                    data[i] /= scalar;
                }
                break;
            }
        }
    }

    double Vector::length() const
    {
        double sum = 0;
        for (double d : data)
        {
            sum += d * d;
        }
        return sqrt(sum);
    }

    void Vector::elementwiseOperation(const Vector& v, char operation)
    {
        if (data.size() == v.getSize())
        {
            for (int i = 0; i < data.size(); i++)
            {
                switch (operation)
                {
                case '+':
                    data[i] += v.getElement(i);
                    break;
                case '-':
                    data[i] -= v.getElement(i);
                    break;
                case '*':
                    data[i] *= v.getElement(i);
                    break;
                case '/':
                    if (v.getElement(i) != 0)
                    {
                        data[i] /= v.getElement(i);
                    }
                    break;
                }
            }
        }
    }

    void Vector::print() const
    {
        for (double d : data)
        {
            cout << d << " ";
        }
        cout << endl;
    }

    void Vector::input()
    {
        for (double& d : data)
        {
            cin >> d;
        }
    }

    void Vector::fillRandom()
    {
        for (double& d : data)
        {
            d = rand() % 100;
        }
    }