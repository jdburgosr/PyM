#include <stdio.h>
#include <conio>
void main()
{
int a,ii=1;
printf("ingrese un dia de noviembre (noviembre tiene treinta dias)\n");
scanf("%i",&a);
if(0<a && a<=30)
{
for(ii;ii<=7;ii++)
{
if((a-ii)%7==0) break;
}
if(ii==1) printf("ese dia es miercoles\n");
if(ii==2) printf("ese dia es jueves\n");
if(ii==3) printf("ese dia es viernes\n");
if(ii==4) printf("ese dia es sabado\n");
if(ii==5) printf("ese dia es domingo\n");
if(ii==6) printf("ese dia es lunes\n");
if(ii==7) printf("ese dia es martes\n");
}
else
{
 printf("numero ingresado invalido\n");
}
getch();
}




