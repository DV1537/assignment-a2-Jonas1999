#include <iostream>
#include <fstream>
/**
 * The program reads numbers from a file and prints the sum of them
 * Example: main.exe ./tests/input.in
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, const char * argv[])
{
    
    double a = 0;//used for saving numbers
    int nums = 0;//used for counting the amount of numbers
    int i = 0;
    double sum = 0;
    double avg = 0;
    
    std::ifstream myReadFile;
    
    myReadFile.open(argv[1]);
    
    while (myReadFile >> a)
    {
        if(a < DBL_MAX && a > DBL_MIN){
        sum += a;
        nums++;
        }
        else{//if "a" isn't a number it returns 1 and exits
        return 1;
        }
    }
    myReadFile.close();
    
    avg = sum / nums;
    int* numArr = new int[nums];//makes dynamic array with the size depending on the amount of numbers
    myReadFile.open(argv[1]);//re-opens the file to save the numbers in the dynamic array
    while (myReadFile >> a)
    {
        numArr[i] = a;
        i++;
    }

    for(int i = 0; i < nums; i++){//calculates and outputs the numbers that are above average
        if(numArr[i] > avg){
        std::cout << numArr[i]<<" ";
        }
    }

    myReadFile.close();
    
    return 0;
}

