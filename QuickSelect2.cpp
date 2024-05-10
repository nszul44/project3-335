#include "QuickSelect2.hpp"
#include "insertionSort.hpp"
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
 * Return median of left, center, and right.
 * Order these and hide the pivot.
 */

const int & median32( std::vector<int> & a, int left, int right )
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

 void quickSelect2( std::vector<int> & a, int left, int right, std::vector<int> & keys )
 {
 if( left + 20 <= right )
 {
 const int & pivot = median32( a, left, right );

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
 bool checkRight = false;
 bool checkLeft = false;
 // Recurse; only this part changes
for (auto it = keys.begin(); it!= keys.end(); ++it) {
   if (*it <= i)
      checkLeft = true;
      else if (*it > i+1)
      checkRight = true;
}

        // Recursive calls based on the partitioning of keys
        if (checkLeft)
            quickSelect2(a, left, i - 1, keys);
        if(checkRight)
            quickSelect2(a, i + 1, right, keys);
         
                } 
 else // Do an insertion sort on the subarray
 insertionSort(a, left, right);
}

void quickSelect2(const std::string &header, std::vector<int> data)
{
   std::vector<int> keys;
   keys.push_back(1);
   keys.push_back((data.size()/4));
   keys.push_back((data.size()/2));
   keys.push_back((data.size()/4) * 3);
   keys.push_back(data.size());
   quickSelect2(data, 0, data.size(), keys);
   std::cout << header << "\n";
   std::cout << "Min: " << data[0] << "\n";
   std::cout << "P25: " << data[(data.size()/4)-1] << "\n";
   std::cout << "P50: " << data[(data.size()/2)-1] << "\n";
   std::cout << "P75: " << data[((data.size()/4)*3)-1] << "\n";
   std::cout << "Max: " << data[data.size()-1]<< "\n";
}
