//Name: Jake Lorah
//Date: 11/14/19
//Program: Lorah-Lab12.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab12/Lorah-Lab12.c
//Professor: Dr. Pittman
//Desc: This program will utilize the struct similar to that defined in class to hold a color image.


#include <stdio.h>

//This struct called pixel defines red green and blue char variables.
struct pixel
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};




//This struct called imageType defines char and int variables. It also defines a struct called pixel image with 1000 in parameters.
struct imageType
{
    char type[3];
    char comment[256];
    char newlinechar;
    int width, height;
    int maxcolor, bits, total, grey, x, z;
    struct pixel image[1000][1000];
};




//This begins the main section of the code.
int main (void)
{

     //Defining variables inside main.
     struct imageType imageA;
     char newlinechar;
     int i, j;
     char filename[30];
     FILE *inputfile;
     FILE *outputfile;

     //Asks the user to input the name of a file and assigns the input to the variable filename.
     fprintf(stderr, "Please input a file name: \n");
     fscanf(stdin, "%s", filename);
     inputfile = fopen(filename, "r");

     //Takes the data from the image and assigns it to variables.
     fscanf(inputfile, "%[^\n]%c", imageA.type, &newlinechar);
     fscanf(inputfile, "%[^\n]%c", imageA.comment, &newlinechar);
     fscanf(inputfile, "%i %i", &imageA.width, &imageA.height);
     fscanf(inputfile, "%i", &imageA.maxcolor);

     //This struct called pixel image has a double for loop that does conversions from red, green, and blue variables.
     struct pixel image[1000][1000];
     for(i=0; i < imageA.height; i++)
        for(j=0; j < imageA.width; j++){
           fscanf(inputfile, "%hhu", &imageA.image[i][j].red);
           fscanf(inputfile, "%hhu", &imageA.image[i][j].green);
           fscanf(inputfile, "%hhu", &imageA.image[i][j].blue);
     }

     //Closes file.
     fclose(inputfile);

     //If statement that tells the user that the input file could not be read through if the file name is not valid.
     if(inputfile == NULL){
        fprintf(stderr, "The data file could not be read through\n");
        return 1;
     }

     //Opens the file 'USflag.ppm'.
     outputfile = fopen("USflag.ppm", "w");

     //Assigns the new data to the output file.
     fprintf(outputfile, "P6\n");
     fprintf(outputfile, "%s\n", imageA.comment);
     fprintf(outputfile, "%i %i\n", imageA.width, imageA.height);
     fprintf(outputfile, "%i\n", imageA.maxcolor);

     //This for loop prints the results in the output file.
     for(i=0; i < imageA.height; i++)
        for(j=0; j < imageA.width; j++)
           fprintf(outputfile, "%c%c%c", imageA.image[i][j].red, imageA.image[i][j].green, imageA.image[i][j].blue);

     //Closes file. This is super important!
     fclose(outputfile);

     return 0;
}
