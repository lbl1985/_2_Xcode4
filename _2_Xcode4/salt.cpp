/*
 *  salt.cpp
 *  _2
 *
 *  Created by Binlong Li on 1/18/12.
 *  Copyright 2012 Northeaster University. All rights reserved.
 *
 */

#include "utility.h"

void salt(Mat_<Vec3b> &image, int n){
	for (int k = 0; k < n; k++) {
		int i = rand() % image.cols;
		int j = rand() % image.rows;
		
		if (image.channels() == 1) {
			image.at<uchar>(j, i) = 255; 			
		}
		else if (image.channels() == 3){
			image(j, i)[0] = 255;
			image(j, i)[1] = 255;
			image(j, i)[2] = 255;
			//			image.at<Vec3b>(j, i)[0] = 255;
			//			image.at<Vec3b>(j, i)[1] = 255;
			//			image.at<Vec3b>(j, i)[2] = 255;
		}
	}
}

