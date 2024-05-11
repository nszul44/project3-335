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
#include <chrono>


 
void insertionSort1( std::vector<int> & a,  const int left,  const int right);
 /**
 * Return median of left, center, and right.
 * Order these and hide the pivot.
 */
const int & median3( std::vector<int> & a, int left, int right );
 /*
 * Internal selection method that makes recursive calls.
 * Uses median-of-three partitioning and a cutoff of 10.
 * Places the kth smallest item in a[k-1].
 * a is an array of Comparable items.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
 * k is the desired rank (1 is minimum) in the entire array.
 */
void quickSelect( std::vector<int> & a, int left, int right, int k );
/**
 * @brief calls quickselect 3 times for p25, p50, p75
 * 
 * @param header 
 * @param data 
 */
void quickSelect1 (const std::string & header, std::vector<int> data);