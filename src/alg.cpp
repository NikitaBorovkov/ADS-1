// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  int k = 2;
  int prov = 2;
  if (value <= 1) {
    return 0;
  }
  for (int i = 2; i <= (value / 2); i++) {
    if (value % i == 0) {
      return 0;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int ch = 2;
  int p = 1;
  while (p != n) {
    ch += 1;
    if (checkPrime(ch)) {
      p += 1;
    }
  }
  return ch;
}

uint64_t nextPrime(uint64_t value) {
  int proverk = 0;
  int z = value;
  while (proverk == 0) {
    z += 1;
    if (checkPrime(z)) {
    proverk = 1;
    }
  }
  return z;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
