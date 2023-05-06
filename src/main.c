#include <root_finder/root_finder.h>
#include <stdio.h>



static float func1(float x){
	return (x-2)*x-3;
}



int main(void){
	printf("(x-2)*x-3 => %f\n",find_root(func1,0.0f,16));
	return 0;
}
