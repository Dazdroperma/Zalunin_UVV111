#include "Rhombus.h"

Rhombus::Rhombus(const double _coordinate_x=0, const double _coordinate_y=0, const double _semi_axis_a=0, const double _semi_axis_b=0)
{
	set_semi_axis_a(_semi_axis_a);
	set_semi_axis_b(_semi_axis_b);
	coordinate_x = _coordinate_x;
	coordinate_y = _coordinate_y;
}
void Rhombus::change_semi_axis(const double _semi_axis_a, const double _semi_axis_b)
{
	set_semi_axis_a(_semi_axis_a);
	set_semi_axis_b(_semi_axis_b);
}

void Rhombus::change_coordinate(const double _coordinate_x, const double _coordinate_y)
{
	coordinate_x = _coordinate_x;
	coordinate_y = _coordinate_y;
}

const double Rhombus::computation_cordinates_x_vertex_A() { return coordinate_x - semi_axis_a; }
const double Rhombus::computation_cordinates_y_vertex_A() { return coordinate_y; }
const double Rhombus::computation_cordinates_x_vertex_B() { return coordinate_x; }
const double Rhombus::computation_cordinates_y_vertex_B() { return coordinate_y + semi_axis_b; }
const double Rhombus::computation_cordinates_x_vertex_C() { return coordinate_x + semi_axis_a; }
const double Rhombus::computation_cordinates_y_vertex_C(){ return coordinate_y; }
const double Rhombus::computation_cordinates_x_vertex_D() { return coordinate_x; }
const double Rhombus::computation_cordinates_y_vertex_D(){ return coordinate_y - semi_axis_b; }
const double Rhombus::calculating_area_of_a_rhombus() { return semi_axis_a * semi_axis_b * 0.5; }
const double Rhombus::calculating_the_perimeter_of_a_rhombus() { return pow(semi_axis_a * semi_axis_a + semi_axis_b * semi_axis_b, 2); }
const double Rhombus::computation_rotated_90_degrees_cordinates_x_vertex_A() { return coordinate_x; }
const double Rhombus::computation_rotated_90_degrees_cordinates_y_vertex_A() { return coordinate_y + semi_axis_b; }
const double Rhombus::computation_rotated_90_degrees_cordinates_x_vertex_B() { return coordinate_x + semi_axis_a; }
const double Rhombus::computation_rotated_90_degrees_cordinates_y_vertex_B() { return coordinate_y; }
const double Rhombus::computation_rotated_90_degrees_cordinates_x_vertex_C() { return coordinate_x; }
const double Rhombus::computation_rotated_90_degrees_cordinates_y_vertex_C() { return coordinate_y - semi_axis_b; }
const double Rhombus::computation_rotated_90_degrees_cordinates_x_vertex_D() { return coordinate_x - semi_axis_a; }
const double Rhombus::computation_rotated_90_degrees_cordinates_y_vertex_D() { return coordinate_y; }
const double Rhombus::get_coordinate_x() { return coordinate_x; }
const double Rhombus::get_coordinate_y() { return coordinate_y; }
const double Rhombus::get_semi_axis_a() { return semi_axis_a; }
const double Rhombus::get_semi_axis_b() { return semi_axis_b; }
void Rhombus::set_semi_axis_a(const double _semi_axis_a_)
{
	if (_semi_axis_a_ >= 0) {
		semi_axis_a = _semi_axis_a_;
	}
	else {
		throw"negative size";
	}
}
void Rhombus::set_semi_axis_b(const double _semi_axis_b_)
{
	if (_semi_axis_b_ >= 0) {
		semi_axis_b = _semi_axis_b_;
	}
	else {
		throw"negative size";
	}
}

