#include <iostream>
#include <opencv2/opencv.hpp>

int main() {

    cv::Mat a;

    a = cv::imread("/home/cda/Pictures/timg.jpeg", cv::IMREAD_UNCHANGED);

    // std::cout << a.size();
    cv::imshow("img", a);

    std::cout << a.size() << std::endl;

    cv::waitKey(0);
    return 0;
}
