//Name: Jake Lorah
//Date: 11/21/19
//Program: Lorah-Lab13.c
//File Path: /home/students/jlorah/csc1710/Labs/Lab13/Lorah-Lab13.c
//Professor: Dr. Pittman
//Desc: This program will incorporate a function into the code from lab 12. You will read in two images, store them as struct type variables, then blend them and print out the blended image to a file.




#include <stdio.h>




//This struct called pixel defines red green and blue char variables.
struct pixel
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};




//This struct called imageType defines char and int variables. It also defines a struct called pixel image with 800 in parameters.
struct imageType
{
    char type[3];
    char comment[256];
    char newlinechar;
    int width, height;
    int maxcolor, bits, total, grey, x, z;
    struct pixel image[800][800];
};




//This function called ReadImage includes a pointer in the parameters. It contains the calculations for conversions.
int ReadImage (struct imageType *imageptr)
{
      char filename[30];
      FILE *inputfile;
      int i, j;
      char newlinechar;

     //Asks the user to input the name of a file and assigns the input to the variable filename.
     fprintf(stderr, "Please input a file name: \n");
     fscanf(stdin, "%s", filename);
     inputfile = fopen(filename, "r");

     //If statement that tells the user that the input file could not be read through if the file name is not valid.
     if(inputfile == NULL){
        fprintf(stderr, "The data file could not be read through\n");
        return 1;
     }

     //Takes the data from the image and assigns it to variables.
     fscanf(inputfile, "%[^\n]%c", (*imageptr).type, &(*imageptr).newlinechar);
     fscanf(inputfile, "%[^\n]%c", (*imageptr).comment, &(*imageptr).newlinechar);
     fscanf(inputfile, "%i %i", &(*imageptr).width, &(*imageptr).height);
     fscanf(inputfile, "%i", &(*imageptr).maxcolor);

     //This struct called pixel image has a double for loop that does conversions from red, green, and blue variables.
     struct pixel image[800][800];
     for(i=0; i < (*imageptr).height; i++)
        for(j=0; j < (*imageptr).width; j++){
           fscanf(inputfile, "%hhu", &(*imageptr).image[i][j].red);
           fscanf(inputfile, "%hhu", &(*imageptr).image[i][j].green);
           fscanf(inputfile, "%hhu", &(*imageptr).image[i][j].blue);
     }

     //Closes file.
     fclose(inputfile);

     return 0;
}




//This begins the main section of the code.
int main (void)
{
      //Defining variables inside main.
      char filename[30];
      int i, j;
      struct imageType imageA;
      struct imageType imageB;
      char newlinechar;
      FILE *outputfile;
   
     //Reads in two images.
     ReadImage(&imageA);
     ReadImage(&imageB);

     //Creates the name of the output file once both pictures scanned in are combined.
     outputfile = fopen("jakecombined.ppm", "w");

     //Assigns the new data to the output file.
     fprintf(outputfile, "P6\n");
     fprintf(outputfile, "%s\n", imageA.comment);
     fprintf(outputfile, "%i %i\n", imageA.width, imageA.height);
     fprintf(outputfile, "%i\n", imageA.maxcolor);

     //This for loop prints the results in the output file.
     for(i=0; i < imageA.height; i++)
        for(j=0; j < imageA.width; j++)
           fprintf(outputfile, "%c%c%c", (int)(imageA.image[i][j].red + imageB.image[i][j].red)/2, (int)(imageA.image[i][j].green + imageB.image[i][j].green)/2, (int)(imageA.image[i][j].blue + imageB.image[i][j].blue)/2);

     //Closes file. This is super important!
     fclose(outputfile);
}
