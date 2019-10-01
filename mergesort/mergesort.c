#include "mergesort.h"
#include <stdlib.h>

void mergesort(int size, int* values){
	mergesortRange(0, size, values);
}

void mergesortRange(int start, int end, int* values) {
  // This obviously doesn't actually do any *sorting*, so there's
  // certainly work still to be done.

  int rangeSize = end - start;

  if(rangeSize >= 2){
    int midPoint =  (start + end)/2;
    mergesortRange(start, midPoint, values);
    mergesortRange(midPoint, end, values);
    mergeRanges(start, midPoint, end, values);
  }
  return;
}


void mergeRanges(int start, int midPoint, int end, int* values){
  
  int rangeSize = end - start;
  int *destination;
  destination = (int*) calloc(end+1, sizeof(int));
  int firstIndex = start;
  int secondIndex = midPoint;
  int copyIndex = 0;

  while(firstIndex < midPoint && secondIndex < end){
	  if(values[firstIndex] < values[secondIndex]){
		  destination[copyIndex] = values[firstIndex];
		  ++firstIndex;
	  }else{
		  destination[copyIndex] = values[secondIndex];
		  ++secondIndex;
	  }
	  ++copyIndex;
  }
  while(firstIndex < midPoint){
	  destination[copyIndex] = values[firstIndex];
	  ++copyIndex;
	  ++firstIndex;
  }
  while(secondIndex < end){
	  destination[copyIndex] = values[secondIndex];
	  ++copyIndex;
	  ++secondIndex;
  }
  for(int i = 0; i < rangeSize; ++i){
	  values[i + start] = destination[i];
  }
  free(destination);
}


