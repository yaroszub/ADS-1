// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <2) return false;
  if (value %2==0) return value ==2;
  for (int i =2;i*i<=value;++i)
  if (value % i ==0)
   return false;
  return true;
}
uint64_t nPrime(uint64_t n) {
  if (n ==0) return 0;
  uint64_t a = 0;
  uint64_t b = 1;
  while (a < n) {
    b++;
    if (checkPrime(b)){
      a++;
    }
  }
  return b;
}
uint64_t nextPrime(uint64_t value) {
  uint64_t cancan = value + 1;
  while (!checkPrime(cancan)){
    cancan++;
  }
  return cancan;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  uint64_t c=2;
  while (c < hbound){
  sum += c;
    c = nextPrime(c);
  }
  return sum;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
uint64_t schet = 0;
uint64_t d = lbound;
while(!checkPrime(d)&& p <= hbound){
  d++;
}
  while(d <= hbound) {
    uint64_t f = nextPrime(d);
    if (f <= hbound && f - d == 2){
       schet++ ;
    }
    d = f;
        }
  return schet;
}
