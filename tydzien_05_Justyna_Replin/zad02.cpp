
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

	Point tl(50, 50);           // to become top left  corner of window

	Simple_window win(tl, 600, 400, "My window");    // make a simple window

	win.set_label("Canvas #2");

	Graph_lib::Polygon poly;
	poly.add(Point{ 300,200 });
	poly.add(Point{ 400,200 });
	poly.add(Point{ 400,320 });
	poly.add(Point{ 300,320 });
	poly.set_color(Color::red);
	win.attach(poly);


	Graph_lib::Rectangle r{ Point{100,100},100,20 };
	r.set_color(Color::green);

	Graph_lib::Rectangle r1{ Point{20,20}, 100,30 };
	r1.set_color(Color::blue);

	win.attach(r);
	win.attach(r1);
	Text t{ Point{125,115}, "Howdy!" };
	t.set_color(Color::black);
	Text t1{ Point{400,200}, "J" };
	Text t2{ Point{485,200}, "R" };
	t1.set_color(Color::red);
	t1.set_font_size(150);
	t2.set_color(Color::black);
	t2.set_font_size(150);
	t2.set_font(Font::times_bold);

	t1.set_font(Font::times_bold);
	win.attach(t);
	win.attach(t1);
	win.attach(t2);
	int x_size = 211; // get the size of our window
	int y_size = 211;
	int x_grid = 70;
	int y_grid =70;
	Lines grid;
	Lines grid1;
	for (int x = x_grid; x < x_size; x += x_grid)
		grid.add(Point{ x,0 }, Point{ x,y_size }); // vertical line
	for (int y = y_grid; y < y_size; y += y_grid)
		grid1.add(Point{ 0,y }, Point{ x_size,y });
	grid.set_color(Color::red);
	grid1.set_color(Color::white);

	win.attach(grid);
	win.attach(grid1);
	win.wait_for_button();       // give control to the display engine
}

//------------------------------------------------------------------------------
