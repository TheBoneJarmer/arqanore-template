#include <iostream>
#include "arqanore/window.h"
#include "arqanore/keyboard.h"
#include "arqanore/exceptions.h"

using namespace arqanore;

void on_open(Window *window) {
    auto icon = Image("assets/icon.png");
    window->set_icon(icon);
}

void on_close(Window *window) {

}

void on_update(Window *window, double delta) {
    if (Keyboard::key_pressed(Keys::ESCAPE)) {
        window->close();
    }
}

void on_render(Window *window) {

}

int main() {
    try {
        auto window = Window(1440, 786, "Game");
        window.on_open(on_open);
        window.on_close(on_close);
        window.on_update(on_update);
        window.on_render(on_render);
        window.open(false, true, true);
    } catch (ArqanoreException& ex) {
        std::cerr << ex.what() << std::endl;
        return 1;    
    }

    return 0;
}
