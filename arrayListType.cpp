//Homework 26

/*
 *  Filename:           arrayListType.cpp
 * 
 *  Purpose:            The purpose of this program is to define the public
 *                      member variables of the arrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#include "arrayListType.h"

//--------------------------------------------------------------------------//

//Function:     isEmpty() const
//
//Inputs:       None.
//Outputs:      Return type bool.
//Purpose:      The purpose of this function is to determine whether the list
//              is empty. If the protected member variable length is zero,
//              return true. If not, return false.
bool arrayListType::isEmpty() const
{
    return (length == 0);
}

//Function:     isFull() const
//
//Inputs:       None.
//Outputs:      Return type bool.
//Purpose:      The purpose of this function is to determine whether the list 
//              is full. If the protected member variable length is equal
//              to the protected member variable maxSize, return true. If
//              it isn't, return false.
bool arrayListType::isFull() const
{
    return (length == maxSize);
}

//Function:     listSize() const
//
//Inputs:       None.
//Outputs:      Return type int.
//Purpose:      The purpose of this function is to return the value of the
//              current size of the list. The returned value is the protected
//              member variable length. 
//              The const modifier indicates the values of the member 
//              variables for the object the function is being called on will
//              remain unchanged.
int arrayListType::listSize() const
{
    return length;
}

//Function:     maxListSize() const
//
//Inputs:       None.
//Outputs:      Return type int.
//Purpose:      The purpose of this function is to return the value of the
//              maximum allowable list size. The returned value is the 
//              protected member variable maxSize.
//              The const modifier indicates the values of the member 
//              variables for the object the function is being called on will
//              remain unchanged.
int arrayListType::maxListSize() const
{
    return maxSize;
}

//Function:     print() const
//
//Inputs:       None.
//Outputs:      Return type void.
//Purpose:      The purpose of this function is to print every value of the
//              list of length "length".
void arrayListType::print() const
{
    //Cycle through list, output values
    for(int i = 0; i < length; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}

//Function:     isItemAtEqual(int location, int item) const
//
//Inputs:       int location
//              int item
//Outputs:      Return type bool.
//Purpose;      The purpose of this function is to determine whether a user
//              specified number "item" is contained at a user specified
//              index for the array. If it is, the function returns true.
//              Otherwise, the function returns false.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
bool arrayListType::isItemAtEqual(int location, int item) const
{
    //If invalid location
    if(location < 0 || location >= length)
    {
        cout << "The location of the item to be removed is out of range.";
        cout << endl;
        //Return false for invalid location
        return false;
    }
    else
    {
        //Return true if equal | false if unequal
        return (list[location] == item);
    }
}

//Function:     insertAt(int location, int insertItem)
//
//Inputs:       int location
//              int insertItem
//Outputs:      None, return type void.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
void arrayListType::insertAt(int location, int insertItem)
{
    
}

//Function:     insertEnd(int insertItem)
//
//Inputs:       int insertItem
//Outputs:      None, return type void.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
void arrayListType::insertEnd(int insertItem)
{

}

//Function:     removeAt(int location)
//
//Inputs:       int location
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to remove an item from the
//              list at the position specified by the location in the 
//              function parameter.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void arrayListType::removeAt(int location)
{
    if(location < 0 || location >= length)
    {
        cout << "The location of the item to be removed is out of range.";
        cout << endl;
    }
    else
    {
        for(int i = location; i < length - 1; i++)
        {
            list[i] = list[i+1];
            length--;
        }
    }
}

//Function:     retrieveAt(int location, int& retItem)
//
//Inputs:       int location
//              int& retItem
//Outputs:      None, return type void.
//Purpose:      The purpose of this function is to retrieve the element from
//              the list at the position specified by the location.
//              The function will validate the user input location to verify
//              that a correct index is being entered.
void arrayListType::retrieveAt(int location, int& retItem)
{
    //If location is out of array bounds
    if(location < 0 || location >= length)
    {
        cout << "The length of the item to be retrieved is out of range.";
        cout << endl;
    }
    //Else retrieve from location
    else
    {
        retItem = list[location];
    }
}

//Function:     replaceAt(int location, int repItem)
//
//Inputs:       int location
//              int repItem
//Outputs:      None, return type void.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
void arrayListType::replaceAt(int location, int repItem)
{

}

//Function:     clearList()
//
//Inputs:       None
//Outputs:      None, return type void.
//Purpose:      The purpose of this program is to clear the values of the
//              list. This is accomplished by setting the value of the 
//              protected member variable length to zero.
void arrayListType::clearList()
{
    length = 0;
}

//Function:     seqSearch(int searchItem) const
//
//Inputs:       int searchItem
//Outputs:      Return type int.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
int arrayListType::seqSearch(int searchItem) const
{
    
}

//Function:     remove(int removeItem) const
//
//Inputs:       int removeItem
//Outputs:      Return type int.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
void arrayListType::remove(int removeItem)
{

}

//Function:     min()
//
//Inputs:       None
//Outputs:      Return type int.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
int arrayListType::min() const
{
    
}

//Function:     max()
//
//Inputs:       None
//Outputs:      Return type int.
//Purpose:      This function is a virtual function. Its implementation will
//              be determined in the derived class implementation.
int arrayListType::max() const
{
    
}

//Constructor:  arrayListType(int size)
//
//Inputs:       int size
//Outputs:      arrayListType object
//Purpose:      The purpose of this constructor is to create an object of 
//              a user specified size. The size of the array is tested to
//              determine that it is at least one. The value of the maximum
//              size of the array (maxSize) is then set to size. If
//              the user input is invalid, the size of the array is set to
//              100 by default.
arrayListType::arrayListType(int size)
{
    //If invalid input for size of array
    if(size <= 0)
    {
        cout << "the array size must be positive. Creating an array of the ";
        cout << "size 100." << endl;
        //Default array size to 100
        maxSize = 100;
    }
    else
    {
        //Set array size to user input
        maxSize = size;
    }
    //Initialize length to 0, initialize list to point to array of size
    //maxSize
    length = 0;
    list = new int[maxSize];
}

//Function:     arrayListType(const arrayListType& otherList)
//
//Inputs:       const arrayListType& otherList
//Outputs:      arrayListType object
//Purpose:      The purpose of this function is to create a copy constructor
//              for objects of the base class arrayListType. This is done
//              to prevent shallow copying of pointer variables.
arrayListType::arrayListType(const arrayListType& otherList)
{
    //Copy max size
    maxSize = otherList.maxSize;
    //Copy length
    length = otherList.length;
    list = new int[maxSize];
    
    //Cycle through list and copy values
    for(int j = 0; j < length; j++)
    {
        list[j] = otherList.list[j];
    }
}

//Destructor   ~arrayListType()
//
//Inputs:       None.
//Outputs:      None, destructor implementation
//Purpose:      The purpose of the destructor is to delete any dynamically
//              created memory that is no longer in use once an object of
//              the base class arrayListType leaves the scope of the function.
arrayListType::~arrayListType()
{

}

//--------------------------------------------------------------------------//
