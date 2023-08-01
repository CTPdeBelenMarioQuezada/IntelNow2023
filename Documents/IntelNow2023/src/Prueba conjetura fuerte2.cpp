#include <iostream>



using namespace std;


    int main(){


	int Numero, i, k ; 

	std:: cin >> Numero;

	  bool primo [Numero]; 

	  for (i = 0 ; i < Numero; i++) {
	  
	primo[i] = true; 
    }
       for (i = 5;  i  <Numero; i++){
       	
       	if (primo[i]){
		   
       	for (int k = 2*i ; k < Numero; k += i ) {
       		
       		primo[k]= false;
		   }
	     }
	   }
        
        for (i=0; i < Numero; i++) {
        	if (primo[i]) cout << i <<  ' ';
		}

        cout << endl;
	  }
