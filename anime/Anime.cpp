#include <iostream> 
#include <fstream> 
#include <string.h>
#include<cstdlib>

using namespace std; 

int main (int argc,char* argv[]){
    string line;
    fstream naruto("Naruto.txt", ios::in | ios::app), monkey("Monkey.txt", ios::in | ios::app), cat("cat.txt",ios::in | ios::app);
   

    if( strcmp(argv[1],"Naruto")==0 || strcmp(argv[1],"naruto")==0){
        while (getline(naruto,line))
        {
            cout<<line<<endl;
        }        
    }
    if(strcmp(argv[1],"Monkey")==0 || strcmp(argv[1],"monkey")==0){
        while (getline(monkey,line))
        {
            cout<<line<<endl;
        }
    }
    if (strcmp(argv[1],"cat")==0 || strcmp(argv[1],"Cat")==0){
        while (getline(cat,line))
        {
            cout<<line<<endl;
        }
    }



    return 0; 
}