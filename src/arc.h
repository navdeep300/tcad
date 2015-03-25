/**
 *       \file       arc.h
 *
 *       \brief      Adding arc entities
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

class arc {

    double xc,yc,r,sa,ea;
    vector <double> arc_data;

    public:

/**
 *--------------------------------------------------------------------
 *       Class:  arc
 *      Method:  int arc :: no_arc(void)
 * Description:  Return number of arcs saved in memory
 *--------------------------------------------------------------------
 */
    int no_arc(void);
/**
 *--------------------------------------------------------------------
 *       Class:  arc
 *      Method:  void arc :: get_arc_data(void)
 * Description:  Prompt for getting parameters of arc
 *--------------------------------------------------------------------
 */
    void get_arc_data(void);
/**
 *--------------------------------------------------------------------
 *       Class:  arc
 *      Method:  void arc :: show_arc(void)
 * Description:  Show all arcs saved in memory
 *--------------------------------------------------------------------
 */
    void show_arc(void);
/**
 *--------------------------------------------------------------------
 *       Class:  arc
 *      Method:  vector<double> arc :: get_arc_vec(void)
 * Description:  Returns a vector which contain all parameters
 *--------------------------------------------------------------------
 */
    vector <double> get_arc_vec(void);
};
