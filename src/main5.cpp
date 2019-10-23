#include "task5.h"

int main()
{
char *buf = "111>222>333>444>555";
char **res = NULL;
int N = 0;
split(&res, &N, buf, '>');
for (int i = 0; i < N; i++) {
	cout << res[i] << endl;
}
system("pause");
return 0;
}
