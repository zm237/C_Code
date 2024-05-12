#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
	bool truthValue = 1;

	if (truthValue == 1){
	printf("Hi there");
	}

	bool graph[10][10];

	for (int i = 0; i < sizeof(graph)/sizeof(graph[i]); i++){
		for (int j = 0; j < sizeof(graph[i])/sizeof(graph[i][j]); j++){
			printf(graph[i][j] + " ");
		}
		printf("\n");
	}
	return 0;

}
