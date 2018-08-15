#include<iostream>
#include<exception>
using namespace std;
struct Myexception : public exception{
	const char *test() const throw(){
	
		
	
		return "C++ Error";
	}
};
int main()
{	
	try
	{
		
		throw Myexception();
	}catch(Myexception& e){
	std :: cout<<"The exception is"<<std::endl;
	std :: cout<<e.test()<<std::endl;
        }
       return 0;
}
