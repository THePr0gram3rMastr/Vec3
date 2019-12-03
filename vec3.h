/**
 * File:    vec3.cpp
 *
 * Author:  Cian Martin Bohan (@cianmarbo)
 * Date:    Decemeber 2019
 *
 * Summary of File:
 *
 *    vec3.cpp is a simple 3 element vector class that is
 *    capable of performing the following operations:
 *
 *    - Vector Addition
 *    - Vector Subtraction
 *    - Dot Product
 *    - Vector Magnitude
 *    - Normalization
 *    - Negation
 *
 *    There are also built in functions for printing and
 *    updating a player position.
 *
 *    Feel free to use this code for your own project.
 *
 */

#include <iostream>
#include <math.h>

template<class T> class Vec3 {
private:

  float dotProduct;
  float magnitude;

  T x, y, z;

public:
  Vec3()
    :x(0), y(0), z(0) {
  }

  Vec3(T x, T y, T z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  Vec3(float dotProduct) {
    this->dotProduct = dotProduct;
  }

  void printVec() {
    printf("%f %f %f\n", x, y, z);
  }

  void printLength() {
    printf("%f\n", magnitude);
  }

  void printDot() {
    printf("%f\n", dotProduct);
  }

  Vec3 add(const Vec3& otherVec) const {

    return Vec3(x + otherVec.x, y + otherVec.y, z + otherVec.z);
  }

  Vec3 operator+(const Vec3& otherVec) const {

    return add(otherVec);
  }

  Vec3 sub(const Vec3& otherVec) const {

    return Vec3(x - otherVec.x, y + otherVec.y, z + otherVec.z);
  }

  Vec3 operator-(const Vec3& otherVec) const {

    return sub(otherVec);
  }

  Vec3 div(const Vec3& otherVec) const {

    return Vec3(x/otherVec.x, y/otherVec.y, z/otherVec.z);
  }

  Vec3 operator/(const Vec3& otherVec) const {

    return div(otherVec);
  }

  Vec3 dot(const Vec3& otherVec) const {

    return Vec3(x*otherVec.x + y*otherVec.y + z*otherVec.z);
  }

  Vec3 operator*(const Vec3& otherVec) const {

    return dot(otherVec);
  }

  float length() {

    magnitude = sqrt((x*x) + (y*y) + (z*z));

    return magnitude;

  }

  void normalize() {
    x = x/magnitude;
    y = x/magnitude;
    z = z/magnitude;
  }

  void negate() {
    x = x*-1;
    y = x*-1;
    z = z*-1;
  }

  void clear() {
    x = 0;
    y = 0;
    z = 0;
  }

  //Functions for updating player position

  float updatePosX(float& pos) {
    pos+=x;

    return pos;
  }

  float updatePosY(float& pos) {
    pos+=y;

    return pos;
  }

  float updatePosZ(float& pos) {
    pos+=z;

    return pos;
  }

};
