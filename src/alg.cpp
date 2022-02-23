// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int u = 0;
      for (int i= value; i > 0; i--) {
          if (value % i == 0) {
              u++;
          }
      }
      if (u == 2) {
          return true;
      } else {
          return false;
      }
}

uint64_t nPrime(uint64_t n) {
  int u = 0;
    for (int i = 0; u != n; i++) {
        if (checkPrime(i) == true) {
            u++;
            if (u == n) {
                return i;
                break;
            }
        }
    }
}

uint64_t nextPrime(uint64_t value) {
  int i = value + 1;
    while (checkPrime(i) != true) {
        i++;
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
  int Sum = 0;
    for (int i = 0; i < hbound; i++) {
        if (checkPrime(i) == true) {
            Sum = Sum + i;
        }
    }
    return Sum;
}
