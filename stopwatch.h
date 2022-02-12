#pragma once
#include <chrono>

class Stopwatch {
private:
    bool running;
    std::chrono::steady_clock::time_point beg;
    std::chrono::steady_clock::time_point end;
    std::chrono::steady_clock::duration time_span;
public:
    Stopwatch();
    ~Stopwatch() = default;
    void Start();
    void Stop();
    double Seconds();
};