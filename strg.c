#include "strg.h"


void mutabletoup(char* str) {
    while (*str) {
        if ('a' <= *str && *str <= 'z') {
            *str += 'A' - 'a';
        }
        ++str;
    }
}


char* immutabletoup(const char* str) {
	const int rage = strlen(str);
	char* new_str = (char*) malloc(sizeof(char) * (rage + 1));
	for(int i = 0; i < rage; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			new_str[i] = str[i] - ('a' - 'A');
		}
		else {
			new_str[i]=str[i];
		}	
	}
 	new_str[rage] = '\0';
	return new_str;
}

 
void mutabletolow(char* str) {
	while (*str) {
        if ('A' <= *str && *str <= 'Z') {
            *str += 'a' - 'A';
        }
        ++str;
    }
}


char* immutabletolow(const char *str) {
	const int rage = strlen(str);
	char* new_str = (char*) malloc(sizeof(char) * (rage + 1));
	for(int i = 0; i < rage; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			new_str[i] = str[i] + ('a' - 'A') ;
		}
		else {
			new_str[i]=str[i];
		}
	}
 	new_str[rage] = '\0';
	return new_str;
}


void mutableStrip(char* str) {
	int rage;
	int start = 0;  
	int finish = strlen(str) - 1;
	while(str[start] == ' ') {
		if(str[start + 1] == '\0') {
			break;
		}
		start++;
	}	
	if (start == finish) {
		rage = 0;
	}
	else {
		while (str[finish] == ' ') {
			finish--;
		}
		rage = finish - start + 1;
		for(int i = 0; i < rage; i++) {
			str[i] = str[start + i];
		}
	}
	str[rage] = '\0';
}

char* immutableStrip(const char* str) {
	int rage; 
	int i = 0, j;
	int start = 0;
	int finish = strlen(str) - 1;
	
	while(str[start] == ' ') {
		if(str[start + 1] == '\0') {
			break;
		}
		start++;
	}
	if(start == finish) {
		rage = 0;
	}
	else {
		while(str[finish] == ' ') {
			finish--;
		}
		rage = finish - start + 1;
	}
	char* new_str = (char*) malloc(sizeof(char) * (rage + 1));
	for(j = 0; j < rage; j++) {
		new_str[j] = str[start + i];
		i++;
	}
	new_str[j] = '\0';
	return new_str;
}	


void mutabledelwhitespace(char* str) {
	int rage = strlen(str);
	int i = 0, j = 0;
    
	while(str[i] != '\0') {
		if(str[i] == ' ') {
			for(j = i; j < rage - 1; j++) {
				str[j] = str[j+1];
			}
			str[rage-1] = '\0';
		    rage--;
			continue;
		}
		i++;
	}
}

char* immutabledelwhitespace(const char* str) {
	int new_rage = 1;
	int i = 0, j = 0; 
	
	char* new_str = (char*) malloc(sizeof(char) * (new_rage));
	while(str[i] == ' ') {
		i++;
	}
	while(str[i] != '\0') {
		if(str[i] == ' ') {
			i++;
			continue; 
		}
 		new_str[j] = str[i];
		i++;
		j++; 
		if(j == new_rage) {
			new_rage++;
			new_str = (char*) realloc(new_str, sizeof(char) * (new_rage));
		}
	}
	new_str[j] = '\0';
	return new_str;
}

bool verifyNumber(const char* str) {
	const int rage = strlen(str);
	for(int i = 0; i < rage; i++) {
		if(!isdigit(str[i])) {	
			return false;
		}
	}
	return true;
}

bool verifyWord(const char* str) {
	const int rage = strlen(str);
	for(int i = 0; i < rage; i++) {
		if(!isalpha(str[i])) {	
			return false;
		}
	}
	return true;
}

void mutableFilter(char* str) {
	int rage = strlen(str);
	int i = 0, j = 0;
    
	while(str[i] != '\0') {
		if(!isalpha(str[i]) && !isspace(str[i]) && !isdigit(str[i])) {
			for(j = i; j < rage - 1; j++){
				str[j] = str[j+1];
			}
			str[rage-1] = '\0';
		    rage--;
			continue;
		}
		i++;
	}
}

char* immutableFilter(const char* str) {
	int new_rage = 1;
	int i = 0, j = 0;
	
	char* new_str = (char*) malloc(sizeof(char)*(new_rage));
	while(str[i] == ' ' ) { 
		i++;
	}
	while(str[i] != '\0') {
		if(!isalpha(str[i]) && !isspace(str[i]) && !isdigit(str[i])) {
			i++;
			continue; 
		}
 		new_str[j] = str[i];
		i++;
		j++; 
		if(j == new_rage) {
			new_rage++;
			new_str = (char*) realloc(new_str, sizeof(char) * (new_rage));
		}
	}
	new_str[j] = '\0';
	return new_str;
}