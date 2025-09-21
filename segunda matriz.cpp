#include <stdio.h>

int main(void){
	
	int mat[2][3] = {{1,2}, {4,5,6}};
	for(int i= 0; i<2; i++){
		for(int x= 0; i<3; i++){
			printf("%d", mat[i][x]);
		}
}
return 0;
}
