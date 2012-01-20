/*
 *  utility.h
 *  _2
 *
 *  Created by Binlong Li on 1/18/12.
 *  Copyright 2012 Northeaster University. All rights reserved.
 *
 */

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void salt(Mat_<Vec3b> &, int);
void colorReduce(const Mat &, Mat &,  int);

