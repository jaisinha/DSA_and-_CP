#include <bits/stdc++.h>
int a, b, c, x, y, z;
int main()
{
    scanf("%d%d%d", &a, &b, &c);
    x = b + a - c;
    y = b + c - a;
    z = a + c - b;
    if (x < 0 || y < 0 || z < 0 || x % 2 || y % 2 || z % 2)
        puts("Impossible");
    else
        printf("%d %d %d\n", x / 2, y / 2, z / 2);
}
