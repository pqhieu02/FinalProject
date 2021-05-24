#define _CRT_SECURE_NO_WARNINGS

#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>

#define N 999

typedef struct {
	int max;
	int min;
	char rname[N];
}	rock;

void sendData(rock);