#include "artwork.h"
#include <iostream>

Artwork::Artwork() {
    std::cout << "Artwork created." << std::endl;
}

void Artwork::displayArtwork() {
    artist.displayArtist();
    std::cout << "Displaying artwork." << std::endl;
}
