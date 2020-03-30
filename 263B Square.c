#include <stdio.h>

int main()
{
	int n, k, c, e, f;
	unsigned long long int a[10000], d=10000000001, y;
	scanf("%d %d", &n, &k);
	for (c=0; c<n; c++)
	{
		scanf("%I64d", &a[c]);
	}
	for (f =0; f<n; f++)
    {
    d=10000000001;
	for (c=f; c<n; c++)
    {
        if (a[c]<d)
        {
            d = a[c];
            e = c;
        }
    }
    y = a[f];
    a[f] = d;
    a[e] = y;
    }
	if (k>n)
        printf("-1");
    else
        printf("%d 0\n", a[n-k]);
	return 0;
}
