#include <iostream>

using namespace std;

int main(void) {
    
    double pi4 = 0.;
    
    long n;
    
    cout << "Number of iterations: ";
        cin >> n;
        
    // Insert your code here
	for(int i = 0; i < n; i++){
	    
	    if(i % 2 == 0){
	    
	        pi4 += 1. / (2 * i + 1);
	        
	    }else{
	        
	        pi4 += -1. / (2 * i + 1);
	    }
	}
    
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    
	return 0;
}