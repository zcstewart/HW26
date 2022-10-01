//Homework 26

/*
 *  Filename:           orderedArrayListType.cpp
 * 
 *  Purpose:            The purpose of this program is to define the public
 *                      member variables of the orderedArrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#include "orderedArrayListType.h"

//--------------------------------------------------------------------------//

//Function:     insertAt(int, int)
//
//Inputs:       int location
//              int insertItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to insert insertItem in the
//              list at the position specified by the location.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void orderedArrayListType::insertAt(int location, int insertItem)
{
    //If empty and index isn't 0
    if(isEmpty() && location != 0)
    {
        cout << "Location must be zero for an empty list!" << endl;
    }
    //If full
    else if(isFull())
    {
        cout << "Cannot insert in a full list!" << endl;
    }
    //If invalid index
    else if(location > length || location < 0)
    {
        cout << "Cannot insert out of bounds of array!" << endl;
    }
    //Insert item
    else
    {
        //insert function provided by Malik
        insert(insertItem);
    }
}

//Function:     insertEnd(int)
//
//Inputs:       int insertItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to insert insertItem at the end
//              of the list.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void orderedArrayListType::insertEnd(int insertItem)
{
    //Bool flag variable
    bool success = true;
    for(int i = 0; i < length; i++)
    {
        //If any preceding values are larger, can't place at end;
        if(list[i] > insertItem)
        {
            //Invalid insertItem
            success = false;
        }
    }
    //Insert if valid
    if(success)
    {
        insert(insertItem);
    }
}

//Function:     replaceAt(int, int)
//
//Inputs:       
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to replace a value of an array
//              with a user specified value. If the array is empty, the input
//              location is invalid, the input number is smaller than the 
//              preceding numbers, or the input number is larger than the 
//              succeeding numbers, the swap will not be performed.
void orderedArrayListType::replaceAt(int location, int repItem)
{
    //Bool flag variable
    bool success = true;
    //If empty, can't replace
    if(isEmpty())
    {
        success = false;
    }
    //If invalid location, can't replace
    if(location < 0 || location > length)
    {
        success = false;
    }
    //If any of preceding elements are larger, can't replace
    for(int i = 0; i < length; i++)
    {
        if(list[i] > repItem)
        {
            success = false;
        }
    }
    //If any succeeding elements are larger, can't replace
    for(int i = length; i > location; i--)
    {
        if(list[i] < repItem)
        {
            success = false;
        }
    }
    //If success = true after tests, replace.
    if(success)
    {
        list[location] = repItem;
    }
    //Else, output error message
    else
    {
        cout << "Swap is not valid due to nature of ordered list" << endl;
    }
}

//Function:     seqSearch(int) const
//
//Inputs:       int searchItem
//Outputs:      Return type int
//Purpose:      The purpose of this function is to search the list for
//              searchItem. If the item is found, the index is returned. If
//              not found, -1 is returned.
int orderedArrayListType::seqSearch(int searchItem) const
{
    //Declare variables for index and flag variable
    int loc;
    bool found = false;
    
    //Initialize to first index
    loc = 0;
    
    //While not at end of list and not found, compare current index to 
    //searchItem
    while(loc < length && !found)
        //If current index == searchItem
        if(list[loc] == searchItem)
        {
            //Then found
            found = true;
        }
        //Otherwise, increment index and compare again
        else
        {
            loc++;
        }
    if(found)
    {
        //Return index of match
        return loc;
    }
    else
    {
        //Not found, return -1
        return -1;
    }
}

//Function:     insert(int)    
//
//Inputs:       int insertItem
//Outputs:      None, return type void.
//Purpose:      
void orderedArrayListType::insert(int insertItem)
{
    //If empty list
    if(length == 0)
    {
        //Insert to beginning of list, order doesn't matter.
        list[length++] = insertItem;
    }
    //If full list
    else if(length == maxSize)
    {
        cout << "Cannot insert in a full list." << endl;
    }
    else
    {
        //Find the location in the list where to insert insertItem.
        int loc;
        
        //Flag variable for found item.
        bool found = false;
        
        //Cycle through list
        for(loc = 0; loc < length; loc++)
        {
            //If current element (index loc) is >= insertItem
            if(list[loc] >= insertItem)
            {
                //Update found
                found = true;
                //Exit for loop
                break;
            }
        }
        //Cycle through array, move each element back by one, beginning with
        //list[length] and ending with list[loc+1]
        for(int i = length; i > loc; i--)
        {
            //Move the elements down
            list[i] = list[i - 1];
        }
        //Insert item
        list[loc] = insertItem;
        //Increment the length
        length++;
    }
}

//Function:     remove(int)
//
//Inputs:       int removeItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to remove removeItem from the
//              list.
void orderedArrayListType::remove(int removeItem)
{
    int loc;
    //If Empty List
    if(length == 0)
    {
        cout << "Cannot delete from an empty list." << endl;
    }
    else
    {
        //Else, search for item
        loc = seqSearch(removeItem);
        //If found, remove
        if(loc != -1)
        {
            removeAt(loc);
        }
        //Else, not found
        else
        {
            cout << "The item to be deleted is not in the list." << endl;
        }
    }
}

//Function:     min()
//
//Inputs:       None
//Outputs:      Return type int.
//Purpose:      Function cycles through list, comparing each element to the
//              first element in order to find the minimum value.
int orderedArrayListType::min() const
{
    int min = list[0];
    if(isEmpty())
    {
        cout << "List is empty. Unable to perform operation" << endl;
    }
    else
    {
        //Set min to first element by default
        
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
int orderedArrayListType::max() const
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
orderedArrayListType::orderedArrayListType(int size) : arrayListType(size)
{
    
}

//--------------------------------------------------------------------------//