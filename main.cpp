#include <torch/torch.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void drawText(Mat & image);




int main()
{

    torch::Tensor x = torch::randn({5,3});
    x = x.to(at::kCUDA);
    cout << x << endl;
    std::string image_path = samples::findFile("../img.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if(img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
        return 1;
    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    if(k == 's')
    {
        imwrite("../img.jpg", img);
    }
   return 0;
}
