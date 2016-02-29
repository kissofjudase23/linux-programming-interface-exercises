
//let C++ can invoke C library correctly.
extern "C"{
#include <pthread.h>
#include "tlpi_hdr.h"
}
#include <iostream>
#include <stdexcept>

using namespace std;

class my_except: public std::exception
{
	public:
		explicit my_except(const char* pStr)throw();
		virtual ~my_except() throw(){};
		virtual const char* what() const throw();
	private:
		const char* pMessage;
};
my_except::my_except(const char* pStr="default string")throw():pMessage(pStr){}
const char* my_except::what()const throw(){
	return pMessage;
}

int main (int argc,char** argv){

 try{
	 throw std::range_error("fuckeyet");
	 //throw my_except();
 }
 catch(range_error& rr){
	 cout <<rr.what()<<endl;
 }
 catch(exception& except){
	 cout <<except.what()<<endl;
 }

 exit (EXIT_SUCCESS);
}
