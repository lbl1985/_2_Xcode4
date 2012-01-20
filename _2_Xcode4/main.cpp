#include <iostream>
#include <opencv2/opencv.hpp>
#include "utility.h"

//using namespace std;
//using namespace cv;

// void salt(Mat&, int);

int main (int argc, char * const argv[]) {
    Mat_<Vec3b> image, saltImage, colorReduceImage;
	image = imread("/Users/herbert19lee/Develop/OpenCV_2/images/boldt.jpg", 1);
	saltImage = image.clone();	
	//colorReduceImage = image.clone();
	//image.copyTo(colorReduceImage, image);
	
	namedWindow("Orig Image", 1);
	imshow("Orig Image", image);
	
	salt(saltImage, 3000);	
	
	namedWindow("salt and pepper", 1);
	imshow("salt and pepper", saltImage);
	
	colorReduce(image, colorReduceImage, 64);
	
	namedWindow("colorReduce", 1);
	imshow("colorReduce", colorReduceImage);

	waitKey(0);
    return 0;
}