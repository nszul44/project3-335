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
#include <chrono>
/**
 * Simple insertion sort.
 */
void insertionSort2( std::vector<int> & a,  const int left,  const int right);

 /**
 * Return median of left, center, and right.
 * Order these and hide the pivot.
 */
const int & median32( std::vector<int> & a, int left, int right );
  /*
 * Internal selection method that makes recursive calls.
 * Uses median-of-three partitioning and a cutoff of 10.
 * Places the kth smallest item in a[k-1].
 * a is an array of Comparable items.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
 * k is the desired rank (1 is minimum) in the entire array.
 */
void quickSelect2( std::vector<int> & a, int left, int right, std::vector<int> & keys );
/**
 * @brief Creates the vector of keys and calls quickselect once
 * 
 * @param header 
 * @param data 
 */
void quickSelect2(const std::string & header, std::vector<int> data);