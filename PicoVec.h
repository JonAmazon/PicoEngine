#ifndef _H_PICOVEC
#define _H_PICOVEC

#include<cstdio>
#include<cstdlib>
#include<cmath>

struct PicoVec4f
{
    float x,y,z,w;

    PicoVec4f();
    PicoVec4f(float xin,float yin,float zin,float win);
    
    float lengthSqrd();
    float length();
    
    void zero();
	void normalize();
    void operator=(const PicoVec4f& operand);
    void operator+=(const PicoVec4f& operand);
    void operator-=(const PicoVec4f& operand);
    void operator*=(const float& scalar);
    void operator/=(const float& scalar);

    PicoVec4f operator-();
	PicoVec4f conjugate();
    PicoVec4f operator+(const PicoVec4f& operand);
    PicoVec4f operator-(const PicoVec4f& operand);
    PicoVec4f operator*(const float& scalar);
    PicoVec4f operator/(const float& scalar);
    float innerProduct(const PicoVec4f& operand);
    PicoVec4f crossProduct(const PicoVec4f& operand);
    PicoVec4f directProduct(const PicoVec4f& operand);
	PicoVec4f quaternionProduct(const PicoVec4f& quaternion);
	PicoVec4f quaternionRotate(PicoVec4f& quaternion);
};

#endif
