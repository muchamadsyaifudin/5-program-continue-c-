#include <stdio.h>
int main(){

	int nilai = 10;
	do{
		if(nilai==15){
			nilai = nilai = 1;
			continue;
		}
		printf("nilai :%d\n", nilai);
		nilai++;

	}while( nilai <20);
	return 0;
}
