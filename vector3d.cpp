#include "vec3d.hpp"

vector3d::vector3d(){
	vec=new double[3];
}

vector3d::~vector3d(){
	delete[] vec;
}

vector3d& vector3d::operator=(const vector3d &rhs){
	vec[0]=rhs.vec[0];
	vec[1]=rhs.vec[1];
	vec[2]=rhs.vec[2];
	return *this;
}


double &vector3d::operator[]( int i ) {
	return vec[i];
}
double vector3d::operator[](int i) const{
	return vec[i];
}



vector3d operator*(const vector3d& v , double c){
	vector3d v1;
	v1[0]=v[0]*c;
	v1[1]=v[1]*c;
	v1[2]=v[2]*c;
	return v1;
}

vector3d operator*(double c , const vector3d& v){
	vector3d v1;
	v1[0]=v[0]*c;
	v1[1]=v[1]*c;
	v1[2]=v[2]*c;
	return v1;
}

std::ostream& operator<<(std::ostream &os, vector3d &a){
	 os << "(";
	 for(int i = 0; i < 2; i++){
    	os << a[i] << ", ";
  	}
  	os << a[2] << ")";
  	return os;
}
