#ifndef _MY_POINT_H_
#define _MY_POINT_H_

#include <cstdlib>
#include <cmath>
#include <iostream>

class MyPoint
{
public:
    MyPoint();
    MyPoint(int coordX, int coordY);
    MyPoint(const MyPoint& p);
    
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    
    bool operator== (const MyPoint& p) const;
    bool operator!= (const MyPoint& p) const;
    
    int dist2sqr(const MyPoint& p) const;
    int dist1(const MyPoint& p) const;
    
private:
    int x, y;
};

MyPoint::MyPoint(): x(0), y(0)
{
}

MyPoint::MyPoint(int coordX, int coordY): x(coordX), y(coordY)
{
}

MyPoint::MyPoint(const MyPoint& p): x(p.x), y(p.y)
{
}

int MyPoint::getX() const
{
    return x;
}

int MyPoint::getY() const
{
    return y;
}

void MyPoint::setX(int coordX)
{
    x = coordX;
}

void MyPoint::setY(int coordY)
{
    y = coordY;
}

bool MyPoint::operator==(const MyPoint& p) const
{
    return (x == p.x && y == p.y);
}

bool MyPoint::operator!=(const MyPoint& p) const
{
    return !operator==(p);
}

int MyPoint::dist2sqr(const MyPoint& p) const
{
    int ed_x = x - p.x;
    int ed_y = y - p.y;
    return pow(ed_x, 2) + pow(ed_y, 2);
}

int MyPoint::dist1(const MyPoint& p) const
{
    return abs(x - p.x) + abs(y - p.y);
}

using namespace std;

int main()
{
    int numTestCases;
    cin >> numTestCases;
    
    for (int i = 0; i < numTestCases; i++)
    {
        int coordX, coordY;
        cin >> coordX >> coordY;
        MyPoint p1(coordX, coordY);
        cin >> coordX >> coordY;
        MyPoint p2(coordX, coordY);
        
        if (p1 == p2)
            cout << "1" << " ";
        if (p1 != p2)
            cout << "0" << " ";
        
        cout << p1.dist2sqr(p2) << " " << p1.dist1(p2) << " ";
        
        coordX = p1.getX();
        coordY = p1.getY();
        MyPoint p3(p1);
        p3.setX(coordY);
        p3.setY(coordX);
        
        cout << p1.dist2sqr(p3) << " " << p1.dist1(p3) << endl;
    }
    
    return 0;
}

#endif // _MY_POINT_H_
