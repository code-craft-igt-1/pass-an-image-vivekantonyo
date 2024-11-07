#pragma once
#include <cstdint>
#include "Image.h"

class ImageBrightener {
private:
	Image m_inputImage;
	int m_attenuatedPixelCount;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
	int GetAttenuatedPixelCount() const;
};