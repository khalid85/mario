/*
* 
* Pset1, Mario.c
* Edx-Harvardx CS50, 
*
* By Khalid ATIF
*
* Mario is a program that recreates the half-pyramid using hashes (#) for blocks. Enter the height of the pyramid
* when prompted to have it inputed. The height mustn't be greater than 23.   
*
* 
*        
*       ##
*      ###
*     ####
*    #####
*   ######
*  #######
* ########
*#########
*
*
*/



#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // declare variable

    int height;
 
    // Asking user to pick and enter the correct height. 
    
    do
    {
        printf("Enter the height of the half pyramid: ");
        height = GetInt();
        
    }
    
    while (height <= 0 || height > 23);
    
    
    
    // Draw half pyramid. 
    
    for ( int i = 0; i < height; i++)
    {
    for (int space = 0; space+(i+1) < height; space++)
        {
            printf (" ");
        }
        
    for (int dash = 0 ; dash-(i+1-height)  <= height; dash++)
        {
            printf ("#");
        }
     
        printf ("\n");
    }
    return 0;
}

