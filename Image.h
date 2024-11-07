#pragma once
#include <cstdint>
#include <memory>

class Image {
public:
	Image(int rows, int columns);
	~Image();

	Image(const Image& other);
	Image& operator=(const Image& other) = delete;

	int GetPixel(int x, int y) const;
	void SetPixel(int x, int y, int value);

	int GetRows() const;
	int GetColumns() const;

private:
	int m_rows;
	int m_columns;
	std::unique_ptr<int[]> m_pixels;
};