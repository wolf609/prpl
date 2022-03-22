#include <iostream>

using namespace std;


bool saguado(int b){
	if(b==1||b==0)
	{
		return false;
	}
	for(int i=2; i<b; i++){
		if(b%i==0){
			return false;
		}
		else{
			return true;
		}
	}
}

int main() {
	int k, i=1;
	
	cout << "ile liczb pierwszych wypisac?: ";
	cin >> k;
	k=k*2;
	while(i<=k){
		if(saguado(i)){
			cout << i << " ";
		}
	i++;
	}
	return 0;
}
