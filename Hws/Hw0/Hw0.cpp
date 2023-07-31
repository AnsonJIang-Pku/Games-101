//Games101 Hw0

#include <iostream>
#include <cmath>
#include <eigen3/Eigen/Dense>
//#include <eigen3/Eigen/Core>中没有cross product，但Dense中有
using namespace std;
using namespace Eigen;

int main(){
    Vector3d p(2,1,1);
    Matrix3d M;
    M << cos(M_PI/4), -sin(M_PI/4), 1,
         sin(M_PI/4),  cos(M_PI/4), 2,
         0,            0,           1;
    cout << "The Result is: \n" << M * p << endl;
    cout << "Annotation: The representation is by homogenous coordinate.";
}