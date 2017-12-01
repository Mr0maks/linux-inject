#include <iostream>
#include <cstdlib>
using namespace std;

/*
 * hello()
 *
 * Hello world function exported by the sample library.
 *
 */

int hello() { 
	cout << "I just got loaded" << endl; 
}

/*
 * loadMsg()
 *
 * This function is automatically called when the sample library is injected
 * into a process. It calls hello() to output a message indicating that the
 * library has been loaded.
 *
 */

__attribute__((constructor))
void loadMsg()
{
        hello();
}
