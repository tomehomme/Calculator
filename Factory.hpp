#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "base.hpp"
#include <vector>
#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

double string2long(const std::string &str){

    // object from the class stringstream 
    stringstream geek(str); 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    double x = 0; 
    geek >> x; 
    return x; 

}

class Factory {
  public:
  Factory(){}
  Base* parse(char** input, int length){
      stack <Base *> opStack;
      bool foundConnector = false;
      string connectorType = "";
      for (int i = 1; i < length; i++) {
          //cout << *(input + i)<< endl;
          string arg = *(input + i);
         
        if (*input[i] == '+' && !foundConnector) {
          connectorType = "+";
          foundConnector = true;
        }

        else if (*input[i] == '-' && !foundConnector) {
          connectorType = "-";
          foundConnector = true;
        }
      else if (*input[i] == '*' || arg == "\\*" && !foundConnector) {
          connectorType = "*";
          foundConnector = true;
        }
       else if (*input[i] == '/' && !foundConnector) {
          connectorType = "/";
          foundConnector = true;
        }
       else if (input[i][0] != '0' && input[i][0] != '1' &&  input[i][0] != '2' &&  input[i][0] != '3' &&  input[i][0] != '4' &&  input[i][0] != '5' &&  input[i][0] != '6' &&  input[i][0] != '7' && input[i][0] != '8' && input[i][0] != '9'){
         cout << "not an operator or operand!" << endl;
         return nullptr;
       }
        else if (!foundConnector) {
          opStack.push(new Op(string2long(*(input + i))));
        }

        else {
          if (connectorType == "+") {
           	Base* right = new Op(string2long(*(input + i)));
            Base* newAdd = new Add(opStack.top(), right);
            opStack.pop();
            opStack.push(newAdd);
          }

         else if (connectorType == "-") {
           	Base* right = new Op(string2long(*(input + i)));
            Base* newSub = new Sub(opStack.top(), right);
            opStack.pop();
            opStack.push(newSub);
          }
        else if (connectorType == "/") {
           	Base* right = new Op(string2long(*(input + i)));
            Base* newDiv = new Div(opStack.top(), right);
            opStack.pop();
            opStack.push(newDiv);
          }
        else if (connectorType == "*") {
            Base* right = new Op(string2long(*(input + i)));
            Base* newMult = new Mult(opStack.top(), right);
            opStack.pop();
            opStack.push(newMult);
          }
          foundConnector = false;
          connectorType = "";
        }

      }

      //top of stack is the tree.
    return opStack.top();
  }
};


#endif
