#include"line.h"

int line::no_line() {
    if (line_data.size() != 0)   return(line_data.size()/4);
    else return 0;
}

void line::get_line_data() {
    cout<<"\nEnter Starting coords of line: ";
    cin>>x0>>y0;
    cout<<"\nEnter Ending coordinates of line: ";
    cin>>x1>>y1;
    if (x1-x0!=0 || y1-y0!=0) {
        line_data.push_back(x0); line_data.push_back(y0);
        line_data.push_back(x1); line_data.push_back(y1);
    }
}

void line::show_line() {
    if (line_data.size() > 0) {
         for (auto i=0; i<(line_data.size()/4); i++) {
            cout << "\nLine " << i << ": "
                 << "Staring Coordinates: " << line_data[i] 
                 <<", " <<line_data[i+1]
                 << "\n\tEnding Coordinates: " << line_data[i+2]
                 <<", " <<line_data[i+3];
        }
    }
    else cout << "\nNo Line [data] present.\n";
}

vector <double> line::get_line_vec() {
        return line_data;
}
