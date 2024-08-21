#include <iostream>
#include "arqanore/window.h"
#include "arqanore/keyboard.h"
#include "arqanore/exceptions.h"

using namespace std;
using namespace arqanore;

void on_open(Window *window) {

}

void on_close(Window *window) {

}

void on_tick(Window *window, double dt) {

}

void on_update(Window *window, double at) {
    if (Keyboard::key_pressed(Keys::ESCAPE)) {
        window->close();
    }
}

void on_render2d(Window *window) {

}

void on_render3d(Window *window) {

}

void on_opengl(Window *window, string type, string severity, string message) {
    cout << "[" << type << "][" << severity << "] " << message << endl;
}

int main() {
    try {
        auto window = Window(1440, 786, "App");
        window.on_open(on_open);
        window.on_close(on_close);
        window.on_tick(on_tick);
        window.on_update(on_update);
        window.on_render2d(on_render2d);
        window.on_render3d(on_render3d);
        window.on_opengl(on_opengl);
        window.open(false, true, true);
    } catch (ArqanoreException& ex) {
        cerr << ex.what() << endl;
        return 1;    
    }

    return 0;
}
