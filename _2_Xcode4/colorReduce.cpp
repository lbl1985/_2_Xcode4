/*
 *  colorReduce.cpp
 *  _2
 *
 *  Created by Binlong Li on 1/19/12.
 *  Copyright 2012 Northeaster University. All rights reserved.
 *
 */

#include "utility.h"

//void colorReduce(cv::Mat &image, int div=64) {
//	int nl= image.rows; // number of lines
//	// total number of elements per line
//	int nc= image.cols * image.channels();
//	for (int j=0; j<nl; j++) {
//		// get the address of row j
//		uchar* data= image.ptr<uchar>(j);
//		for (int i=0; i<nc; i++) {
//			// process each pixel ---------------------
//			data[i]=    data[i]/div*div + div/2;
//			// end of pixel processing ----------------
//		}
//	}
//}


void colorReduce(const Mat &image, Mat &result, int div){
	result.create(image.rows, image.cols, image.type());
	int nr = image.rows;
	int nc = image.cols * image.channels();
	uchar power = log(div)/log(2);
	uchar mask = 0xFF << power;
	uchar remainer = div / 2;
	for (int j = 0; j < nr; j++) {
		const uchar* data_in = image.ptr<uchar>(j);
		uchar* data_out = result.ptr<uchar>(j);
		for (int i = 0; i < nc; i++) {
			data_out[i] = (data_in[i] & mask) + remainer;
			//data[i] = data[i] / div * div + div/2;
			//cout << i << " " ;
		}
	}
}

