#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char cadena[128];
	float frecuencia[26] = {0};
	char letra = 'a';
	float IC=0.0;
	int N=0;
	ifstream fe("nombre.txt"); 


	while(fe.getline(cadena, 128)){

		for(int i=0;i<128;i++){
			if(cadena[i]>='A' && cadena[i]<='Z'){
				frecuencia[cadena[i]-65]++;
				N++;
			}
			else if(cadena[i]=='\n' || cadena[i]=='\0'){
				break;
			}
		}
	}

	for(int i=0;i<26;i++){
		IC+=(frecuencia[i]*(frecuencia[i]-1))/(N*(N-1));
	}

	cout<<IC<<endl;

	return 0;
}