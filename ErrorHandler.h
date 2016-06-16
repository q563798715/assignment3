#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H
#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

ErrorHandler::ErrorHandler(char const filename[]) {
        
        outfile = fstream(filename);
        
        outfile << filename << " opened"  << endl;
    }
    
void ErrorHandler:: string errormessage (){
        
        return "Error ";
    }
    
ErrorHandler::~ErrorHandler(){
        
    }
    
void ErrorHandler::warn(char const message[], enum error errornum){
        
        string x (message);
        
        x.erase(0,9);
        
        cout << errormessage() << errornum << x << endl;
        
        outfile << message << endl;
        
    }
    
void ErrorHandler::terminate(char const message[] , enum error errornum){
        
        string x (message);
        
        x.erase(0,9);
        
        cout << errormessage() << errornum << x << endl;
        
        outfile << message << endl;
        
        exit(1);
    }
#endif
