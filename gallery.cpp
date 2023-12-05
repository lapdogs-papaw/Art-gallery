#include "gallery.h"
#include <iostream>

Gallery::Gallery() {
    std::cout << "Gallery created." << std::endl;
}

void Gallery::runGallery() {
    artwork.displayArtwork();
}
