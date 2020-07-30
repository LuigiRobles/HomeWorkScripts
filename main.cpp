// CIT125 Intro To C++ Luigi Robles
// 07-30-20202 Summer Term
// Ch.11 Pg. 400 Figure 11-34
// Bubble Sort Program
// Uses the bubble sort to sort the 
// contents of a one-dimensional array in ascending order

#include <iostream>
using namespace std;

int main()
{
    //declare and initialize array
    int numbers[4] = {23, 46, 12, 35};

	//declare and initialize variables
	int sub = 0; //keeps track of subscripts
    int temp = 0; //variable used for swapping
    int maxSub = 3; //maximum subscript
    int lastSwap = 0; //position of last swap
    char swap = 'Y'; //indicates if a swap was made

    
	//repeat loop intructions as long as a swap was made
    while (swap == 'Y')
    {
        swap = 'N'; //assume no swaps are necessary
        
        sub = 0; //begin comparing with first
              //array element
    
        //compare adjacent array elements to determine
        //wheter a swap is necessary
        while (sub < maxSub)
        {
            if (numbers[sub] > numbers[sub +1])
            {
                //a swap is necessary
                temp = numbers[sub];
                numbers[sub] = numbers[sub + 1];
                numbers[sub + 1] = temp;
                swap = 'Y';
                lastSwap = sub;
            } //end if
        sub += 1; //increment subscript
        }  //end while

    maxSub = lastSwap; //reset maximum subscript
    } //end while            

    //display sorted array
    for (int x = 0; x < 4; x += 1)
        cout << numbers[x] << endl;
    //end for
    return 0;
} //end of main function