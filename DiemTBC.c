#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	float Ly, Hoa, Sinh, Tong, TBC;
	printf ("Moi ban nhap diem Ly: ");
	scanf ("%f", &Ly);
	printf ("Moi ban nhap diem Hoa: ");
	scanf ("%f", &Hoa);
	printf ("Moi ban nhap diem Sinh: ");
	scanf ("%f", &Sinh);
	
	Tong = Ly + Hoa + Sinh;
	TBC = Tong/3;
	
	printf ("Tong diem 3 mon la: %f\n", Tong);
	printf ("Trung binh cong 3 mon la: %f", TBC);
	
	return 0;
}
