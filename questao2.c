#include <stdio.h>
int main(){
int n1, n2, n3, nfl1,nfl2,nfl3, media;

printf("Digite a primeira nota:");
scanf("%d", &n1);

printf("Digite a segunda nota:");
scanf("%d", &n2);

printf("Digite a terceira nota:");
scanf ("%d", &n3);

nfl1 = n1*2;
nfl2 = n2*3;
nfl3 = n3*5;


media=(nfl1+nfl2+nfl3)/10;

if (media>=7)
{

printf("%d media superior a 7\n", media);
}

return 0;
}
