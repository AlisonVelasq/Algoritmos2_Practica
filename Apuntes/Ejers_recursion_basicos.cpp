#include <iostream>
#include <vector> 



using namespace std;

 int sumarArray(vector<int> n){
     
     if(n.size() == 1){
         return n[0];
     }
     else{
         int ultIndice = n.size()-1;
         n.pop_back(); // pop() borra el ultimo elem del array (es un void)
        return n[ultIndice] + sumarArray(n); 
     }  
 }

int factorial(int n){
    if(n == 1){
        return n;
    }
    else {
        return n*factorial(n-1);
    }
} 

int fibonacci( int n) {
    if(n <= 2){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
} 

int main()
{
    cout<<"Hello World\n";
   
    //SUMAR ELEMENTOS DEL VECTOR 
     vector<int> numbers ={2,4,1,3,2};
    
    //forma iterativa
    int totalSum = 0;
    for(int i = 0; i < numbers.size(); i++){
        totalSum += numbers[i];
    }
    cout << "suma iterativa : " << totalSum << "\n";
    
    //forma recursiva 
    cout << "suma recursiva : "<< sumarArray(numbers);
    

    //FACTORIAL DE UN NUMERO
    //forma recursiva 
    int f; 
    cout << "\ningrese un numero\n";
    cin >> f;
    cout << "El factorial: " << factorial(f);
    
    //FIBONACCI 
    cout << "\nEl "<<f<<"-esimo numero fibonacci: " << fibonacci(f);
    //si quiero los primeros i, armo un for y llamo i veces a la funcion fibonacci
    return 0;
    
}
