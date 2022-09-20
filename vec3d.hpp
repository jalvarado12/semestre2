#ifndef VEC3D
#define VEC3D
#include <iostream>


class vector3d {
private:
 double *vec;

public:
 vector3d();
 ~vector3d();

 vector3d& operator =(const vector3d &rhs);
 double operator[](int i) const ; // get operator
 double& operator [](int i) ; // set operator
 };

 // vector - scalar product
 vector3d operator*(const vector3d& v , double c);
 vector3d operator*(double c , const vector3d& v);
 // dot product
 double operator*(const vector3d& v1 , const vector3d& v2);
 
 std::ostream& operator<<(std::ostream &os, vector3d &a);


#endif
