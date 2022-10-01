//Homework 26

/*
 *  Filename:           unorderedArrayListType.cpp
 * 
 *  Purpose:            The purpose of this program is to define the public
 *                      member variables of the unorderedArrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#include "unorderedArrayListType.h"

//--------------------------------------------------------------------------//

//Function:     insertAt(int location, int insertItem)
//
//Inputs:       int location
//              int insertItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to insert insertItem in the
//              list at the position specified by the location.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void unorderedArrayListType::insertAt(int location, int insertItem)
{
    //If invalid input
    if(location < 0 || location >= maxSize)
    {
        cout << "The position of the item to be inserted is out of range.";
        cout << endl;
    }
    
    //If array is full
    else if(length >= maxSize)
    {
        cout << "Cannot insert in a full list" << endl;
    }
    else
    {
        //shift contents after location
        for(int i = length; i > location; i--)
        {
            list[i] = list[i - 1];
        }
        //insert value into location
        list[location] = insertItem;
        //increment length of list
        length++;
    }
}

//Function:     insertEnd(int insertItem)
//
//Inputs:       int insertItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to insert insertItem at the end
//              of the list.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void unorderedArrayListType::insertEnd(int insertItem)
{
    //If list is full
    if(length >= maxSize)
    {
        cout << "Cannot insert in a full list" << endl;
    }
    else
    {
        //Else, insert at end of array
        list[length] = insertItem;
        //Increment list
        length++;
    }
}

//Function:     seqSearch(int searchItem) const
//
//Inputs:       int searchItem
//Outputs:      Return type int
//Purpose:      The purpose of this function is to search the list for
//              searchItem. If the item is found, the index is returned. If
//              not found, -1 is returned.
int unorderedArrayListType::seqSearch(int searchItem) const
{
    //Declare variables
    int loc;
    bool found = false;
    
    loc = 0;
    
    //Cycle through list
    while(loc < length && !found)
    {
        //If found
        if(list[loc] == searchItem)
        {
            //Set flag value of bool variable to exit loop
            found = true;
        }
        //Increment list index for search
        else
        {
            loc++;
        }
    }
    if(found)
    {
        //Found
        return loc;
    }
    else
    {
        //Not Found
        return -1;
    }
}

//Function:     remove(int removeItem)
//
//Inputs:       int removeItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to remove removeItem from the
//              list.
void unorderedArrayListType::remove(int removeItem)
{
    int loc;
    //Empty list
    if(length == 0)
    {
        cout << "Cannot delete from an empty list." << endl;
    }
    else
    {
        //Search for item
        loc = seqSearch(removeItem);
        //If item is in list
        if(loc != -1)
        {
            //remove
            removeAt(loc);
        }
        //Else, not in list
        else
        {
            cout << "The item to be deleted is not in the list." << endl;
        }
    }
}

//Function:     replaceAt(int location, int repItem)
//
//Inputs:       int location
//              int repItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to replace repItem the element
//              in the list at the position specified by the location.
void unorderedArrayListType::replaceAt(int location, int repItem)
{
    //Test for valid index
    if(location < 0 || location >= length)
    {
        cout << "The location of the item to be replaced is out of range.";
        cout << endl;
    }
    //Replace value with repItem
    else
    {
        list[location] = repItem;
    }
}

//Function:     min()
//
//Inputs:       None
//Outputs:      Return type int.
//Purpose:      Function cycles through list, comparing each element to the
//              first element in order to find the minimum value.
int unorderedArrayListType::min() const
{
    //Set min to first element by default
    int min = list[0];
    if(isEmpty())
    {
        cout << "List is empty. Unable to perform operation" << endl;
    }
    else
    {
        //Cycle through list
        for(int i = 1; i < length; i++)
        {
            //If compared value smaller
            if(list[i] < min)
            {
                //Update min
                min = list[i];
            }
        }
    }
    //Return smallest value
    return min;
}

//Function:     max()
//
//Inputs:       None
//Outputs:      Return type int.
//Purpose:      Function cycles through list, comparing each element to the
//              first element in order to find the maximum value.
int unorderedArrayListType::max() const
{
    //Set max to first element by default
    int max = list[0];
    //If empty
    if(isEmpty())
    {
        cout << "List is empty. Unable to perform operation" << endl;
    }
    else
    {
        
        //Cycle through list
        for(int i = 1; i < length; i++)
        {
            //If compared value larger
            if(list[i] > max)
            {
                //Update max
                max = list[i];
            }
        }
    }
    //Return largest value
    return max;
}

//Constructor:
//Inputs:       int size
//Outputs:      arrayListType
//Purpose:      The purpose of the constructor is to call the constructor
//              of the base class arrayListType with the value of size as the
//              argument of the constructor.

unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size)
{
    
}

//--------------------------------------------------------------------------//