#include <stdio.h>


int xy (int x, int y){

    for (int i = 0; i<x; i++)
        printf(" ");

    for (int i = 0; i<y; i++)
        printf("\n");
    
}



void graphicposition(int Xposition, int Yposition ){

    
    xy(0,1); printf("Y\n");
    xy(0,1); printf("^");

   for(int i = 0; i<20; i++){
       xy(0,1); printf("'") ;
          
       /*if(i==19-Yposition){
            for (int j = 0; j<Xposition+4; j++){
                printf("-");
            }
        }*/

       if (i == (18-Yposition)){
           printf("%i", Yposition);
         
       }
       if (i == 17){
           for (int i = 0; i < Xposition + 4; i++)
           {
               xy(1,0);
           }
           printf("%i",Xposition);
       }

   }


   for (int i = 0; i < 20; i++)
   {
       xy(1,0);printf("'");
       
   }
   printf(" >");
   printf("\tX\n\n");
   
    
}
    
