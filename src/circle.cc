#include "circle.h"

int circle::no_circle() {
    if (circle_data.size() != 0)   return(circle_data.size()/3);
    else return 0;
}

void circle::get_circle_data() {
    cout<<"\nEnter Centre coords of circle: ";
    cin>>xc>>yc;
    cout<<"\nEnter Radius of circle: ";
    cin>>r;
    if (abs(r)!=0) {
        circle_data.push_back(xc); circle_data.push_back(yc);
        circle_data.push_back(r);
    }
}

void circle::show_circle() {
    if (circle_data.size() > 0) {
        for (auto i=0; i<(circle_data.size()/3); i++) {
            cout << "\ncircle " << i << ": "
            << "Centre Coordinates: " << circle_data[i] 
            <<", " <<circle_data[i+1]
            << "\n\tRadius: " << circle_data[i+2];
        }
    }
    else cout << "\nNo Circle [data] present.\n";
}

vector <double> circle::get_circle_vec() {
   return circle_data;
}
