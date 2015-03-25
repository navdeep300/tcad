#ifndef LCCAIROPAINTER_H
#define LCCAIROPAINTER_H

#include <cairo/cairo-pdf.h>
#include "lcpainter.h"
#include <map>
//#include <pango/pangocairo.h>
//#include "endcaps.h"
class LcCairoPainter : public LcPainter 
{
    public:
        LcCairoPainter(cairo_surface_t* surface, cairo_t* cr);
        virtual ~LcCairoPainter();
        static LcCairoPainter* createImagePainter(unsigned char* data , int width, int height);

    public:
        // TODO move code from implementation to here to actually make inlyning work
          void clear(double r, double g, double b) ;
          void clear(double r, double g, double b, double a) ;
          void move_to(double x, double y) ;
//          
//void line_to(double x, double y) ;
void line_to(double x, double y)  {
    cairo_line_to(_cr, x, y);
}  

        void lineWidthCompensation(double lwc);
          void line_width(double w) ;
          double scale() ;
          void scale(double s) ;
          void arc(double x, double y, double r, double start, double end) ;
          void circle(double x, double y, double r) ;
          void ellipse(double cx, double cy, double rx, double ry, double sa, double ea, double ra = 0);
          void rectangle(double x1, double y1, double w, double h);
          void stroke() ;
          void source_rgb(double r, double g, double b);
          void source_rgba(double r, double g, double b, double a);
          void translate(double x, double y);
          void user_to_device(double* x, double* y);
          void device_to_user(double* x, double* y);
          void user_to_device_distance(double* dx, double* dy);
          void device_to_user_distance(double* dx, double* dy);
          void text(double x, double y, const char* text_val, double angle, double height);
          void save();
          void restore();
          unsigned long pattern_create_linear(double x1, double y1, double x2, double y2);
          void pattern_add_color_stop_rgba(unsigned long pat, double offset, double r, double g, double b, double a);
          void set_source(unsigned long pat);
          void pattern_destroy(unsigned long pat);
          void fill();
          void point(double x, double y, double size, bool deviceCoords);
          void reset_transformations();
          unsigned char* data();
  //        void arrow(double startX, double startY, double endX, double endY, const CapType& startCap, const CapType& endCap);
          void set_dash(const double* dashes, const int num_dashes, double offset, bool scaled);

        // The functions below might get changed in future
          void disable_antialias();
          void enable_antialias();

        virtual void getTranslate(double* x, double* y);

void expdf();

    private:
        cairo_surface_t* _surface;
        cairo_t* _cr;

        // When set to true, the linewidth will be constant, eg, it won't scale with the scale factor
        bool _constantLineWidth;

        // Current Line width
        double _lineWidth;

        // List of patterns
        std::map<unsigned long, cairo_pattern_t*> _patternMap;
        unsigned long _patternMapNum;

        double _lineWidthCompensation;

};

#endif // LCCAIROPAINTER_H
