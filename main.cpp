//
//  main.cpp
//  final-exam-review
//
//  Created by Kartapurkh Estlund on 5/4/17.
//  Copyright © 2017 Bibi Khalsa Estlund. All rights reserved.
//
//  A program to help students of CSIS 123 review for the final exam.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_question(string[], int&);

int main()

{
    string question[]= {0};
    int i;
    
    print_question(question, i);
    
        
    return 0;
}
void print_question(string question[], int& i)
{
    for(i=1; i < 100; i++)
    {
        cout << question[i];
    }
   
}
