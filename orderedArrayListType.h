//Homework 26

/*
 *  Filename:           orderedArrayListType.h
 * 
 *  Purpose:            The purpose of this program is to declare the 
 *                      implementations of the pure virtual functions from
 *                      the arrayListType class as they relate to the
 *                      orderedArrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#ifndef ORDEREDARRAYLIST_H
#define ORDEREDARRAYLIST_H
#include "arrayListType.h"


//--------------------------------------------------------------------------//

class orderedArrayListType: public arrayListType
{
    public:
        //Virtual function implementation for orderedArrayList
        void insertAt(int location, int insertItem);
        //Virtual function implementation for orderedArrayList
        void insertEnd(int insertItem);
        //Virtual function implementation for orderedArrayList
        void replaceAt(int location, int repItem);
        //Virtual function implementation for orderedArrayList
        int seqSearch(int searchItem) const;
        //Virtual function implementation for orderedArrayList
        void insert(int insertItem);
        //Virtual function implementation for orderedArrayList
        void remove(int removeItem);
        //Virtual function implementation for orderedArrayList
        int min() const;
        //Virtual function implementation for orderedArrayList
        int max() const;
        
        orderedArrayListType(int size = 100);
        //Constructor
};

//--------------------------------------------------------------------------//

#endif /* ORDEREDARRAYLIST_H */

