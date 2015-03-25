/**
 *       \file       line.h
 *
 *       \brief      Adding line entities
 *
 *       \version    0.2
\
 *       \author     Jagmeet Singh, jagmeet787@gmail.com
 *       \copyright  Copyright (c) 2013, Jagmeet Singh
 *                   https://github.com/jagmeet787
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class line {

    double x0,y0,x1,y1;
    vector <double> line_data;

    public:
/**
 *--------------------------------------------------------------------
 *       Class:  line
 *      Method:  int line :: no_line(void)
 * Description:  Return number of lines saved in memory
 *--------------------------------------------------------------------
 */
    int no_line();
/**
 *--------------------------------------------------------------------
 *       Class:  line
 *      Method:  void line :: get_line_data(void)
 * Description:  Prompt for getting parameters of line
 *--------------------------------------------------------------------
 */
    void get_line_data();

/**
 *--------------------------------------------------------------------
 *       Class:  line
 *      Method:  void line :: show_line(void)
 * Description:  Show all lines saved in memory
 *--------------------------------------------------------------------
 */
    void show_line();
/**
 *--------------------------------------------------------------------
 *       Class:  line
 *      Method:  vector<double> line :: get_line_vec(void)
 * Description:  Returns a vector which contain all parameters
 *--------------------------------------------------------------------
 */
    vector <double> get_line_vec();
};
