#ifndef FIFO_H
#define FIFO_H

class FIFO 
{
private:
   int *array;
   int temp;
   int N;
public:
   FIFO ();

   ~FIFO();

   void push(int value);

   void pop();

};

#endif