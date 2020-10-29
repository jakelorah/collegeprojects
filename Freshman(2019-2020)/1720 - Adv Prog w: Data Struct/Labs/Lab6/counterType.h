//Name: Jake Lorah
//Date: 2/20/20
//Professor: Dr. Titus
//Program: counterType.h
//File Path: /home/students/jlorah/csc1720/Labs/Lab6/counterType.h
//Description: This test program is used to implement the class that was described in the lab directions. This is the header file.

//Header file that creates class counterType with public and private elements.
class counterType
{
     public:
          void initializeCounter();
          void setCounter(int = 0);
          int getCounter() const;
          void incrementCounter();
          void decrementCounter();
          void displayCounter() const;
          counterType(int);
          counterType();

     private:
          int count;
};
