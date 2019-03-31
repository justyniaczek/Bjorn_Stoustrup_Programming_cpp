
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.hpp"    // get access to our window library
#include "Graph.hpp"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
{
	using namespace Graph_lib;   // our graphics facilities are in Graph_lib

	Point tl(100, 100);           // to become top left  corner of window

	Simple_window win(tl, 600, 400, "My window");    // make a simple window
	Axis xa{ Axis::x, Point{20,300},280,10,"iksy" };
	win.attach(xa);
	win.set_label("Canvas #2");
	Axis ya{ Axis::y, Point{10,150},280,10, "igreki" };
	ya.set_color(Color::dark_magenta);
	ya.label.set_color(Color::black);
	win.attach(ya);
	win.set_label("Kek");
	Function sine{ sin,0,100,Point{20,150},1000,50,50 };
	win.attach(sine);
	win.set_label("XD");
	sine.set_color(Color::dark_blue);
	Graph_lib::Polygon poly;
	poly.add(Point{ 300,200 });
	poly.add(Point{ 350,100 });
	poly.add(Point{ 400,200 });
	poly.set_color(Color::dark_red);
	poly.set_style(Line_style::dash);
	win.attach(poly);
	win.set_label("Canvas #5");

	Graph_lib::Rectangle r{ Point{100,100},100,50 };
	win.attach(r);
	win.set_label("Canvas #6");

	Closed_polyline poly_rect;
	poly_rect.add(Point{ 100,50 });
	poly_rect.add(Point{ 200,50 });
	poly_rect.add(Point{ 200,100 });
	poly_rect.add(Point{ 100,100 });
	win.attach(poly_rect);
	poly_rect.add(Point{ 50,75 });
	r.set_fill_color(Color::green);
	poly.set_style(Line_style(Line_style::dash, 2));
	poly_rect.set_style(Line_style(Line_style::dash, 6));
	poly_rect.set_fill_color(Color::yellow);
	win.set_label("Canvas #7");
	Text t{ Point{150,150}, "siemanko!" };
	win.attach(t);
	win.set_label("Canvas #8");
	t.set_font(Font::times_bold);
	t.set_font_size(10);
	win.set_label("Canvas #9");

	Image ii{ Point{300,20}, "image.jpg" };
	win.attach(ii);
	win.set_label("Canvas #10");
	ii.move(50, 120);
	win.set_label("Canvas #11");
	Circle c{ Point {100,200},50 };
	Graph_lib::Ellipse e{ Point{100,200},75,25 };
	e.set_color( Color::dark_blue);
	Mark m{ Point {100,200}, 'x' };
	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
		<< ";window size: " << win.x_max() << "*" << win.y_max();
	Text sizes{ Point{100,20}, oss.str() };
	Image cal{ Point{210,210}, "image2.jpg" };
	cal.set_mask(Point{ 40,40 }, 200, 150);
	win.attach(c);
	win.attach(m);
	win.attach(e);
	win.attach(sizes);
	win.attach(cal);
	win.set_label("Canvas #12");






	win.wait_for_button();       // give control to the display engine
}

//------------------------------------------------------------------------------
