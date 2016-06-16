#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class ErrorHandler{

private:
    std::fstream outfile;
    
public:
    enum error { error1 = 10 , error2 = 20, error3 = 30};
    errormessage(){}
    ErrorHandler(char const filename[]) {
    }
    ~ErrorHandler(){
    }
};
