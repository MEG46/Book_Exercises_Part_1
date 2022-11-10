#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    switch(ch){
               case 'b':
               case 'B':
                    printf("Besiktas\n");
                    break;
               case 'f':
               case 'F':
                    printf("Fenerbahce\n");
                    break;
               case 'g':
               case 'G':
                    printf("Galatasaray\n");
                    break;
               case 't':
               case 'T':
                    printf("Trabzonspor\n");
                    break;
               default:
                       printf("Enter a valid value!\n");
                       break;
      }
      }
      return 0;
      getch();
}
     
