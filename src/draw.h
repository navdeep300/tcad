/**
 *       \file       draw.h
 *
 *       \brief      Implementation of drawing entities to backend 
 *
 *       \version    0.2
\
 *       \author     Jagmeet Singh, jagmeet787@gmail.com
 *       \copyright  Copyright (c) 2013, Jagmeet Singh
 *                   https://github.com/jagmeet787
 */

#include <iostream>
#include <vector>
#include <cairo/cairo-pdf.h>
#include "lc/lccairopainter.h"

#include "entities.h"

using namespace std;

    entities obj;
    vector <double> line_data = obj.get_line_vec();
    vector <double> arc_data = obj.get_arc_vec();
    vector <double> circle_data = obj.get_circle_vec();

    cairo_surface_t *surface=(cairo_surface_t *)cairo_pdf_surface_create("ji.pdf",100,100);
    cairo_t *cr = cairo_create(surface);
    LcCairoPainter lcpainter(surface,cr);
   // lcpainter.line_width(.2);

    void drawline(void);
    void drawarc(void);
    void drawcircle(void);

    void draw() {
   
        if (obj.no_line()>0) drawline();
        if (obj.no_arc()>0) drawarc();
        if (obj.no_circle()>0) drawcircle();
    }

//Drawing Functions to surface

    void drawline() {
        for (auto i=0; i<obj.no_line(); i++) {
           lcpainter.move_to(line_data[i], line_data[i+1]);
           lcpainter.line_to(line_data[i+2], line_data[i+3]);
           lcpainter.stroke();
        
        }
    }

    void drawarc() {
        for (auto i=0; i<obj.no_arc(); i++) {
            lcpainter.arc(arc_data[i],arc_data[i+1],arc_data[i+2],arc_data[i+3],arc_data[i+4]);	
            lcpainter.stroke();
        }
    }

    void drawcircle() {
        for (auto i=0; i<obj.no_circle(); i++) {
        lcpainter.circle(circle_data[i],circle_data[i+1],circle_data[i+2]);	
        lcpainter.stroke();
        }
    }
