#include "sum.h"

int sum(int begin, int end){
	int total=0;
	int i;
	for(i = begin; i <= end; i++){
		total = total + i;
	}
	return  total;
}

