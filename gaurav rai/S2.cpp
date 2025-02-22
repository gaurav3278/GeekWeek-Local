// C++ Program to check whether 
// a string pangram or not using STL 

#include <bits/stdc++.h> 
using namespace std; 

// Function to return given string 
// str is pangrams yes or no 
string pangrams(string s) 
{ 

	// Initialization of count 
	int count = 0; 

	// Convert each letter into 
	// uppercase to avoid counting 
	// of both uppercase and 
	// lowercase as different letters 
	transform(s.begin(), 
			s.end(), 
			s.begin(), 
			::toupper); 

	// Sort the string 
	sort(s.begin(), s.end()); 

	// Count distinct alphabets 
	for (int i = 0; i < s.size(); i++) { 
		if (s[i] != s[i + 1]) 
			count++; 
	} 
	
	// If count is 27 then the string 
	// contains all the alphabets 
	// including space as a 
	// distinct character 
	if (count == 27) 
		return "Yes"; 

	else
		return "No"; 
} 

// Driver code 
int main() 
{ 
	// Given string str 
	string str = "We promptly "
				"judged antique"
				"ivory buckles for "
				"the next prize"; 

	// Function Call 
	cout << pangrams(str); 

	return 0; 
}

