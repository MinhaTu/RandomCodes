#include <iostream>

using namespace std;

int soma (int n1, int d1, int n2, int d2){
	return ((n1*d2 + n2*d1)/(d1*d2));
}

int  mdc (int a, int b){
	if(b == 0){
		return a;
	}else{
		return mdc(b, a%b);
	}
}
int main(){
	int n1,d1,n2,d2,n,d, max;
	char c[3];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> n1 >> c[0] >> d1 
			>> c[1] >> n2 >> c[2] >> d2;
		if(c[1] == '+'){
			n = (n1*d2 + n2*d1);
			d = (d1*d2);
		}else if(c[1] == '-'){
			n = (n1*d2) - (n2*d1);
			d = d1*d2;
		}else if(c[1] == '*'){
			n = n1*n2;
			d = d1*d2;
		}else{
			n = n1*d2;
			d = n2*d1;
		}
		cout << n << '/' << d << " = ";
		max = mdc(n,d);
		n = n/max;
		d = d/max;
		cout << n << '/' << d << endl;

	}
	return 0;
}