//HALİME BOZKIR
#include<iostream>   //input-output icin iostream kutuphanesini cagırdım.  
using namespace std;
class complex{       //complex adında class olusturdum.
	private:
		double r;       //değişkenler tanımladım.Bu değişkenler karmaşık sayimizin real ve image kısımlarını belirleyecek.
		double i;
	public:
		void initialize(double,double);    //class icinde fonksiyonlarımı tanımladım.
		double get_real();
		double get_imag();
		complex Complex_add(complex);
		complex Complex_sub(complex);
		complex Complex_mult(complex);
}ob1,ob2;    //son olarak nesnelerimi tanımladım.
void complex::initialize(double a,double b){
	r=a;               
	i=b;             //private değişkenlere ulaşabilmek için yeni değişkenlerimi atadım.
}
double complex::get_real(){   //karmaşık sayımızın real kısmını döndürür.
	return r;
}
double complex::get_imag(){   //karmaşık sayımızın image kısmını döndürür.
	return i;
}
complex complex::Complex_add(complex x){
	r=r+x.get_real();      //real kısımları toplar.
	i=i+x.get_imag();      //image kısımları toplar.
}
complex complex::Complex_sub(complex x){
	r=r-x.get_real();     //real kısımların farkını alır.
	i=i-x.get_imag();     //image kısımların farkını alır.
}
complex complex::Complex_mult(complex x){
	r=r*x.get_real();    //real kısımları çarpar.
	i=i*x.get_imag();    //image kısımları çarpar.
}
int main()
{
	ob1.initialize(2,3);   //nesne kullanarak ilk karmaşık sayımı tanımladım.
	ob2.initialize(5,6);   //nesne kullanarak ikinci karmaşık sayımı tanımladım.
	ob1.Complex_add(ob2);  //karmaşık sayıları toplayacağım fonksiyonu çağırdım.
	cout<<ob1.get_real()<<" "<<ob1.get_imag()<<endl;
	ob1.Complex_sub(ob2);  //karmaşık sayıları birbirinden çıkaracağım fonksiyonu çağırdım.
	cout<<ob1.get_real()<<" "<<ob1.get_imag()<<endl;
	ob1.Complex_mult(ob2);  //karmaşık sayıları çarpacağım fonksiyonu çağırdım.
	cout<<ob1.get_real()<<" "<<ob1.get_imag()<<endl;
	return 0;
}
