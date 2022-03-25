// ************************EIGHTY CHARACTER CODING AREA*************************// LANDSCAPE COMMENT SECTION LENGTH
/*
         .--.           stopwatch.cpp
    .-._;.--.;_.-.      stopwatch.h
   (_.'_..--.._'._)         Creates a stopwatch object that works as a timer.
    /.' . 60 . '.\      There are 3 public functions to Start(), Stop(),
   // .      / . \\     and Seconds() which reports the total elapsed seconds.
  |; .      /   . |;    
  ||45    ()    15||
  |; .          . |;
   \\ .        . //
    \'._' 30 '_.'/
     '-._'--'_.-'
         `""`
*/

#include "stopwatch.h"
namespace CHRONO = std::chrono;

Stopwatch::Stopwatch()
{
    running = false;
    beg = CHRONO::steady_clock::now();
    end = beg;
    time_span = end - beg;
}

double Stopwatch::Seconds() const
{
    //Ensure we report the running time if requested
    return (!running)
        ? static_cast<double>(time_span.count()) *
         CHRONO::steady_clock::period::num / CHRONO::steady_clock::period::den
        : static_cast<double>((CHRONO::steady_clock::now() - beg).count()) *
         CHRONO::steady_clock::period::num / CHRONO::steady_clock::period::den;
}

void Stopwatch::Start()
{
    running = true;
    beg = CHRONO::steady_clock::now();
}

void Stopwatch::Stop()
{
    end = CHRONO::steady_clock::now();
    time_span = end - beg;
    running = false;
}

std::ostream& operator <<(std::ostream& os, const Stopwatch& t)
{
    os << std::format("Seconds: {}\n", t.Seconds());
    return os;
}

/*
References:
https://www.cplusplus.com/reference/chrono/steady_clock/now/
https://en.cppreference.com/w/cpp/chrono/steady_clock

Art by jgs
https://www.asciiart.eu/electronics/clocks

Author:
    Jeffrey S. Rankin
    http://jsrankin.com
    admin@jsrankin.com
*/
