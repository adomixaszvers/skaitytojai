#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

const char DFPav[] = "duom.txt";
const char RFPav[] = "rez.txt";
const int MAX_N = 30;

int main() {
	int n;
	int skaiciai[MAX_N];

	ifstream df (DFPav);
	df >> n;
	for(int i=0; i<n; i++)
		df >> skaiciai[i]; //nuskaitau į masyvą
	df.close();

	int s=0;
	for(int i=0; i<n; i++)
		s += skaiciai[i]; //pridedu kiekvieną panaudotą masyvo elementą
	int vidutiniskai = round(((double) s)/n); //reikia paverst s į double, kad dalybos rezultatas gautųsi su kableliu
	//o round funkcija apvalina iki sveikos dalies
	

	double per_menesi = ((double) s)/(n*10);

	ofstream rf (RFPav);

	rf << s << endl;
	rf << vidutiniskai << endl;
	rf << setprecision(2) << per_menesi << endl;

	rf.close();
}
