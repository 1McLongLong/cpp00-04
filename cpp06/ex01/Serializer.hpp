#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP 


#include <iostream>
#include <stdint.h>

class Data {
public:
  int value;
};

class Serializer {
  Serializer();
  Serializer(const Serializer& other);
  Serializer& operator=(const Serializer& other);
  ~Serializer();
public:
  static uintptr_t serialize(Data* ptr);
  static Data*     deserialize(uintptr_t raw);
};





#endif
