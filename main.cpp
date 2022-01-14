#include <iostream>
#include <chrono>
#include <thread>
// replicas = pods
int main(int argc, char const *argv[])
{
  using namespace std::chrono_literals;
  std::cout << "Hello waiter!\n" << std::flush;
  while (true)
  {
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(2000ms);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end-start;
    std::cout << "Waited " << elapsed.count() << " ms\n";
  }
  return 0;
}
