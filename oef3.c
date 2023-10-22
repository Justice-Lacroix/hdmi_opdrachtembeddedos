#include <stdio.h>

int main(void){
int teller=0;
  struct geolocatie{
    char land[64];
    char stad[64];
    int lattitude;
    int longitude; 
  } plaats[10];

  
  while(teller<=10){
    printf("geef het land op\n");
    scanf("%s",plaats[teller].land);
    
    printf("geef de stad op\n");
    scanf("%s",plaats[teller].stad);
  
    printf("geef het lattitude op\n");
    scanf("%d", &plaats[teller].lattitude);
  
    printf("geef het longitude op\n");
    scanf("%d", &plaats[teller].longitude);
    getchar();
    teller++; 
  }
  // sort functie nog maken
  return 0;
}
