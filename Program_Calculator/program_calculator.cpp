// Import
#include <iostream> 

// using namespace std;


// Kelas
int main(int argc, char const *argv[])
{
	std::cout << "\t\t\t\tC++ Program_C++\t\t\t\t" << std::endl;
	std::cout << " " 						 << std::endl;

	float nilai1 , nilai2 , hasil;
	int menu, m1, m2, hasilm ;

	do {

		std::cout << "Menu Perhitungan : "	 << std::endl;
		std::cout << " " 					 << std::endl;
		std::cout << "1. Penjumlahan  + "    << std::endl;
		std::cout << "2. Pengurangan  - "    << std::endl;
		std::cout << "3. Perkalian    x "    << std::endl;
		std::cout << "4. Pembagian    : "    << std::endl;
		std::cout << "5. Modulus      % "    << std::endl;
		std::cout << "6. Keluar      Exit "  << std::endl;
		std::cout << " "               		 << std::endl;
		std::cout << "Ketik di sini\t: ";
		std::cin >> menu;

		switch ( menu )
		{
			case 1 :

				std::cout << "\t\tPenjumlahan\t\t" << std::endl;
				// input
				std::cout << "Masukan Nilai_1 : ";
				std::cin >> nilai1;

				std::cout << "Masukan Nilai_2 : ";
				std::cin >> nilai2;

				hasil = nilai1 + nilai2;

				// Output_Penjumlahan

				std::cout << "Hasil dari " ;
				std::cout << nilai1;  
				std::cout << " + " ;
				std::cout << nilai2; 
				std::cout << " = "; 
				std::cout << hasil << std::endl;
				break;
		
			case 2 :

				std::cout << "\t\tPengurangan\t\t" << std::endl;
				// input
				std::cout << "Masukan Nilai_1 : ";
				std::cin >> nilai1;

				std::cout << "Masukan Nilai_2 : ";
				std::cin >> nilai2;

				hasil = nilai1 - nilai2;

				// Output_Penjumlahan
				std::cout << "Hasil dari " ;
				std::cout << nilai1;  
				std::cout << " - " ;
				std::cout << nilai2; 
				std::cout << " = "; 
				std::cout << hasil << std::endl;
				break;
		
			case 3 :

				std::cout << "\t\tPerkalian\t\t" << std::endl;
				// input
				std::cout << "Masukan Nilai_1 : ";
				std::cin >> nilai1;

				std::cout << "Masukan Nilai_2 : ";
				std::cin >> nilai2;

				hasil = nilai1 * nilai2;

				// Output_Penjumlahan
				std::cout << "Hasil dari " ;
				std::cout << nilai1;  
				std::cout << " x " ;
				std::cout << nilai2; 
				std::cout << " = "; 
				std::cout << hasil << std::endl;
				break;
	
			case 4 :

				std::cout << "\t\tPembagian\t\t" <<std::endl;

				// input
				std::cout << "Masukan Nilai_1 : ";
				std::cin >> nilai1;

				std::cout << "Masukan Nilai_2 : ";
				std::cin >> nilai2;

				hasil = nilai1 / nilai2;

				// Output_Penjumlahan
				std::cout << "Hasil dari " ;
				std::cout << nilai1;  
				std::cout << " : " ;
				std::cout << nilai2; 
				std::cout << " = "; 
				std::cout << hasil << std::endl;
				break;
		
			case 5 :

				std::cout << "\t\tModulus\t\t" <<std::endl;

				// input
				std::cout << "Masukan Nilai_1 : ";
				std::cin >> m1;

				std::cout << "Masukan Nilai_2 : ";
				std::cin >> m2;

				hasilm = m1 % m2;

				// Output_Penjumlahan
				std::cout << "Hasil dari  " ;
				std::cout << m1;  
				std::cout << " % " ;
				std::cout << m2; 
				std::cout << " = "; 
				std::cout << hasilm << std::endl;
				break;

			default :

				std::cout << "Thanks For Trying My Program : " << std::endl;
				exit (0);

		}

	} while (true);

	
	std::cin.get;

	return 0;

}