/**
 * @file QuickSelect2.hpp
 * @author Nicholas Szul
 * @brief interface for quickselect2
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
#include <algorithm>
void insertionSort2( std::vector<int> & a,  const int left,  const int right);
 

const int & median32( std::vector<int> & a, int left, int right );
void quickSelect2( std::vector<int> & a, int left, int right, std::vector<int> & keys );
void quickSelect2(const std::string & header, std::vector<int> data);