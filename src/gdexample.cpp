#include "gdexample.h"
#include <godot_cpp/core/class_db.hpp>

// HOW TO INCLUDE .MM-FILE CORRECTLY?
// #ifdef __OBJC__
#include "gdexample_wk.mm"
// #endif

void godot::GDExample::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_url", "url"), &GDExample::set_url);
	ClassDB::bind_method(D_METHOD("get_url"), &GDExample::get_url);

    ADD_PROPERTY(PropertyInfo(Variant::STRING, "url"), "set_url", "get_url");
}

godot::GDExample::GDExample() {
	// Initialize any variables here.
	time_passed = 0.0;
}

void godot::GDExample::_process(double delta) {
	time_passed += delta;

	godot::Vector2 new_position = godot::Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

	set_position(new_position);
}

// void godot::GDExample::set_url(const String &p_url) {

// }

// godot::String godot::GDExample::get_url() const {
// 	return home_url;
// }
