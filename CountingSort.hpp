/**
 * @file CountingSort.hpp
 * @author Nicholas Szul
 * @brief Counting Sort prototype
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <unordered_map>
#include <utility>
#include <chrono>
/**
 * @brief Output the box plot using countingsort
 * 
 * @param header 
 * @param data 
 */
void countingSort(const std::string & header, std::vector<int> data);