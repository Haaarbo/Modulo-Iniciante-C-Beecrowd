#include <stdio.h>

int main()
{
 int h0, h, hDif;
 int m0, m, mDif;
 int s0, s, sDif;
 int d0, d, dDif;

 scanf("Dia %d",&d0);
 scanf("%d : %d : %d\n", &h0, &m0, &s0);
 scanf("Dia %d",&d);
 scanf("%d : %d : %d", &h, &m, &s);

sDif = s - s0;
mDif = m - m0;
hDif = h - h0;
dDif = d - d0;

if(sDif < 0)
{
	sDif += 60;
	mDif--;
}

if(mDif < 0)
{
	mDif += 60;
	hDif--;
}

if(hDif < 0)
{
	hDif += 24;
	dDif--;
}

    printf("%d dia(s)\n", dDif);
    printf("%d hora(s)\n", hDif);
    printf("%d minuto(s)\n", mDif);
    printf("%d segundo(s)\n", sDif);

 return 0;
}