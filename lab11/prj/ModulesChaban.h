#ifndef MODULESCHABAN_H_INCLUDED
#define MODULESCHABAN_H_INCLUDED

#include "struct_type_project_9.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void saveData(const vector<Record>& data, const string& filename);
void displayRegistry(const vector<Record>& registry);

#endif // MODULESCHABAN_H_INCLUDED

