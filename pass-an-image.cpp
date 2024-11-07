#include <iostream>
#include "ImageBrightner.h"

int main() {
    int rowsize = 512;
    int columnsize = 512;
    Image image(rowsize, columnsize);
	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(image);
    int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}

