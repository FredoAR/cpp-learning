#include <iostream>
using namespace std;

int main()
{
    int albArray[] = { 15, 14, 13, 9, 8, 12, 11, 5, 6, 7, 2, 4, 10, 3, 1 };
    int lenght = sizeof(albArray) / sizeof(int);
    cout<<"Lenght: "<<lenght<<"\n";

    for (int i = 0; i < lenght - 1; i++)
    {
        bool swapped = false;
        
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if(albArray[j] > albArray[j+1]){
                int temp = albArray[j];
                albArray[j] = albArray[j+1];
                albArray[j+1] = temp;
                swapped = true;
            }
        }        

        if(!swapped){
            break;
        }
    }

    cout<<"Sorted array: ";
    for (int i = 0; i < lenght; i++)
    {
        cout<<albArray[i]<<", ";
    }

    return 0;
}