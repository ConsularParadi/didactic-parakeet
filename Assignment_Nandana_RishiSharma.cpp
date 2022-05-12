#include<iostream>
#include<cstring>

using namespace std;   // c string library- string functions

class word {
	private:
		static const int N=50;
	public:
		char arr[N];
		word() { strcpy(arr,"");} // constructor for empty string
		word(const char *s) { strcpy(arr, s);} // constructor or initializing the word
		
		void getword() {
		cout<<"Enter Word: "<<endl;
		cin>>arr;
		}
		
		void printword(){
		cout<< arr<<endl;
		}
		
		int wordlen(){
		return strlen(arr);
		}
		
		int no_occ(char c){   //counts the number of occurance of character in the word
			int count =0;
			char *p=arr;
			
			while (*p)
			{
				if(*p==c)
				count++;
				p++;
				}
	
			
			return count; // end of the member function
		}
		char *append(word s){
			
			if (wordlen() + strlen(s) <= N)
			{
   			 cout<<strcat(arr , s);

			}
			else
			{			
   			 cout<<"String length limit exceeded!";
			}
			return s;
		}
		};  // end of class function
		
int main(){
	word w1, w2("hehe");
	char *x;
	w1.getword(); // invoking the member function to get input from the user
	x = w1.append();
	cout << "Your concatenated word is "<<x;
	return 0;
	}		