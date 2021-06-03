#include <iostream>
#include <torch/torch.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <zmq.hpp> 
#include "metolib.hpp"
#include <unistd.h> // timelib

int main()
{    
    cv::Mat img = cv::imread("../data/x.jpg");
    cv::putText(img, "heheh xd", cv::Point(10, img.rows / 2),
            cv::FONT_HERSHEY_DUPLEX, 1.0, CV_RGB(118, 185, 0), 2);
    cv::imshow("sdaf", img);
    cv::waitKey(0);
}
