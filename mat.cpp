#include<iostream>
#include<string>

using namespace std;

namespace ariel{

	
	//a - collum, b - row, c - char1, d - char2.
    	string mat(int a,int b,char c,char d){
        //check odd number
	if(a%2==0 || b%2==0){
            throw runtime_error("wrong input - number needs to be odd");
        }
	//check if the number is smaller then 0
	if(a<0 || b<0){
            throw runtime_error("worng input - number needs to be grather than 0");
        }
	

	//str to built the matrix
        string str;
    	//for the matrix
    return str;
    }
}