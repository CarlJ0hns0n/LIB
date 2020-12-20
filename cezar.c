#include "cezar.h"


void mutXOR(char* str, const char* kay) {
	const int rage_st = strlen(str); 
	const int rage_kay = strlen(kay);
	
	for(int i = 0; i < rage_st; i++) {
		str[i] ^= kay[i % rage_kay];
	}
}

char* immutXOR(const char* str, const char* kay) {
	const int rage_st = strlen(str);
	const int rage_kay = strlen(kay);
	
	char* new_str = (char*) malloc(sizeof(char) * (rage_st + 1));
	for(int i = 0; i < rage_st; i++) {
		new_str[i] = str[i] ^ kay[i % rage_kay];
	}
	new_str[rage_st] = '\0';
	return new_str ;
}


void mutCaesar(char* str, const int kay) {
	const int rage = strlen(str); 
	const int new_kay = kay % 26;
	
	for(int i = 0; i < rage; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {	
			if(str[i] + new_kay > 'z') {
				str[i] -= ('z' - 'a') + 1;
			}
			if(str[i] + new_kay < 'a') {
				str[i] += ('z' - 'a') + 1 ;
			}
			str[i] += new_kay;
		}
  		if(str[i] >= 'A' && str[i] <= 'Z') {	
			if(str[i] + new_kay > 'Z') {
				str[i] -= ('Z' - 'A') + 1;
			}
			if(str[i] + new_kay < 'A') {
				str[i] += ('Z' - 'A') + 1;
			}
			str[i] += new_kay;
		}
	}
}

char* immutCaesar(const char* str, const int  kay) {
	const int rage = strlen(str);
	const int new_kay = kay % 26;
	
	char* new_str=(char*) malloc(sizeof(char) * (rage + 1));
	strcpy(new_str, str);
	for(int i = 0; i < rage; i++) {
		if(new_str[i] >= 'a' && new_str[i] <= 'z') {	
			if(new_str[i] + new_kay> 'z') {
				new_str[i] -= ('z' - 'a') + 1;
			}
			if(new_str[i] + new_kay < 'a') {
				new_str[i] += ('z' - 'a') + 1;
			}
			new_str[i] += new_kay;
		}
  		if(new_str[i] >= 'A' && new_str[i] <= 'Z') {	
			if(new_str[i] + new_kay> 'Z') {
				new_str[i] -= ('Z' - 'A') + 1;
			}
			if(new_str[i] + new_kay < 'A') {
				new_str[i] += ('Z' - 'A') + 1;
			}
			new_str[i] += new_kay;
		}
	}
	return new_str;
}