/**
 * @file StdSort.cpp
 * @author Nicholas Szul
 * @brief implementation of the StdSort function
 * @version 0.1
 * @date 2024-04-29
 *
 * @copyright Copyright (c) 2024
 *
 */
#include "StdSort.hpp"

/**
 * @brief uses std::sort and prints out the appropriate data points
 * 
 * @param header 
 * @param data 
 */
void stdSort(const std::string &header, std::vector<int> data){
    const auto t1_start = std::chrono::steady_clock::now();
    std::sort(data.begin(), data.end());
     const auto t1_end = std::chrono::steady_clock::now();
  int t1 = std::chrono::duration <double, std::micro> (t1_end - t1_start).count();
    std::cout << header << "\n";
    std::cout << "Min: " << data.front() << "\n";
    std::cout << "P25: " << data[((data.size()/4) - 1)] << "\n";
    std::cout << "P50: " << data[((data.size()/2) - 1)] << "\n";
    std::cout << "P75: " << data[(((data.size()/4) * 3) - 1)] << "\n";
    std::cout << "Max: " << data.back() << "\n";
}