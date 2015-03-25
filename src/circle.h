/**
 *       \file       circle.h
 *
 *       \brief      Adding circle entities
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

class circle {

    double xc,yc,r;
    vector <double> circle_data;

    public:

/**
 *--------------------------------------------------------------------
 *       Class:  circle
 *      Method:  int circle :: no_circle(void)
 * Description:  Return number of circles saved in memory
 *--------------------------------------------------------------------
 */
    int no_circle();
/**
 *--------------------------------------------------------------------
 *       Class:  circle
 *      Method:  void circle :: get_circle_data(void)
 * Description:  Prompt for getting parameters of circle
 *--------------------------------------------------------------------
 */
    void get_circle_data();
/**
 *--------------------------------------------------------------------
 *       Class:  circle
 *      Method:  void circle :: show_circle(void)
 * Description:  Show all circles saved in memory
 *--------------------------------------------------------------------
 */
    void show_circle();
/**
 *--------------------------------------------------------------------
 *       Class:  circle
 *      Method:  vector<double> circle :: get_circle_vec(void)
 * Description:  Returns a vector which contain all parameters
 *--------------------------------------------------------------------
 */
    vector <double> get_circle_vec();
};
