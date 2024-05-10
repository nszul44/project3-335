/**
 * @file QuickSelect1.hpp
 * @author Nicholas Szul
 * @brief interface for quickselect1
 * @version 0.1
 * @date 2024-05-06
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


 
void insertionSort1( std::vector<int> & a,  const int left,  const int right);
 
const int & median3( std::vector<int> & a, int left, int right );

void quickSelect( std::vector<int> & a, int left, int right, int k );

void quickSelect1 (const std::string & header, std::vector<int> data);