#include<iostream>
using namespace std;
class Intro {
public :
	void introduction() {
	
            cout<<"                       INTRODUCTION TO C++                        "<<endl;
			cout<<"                       ___________________                        "<<endl;
			cout<<endl;
			cout<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                       |"<<endl;
    cout<<"|                1. C++ is a multi-paradigm programming language that supports                          |"<<endl;
    cout<<"|                   object-oriented programming (OOP).                                                  |"<<endl;
	cout<<"|                2. It was created by Bjarne Stroustrup in 1983 at Bell Labs.                           |"<<endl;
	cout<<"|                3. C++ is an extension (superset) of C programming, and the                            |"<<endl;
	cout<<"|                   programs which are written in c language can run in C++                             |"<<endl;
	cout<<"|                   compilers.                                                                          |"<<endl;
	cout<<"|                4. C++ is a middle-level language.                                                     |"<<endl;
	cout<<"|                                                                                                       |"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	fflush(stdin);
}
void difference1 () {
	
		cout<<"                       DIFFERENCE BETWEEN C AND C++                      "<<endl;
		cout<<"                       ____________________________                      "<<endl;
		cout<<endl;
		cout<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                         |"<<endl;
    cout<<"|                                                                                                         |"<<endl;
    cout<<"|                  The main difference between both these languages is C is a                             |"<<endl;
    cout<<"|                  procedural programming language and does not support                                   |"<<endl;
	cout<<"|                  classes and objects, while C++ is a combination of both                                |"<<endl;
	cout<<"|                  procedural and object-oriented programming languages.                                  |"<<endl;
	cout<<"|                  On the other hand, C++ supports both procedural and object-                            |"<<endl;
	cout<<"|                  oriented programming paradigms.                                                        |"<<endl;
	cout<<"|                                                                                                         |"<<endl;
	cout<<"|                                                                                                         |"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);
}
void difference2() {
        cout<<"                       DIFFERENCE BETWEEN C++ AND java                      "<<endl;
		cout<<"                       _______________________________                      "<<endl;
		cout<<endl;
		cout<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                         |"<<endl;
    cout<<"|                                                                                                         |"<<endl;
    cout<<"|              1. C++ uses only compiler, whereas Java uses compiler and interpreter both.                |"<<endl;
    cout<<"|              2. C++ supports both operator overloading & method overloading whereas Java                |"<<endl;
	cout<<"|                 only supports method overloading.                                                       |"<<endl;
	cout<<"|              3. C++ supports manual object management with the help of new and delete                   |"<<endl;
	cout<<"|                 keywords whereas Java has built-in automatic garbage collection.                        |"<<endl;
	cout<<"|                                                                                                         |"<<endl;
	cout<<"|                                                                                                         |"<<endl;
	cout<<"|                                                                                                         |"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);	
}
void datatype() {
	        cout<<"                       DATATYPES                      "<<endl;
		    cout<<"                       _________                      "<<endl;
		cout<<endl;
		cout<<endl;	
	cout<<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                                       |"<<endl;
    cout<<"|                                                                                                                       |"<<endl;
    cout<<"|         All variables use data-type during declaration to restrict the type of data to be stored.                     |"<<endl;
    cout<<"|         Therefore, we can say that data types are used to tell the variables the type of data                         |"<<endl;
	cout<<"|         it can store. Whenever a variable is defined in C++, the compiler allocates some memory                       |"<<endl;
	cout<<"|         for that variable based on the data-type with which it is declared.                                           |"<<endl;
	cout<<"|         Every data type requires a different amount of memory.                                                        |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
	cout<<"|         Data types in C++ is mainly divided into three types:                                                         |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
	cout<<"|         1. PRIMITIVE DATATYPES : These data types are built-in or predefined data types and can be used directly      |"<<endl;
	cout<<"|            by the user to declare variables. example: int, char , float, bool etc. Primitive data types available     |"<<endl;
	cout<<"|            in C++ are:                                                                                                |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
	cout<<"|             Integer                                                                                                   |"<<endl;
	cout<<"|             Character                                                                                                 |"<<endl;
	cout<<"|             Boolean                                                                                                   |"<<endl;
	cout<<"|             Floating Point                                                                                            |"<<endl;
	cout<<"|             Double Floating Point                                                                                     |"<<endl;
	cout<<"|             Valueless or Void                                                                                         |"<<endl;
	cout<<"|             Wide Character                                                                                            |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
	cout<<"|         2. DERIVED DATATYPES : The data-types that are derived from the primitive or built-in datatypes are referred  |"<<endl;
	cout<<"|            to as Derived Data Types.These can be of four types namely:                                                |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
    cout<<"|            Function                                                                                                   |"<<endl;
    cout<<"|            Array                                                                                                      |"<<endl;
    cout<<"|            Pointer                                                                                                    |"<<endl;
    cout<<"|            Reference                                                                                                  |"<<endl;
    cout<<"|                                                                                                                       |"<<endl;                                                                                                                              
	cout<<"|         3. Abstract or User-Defined Data Types: These data types are defined by user itself. Like, defining a class   |"<<endl;
	cout<<"|            in C++ or a structure. C++ provides the following user-defined datatypes:                                  |"<<endl;
	cout<<"|                                                                                                                       |"<<endl;
    cout<<"|             Class                                                                                                     |"<<endl;
    cout<<"|             Structure                                                                                                 |"<<endl;
    cout<<"|             Union                                                                                                     |"<<endl;
    cout<<"|             Enumeration                                                                                               |"<<endl;
    cout<<"|             Typedef defined DataType                                                                                  |"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);		
}
void keyword(){
	cout<<"                                                KEYWORDS IN C++                                                "<<endl;
    cout<<"                                                _______________                                                "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                              |"<<endl;
    cout<<"|                                                                                                              |"<<endl;
    cout<<"|                 Keyword is a predefined or reserved word in C++ library with a fixed meaning and             |"<<endl;
	cout<<"|                 used to perform an internal operation. C++ Language supports more than 64 keywords.          |"<<endl;
	cout<<"|			     Keywords are those words whose meaning is already defined by Compiler.                       |"<<endl;
	cout<<"|                 These keywords cannot be used as an identifier.                                              |"<<endl;
	cout<<"|                 for ex: for, break, continue, switch, int float, double, char, try, catch, while, etc.       |"<<endl;
    cout<<"|                                                                                                              |"<<endl;
	cout<<"|                                                                                                              |"<<endl;
	cout<<"|                                                                                                              |"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);	
}
void variables(){
	cout<<"                                                VARIABLES IN C++                                               "<<endl;
    cout<<"                                                _______________                                                "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                                  |"<<endl;
    cout<<"|                                                                                                                  |"<<endl;
    cout<<"|                 A variable is a name given to a memory location. It is the basic unit of storage in a program.   |"<<endl;
	cout<<"|                 The value stored in a variable can be changed during program execution.                          |"<<endl;
    cout<<"|                 A variable is only a name given to a memory location, all the operations done on the variable    |"<<endl;
	cout<<"|				 effects that memory location.                                                                    |"<<endl;
    cout<<"|                 In C++, all the variables must be declared before use.                                           |"<<endl;
	cout<<"|                                                                                                                  |"<<endl;
	cout<<"|                                                                                                                  |"<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);	
}
void operators(){
	cout<<"                                                OPERATORS IN C++                                               "<<endl;
    cout<<"                                                _______________                                                "<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                                  |"<<endl;
    cout<<"|                   C++ has many built-in operator types and they are classified as follows:                       |"<<endl;
    cout<<"|                   1. Arithmetic operators                                                                        |"<<endl;
	cout<<"|                   2. Relational operators                                                                        |"<<endl;
    cout<<"|                   3. Logical operator                                                                            |"<<endl;
	cout<<"|				   4. Bitwise opeartor                                                                            |"<<endl;
	cout<<"|				   5. Assignment operator                                                                         |"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------"<<endl;
		fflush(stdin);	
}
};
int main() 
{
	Intro i;
int choice; 


    cout<<"            ______________                                                                            "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |                     _______|_________        _______|__________                         "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |                            |                        |                                   "<<endl;
	cout<<"            |_____________               |                        |                                   "<<endl;
	cout<<endl;
	cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"|                                                                                                       |"<<endl;
    cout<<"|                                                                                                       |"<<endl;
    cout<<"|                                                                                                       |"<<endl;
	cout<<"|                      WELCOME TO COMPLETE C++ TUTORIAL BY ANJALI SHUKLA                                |"<<endl;
	cout<<"|                      __________________________________________________                               |"<<endl;
	cout<<"|                                                                                                       |"<<endl;
	cout<<"|                                                                                                       |"<<endl;
	cout<<"|                                                                                                       |"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	std::cout<<"Press <enter> to continue"; 
   std::cin.clear(); 
   std::cin.ignore() ; 
	cout<<"                                         SO  LETS  BEGIN                                                "<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Given below are the various topics of c++ language you can study here"<<endl;
	cout<<"_____________________________________________________________________"<<endl;
	cout<<endl;
	do{
	
	cout<<"1. Introduction to C++ programming"<<endl;
	cout<<"2. C vs C++ "<<endl;
	cout<<"3. C++ vs JAVA"<<endl;
	cout<<"4. Learn Datatypes"<<endl;
	cout<<"5. keywords"<<endl;
	cout<<"6. Variables"<<endl;
	cout<<"7. operators"<<endl;
    cout<<"8. close the tutorial"<<endl;
	cout<<endl;
	cout<<"PLEASE ENTER THE NUMBER OF TOPIC YOU WANT TO STUDY"<<endl;
	cin>>choice;
	
	switch(choice) {
		case 1:
			i.introduction();
		break;
	    case 2 :
	    	i.difference1();
	    	break;
	    	case 3:
	    		i.difference2();
	    		break;
	    		case 4:
	    			i.datatype();
	    			break;
	    			case 5:
	    				i.keyword();
	    				break;
	    				case 6:
	    					i.variables();
	    					break;
	    					case 7:
	    						i.operators();
	    						break;
	    			case 8:
	    				exit(0);
	    				default:
	    					cout<<"Enter correct choice"<<endl;

			
	}

}while(1);
return 0;
} 



