import <iostream>;
import <format>;
using std::cout;
using std::endl;
using std::format;
//
int main() {
	//
	void convert(double*, size_t);
	//
	double temp[] = { 32., 70., 0., 45., 15. };
	double* pd = temp;
	//
	size_t n = (sizeof temp) / (sizeof temp[0]);
	//
	cout << "Farenheito laipsniai:\n ";
	for (auto temp_i : temp)
		cout << format("{:10.3f}  ", temp_i); 
	cout << endl;
	//
	convert(pd, n);
	// convert( temp, n );  - kvietimo alternatyva – vietoje rodyklės 
	//	                      perduodamas adresas, t.y. konstanta
	cout << "Celsijaus laipsniai:\n";
	for (auto temp_i : temp )
		cout << format("{:10.3f}  ", temp_i);
	cout << endl;
	//
}
//
void convert(double* p, size_t n) {
	for ( size_t i = 0; i < n; i++ )
		p[i] = (p[i] - 32.) * 5. / 9.;  // 1 būdas
		//*(p+i) = (*(p+i)-32.)*5./9.;  // 2 būdas
		//*p++ = (*p-32.)*5./9.;        // 3 būdas
}
