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

void stdSort(const std::string &header, std::vector<int> data){
    std::sort(data.begin(), data.end());
    std::cout << header << "\n";
    std::cout << "Min: " << data.front() << "\n";
    std::cout << "P25: " << data[(data.size()/4)] << "\n";
    std::cout << "P50: " << data[(data.size()/2)] << "\n";
    std::cout << "P75: " << data[((data.size()/4) * 3)] << "\n";
    std::cout << "Max: " << data.back() << "\n";
}