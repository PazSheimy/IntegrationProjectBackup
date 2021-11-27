#pragma once

#ifndef BLOCK_H
#define BLOCK_H
#include <stdio.h>
#include <string>

#include "Block.h"
#include "ClassExmp.h"

//MILESTONE 2
//6 Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.
class Block: // The class
    public ClassExmp
 
    
{
public:
   
    //Requirement MILESTONE 2:  4 Overload a constructor
    Block() {}; //default overload constructor
    Block(string y, int z) {};  // Constructor declaration 2 parameters
    Block(string x, string y, int z) {}; // Constructor declaration 3parameter
  

};







#endif // !BLOCK_H