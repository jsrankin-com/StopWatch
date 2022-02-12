// ************************EIGHTY CHARACTER CODING AREA*************************// LANDSCAPE COMMENT SECTION LENGTH
/*
         .--.           main.cpp
    .-._;.--.;_.-.      
   (_.'_..--.._'._)         Tests the stopwatch object in stopwatch.cpp and
    /.' . 60 . '.\      stopwatch.h. Requires C++11.
   // .      / . \\     
  |; .      /   . |;
  ||45    ()    15||
  |; .          . |;
   \\ .        . //
    \'._' 30 '_.'/
     '-._'--'_.-'
         `""`
*/
#include "stopwatch.h"
#include <iostream>
int main() {
	Stopwatch t;
    t.Start();
    std::cout << "Starting time..." << std::endl;

    std::cout << "Stopping time..." << std::endl;
    t.Stop();
    std::cout << '\t' << t.Seconds() << std::endl;

    t.Start();
    std::cout << "Starting time..." << std::endl;

    std::cout << "Checking time..." << std::endl;
    std::cout << '\t' << t.Seconds() << std::endl;

    std::cout << "Stopping time..." << std::endl;
    t.Stop();
    std::cout << '\t' << t.Seconds() << std::endl;

    return 0;

}