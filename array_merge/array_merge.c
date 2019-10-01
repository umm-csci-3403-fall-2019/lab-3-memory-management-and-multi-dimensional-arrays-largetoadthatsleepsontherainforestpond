#include "array_merge.h"

int* array_merge(int num_arrays, int* sizes, int** values) {
  // This is obviously broken. It has the right type, though, eh?
  int* result;
  int k;
  int* destination;
  destination = (int*) calloc(values+1, sizeof(int));
  for(int i=0; i<sizeof(values); i++){
	  bool isEqual = true;
	  for(int j=0; j<sizes[i]; j++){
		if(destination[i] == null){
		   destination[j] = values[i][j]
		}else while(!isEqual || destination != null){
	           if(values[i][j] != destination[j]){
                     destination[j] = values[i][j]
	             isEqual = true;
		   }
	        }
                
	       	
	}
 }
  return result;
}
