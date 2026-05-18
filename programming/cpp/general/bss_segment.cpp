#include <iostream>

using namespace std;


// add int a[1000]
//size ./a.out
//size a.out
//   text    data     bss     dec     hex filename
//   1348     560    4032    5940    1734 a.out

// add int a[1000] = {1,2,3}
// size a.out
//   text    data     bss     dec     hex filename
//   1348    4576       8    5932    172c a.out
//

// add int a[1000] = {0}
//size a.out
//   text    data     bss     dec     hex filename
//   1348     560    4032    5940    1734 a.out

//int a[1000];
//int a[1000] = {1,2,3};
int a[1000] = {0};
int main()
{
	return 0;
}
