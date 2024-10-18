# Pass an image

Try passing an image to brighten it.
The `main()` function uses `ImageBrightener` to brighten an image, present in an `Image` instance.
Rest of the details are in the code.

The code has a run-time error. It's because of the way the Image instance is passed around.

To know more: https://www.youtube.com/watch?v=Q2sFmqvpBe0

In this assignment:
1. Fix the runtime error
2. Make any other improvements to improve readability & efficiency
3. Where is memory allocated and de-allocated? Can the use of `unique_ptr` make that more intuitive?
