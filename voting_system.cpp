#include<iostream>

using namespace std;
int main(){
	int age;
	 do{
	 
	 cout<<" \n Enter the age\n ";
	 cin>>age;

	 cout<<" Entered age is :"<<age;
	 if(age>=18){
	 	cout<<"\n	You are Eligible for voting";
	  }
	 else{
	 	cout<<"\n	your age is less than 18 So you are not Eligible for voting  ";
	 }
}while(1);
	 return 0;
	
}
