//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 6.......................................=
//                                                                                                      =
//=======================================================================================================
#include <iostream>
using namespace std;

int num() {

    int i, j;
    int x = 1;
	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= i;j++) {

			cout << x * x << " ";
			x++;

		}
		cout << endl;
	}

	// ............Output.................................

	/*
	
						1
						4 9
						16 25 36
						49 64 81 100
						121 144 169 196 225
	
	*/

	//...................................How it work...................................
	//it is incremented by using X
	// for ine 1   as it is a multiple with itself  x * x
	// it is incremented as 1 2 3 4 5
	// in first line 1 * 1
	//in 2nd line 2 *2 and 3 * 3
	//and so on


	//                  j    1 2 3 4 5 
	//               i
	//				1	     1
	//				2	     4 9
	//				3	     16 25 36
	//				4	     49 64 81 100
	//				5	     121 144 169 196 225
	
	//here we can see the values of i and j and can see how it is incremented.....................
	// no of coloum depend upon outer loop


	cout << "==========================================================================" << endl;
	return 0;
}
int num1() {

	int i, j;
	int x = 1;
	for (i = 0;i < 5;i++) {
		for (j = 0;j <= i;j++) {

			cout << x - i << " ";
			x++;

		}
		cout << endl;
	}

	//..............................Output.......................

	/*
	
	
				1
				1 2
				2 3 4
				4 5 6 7
				7 8 9 10 11
	
	*/

	//........................How it work......................

	//here for the first time x = 1 and i and j = 0  
	// so for 1st line output is 1

	//for 2nd line i and j = 2 and x is incremented as the loop is running again and again
	//it incremented to 2 and 3 and out put is = 1 2

	//for third line output is  = 2 3 4 
	//for 4th line output is = 4 5 6 7
	//for 5th line output is =  7 8 9 10 11
	// 
	// along with all this the output is incremented by 1 again and again
	// 

	//  i | j         | output     | x - i
	//----|-----------|------------|-----------------------
	//  0 | 0         | 1          |   
	//  1 | 0 1       | 1 2        |
	//  2 | 0 1 2     | 2 3 4      |
	//  3 | 0 1 2 3   | 4 5 6 7    |
	//  4 | 0 1 2 3 4 | 7 8 9 10 11|

	cout << "==========================================================================" << endl;  
	return 0;
}
int num2() {

	int i, j;
	int x = 1;
	for (i = 1;i <= 5;i++) {
		x = 1;
		for (j = 1;j <= i;j++) {

			cout << x  << " ";
			x = x * (i - j) / j;
				
		}
		cout << endl;
	}
	//..............................Output...................................

	/*
	
				1
				1 1
				1 2 1
				1 3 3 1
				1 4 6 4 1
	
	
	*/

	// .....................How it Work............................................

	//for the first time i = 1 and the loop for j will also run for 1 time and output will be 1
	// 
	//  i | j         | output     | x = x * ( i - j ) / j
	//----|-----------|------------|-----------------------
	//  1 | 1         | 1          |   
	//  2 | 1 2       | 1 1        |
	//  3 | 1 2 3     | 1 2 1      |
	//  4 | 1 2 3 4   | 1 3 3 1    |
	//  5 | 1 2 3 4 5 | 1 4 6 4 1  |

	//with increment of value loop will run and formula will be applied 
	// onr by one...............................


	cout << "==========================================================================" << endl;
	return 0;
}
int num3() {

	int i, j;
	
	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= 5;j++) {

			cout << i % 2 << " ";
			

		}
		cout << endl;
	}
	//.......................OUtput..............................

	/*
	
				1 1 1 1 1
				0 0 0 0 0
				1 1 1 1 1
				0 0 0 0 0
				1 1 1 1 1
	
	*/

	cout << "==========================================================================" << endl;
	return 0;

}
int num4() {

	int i, j;

	for (i = 1;i <= 5;i++) {
		for (j = 0;j < 5;j++) {

			cout << j % 2 << " ";


		}
		cout << endl;
	}
	//.......................OUtput..............................

	/*
				0 1 0 1 0
				0 1 0 1 0
				0 1 0 1 0
				0 1 0 1 0
				0 1 0 1 0

	*/

	cout << "==========================================================================" << endl;
	return 0;

}
int num5() {

	int i, j;

	for (i = 1;i <= 5;i++) {
		for (j = 1;j <= 5;j++) {

			cout << j % 2 << " ";


		}
		cout << endl;
	}
	//.......................OUtput..............................

	/*
				1 0 1 0 1
				1 0 1 0 1
				1 0 1 0 1
				1 0 1 0 1
				1 0 1 0 1

	*/

	cout << "==========================================================================" << endl;
	return 0;

}
int num6() {

	int i, j;

	for (i = 0;i < 5;i++) {
		for (j = 1;j <= 5;j++) {

			cout << i % 2 << " ";


		}
		cout << endl;
	}
	//.......................OUtput..............................

	/*
						0 0 0 0 0
						1 1 1 1 1
						0 0 0 0 0
						1 1 1 1 1
						0 0 0 0 0
	*/

	cout << "==========================================================================" << endl;
	return 0;

}
int main()
{
	num();
	num1();
	num2();
	num3();
	num4();
	num5();
	num6();
}

