#include "mergesort.h"

void mergeRanges(int start, int midPoint, int end, int* values){
  
  int rangeSize = end -start;
  int *destination;
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
}


void mergesort(int const start, int const end, int* values) {
  // This obviously doesn't actually do any *sorting*, so there's
  // certainly work still to be done.
  

  
  
  int rangeSize = end - start;
  
  if(rangeSize >= 2){
    int midPoint = (start + end)/2;
    mergesort(start, midPoint, values);
    mergesort(midPoint, end, values);
    mergeRanges(start, midPoint, end, values);
  }
  return;
}


