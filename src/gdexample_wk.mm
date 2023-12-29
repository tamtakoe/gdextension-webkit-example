#include "gdexample.h"
#include <WebKit/WebKit.h>

class godot::GDExampleImplementation {
public:
	WKWebView *view = nullptr;
};

godot::GDExample::GDExample() {
    data = memnew(GDExampleImplementation());
}


void godot::GDExample::set_url(const String &p_url) {
	home_url = p_url;

	if (data->view != nullptr) {
		[data->view loadRequest:[NSURLRequest requestWithURL:[NSURL URLWithString:[NSString stringWithUTF8String:home_url.utf8().get_data()]]]];
	}
}

godot::String godot::GDExample::get_url() const {
	if (data->view != nullptr) {
		NSString *ns = [[data->view URL] absoluteString];
		return String::utf8([ns UTF8String]);
	}
	return home_url;
}

