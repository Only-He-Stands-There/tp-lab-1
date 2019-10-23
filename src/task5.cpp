#include "task5.h"

void split(char ***res, int *N, char *buf, char ch) 
{
int lenbuf = strlen(buf);
int numofstr = 1;
for (int i = 0; i < lenbuf; i++) 
{
	if (buf[i] == ch) 
	{
		(*N)++;
	}
}
(*N)++;
*res = (char **)malloc((*N) * sizeof(char *));
char *str = (char *)malloc((lenbuf + 1) * sizeof(char));
for (int i = 0; i < lenbuf; i++) 
{
	str[i] = buf[i];
}
str[lenbuf] = '\0';
*(*res) = str;
for (int i = 0; i < lenbuf; i++) {
	if (str[i] == ch) {
		str[i] = '\0';
		*(*res + numofstr) = str + i + 1;
		numofstr++;
	}
}
}
