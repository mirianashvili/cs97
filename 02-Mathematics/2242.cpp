#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double pi = 3.141592653589793;

double distance(double x1,double y1,double x2,double y2){
    return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2)); 
}

int main(){
    double x1,x2,x3,y1,y2,y3;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
        double d1 = distance(x1,y1,x2,y2);
        double d2 = distance(x2,y2,x3,y3);
        double d3 = distance(x1,y1,x3,y3);
        double s = sqrt((d1 + d2 + d3) * (d1 + d2 - d3) * (d2 + d3 - d1) * (d1 + d3 - d2));
        double r = (d1 * d2 * d3) / s;
        double area = 2 * pi * r;
        printf("%4.2f\n", area);
    }
}