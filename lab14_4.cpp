#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &FT,int &HD, int &FHD, int &TS){
	int Money[]{50,100,500,1000};

	FT=Money[rand()%4];
	
	do {
		HD=Money[rand()%4];
	}
	while(HD==FT);

	do {
		FHD=Money[rand()%4];
	}
	while(FHD==FT||FHD==HD);
	
	do {
		TS=Money[rand()%4];
	}
	while(TS==HD||TS==FT||TS==FHD);

}