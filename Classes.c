#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
	bool truthValue = 1;

	if (truthValue == 1){
	printf("Hi there");
	}

	int g_length;
	scanf("%d", &g_length);

	int g_width;
	scanf("%d", &g_width);
	
	bool graph[10][10];

	for (int i = 0; i < g_length; i++){
		for (int j = 0; j < g_width; j++){
			printf(graph[i][j] + " ");
		}
		printf("\n");
	}
	return 0;

}
