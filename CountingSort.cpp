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
#include "CountingSort.hpp"

void countingSort(const std::string &header, std::vector<int> data){
    std::vector<std::pair<int, int>> pairs;
    std::unordered_map<int, int> hash_map;
    int count = 0;
    int unique = 0;
    int p25, p50, p75;
    for(auto it = data.begin(); it != data.end(); ++it){
        if(hash_map.find(*it) == hash_map.end()){
            hash_map[*it] = 1;
        }
        else{
            hash_map[*it] = hash_map[*it] + 1;
        }
    }
    for(auto it = hash_map.begin(); it != hash_map.end(); ++it){
        std::pair<int, int> pair = {it->first, it->second};
        pairs.push_back(pair);
    }
    std::sort(pairs.begin(), pairs.end());
    for(auto it = pairs.begin(); it != pairs.end(); ++it){
        count += it->second;
        if(count - it->second < (data.size()/4) && count >= (data.size()/4) - 1){
            p25 = it->first;
        }
        else if(count - it->second < data.size()/2 && count >= data.size()/2){
            p50 = it->first;
        }
        else if(count - it->second < (data.size()/4) * 3 && count >= (data.size()/4) * 3){
            p75 = it->first;
        }
        if(it->second == 1){
            unique++;
        }
     }
     std::cout << header << "\n";
    std::cout << "Min: " << pairs.front().first << "\n";
    std::cout << "P25: " << p25 << "\n";
    std::cout << "P50: " << p50 << "\n";
    std::cout << "P75: " << p75 << "\n";
    std::cout << "Max: " << pairs.back().first << "\n";
    std::cout << "Unique: " << unique << "\n";
}