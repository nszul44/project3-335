/**
 * @file main.cpp
 * @author Nicholas Szul
 * @brief Test file for the sorting functions
 * @version 0.1
 * @date 2024-04-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "StdSort.hpp"
#include "QuickSelect1.hpp"
#include "QuickSelect2.hpp"
/**
 * @brief converts a txt file to an accesible vector 
 * 
 * @param in_file 
 * @return std::vector<int> 
 */
int main(){
    std::ifstream inputfile;
    inputfile.open("testinput.txt"); 
    std::string data_string, header;
    std::vector<int> data;
    std::getline(inputfile, header);
    std::getline(inputfile, data_string);
    int count = 0;
    int data_int;
    while(count < data_string.size()){
        std::string data_temp;
        while(data_string[count] != ' ' && count < data_string.length()){
            data_temp = data_temp + data_string[count];
            count++;
        }
        data_int = std::stoi(data_temp);
        data.push_back(data_int);
        count++;
    }
    stdSort(header, data);
    quickSelect1(header, data);
    quickSelect2(header, data);
}

