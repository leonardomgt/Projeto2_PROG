#include "utils.h"


void clearScreen(){
  
#ifdef __llvm__
    
    system("clear");
    
#elif _MSC_VER
    
    system("cls");
    
#endif
    
}


unsigned short int leUnsignedShortInt(unsigned short int min, unsigned short int  max){

    unsigned short int userSInt;
    
    do {
        cout << "Por favor introduza um numero entre " << min << " e " << max << endl;
        cin >> userSInt;
        
        if (cin.fail()) {
            
            if (cin.eof()) {
                
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
                
            }
            
            else {
                
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            
        }
        
        else if (userSInt <= min || userSInt >= max) {
            
            cout << "Invalid Input" << endl;
            
        }
        
        
    }while (userSInt <= min || userSInt >= max);
    
    return userSInt;

}


int leInteiro(int min, int max){

  // A IMPLEMENTAR
    return 1;
}


void trimString(string &inputString) {
    
    //only for strings bigger than one char
    if (inputString.size() > 1) {
        
        //erase every ' ' char till it finds the fisrt that it is not ' '
        inputString.erase(0, inputString.find_first_not_of(" "));
        
        //while the last char is empty, it will be removed from the string
        while (inputString.at(inputString.size() - 1) == ' ') {
            
            inputString.pop_back();
            
        }
    }
}
