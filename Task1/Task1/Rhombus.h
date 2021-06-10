#pragma once
#include<cmath>
class Rhombus
{
public:
	explicit Rhombus(const double _coordinate_x = 0, const double _coordinate_y = 0, const double _semi_axis_a = 0, const double _semi_axis_b =0) ;
	~Rhombus();
	void change_semi_axis(const double _semi_axis_a, const double _semi_axis_b);
	void change_coordinate(const double _coordinate_x, const double _coordinate_y);
	const double computation_cordinates_x_vertex_A();
	const double computation_cordinates_y_vertex_A();
	const double computation_cordinates_x_vertex_B();
	const double computation_cordinates_y_vertex_B();
	const double computation_cordinates_x_vertex_C();
	const double computation_cordinates_y_vertex_C();
	const double computation_cordinates_x_vertex_D();
	const double computation_cordinates_y_vertex_D();
	const double calculating_area_of_a_rhombus();
	const double calculating_the_perimeter_of_a_rhombus();
	const double computation_rotated_90_degrees_cordinates_x_vertex_A();
	const double computation_rotated_90_degrees_cordinates_y_vertex_A();
	const double computation_rotated_90_degrees_cordinates_x_vertex_B();
	const double computation_rotated_90_degrees_cordinates_y_vertex_B();
	const double computation_rotated_90_degrees_cordinates_x_vertex_C();
	const double computation_rotated_90_degrees_cordinates_y_vertex_C();
	const double computation_rotated_90_degrees_cordinates_x_vertex_D();
	const double computation_rotated_90_degrees_cordinates_y_vertex_D();
	const double get_coordinate_x();
	const double get_coordinate_y();
	const double get_semi_axis_a();
	const double get_semi_axis_b();
private:
	double coordinate_x, coordinate_y;
	double semi_axis_a, semi_axis_b;
	void set_semi_axis_a(const double _semi_axis_a_);
	void set_semi_axis_b(const double _semi_axis_b_);

};
