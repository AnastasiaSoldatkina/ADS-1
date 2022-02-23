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
      }
      else {
          return false;
      }
}

uint64_t nPrime(uint64_t n) {
  int ar[8] = { 6,5,7,13,9,4,3,21 };
      int u = 0;
      int r = 0;
      for (int j = 0; j < 8; j++) {
          if (checkPrime(ar[j])== true) {
              u++;
              r = j;
              if (u == n) {
                  return ar[j];
                  break;
              }  
          }
      }
      if (n = 0 || n > r) {
          return 0;
      }
}

uint64_t nextPrime(uint64_t value) {
  int ar[8] = { 6,5,7,13,9,4,3,21 };
      int j = 0;
      for (j; j < 8; j++) {
          if (ar[j] == value) {
              break;
          }
      }
      for (int i = j+1; i < 9; i++) {
          if (i == 8) {
              return 0;
              break;
          }
          if (checkPrime(ar[i]) == true) {
              return ar[i];
              break;
          }
      }
}

uint64_t sumPrime(uint64_t hbound) {
  int ar[8] = { 6,5,7,13,9,4,3,21 };
      int j = 0;
      int Sum = 0;
      for (j; j < 8; j++) {
          if (ar[j] == hbound) {
              break;
          }
      }
      for (int i = 0; i < j; i++) {
          if (checkPrime(ar[i]) == true) {
              Sum = Sum + ar[i];
          }
      }
      return Sum;
}
