#include "strg.h"
#include "cezar.h"

int main(int argc, char** argv) {
	char way[512];
	char text[512];	
	char kay[512];
	
	if(argc == 1) {
		printf("na vhode way, text, kay\n");
		scanf("%s",way);
		scanf("%s",text);
		scanf("%s",kay);
	}
	else if(argc == 4) {
		strcpy(way,argv[1]);
		strcpy(text,argv[2]);
		strcpy(kay,argv[3]);
	}
	else {
		printf("invalid number of arguments\n");
		return 1;
	}
	
	mutabletolow(way);
	
	if(strcmp(way, "-caesar") == 0) {
		if(!checkNumber(kay)) {
			printf("error: not number\n");
			return 2;
		}
		if(!checkWord(text)) {
			printf("error: not word\n");
			return 3;
		}
		mutCaesar(text, -atoi(kay));
	}
	else if(strcmp(way, "-xor") == 0) {
		mutXOR(text, kay);
	}
	else {
		printf("invalid way");
		return 4;
	}
	printf("decoded str %s\n", text);
	return 0;
}