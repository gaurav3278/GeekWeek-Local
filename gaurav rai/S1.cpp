// C++ program to remove consecutive 
// duplicates from a given string. 
#include <bits/stdc++.h> 
using namespace std; 

// A iterative function that removes 
// consecutive duplicates from string S 
void removeDuplicates(char S[]){ 
	
int n = strlen(S); 

// We don't need to do anything for 
// empty or single character string. 
if (n < 2) 
	return; 
	
// j is used to store index is result 
// string (or index of current distinct 
// character) 
int j = 0; 

// Traversing string 
for (int i=1; i<n; i++) 
{ 
	// If current character S[i] 
	// is different from S[j] 
	if (S[j] != S[i]) 
	{ 
		j++; 
		S[j] = S[i]; 
	}	 
} 

// Putting string termination 
// character. 
j++; 
S[j] = '\0';	 
} 

// Driver Program 
int main() { 
	
	char S1[] = "geeksforgeeks"; 
	removeDuplicates(S1); 
	cout << S1 << endl; 
	
	char S2[] = "aabcca"; 
	removeDuplicates(S2); 
	cout << S2 << endl; 
	
	return 0; 
} 

