#include <iostream>
#include <cstring>
using namespace std;
class word 
{
  private:
	static const int N=50; //Data members of the class
  public:
	char arr[N];   //Has all the methods including the constructor
	word() { strcpy(arr,""); } 			
	word(const char *s) { strcpy(arr,s); } 	
	void getword() { cin >> arr; }
	void printword() { cout << arr << endl; }
	char str[];
	int wordlen() { return strlen(arr); }
	int wordlen(char *s) { return strlen(s);}
	int no_occ(char c) { 
		char *p = arr;
		int count = 0;
		while (*p) { if (*p == c) count++; p++; }
		return count;
	} // end of the member function
	
char * append(char *s) { 
/* Employing the standard string library function strcat(),  this function appends the given string s to the word, provided the word has enough storage to accommodate the concatenated string. If it doesn’t, then an appropriate message is printed. */
if (wordlen() + wordlen(s) <= N) {
return strcat(arr, s);
}
else{
    cout<<"The length limit exceeded"<<endl;
    return s;
}
}
string operator+(word w) {
		// Has the same functionality as append(), but does so by overloading the “+” 
		string str;
        str += arr;
        str += w  ;
		return str;
	}
	bool isPalin() {	// checks if the word is a palindrome or not
		char temp[N];
		strcpy(temp,arr);
		if (strcmp(strrev(temp),arr) == 0) 
return 1;
		else 
return 0;
	}
	char * strrev(char *s) {
/* This member function reverses the string s without using any other additional array!
*/
int a = wordlen(s);
for (int i=0; i< a/2; i++)
	swap(s[i], s[a-i-1]);
		return s;
	}
};

int main() {
  word w1, w2("Plaksha ");
  w1.getword();
  if (w1.isPalin() == 1)
     cout << "Palindrome\n";
  else 
     cout << "Not palindrome\n";
  w1.append(w2.arr);
  w1.printword();
  cout << w1+w2 << endl;
  w1.printword();
  return 0;
}