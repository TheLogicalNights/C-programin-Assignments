/*
    Problem Statement : Accept number of rows and number of columns from user and display below 
                        pattern. 

                        Input :  iRow = 4  iCol =  4  
                        Output : 1 2 3 4 
                                 1 * * 4 
                                 1 * * 4 
                                 1 2 3 4
*/

/*
    ALGORITHM
        START
            Accept no of rows from user as row
            Accept no of columns from user as col
            Create one counter iOuter and initialize it to 1
            Create one counter iInner and Initialize it to 1
            if row < 0
                then perform row = -row
            if col < 0
                then perform col = -col
            iterate till iOuter <= row
                iterate till iInner <= col
                    if iOuter==1 or iInner==1 or iOuter==row or iInner==col
                        then print iInner
                    otherwise print *
                    increament the value of iInner
                continue the iteration
                increament the value of iOuter
            continue the iteration 
        STOP
*/

#include "Header.h"
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}