/*
 * audio_codec_WM8731.h
 *
 *  Created on: Dec 3, 2013
 *      Author: jgildred
 */

#ifndef AUDIO_CODEC_WM8731_H_
#define AUDIO_CODEC_WM8731_H_
#include "avb_conf.h"
#include "i2c.h"

void audio_codec_WM8731_init(int mask,
                              int codec_addr,
                        #if I2C_COMBINE_SCL_SDA
                              port r_i2c
                        #else
                              struct r_i2c &r_i2c
                        #endif
                              );

#endif /* AUDIO_CODEC_WM8731_H_ */

