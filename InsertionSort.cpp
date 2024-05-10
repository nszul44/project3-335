#include "InsertionSort.hpp"
void insertionSort( std::vector<int> & a,  const int left,  const int right)
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