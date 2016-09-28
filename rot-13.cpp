#include<iostream>
#include<cctype>
#include<fstream>
/**
* Author: Charlemagne Javinal
* Date: 28 Sept. 2016
* Version: v0.1
* Purpose: To make a rot-13 ciphered version of a given filename.
* 
*/

using namespace std;

void toread(string src, string dest);
char torot13(char s);



int main(){
	
	string source;
	string output;
	cout<<"Enter filename or pathname to be cipher: ";
	getline(cin, source);
	cout<<"Enter filename to encode the output: ";
	getline(cin, output);
	toread(source, output);	
	
	return 0;
}


void toread(string src, string dest="output.txt"){
	/**
	*toread() function takes two arguments.
	*first is the source(src) filename that shall be ciphered.
	*second will be the file where the ciphered version of the
	*src will be written.
	*/
	
	
	char letter;
	char rotten;
	ifstream readSource(src);
	if (! readSource){
		cout<<"Error opening file" <<endl;
		return;
	}
	else {
		ofstream output(dest);
		if(! output){
			cout<<"Error writing output file"<<endl;
			return;
		}
		else{
			for(int i = 0; !readSource.eof(); i++){
				readSource.get(letter);
				if((letter>='A' && letter<='Z') ||
					(letter>='a' && letter<='z')){
					rotten = torot13(letter);
					output << rotten;
				}
				else{
					output << letter;
				}
			}
		}
		
	output.close();
	}
	
	readSource.close();
	
	
}// end toread


char torot13(char s){
	if((s >= 'N' && s <= 'Z') || (s >= 'n' && s <= 'z'))
		s-=13; 
	
	else
		s+=13;

	return s;

}
