//Homework 26

/*
 *  Filename:           unorderedArrayListType.h
 * 
 *  Purpose:            The purpose of this program is to declare the 
 *                      implementations of the pure virtual functions from
 *                      the arrayListType class as they relate to the
 *                      unorderedArrayListType class.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               3/06/2017 12:56 PST
 */

//--------------------------------------------------------------------------//

//Preprocessor Directives
#ifndef UNORDEREDARRAYLISTTYPE_H
#define UNORDEREDARRAYLISTTYPE_H
#include "arrayListType.h"

//--------------------------------------------------------------------------//

class unorderedArrayListType : public arrayListType
{
    public:
        //Virtual function implementation for unorderedArrayList
        void insertAt(int location, int insertItem);
        //Virtual function implementation for unorderedArrayList
        void insertEnd(int insertItem);
        //Virtual function implementation for unorderedArrayList
        void replaceAt(int location, int repItem);
        //Virtual function implementation for unorderedArrayList
        int seqSearch(int searchItem) const;
        //Virtual function implementation for unorderedArrayList
        void remove(int removeItem);
        //Virtual function implementation for unorderedArrayList
        int min() const;
        //Virtual function implementation for unorderedArrayList
        int max() const;
        //Constructor implementation for unorderedArrayList
        unorderedArrayListType(int size = 100);
};

//--------------------------------------------------------------------------//

#endif /* UNORDEREDARRAYLISTTYPE_H */

