#include "QuickSelect1.hpp"
/**
 * @file QuickSelect1.cpp
 * @author Nicholas Szul
 * @brief Implementation of QuickSelect1 Function
 * @version 0.1
 * @date 2024-05-06
 *
 * @copyright Copyright (c) 2024
 *
 */

 /**
 * Simple insertion sort.
 */
 void insertionSort1( std::vector<int> & a,  const int left,  const int right)
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
 /**
 * Return median of left, center, and right.
 * Order these and hide the pivot.
 */
 const int & median3( std::vector<int> & a, int left, int right )
 {
 int center = ( left + right ) / 2;

 if( a[ center ] < a[ left ] )
 std::swap( a[ left ], a[ center ] );
 if( a[ right ] < a[ left ] )
 std::swap( a[ left ], a[ right ] );
 if( a[ right ] < a[ center ] )
 std::swap( a[ center ], a[ right ] );

 // Place pivot at position right - 1
 std::swap( a[ center ], a[ right - 1 ] );
 return a[ right - 1 ];
}
 /*
 * Internal selection method that makes recursive calls.
 * Uses median-of-three partitioning and a cutoff of 10.
 * Places the kth smallest item in a[k-1].
 * a is an array of Comparable items.
 * left is the left-most index of the subarray.
 * right is the right-most index of the subarray.
 * k is the desired rank (1 is minimum) in the entire array.
 */
 void quickSelect( std::vector<int> & a, int left, int right, int k )
 {
 if( left + 20 <= right )
 {
 const int & pivot = median3( a, left, right );

 // Begin partitioning
 int i = left, j = right - 1;
 for( ; ; )
 {
 while( a[ ++i ] < pivot ) { }
 while( pivot < a[ --j ] ) { }
 if( i < j )
 std::swap( a[ i ], a[ j ] );
 else
 break;
 }

 std::swap( a[ i ], a[ right - 1 ] ); // Restore pivot

 // Recurse; only this part changes
 if( k <= i )
 quickSelect( a, left, i - 1, k );
 else if( k>i+1)
 quickSelect( a, i + 1, right, k );
 }
 else // Do an insertion sort on the subarray
 insertionSort1(a, left, right);
}
/**
 * @brief calls quickselect 3 times for p25, p50, p75
 * 
 * @param header 
 * @param data 
 */
void quickSelect1(const std::string &header, std::vector<int> data){
    const auto t1_start = std::chrono::steady_clock::now();
    quickSelect(data, 0, data.size(), (data.size()/2));   //call for p50
    quickSelect(data, 0, (data.size()/2) - 1, (data.size()/4)); //call for p25
    quickSelect(data, (data.size()/2), data.size(), (data.size()/4) * 3); //call for p75
    int minimum = data.front();
    int maximum = data[((data.size()/4) * 3)];
    for (int i = 0; i < (data.size()/4) - 1; ++i) {   //loop to find the min
         minimum = std::min(minimum, data[i]);
    }
    for (int i = ((data.size()/4) * 3); i < data.size(); ++i) { //loop to find the max
         maximum = std::max(maximum, data[i]);
    }
    const auto t1_end = std::chrono::steady_clock::now();
  int t1 = std::chrono::duration <double, std::micro> (t1_end - t1_start).count();
    std::cout << header << "\n";
    std::cout << "Min: " << minimum << "\n";
    std::cout << "P25: " << data[(data.size()/4)-1] << "\n";
    std::cout << "P50: " << data[(data.size()/2)-1] << "\n";
    std::cout << "P75: " << data[((data.size()/4)*3)-1] << "\n";
    std::cout << "Max: " << maximum << "\n";
}