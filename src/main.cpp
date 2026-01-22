#include "image.h"
#include "camera.h"
#include <iostream>

int main() {
    // TODO: image resolution
    const int width = 400;
    const int height = 225;

    Image image(width, height);

    // TODO: initialize camera
    Camera camera(60.0, double(width) / height);

    // TODO: render loop
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            // stub: black image
            image.setPixel(x, y, Vec3(0.0, 0.0, 0.0));
        }
    }

    image.writePNG("output.png");
    std::cout << "Done.\n";
    return 0;
}
