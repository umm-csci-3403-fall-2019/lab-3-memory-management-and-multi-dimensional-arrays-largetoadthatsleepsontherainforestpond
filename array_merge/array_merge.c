#include "array_merge.h"
#include <stdlib.h>
#include <stdio.h>
#include "../mergesort/mergesort.h"
int* array_merge(int num_arrays, int* sizes, int** values) {
  int* result;
  int* destination;
  int placeholder = 0;//to hold our place for the next interation in the loop
  int m=0;//sum of all the elements
  for(int i=0; i<num_arrays; i++){
      m = sizes[i] + m;
  }
  destination = (int*) calloc(m, sizeof(int));
  for(int i=0; i<num_arrays; i++){
	for(int j=0; j<sizes[i]; j++){
            destination[j+placeholder] = values[i][j]; 
	}
	placeholder = sizes[i];
  }
  mergesort(m,destination);
  int k =1;

  if(num_arrays == 0){
          k=0;
  }	  

  for(int i=1; i<m; i++){
       if(destination[i] != destination[i-1]){
               k++;
       }       
  }
  result = (int*) calloc(k+1, sizeof(int));
  result[0] = k;
  if(k == 1){
  result[1] = destination[0];
  }
  int n = 2;
  for(int i=1; i<m; i++){
	  if(destination[i] != destination[i-1]){
	      result[n] = destination[i];
	      n++;
	  }
  }
  free(destination); 
  return result;
}
