#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/control.hpp>

namespace godot {

    class GDExampleImplementation;
    class GDExample : public Control {
        GDCLASS(GDExample, Control)

        GDExampleImplementation *data;

        String home_url;

    private:
        double time_passed;

    protected:
        static void _bind_methods();

    public:
        GDExample();

        void _process(double delta) override;

        void set_url(const String &p_url);
	    String get_url() const;
    };

}

#endif

