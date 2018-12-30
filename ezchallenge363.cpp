#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//Remember, passing one argument will make argc==2 as the progam name sis counted as one fo them
 int main(int argc, char *argv[]){
 	if (argc!=2){
 		cout<< "Program needs exactly one argument."<<endl;
 	} else {
 		//check for ie
 		//ret is a pointer
 		char *ret= strstr(argv[1],"ei"); /*strstr returns a pointer. *ret will 
 		contain the dereferenced value of the pointer. ret contains the*/
 		/*char* ret is a very special case. when outputting ret, it will give you the rest of the string*/
 		if(ret){
 			if (*(ret-1)=='c'){
 				cout<<"True"<<endl;
 			}else{
 				cout<<"False"<<endl;
 			}
 		}else{
 			ret= strstr(argv[1],"ie");
 			if (ret){
 				if (*(ret-1)=='c'){
 					cout<<"False"<<endl;
 				}else{
 					cout<<"True"<<endl;
 				}
 			}
 		}
 		return 0;

 			//if ie detected check that its immediately after C
 		//no ie then output true

 	}

 }

 /*i before e except after c
 receive true
 sleigh false
 believe true
 icier False*/