//Homework 26

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to implement the
 *                      unorderedArrayListType and orderedArrayListType
 *                      classes derived from the arrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#include <cstdlib>
#include <iostream>
#include "arrayListType.h"
#include "unorderedArrayListType.h"
#include "orderedArrayListType.h"

//Namespace
using namespace std;

//--------------------------------------------------------------------------//

//Function to print menu to test Unordered List
void printUnorderedMenu();
//Function to print menu to test Ordered List
void printOrderedMenu();

//--------------------------------------------------------------------------//

//Main Function
int main(int argc, char** argv) 
{
    //Variables for user input
    int found = 0;
    int value = 0;
    int index = 0;
    int input = 0;
    int arraySize = 0;
    
    //Unordered List Test Program
    //
    //Prompt user for size of unordered list
    cout << "Enter size of Unordered List: " << endl;
    cin >> arraySize;
    //Create unordered list of arraySize (user input)
    unorderedArrayListType list_Unordered(arraySize);
    
    do
    {
        //Print Menu
        printUnorderedMenu();
        //Prompt for menu choice
        cout << "Enter input: " << endl;
        cin >> input;
        switch(input)
        {
            //Insert
            case 1:
                cout << "Enter a value to insert into array: " << endl;
                cin >> value;
                cout << "Enter index in array to insert value: " << endl;
                cin >> index;
                list_Unordered.insertAt(index, value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Insert at END
            case 2:
                cout << "Enter a value to insert into array: " << endl;
                cin >> value;
                list_Unordered.insertEnd(value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Swap values
            case 3:
                cout << "Enter index of array to swap value: " << endl;
                cin >> index;
                cout << "Enter value to swap" << endl;
                cin >> value;
                list_Unordered.replaceAt(index, value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Search for value    
            case 4:
                cout << "Enter a value to search for: " << endl;
                cin >> value;
                found = list_Unordered.seqSearch(value);
                //If not found
                if(found == -1)
                {
                    cout << "Specified value is not in list" << endl;
                }
                //Else found
                else
                {
                    cout << "Value found at index: " << found << "." << endl;
                }
                //Print list to verify operation
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Remove value
            case 5:
                cout << "Enter an item to remove from list: " << endl;
                cin >> value;
                list_Unordered.remove(value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Find minimum value
            case 6:
                cout << "The smallest value in the list is: ";
                cout << list_Unordered.min() << "." << endl;
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Find maximum value
            case 7:
                cout << "The largest value in the list is: ";
                cout << list_Unordered.max() << "." << endl;
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Unordered.print();
                break;
            //Exit Unordered list tester
            case 8:
                input = 100;
                break;
            //Default case
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }while(input != 100);  

    
    //Ordered List Test Program
    cout << "Enter size of Ordered List: " << endl;
    cin >> arraySize;
    orderedArrayListType list_Ordered(arraySize);
    input = 0;
    do
    {
        //Print menu
        printOrderedMenu();
        //Prompt user for input
        cout << "Enter input: " << endl;
        cin >> input;
        switch(input)
        {
            //Insert value
            case 1:
                cout << "Enter a value to insert into array: " << endl;
                cin >> value;
                list_Ordered.insert(value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Insert value at END
            case 2:
                cout << "Enter a value to insert into array: " << endl;
                cin >> value;
                list_Ordered.insertEnd(value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Swap values
            case 3:
                cout << "Enter index of array to swap value: " << endl;
                cin >> index;
                cout << "Enter value to swap" << endl;
                cin >> value;
                //Print list to verify operation
                list_Ordered.replaceAt(index, value);
                cout << "Printing values in list: " << endl;
                list_Ordered.print();
                break;
            //Search for value
            case 4:
                cout << "Enter a value to search for: " << endl;
                cin >> value;
                found = list_Ordered.seqSearch(value);
                if(found == -1)
                {
                    cout << "Specified value is not in list" << endl;
                }
                else
                {
                    cout << "Value found at index: " << found << "." << endl;
                }
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Remove value
            case 5:
                cout << "Enter an item to remove from list: " << endl;
                cin >> value;
                list_Ordered.remove(value);
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Find minimum value
            case 6:
                cout << "The smallest value in the list is: ";
                cout << list_Ordered.min() << "." << endl;
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Find maximum value
            case 7:
                cout << "The largest value in the list is: ";
                cout << list_Ordered.max() << "." << endl;
                cout << "Printing values in list: " << endl;
                //Print list to verify operation
                list_Ordered.print();
                break;
            //Exit program
            case 8:
                input = 100;
                break;
            //Default case
            default:
                cout << "Invalid Input" << endl;
                break;
        }
    }while(input != 100);
    
    //Test complete
    cout << "Terminating Program." << endl;
    exit(EXIT_SUCCESS);
}



//--------------------------------------------------------------------------//

//Function:     printUnorderedMenu()
//Inputs:       None
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to print a menu with 
//              various commands to test the functionality of the 
//              unorderedArrayListType class.
void printUnorderedMenu()
{
    cout << "|---------------------------------------------------|" << endl;
    cout << "|Unordered List Testing program                     |" << endl;
    cout << "| 1. Enter \"1\" to insert into unordered list.       |" << endl;
    cout << "| 2. Enter \"2\" to insert at end of unordered list.  |" << endl;
    cout << "| 3. Enter \"3\" to replace an item in unordered list.|" << endl;
    cout << "| 4. Enter \"4\" to search for item in list.          |" << endl;
    cout << "| 4. Enter \"5\" to remove item in list.              |" << endl;
    cout << "| 4. Enter \"6\" to find smallest item in list.       |" << endl;
    cout << "| 4. Enter \"7\" to find largest item in list.        |" << endl;
    cout << "| 5. Enter \"8\" to exit                              |" << endl;
    cout << "|---------------------------------------------------|" << endl;
}

//Function:     printOrderedMenu()
//Inputs:       None
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to print a menu with 
//              various commands to test the functionality of the 
//              orderedArrayListType class.
void printOrderedMenu()
{
    cout << "|---------------------------------------------------|" << endl;
    cout << "|Ordered List Testing program                       |" << endl;
    cout << "| 1. Enter \"1\" to insert into ordered list.         |" << endl;
    cout << "| 2. Enter \"2\" to insert at end of ordered list.    |" << endl;
    cout << "| 3. Enter \"3\" to replace an item in ordered list.  |" << endl;
    cout << "| 4. Enter \"4\" to search for item in list.          |" << endl;
    cout << "| 4. Enter \"5\" to remove item in list.              |" << endl;
    cout << "| 4. Enter \"6\" to find smallest item in list.       |" << endl;
    cout << "| 4. Enter \"7\" to find largest item in list.        |" << endl;
    cout << "| 5. Enter \"8\" to exit                              |" << endl;
    cout << "|---------------------------------------------------|" << endl;
    
//--------------------------------------------------------------------------//
}