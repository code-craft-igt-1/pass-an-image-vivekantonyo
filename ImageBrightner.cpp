#include "ImageBrightner.h"
#include "Image.h"

const int GRAYSCALE = 25;
const int MAXBRIGHTNESS = 255;

ImageBrightener::ImageBrightener(Image& inputImage)
	: m_inputImage(inputImage)
	, m_attenuatedPixelCount(0) {
}

int ImageBrightener::BrightenWholeImage() {
	for (int x = 0; x < m_inputImage.GetRows(); x++) {
		for (int y = 0; y < m_inputImage.GetColumns(); y++) {
			if (m_inputImage.GetPixel(x, y) > (MAXBRIGHTNESS - GRAYSCALE)) {
				m_inputImage.SetPixel(x, y, MAXBRIGHTNESS);
				++m_attenuatedPixelCount;
			}
			else {
				m_inputImage.SetPixel(x, y, m_inputImage.GetPixel(x, y) + GRAYSCALE);
			}
		}
	}
	return m_attenuatedPixelCount;
}

int ImageBrightener::GetAttenuatedPixelCount() const {
	return m_attenuatedPixelCount;
}
