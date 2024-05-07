/**
 * @file InsertionSort.hpp
 * @author Nicholas Szul
 * @brief Implementation of insertion sort
 * @version 0.1
 * @date 2024-05-04
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


 /**
 * Simple insertion sort.
 */
 
 void insertionSort( std::vector<int> & a,  const int  & left,  const int & right)
 {
 for( int p = left + 1; p < right; ++p )
 {
 int tmp = std::move( a[ p ] );

 int j;
 for( j = p; j > left && tmp < a[ j - 1 ]; --j )
 a[ j ] = std::move( a[ j - 1 ] );
 a[ j ] = std::move( tmp );
 }
 }
 
