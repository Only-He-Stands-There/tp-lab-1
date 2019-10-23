#include "task4.h"

int main() 
{
int i = 0;
char *line1 = "13486345890";
char *line2 = "1643890432789043";
char *res = sum(line1, line2);
while (line1[i] != '\0')
{
	cout << line1[i];
	i++;
}
cout << "\n+\n";
i = 0;
while (line2[i] != '\0')
{
	cout << line2[i];
	i++;
}
cout << "\n__________\n";
i = 0;
while (res[i] != '\0')
{
	cout << res[i];
	i++;
}
system("pause");
}
