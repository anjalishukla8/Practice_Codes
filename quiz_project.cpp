#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;
int main(){
	system("Color DE");
	int choice,ans,score=0;
	do{
	
	cout<<"On which programming language you want to start your quiz!!"<<endl;
	cout<<"1. C\t2.C++\t3.Java"<<endl;
	cout<<"Enter 4 to exit "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			
			cout<<"You have decided to start your quiz on C"<<endl;
			cout<<"Here are 5 questions ,4 marks will be given for each correct answer and -1 for each incorrect answer "<<endl;
			cout<<endl;
			cout<<"-------------------------LET'S START--------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Which of the following special symbol allowed in a variable name?"<<endl;
			cout<<"1. * (asterisk)\n2. | (pipeline)\n3. - (hyphen)\n4. _ (underscore)"<<endl;
			cin>>ans;
		    if(ans==1 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"How would you round off a value from 1.66 to 2.0?"<<endl;
			cout<<"1. ceil(1.66)\n2. floor(1.66)\n3. roundup(1.66)\n4. roundin(1.66)"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"Who invented C programming language?"<<endl;
			cout<<"1. Bjarne Stroustrup\n2. Dennis Ritchie\n3. James Goslin\n4. Charles Cabbin"<<endl;
			cin>>ans;
			if(ans==4 || ans==1 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"How many keywords are there in C language?"<<endl;
			cout<<"1. 32\n2. 35\n3. 37\n4. 42"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"By default a real number is treated as a"<<endl;
			cout<<"1. float\n2. double\n3. int\n4. long long"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"------------------------------------------"<<endl;
			cout<<"your total score is : "<<score<<endl<<endl;
			cout<<endl;
			break;
			
			case 2:
			cout<<"You have decided to start your quiz on C++"<<endl;
			cout<<"Here are 5 questions ,4 marks will be given for each correct answer and -1 for each incorrect answer "<<endl;
			cout<<endl;
			cout<<"-------------------------LET'S START--------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"C++ is superset of which programming language"<<endl;
			cout<<"1. java\n2. c#\n3. C\n4. fortran"<<endl;
			cin>>ans;
			if(ans==1 || ans==2 || ans==4) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"which of the following is an identifier not a keyword in c++?"<<endl;
			cout<<"1. cout\n2. else\n3. switch\n4. if"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"Who invented C++ programming language?"<<endl;
			cout<<"1. Bjarne Stroustrup\n2. Dennis Ritchie\n3. James Goslin\n4. Charles Cabbin"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"How many keywords are there in C++ language?"<<endl;
			cout<<"1. 95\n2. 35\n3. 68\n4. 42"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"C++ follows which paradigm?"<<endl;
			cout<<"1. pop\n2. oop\n3. both\n4. none of these"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==1) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"your total score is : "<<score<<endl<<endl;
			cout<<endl;
			break;
			
			
			case 3:
			cout<<"You have decided to start your quiz on java"<<endl;
			cout<<"Here are 5 questions ,4 marks will be given for each correct answer and -1 for each incorrect answer "<<endl;
			cout<<endl;
			cout<<"-------------------------LET'S START--------------------------------"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"which of the following is not an access specifier in java?"<<endl;
			cout<<"1. public\n2. | private\n3. - protect\n4. protected"<<endl;
			cin>>ans;
			if(ans==1 || ans==2 || ans==4) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"what is the size of double variable?"<<endl;
			cout<<"1. 8bit\n2. 16bit\n3. 32bit\n4. 64bit"<<endl;
			cin>>ans;
			if(ans==1 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"Who invented java programming language?"<<endl;
			cout<<"1. Bjarne Stroustrup\n2. Dennis Ritchie\n3. James Goslin\n4. Charles Cabbin"<<endl;
			cin>>ans;
			if(ans==4 || ans==1 || ans==2) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"How many keywords are there in java language?"<<endl;
			cout<<"1. 67\n2. 35\n3. 68\n4. 42"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==3) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"What is the default value of string variable"<<endl;
			cout<<"1. 0\n2. not defined\n3. null\n4. 1"<<endl;
			cin>>ans;
			if(ans==4 || ans==2 || ans==1) {
			score=score-1;	
			}
			else{
				score=score+4;
			}
			cout<<endl;
			cout<<"your total score is : "<<score<<endl<<endl;
			cout<<endl;
			break;
			
		case 4:
		exit(0);
		default:
		cout<<"please enter correct choice!"<<endl;	
				
			
	}
}while(1);
	return 0;
}
