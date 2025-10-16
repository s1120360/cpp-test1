#include <iostream> 
using namespace std;

    
int main() {
    for (int i = 1; i <= 6; ++i) {  
        for (int j = 1; j <= i; ++j) {  
            cout << "*";  
        }
            cout << endl;  
    }

  

    int i;
    int j;
    i = 1;
    while (i <= 9) {
        cout << i;
        j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;

}
