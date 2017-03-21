#include<iostream>
using namespace std;

bool equal(double num1,double num2)
{
	if(num1-num2>=-0.000001&&num2-num1<=0.000001)
		return true;
	else 
		return false;
}
double Power(double base,int exponent)
{
	//if(equal(base,0.0)&&exponent<=0)
	//	return 0.0;


	int absexponent=exponent;
	if(exponent<0)
		absexponent=-exponent;

	double result=1.0;
	for(int i=0;i<absexponent;++i){
		result*=base;
	}
	if(exponent<0)
		result=1.0/result;
	return result;
}
int main(){
//	int n;
//	double base,result;
//	cin>>base;
//	cin>>n;
//	result=Power(base,n);
	double result=Power(1.1,2);
	cout<<result<<endl;
	return 0;

}
