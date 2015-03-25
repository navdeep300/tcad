/**
 *       \file       entities.h
 *
 *       \brief      Class which encapsulates all entities
 *
 *       \version    0.2
\
 *       \author     Jagmeet Singh, jagmeet787@gmail.com
 *       \copyright  Copyright (c) 2013, Jagmeet Singh
 *                   https://github.com/jagmeet787
 */

#include <iostream>
#include <vector>
#include <cstdlib>

#include "line.h"
#include "arc.h"
#include "circle.h"

using namespace std;

class entities : public circle, public arc, public line {

    bool chk = true;
    //enum {line = 1, arc = 2, circle = 3, show = 4, exit = 5}choice;
    int choice;

    public:

    entities () {
        while (chk) {
            system ("clear");
            cout << "Please Enter your choice:" << endl
                 << "1. Draw Line"     << endl
                 << "2. Draw Arc"      << endl
                 << "3. Draw Circle"   << endl
                 << "4. Show Entities" << endl
                 << "5. Exit"          << endl;
            cin >> choice;

            switch (choice) {
                 case 1 : get_line_data();
                 break;
                 case 2 : get_arc_data();
                 break;
                 case 3 : get_circle_data();
                 break;
                 case 4 : show();
                 break;
                 case 5 : chk = false;
                 break;
                 default: cout << "\nEnter right choice";
            }
        }
    }

    void show() {
        show_line();
        show_arc();
        show_circle();
    }
};
