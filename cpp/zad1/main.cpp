#include <iostream>

using namespace std;

int main(){
	cout<<"Podaj wiek"<<endl;
	int x;
	cin >>x;
	cout<<"podaj wiek nastepnej osoby"<<endl;
	int y;
	cin >>y;
	cout<<"w sumie macie lat ="<<x+y<<endl;
	
	if(x+y >100){
	cout<<"macie w sumie wiecej niz 100lat"<<endl;
}
else{
cout<<"macie mniej niz 100 lat"<<endl;
}
	cout<<"daj wiek"<<endl;
	int g;
	cin>>g;
	cout<<"daj wiek 2 osoby"<<endl;
	int h;
	cin>>h;
	if(g>h){
cout<<"1 osoba jest starsza"<<endl;
}else if(h>g){
cout<<"2 osoba jest starza"<<endl;
}else{
cout<<"tyle samo lat maja"<<endl;
}

	return 0;
}
