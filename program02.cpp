Program to print:
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5  
// **************************
#include <iostream>


int main(){
    int oCount = 1;
    int sCount = 1;
    while(oCount < 6){
        
        int tCount = sCount;
        int iCount = 1;
        
        while(tCount < 5){
            std::cout << " " << " ";
            tCount++;
        }
        
        while(iCount < (oCount + 1)){
            std::cout << iCount++ << " ";
        
        }
        
        std::cout << '\n';
        oCount++;
        sCount++;
    }
    
    return 0;
}
