#include<stdio.h>
int main()
{

    int i, area, T,ax,ay,bx,by,cx,cy,dx,dy;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = cx-bx+ax;
        dy = cy-by+ay;
        area = abs((cy-by)*(ax-bx)-(ay-by)*(cx-bx));
        printf("Case %d: %d %d %d\n", i, dx, dy, area);
    }
    return 0;
}
