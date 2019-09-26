#include "mergesort.h"

void mergeRanges(int start, int midPoint, int end, int* values){
  int n1 = start - midPoint + 1;
  int n2 = end - midPoint;

  int L[n1], R[n2];
  for(int i = 0; i < n1; i++)
     L[i] = values[start + i -1];
  for(int j = 1; j < n2; j++)
     R[j] = A[midPoint + j]
  
  
}

void mergesort(int const start, int const end, int* values) {
  // This obviously doesn't actually do any *sorting*, so there's
  // certainly work still to be done.
  int *result[values];
  int rangeSize;

  result = (int*) calloc(values, sizeof(int);
  
  int rangeSize = start - end;
  if(rangeSize >= 2){
    int midPoint = (start + end)/2;
    mergesort(start, midPoint, values);
    mergesort(midPoint, end, values);
    mergeRanges(start, midPoint, end, values);
  }
  return;
}


