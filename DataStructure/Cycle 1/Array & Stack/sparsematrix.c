#include<stdio.h>
void main(){
   int sparseMatrix[4][5]={{0,0,3,0,4},{0,0,5,7,0},{0,0,0,0,0},{0,0,0,0,0}};

    int size=0;

   for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        printf("%d\t",sparseMatrix[i][j]);
    }
    printf("\n");
   }
 
   for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        if(sparseMatrix[i][j]!=0){
            size++;
        }
    }
   }
   int re_matrix[size+1][3];
   
   int d=1;
   re_matrix[0][0]=4;
   re_matrix[0][1]=5;
   re_matrix[0][2]=size;
   for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        if(sparseMatrix[i][j]!=0){
            re_matrix[d][0]=i;
            
            re_matrix[d][1]=j;

            re_matrix[d][2]=sparseMatrix[i][j];
            d++;
        }
    }
   }
   printf("\n");
    for(int i=0;i<size+1;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",re_matrix[i][j]);
    }
    printf("\n");
    }


}
