#pragma once
#ifndef CLASSEXAMP_H
#define CLASSEXAMP_H
 
#include <string>;

//declarations
using namespace std;

//Requirement 
//MILESTONE 1 
// 1 Design and implement a class.
// MILESTONE 2 
//3 At least one class in a header file with non - trivial methods implemented in a cpp file
class ClassExmp 
{
public:             // Access specifier
    string holderName;  // Attribute
    string coin;       // Attribute
    int amount;        // Attribute


    // REQUIREMENT MILESTONE2: 5 Utilize an initialization list
    ClassExmp() : holderName{ "Sher" }, coin{ "pazCoin" }, amount{ 10000 } {}

    //Requirement 
    //MILESTONE 1
    //2 Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach
        std::string opp = "OOP is a programming style based on the concept of objects. Which may contain data in the form of fields(Attributes) and code in the form of procedure(Methods).\n";
        std::string pp  = "Procedural programming is based on the concept of the procedure call also known as routines, subroutines, or funtions. (Computational steps)\n";
        std::string fp  = "Functional programming style is based on the concept of evaluation of mathematical functions and avoid changing state and mutable data\n";


protected:

private:
  
};
#endif // !CLASSEXAMP_H
