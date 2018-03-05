#include "sum.h"

int sum(int begin, int end){
	int total;
	for(;begin<end;begin++){
		total += begin;
	}
	return  total;
}

