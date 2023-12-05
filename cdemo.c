#include <stdio.h>
#include <stdlib.h>

int main()
{

    subtractionprogram(getvalueA(), getvalueB());
    multiplicationprogram(getvalueA(),getvalueB());

    divisionprogram(getvalueA(),getvalueB());


    return 0;

}

int getvalueA(){

    int myvalue;
    printf("\nEnter the value of A:\t");
    scanf("%d",&myvalue);
   return myvalue;
}


int getvalueB(){

    int myvalue;
        printf("\nEnter the value of B:\t");
    scanf("%d",&myvalue);
   return myvalue;
}

 int subtractionprogram(int a, int b){
     int c=a-b;
     printf("subtracted value of a and b is... %d", c);

    }

 int multiplicationprogram(int a, int b){
     int c=a*b;
     printf("\nmultiplied value of a and b is.... %d",c);

    }

     int divisionprogram(int a,int b){
         float c= (float) a/b;

         printf("\nDivision of the given a and b value is.... %f",c);

    }

     int modulusprogram(){

    }

     int incrementprogram(){

    }


     int decrementprogram(){

    }

         int assignmentdemoprogram(){

    }
