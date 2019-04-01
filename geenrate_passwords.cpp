#include <bits/stdc++.h> 
using namespace std; 
      
  ofstream out;
void printAllKLengthRec(char set[], string prefix, 
                                    int n, int k) 
{ 
      
 
    if (k == 0) 
    { 
        out << (prefix) << endl; 
        return; 
    } 
  
 
    for (int i = 0; i < n; i++) 
    { 
        string newPrefix; 
        newPrefix = prefix + set[i]; 
        printAllKLengthRec(set, newPrefix, n, k - 1); 
    } 
  
} 
  
void printAllKLength(char set[], int k,int n) 
{ 
    printAllKLengthRec(set, "", n, k); 
} 
  

int main() 
{ 
      out.open("pass.txt");
    cout << "First Test" << endl; 
    char set1[] = {'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
    int k = 3; 
    printAllKLength(set1, k, 52); 
} 
  
