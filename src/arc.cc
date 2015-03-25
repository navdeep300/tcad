#include "arc.h"

int arc::no_arc() {
    if (arc_data.size() != 0)   return(arc_data.size()/5);
    else return 0;
}

void arc::get_arc_data() {
    cout<<"\nEnter Centre coords of arc: ";
    cin>>xc>>yc;
    cout<<"\nEnter Radius of arc: ";
    cin>>r;
	cout<<"\nEnter starting and ending angles of arc: ";
	cin>>sa>>ea;
        if (abs(r)!=0 && abs(sa-ea)!=0) {
            arc_data.push_back(xc); arc_data.push_back(yc);
            arc_data.push_back(r);
            arc_data.push_back(ea); arc_data.push_back(sa);
        }
    }

void arc::show_arc() {
    if (arc_data.size() > 0) {
        for (auto i=0; i<(arc_data.size()/5); i++) {
            cout << "\nArc " << i << ": "
                 << "Centre Coordinates: " << arc_data[i] 
                 <<", " <<arc_data[i+1]
                 << "\n\tRadius: " << arc_data[i+2]
                 << "\n\tStarting and Ending angles: " << arc_data[i+3] 
                 <<", " <<arc_data[i+4];
        }
    }
    else cout << "\nNo Arc [data] present.\n";
}

vector <double> arc::get_arc_vec() {
    return arc_data;
}
