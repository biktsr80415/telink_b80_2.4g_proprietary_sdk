/********************************************************************************************************
 * @file	fonts.c
 *
 * @brief	This is the source file for b80
 *
 * @author	2.4G Group
 * @date	2021
 *
 * @par     Copyright (c) 2019, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *          All rights reserved.
 *
 *          Redistribution and use in source and binary forms, with or without
 *          modification, are permitted provided that the following conditions are met:
 *
 *              1. Redistributions of source code must retain the above copyright
 *              notice, this list of conditions and the following disclaimer.
 *
 *              2. Unless for usage inside a TELINK integrated circuit, redistributions
 *              in binary form must reproduce the above copyright notice, this list of
 *              conditions and the following disclaimer in the documentation and/or other
 *              materials provided with the distribution.
 *
 *              3. Neither the name of TELINK, nor the names of its contributors may be
 *              used to endorse or promote products derived from this software without
 *              specific prior written permission.
 *
 *              4. This software, with or without modification, must only be used with a
 *              TELINK integrated circuit. All other usages are subject to written permission
 *              from TELINK and different commercial license may apply.
 *
 *              5. Licensee shall be solely responsible for any claim to the extent arising out of or
 *              relating to such deletion(s), modification(s) or alteration(s).
 *
 *          THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *          ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *          WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *          DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDER BE LIABLE FOR ANY
 *          DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *          (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *          LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *          ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *          (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *          SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *******************************************************************************************************/
#include "fonts.h"

const unsigned char NUM_0[]={0xFC,0x0F,0xF8,0x07,0xF3,0xF3,0xF7,0x3B,0xF3,0xF3,0xF8,0x07,0xFC,0x0F,0xFF,0xFF};

const unsigned char NUM_1[]={0xFF,0xFF,0xF7,0xEF,0xF7,0xE7,0xF0,0x03,0xF0,0x03,0xF7,0xFF,0xF7,0xFF,0xFF,0xFF};

const unsigned char NUM_2[]={0xF1,0xF7,0xF0,0xF3,0xF6,0x7B,0xF7,0x3B,0xF7,0x9B,0xF3,0xC3,0xF3,0xE7,0xFF,0xFF};

const unsigned char NUM_3[]={0xFB,0xF7,0xF3,0xF3,0xF7,0xBB,0xF7,0xBB,0xF7,0xBB,0xF0,0x03,0xF8,0x47,0xFF,0xFF};

const unsigned char NUM_4[]={0xFF,0x3F,0xFF,0x1F,0xFF,0x4F,0xF7,0x67,0xF0,0x03,0xF0,0x03,0xF7,0x7F,0xFF,0xFF};

const unsigned char NUM_5[]={0xFB,0x83,0xF3,0x83,0xF7,0xBB,0xF7,0xBB,0xF7,0xBB,0xF0,0x3B,0xF8,0x7B,0xFF,0xFF};

const unsigned char NUM_6[]={0xF8,0x0F,0xF0,0x07,0xF7,0xB3,0xF7,0xBB,0xF7,0xBB,0xF0,0x3B,0xF8,0x7F,0xFF,0xFF};

const unsigned char NUM_7[]={0xFF,0xF3,0xFF,0xF3,0xF0,0xFB,0xF0,0x7B,0xFF,0x3B,0xFF,0x83,0xFF,0xC3,0xFF,0xFF};

const unsigned char NUM_8[]={0xF8,0x47,0xF0,0x03,0xF7,0xBB,0xF7,0xBB,0xF7,0xBB,0xF0,0x03,0xF8,0x47,0xFF,0xFF};

const unsigned char NUM_9[]={0xFF,0x9F,0xFE,0x0F,0xDE,0xF7,0xC4,0xF7,0xF0,0xF7,0xFC,0x67,0xFF,0x0F,0xFF,0xFF};

const unsigned char CHAR_A[]={0xF0,0x1F,0xF0,0x0F,0xFF,0x67,0xFF,0x73,0xFF,0x67,0xF0,0x0F,0xF0,0x1F,0xFF,0xFF};

const unsigned char CHAR_B[]={0xFF,0xFF,0xE0,0x03,0xEE,0x73,0xEE,0x73,0xEE,0x73,0xEE,0x67,0xE0,0x8F,0xFF,0xFF};

const unsigned char CHAR_C[]={0xFC,0x0F,0xF8,0x07,0xF3,0xF3,0xF7,0xFB,0xF7,0xFB,0xF3,0xF3,0xF9,0xE7,0xFF,0xFF};

const unsigned char CHAR_D[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xFB,0xF3,0xF3,0xF8,0x07,0xFC,0x0F,0xFF,0xFF};

const unsigned char CHAR_E[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xBB,0xF7,0x1B,0xF3,0xF3,0xF1,0xE3,0xFF,0xFF};

const unsigned char CHAR_F[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xBB,0xFF,0x1B,0xFF,0xF3,0xFF,0xE3,0xFF,0xFF};

const unsigned char CHAR_G[]={0xFC,0x0F,0xF8,0x07,0xF3,0xF3,0xF7,0x7B,0xF7,0x7B,0xF8,0x73,0xF0,0x67,0xFF,0xFF};

const unsigned char CHAR_H[]={0xF0,0x03,0xF0,0x03,0xFF,0xBF,0xFF,0xBF,0xFF,0xBF,0xF0,0x03,0xF0,0x03,0xFF,0xFF};

const unsigned char CHAR_I[]={0xFF,0xFF,0xFF,0xFF,0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xFB,0xFF,0xFF,0xFF,0xFF};

const unsigned char CHAR_J[]={0xF8,0xFF,0xF0,0xFF,0xF7,0xFF,0xF7,0xFB,0xF0,0x03,0xF8,0x03,0xFF,0xFB,0xFF,0xFF};

const unsigned char CHAR_K[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xFF,0x3F,0xFE,0x1F,0xF0,0xC3,0xF1,0xE3,0xFF,0xFF};

const unsigned char CHAR_L[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xFB,0xF7,0xFF,0xF3,0xFF,0xF1,0xFF,0xFF,0xFF};

const unsigned char CHAR_M[]={0xF0,0x03,0xF0,0x07,0xFF,0xCF,0xFE,0x1F,0xFF,0xCF,0xF0,0x07,0xF0,0x03,0xFF,0xFF};

const unsigned char CHAR_N[]={0xF0,0x03,0xF0,0x03,0xFF,0xC7,0xFF,0x8F,0xFF,0x1F,0xF0,0x03,0xF0,0x03,0xFF,0xFF};

const unsigned char CHAR_O[]={0xF8,0x07,0xF0,0x03,0xF7,0xFB,0xF7,0xFB,0xF7,0xFB,0xF0,0x03,0xF8,0x07,0xFF,0xFF};

const unsigned char CHAR_P[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xF7,0xBB,0xFF,0xBB,0xFF,0x83,0xFF,0xC7,0xFF,0xFF};

const unsigned char CHAR_Q[]={0xF8,0x07,0xF0,0x03,0xF7,0xFB,0xF1,0xFB,0xC3,0xFB,0xC0,0x03,0xD8,0x07,0xFF,0xFF};

const unsigned char CHAR_R[]={0xF7,0xFB,0xF0,0x03,0xF0,0x03,0xFF,0xBB,0xFF,0x3B,0xF0,0x03,0xF0,0xC7,0xFF,0xFF};

const unsigned char CHAR_S[]={0xF9,0xE7,0xF1,0xC3,0xF7,0x9B,0xF7,0xBB,0xF7,0x3B,0xF0,0x63,0xF8,0xE7,0xFF,0xFF};

const unsigned char CHAR_T[]={0xFF,0xFF,0xFF,0xE3,0xF7,0xF3,0xF0,0x03,0xF0,0x03,0xF7,0xF3,0xFF,0xE3,0xFF,0xFF};

const unsigned char CHAR_U[]={0xFF,0xFF,0xE0,0x07,0xEF,0xFF,0xDF,0xFF,0xDF,0xFF,0xEF,0xFF,0xE0,0x07,0xFF,0xFF};

const unsigned char CHAR_V[]={0xFF,0xFF,0xFF,0x87,0xF8,0x3F,0xC3,0xFF,0xC3,0xFF,0xF8,0x3F,0xFF,0x87,0xFF,0xFF};

const unsigned char CHAR_W[]={0xFF,0xC7,0xE0,0x07,0xC1,0xFF,0xFE,0x07,0xFE,0x07,0xC1,0xFF,0xE0,0x07,0xFF,0xE7};

const unsigned char CHAR_X[]={0xEF,0xF7,0xE7,0xE7,0xF1,0x8F,0xFC,0x3F,0xFC,0x3F,0xF1,0x8F,0xE7,0xE7,0xEF,0xF7};

const unsigned char CHAR_Y[]={0xFF,0xFB,0xFF,0xE3,0xFF,0x8F,0xE0,0x7F,0xE0,0x7F,0xFF,0x8F,0xFF,0xE3,0xFF,0xFB};

const unsigned char CHAR_Z[]={0xFF,0xFF,0xE7,0xF7,0xE1,0xF7,0xEC,0xF7,0xEF,0x37,0xEF,0x87,0xEF,0xE7,0xFF,0xFF};

// const unsigned char CHAR_a[]={0xFF,0xFF,0xE2,0xFF,0xCB,0x7F,0xDD,0x3F,0xED,0x3F,0xE5,0x7F,0xC0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_b[]={0xFF,0xFF,0xC0,0x07,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_c[]={0xFF,0xFF,0xE0,0xFF,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE6,0x7F,0xFF,0xFF};

// const unsigned char CHAR_d[]={0xFF,0xFF,0xE0,0x7F,0xCF,0x3F,0xDF,0x3F,0xDF,0x3F,0xEE,0x7F,0xC0,0x07,0xFF,0xFF};

// const unsigned char CHAR_e[]={0xFF,0xFF,0xE0,0xFF,0xDD,0x7F,0xDD,0x3F,0xDD,0x3F,0xDD,0x7F,0xEC,0xFF,0xFF,0xFF};

// const unsigned char CHAR_f[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};

// const unsigned char CHAR_g[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};


// const unsigned char CHAR_h[]={0xFF,0xFF,0xE2,0xFF,0xCB,0x7F,0xDD,0x3F,0xED,0x3F,0xE5,0x7F,0xC0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_i[]={0xFF,0xFF,0xC0,0x07,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_j[]={0xFF,0xFF,0xE0,0xFF,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE6,0x7F,0xFF,0xFF};

// const unsigned char CHAR_k[]={0xFF,0xFF,0xE0,0x7F,0xCF,0x3F,0xDF,0x3F,0xDF,0x3F,0xEE,0x7F,0xC0,0x07,0xFF,0xFF};

// const unsigned char CHAR_l[]={0xFF,0xFF,0xE0,0xFF,0xDD,0x7F,0xDD,0x3F,0xDD,0x3F,0xDD,0x7F,0xEC,0xFF,0xFF,0xFF};

// const unsigned char CHAR_m[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};

// const unsigned char CHAR_n[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};


// const unsigned char CHAR_o[]={0xFF,0xFF,0xE2,0xFF,0xCB,0x7F,0xDD,0x3F,0xED,0x3F,0xE5,0x7F,0xC0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_p[]={0xFF,0xFF,0xC0,0x07,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_q[]={0xFF,0xFF,0xE0,0xFF,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE6,0x7F,0xFF,0xFF};

// const unsigned char CHAR_r[]={0xFF,0xFF,0xE0,0x7F,0xCF,0x3F,0xDF,0x3F,0xDF,0x3F,0xEE,0x7F,0xC0,0x07,0xFF,0xFF};

// const unsigned char CHAR_s[]={0xFF,0xFF,0xE0,0xFF,0xDD,0x7F,0xDD,0x3F,0xDD,0x3F,0xDD,0x7F,0xEC,0xFF,0xFF,0xFF};

// const unsigned char CHAR_t[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};

// const unsigned char CHAR_u[]={0xFF,0xFF,0xE2,0xFF,0xCB,0x7F,0xDD,0x3F,0xED,0x3F,0xE5,0x7F,0xC0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_v[]={0xFF,0xFF,0xC0,0x07,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE0,0xFF,0xFF,0xFF};

// const unsigned char CHAR_w[]={0xFF,0xFF,0xE0,0xFF,0xEF,0x7F,0xDF,0x3F,0xDF,0x3F,0xEF,0x7F,0xE6,0x7F,0xFF,0xFF};

// const unsigned char CHAR_x[]={0xFF,0xFF,0xE0,0x7F,0xCF,0x3F,0xDF,0x3F,0xDF,0x3F,0xEE,0x7F,0xC0,0x07,0xFF,0xFF};

// const unsigned char CHAR_y[]={0xFF,0xFF,0xE0,0xFF,0xDD,0x7F,0xDD,0x3F,0xDD,0x3F,0xDD,0x7F,0xEC,0xFF,0xFF,0xFF};

// const unsigned char CHAR_z[]={0xFF,0xFF,0xFF,0x7F,0xFF,0x7F,0xC0,0x0F,0xFF,0x77,0xFF,0x77,0xFF,0x77,0xFF,0xFF};


//  "?"
// const unsigned char CHAR_Ask[]={0xFF,0xFF,0xFF,0xCF,0xFF,0xE7,0xCD,0xF7,0xCE,0x77,0xFF,0x07,0xFF,0x8F,0xFF,0xFF};

//  "!"
// const unsigned char CHAR_Eec[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCE,0x03,0xCE,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
//  "."
const unsigned char CHAR_Ove[]={0xFF,0xFF,0xCF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
const unsigned char CHAR_Space[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
//  ","
// const unsigned char CHAR_Sta[]={0xBF,0xFF,0xCF,0xFF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};

//const unsigned char CHAR_y[]={0xFF,0xFF,0xE0,0xFF,0xDD,0x7F,0xDD,0x3F,0xDD,0x3F,0xDD,0x7F,0xEC,0xFF,0xFF,0xFF};

// const unsigned char pic_bian[]={0xF5,0x3F,0xF4,0x0F,0xE0,0x07,0xE1,0x47,0xE0,0x0F,0xE0,0x0F,0xF0,0xD7,0xF0,0xD7,
// 		0xE0,0x8F,0xE0,0x0F,0xE0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// };
// const unsigned char pic_libai[]={0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xEF,0x77,0xF7,0xFF,0xFD,0xF7,0xFF,0xFF,0xFF,0xFF,0xF6,0xEF,0xFB,0xEF,0xFE,
// 		0xD5,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFC,0xEF,0xF0,0x55,0xFF,0xFF,0xFF,0xFF,0xEF,
// 		0x6F,0xEF,0x0F,0xFB,0x15,0xFF,0xFF,0xFF,0xFF,0xF1,0x2F,0xEF,0xFF,0xFB,0x41,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0x4F,0xE0,0x01,0xFB,0x55,0xFF,0xFF,0xFF,0xFF,0xC1,0x6B,0xFF,
// 		0xCF,0xFB,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0x67,0xFF,0x3F,0xFB,0x55,0xFF,0xFF,0xFF,
// 		0xFF,0xE1,0x6F,0xFC,0xDF,0xFB,0x55,0xFF,0xFF,0xFF,0xFF,0xDF,0x2F,0xFB,0xEF,0xF0,
// 		0x41,0xFF,0xFF,0xFF,0xFF,0xC6,0x6F,0xF7,0xF7,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xDD,0xB7,0xEF,0xBF,0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,0xDD,0x97,0xEF,
// 		0xBB,0xFE,0xFD,0xFF,0xFF,0xFF,0xFF,0xDD,0xA7,0xF7,0xBB,0xFF,0x7D,0xFF,0xFF,0xFF,
// 		0xFF,0xE0,0x37,0xFB,0xBB,0xFF,0xBD,0xFF,0xFF,0xFF,0xFF,0xED,0xB7,0xFC,0xBB,0xFF,
// 		0xDD,0xFF,0xFF,0xFF,0xFF,0xED,0x97,0xFF,0x03,0xF0,0x0D,0xFF,0xFF,0xFF,0xFF,0xED,
// 		0x37,0xFC,0xBB,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xBB,0xFF,0xDD,0xFF,
// 		0xFF,0xFF,0xFF,0xF8,0x0F,0xF7,0xBB,0xFF,0xBD,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xEF,
// 		0xBB,0xFF,0x7D,0xFF,0xFF,0xFF,0xFF,0xC0,0x03,0xEF,0xBF,0xFE,0xFD,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xBB,0xEF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,
// 		0x77,0xEF,0xFF,0xF7,0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0xDF,0xEF,0xFF,0xFB,0xFD,0xFF,
// 		0xFF,0xFF,0xFF,0xF0,0xEF,0xEF,0xFF,0xFD,0xFD,0xFF,0xFF,0xFF,0xFF,0xF6,0x13,0xE0,
// 		0x01,0xFE,0x7D,0xFF,0xFF,0xFF,0xFF,0xF6,0xD7,0xEF,0xDF,0xFF,0x85,0xFF,0xFF,0xFF,
// 		0xFF,0xF2,0x57,0xEF,0xDF,0xF8,0x7D,0xFF,0xFF,0xFF,0xFF,0xD6,0xD7,0xEF,0xDF,0xF7,
// 		0xFD,0xFF,0xFF,0xFF,0xFF,0xD6,0xD7,0xEF,0xDF,0xF7,0xFD,0xFF,0xFF,0xFF,0xFF,0xE0,
// 		0x17,0xEF,0xDF,0xF7,0x01,0xFF,0xFF,0xFF,0xFF,0xF6,0xF7,0xEF,0xFF,0xF1,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFB,0xF7,0xF7,0x7F,0xFF,0xF7,0xFF,0xFF,0xFD,
// 		0xFF,0xFB,0xF7,0xF7,0x77,0xF4,0x15,0xFF,0xFF,0xFD,0xFF,0xFD,0xF7,0xFB,0x57,0xF9,
// 		0x55,0xFF,0xFF,0xFD,0xFF,0xFE,0xF7,0xFD,0x37,0xFD,0x50,0xFF,0xFF,0xFD,0xFF,0xFF,
// 		0x77,0xFE,0x77,0xFD,0x55,0xFF,0xFF,0xFF,0xFF,0xC0,0x37,0xE0,0x01,0xFC,0x05,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xC7,0xFE,0x77,0xFD,0x55,0xFF,0xFF,0xF7,0x6F,0xFF,0x77,0xFD,
// 		0x37,0xFD,0x50,0xFF,0xFF,0xF7,0x6F,0xFE,0xF7,0xFB,0x57,0xF9,0x55,0xFF,0xFF,0xF6,
// 		0xAF,0xFD,0xF7,0xF7,0x77,0xF4,0x15,0xFF,0xFF,0xB6,0xCF,0xFB,0xF7,0xF7,0x7F,0xFF,
// 		0xF7,0xFF,0xFF,0xB6,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x82,0x07,0xFF,
// 		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0xEF,0xFF,0xEF,0xFF,0xFF,0xFB,0xEF,0xFF,
// 		0xFF,0xF6,0xCF,0xD7,0xF7,0xFF,0xFF,0xFD,0xDD,0xFF,0xFF,0xF7,0xAF,0xDA,0x0B,0xFA,
// 		0x7F,0xFE,0xFB,0xFF,0xFF,0xF7,0x6F,0xD0,0xAB,0xFC,0x7F,0xFF,0xFF,0xFF,0xFF,0xF7,
// 		0x6F,0xEA,0xAB,0xFF,0xFF,0xFC,0x0D,0xFF,0xFF,0xFF,0xFF,0xEA,0xAB,0xFF,0xFF,0xFE,
// 		0xED,0xFF,0xFF,0xFF,0xFF,0xEA,0xAB,0xFF,0xFF,0xFE,0xED,0xFF,0xFF,0xFF,0xFF,0xEA,
// 		0xAB,0xFF,0xFF,0xF6,0x0D,0xFF,0xFF,0x80,0x1F,0xD2,0xAB,0xFF,0xFF,0xF7,0xFD,0xFF,
// 		0xFF,0xDD,0xDF,0xDA,0x0B,0xFF,0xFF,0xF0,0x01,0xFF,0xFF,0xDD,0xCF,0xDF,0xFB,0xFF,
// 		0xFF,0xFF,0xFD,0xFF,0xFF,0xDD,0xD7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDD,
// 		0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDD,0xDF,0xFF,0xFF,0xFD,0xBF,0xFF,
// 		0xFF,0xFF,0xFF,0xDD,0xDF,0xC0,0x07,0xED,0xB7,0xF7,0xF7,0xFF,0xFF,0xDD,0xDF,0xEF,
// 		0xF7,0xF5,0xD7,0xFB,0xF7,0xFF,0xFF,0x80,0x1F,0xEF,0xF7,0xF8,0xA7,0xFD,0xF7,0xFF,
// 		0xFF,0xFF,0xFF,0xEC,0x37,0xFD,0xB3,0xFA,0xF6,0xFF,0xFF,0xFF,0xFF,0xED,0xB7,0xFD,
// 		0x15,0xF7,0x75,0xFF,0xFF,0xFF,0xFF,0xED,0xB7,0xFD,0xB7,0xF7,0xB7,0xFF,0xFF,0xFF,
// 		0xFF,0xEC,0x37,0xE0,0xA7,0xF7,0xD7,0xFF,0xFF,0xFF,0xFF,0xEF,0xF7,0xFD,0xD7,0xF7,
// 		0xE7,0xFF,0xFF,0xFF,0xFF,0xEF,0xF7,0xFD,0xB7,0xF7,0xF7,0xFF,0xFF,0xFF,0xFF,0xC0,
// 		0x07,0xFD,0xBF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
// };

const unsigned char bar_code[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x1F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFB,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFB,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x7B,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x39,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x1D,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x5D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x71,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xB9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x01,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x9F,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xEF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF3,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x99,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x21,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x75,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x75,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x75,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x6D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x75,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x75,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x2D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFD,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x7D,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x0D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xE5,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFD,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xDF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x65,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x6D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x65,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xA3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x5D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xA9,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC3,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x39,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x7D,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x3D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x83,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFB,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF9,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x1F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x3B,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x3D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x5D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x6D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x61,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0x73,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x3D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0x9B,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};

const unsigned char telink_log[] = {
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFC,0x00,0x1B,0x38,0x7D,0xE3,0xC3,0xC1,0x9D,0xC3,0x87,0x36,0xD8,0x31,0xEF,
0xFF,0xC0,0x00,0x3B,0x32,0x39,0xD9,0x99,0x99,0x19,0x99,0xE3,0x24,0xDE,0x67,0xC3,
0xFE,0x00,0x00,0x3B,0x67,0x39,0xF9,0x99,0x3B,0x0B,0x39,0xF3,0x6C,0x9E,0x67,0x81,
0xF8,0x00,0x00,0x31,0x6F,0x39,0xF9,0xB9,0x33,0x4B,0x79,0xF2,0x6A,0xB0,0x63,0x81,
0xF0,0x00,0x00,0x26,0x4F,0x3B,0xF9,0x3B,0x73,0x63,0x79,0xE6,0x62,0x3E,0x73,0x81,
0xE0,0x00,0x00,0x60,0x64,0x60,0xA3,0x33,0x06,0x63,0x03,0x46,0x46,0x34,0xD3,0xC3,
0xE0,0x01,0xFF,0xF0,0xF1,0xC0,0x8F,0x73,0x86,0xE7,0x8F,0x1E,0xCE,0x60,0xC7,0xEF,
0xC0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,
0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,
0x83,0xF8,0xFF,0x87,0xE1,0xF1,0xF8,0x78,0x01,0xE0,0x03,0xFC,0x3F,0xFF,0xFC,0x7F,
0x83,0xF8,0x7F,0x87,0xE1,0xF3,0xF0,0xF8,0x03,0xE0,0x03,0xF8,0x7F,0xFF,0xFC,0xFF,
0x87,0xFC,0x3F,0x8F,0xC1,0xE3,0xF0,0xF0,0x03,0xE0,0x07,0xF8,0x7F,0xFF,0xF9,0xFF,
0x87,0xFC,0x3F,0x0F,0xC1,0xE3,0xF0,0xFF,0xC3,0xFF,0x87,0xF8,0x7F,0xFF,0xF1,0xFF,
0x87,0xFE,0x1F,0x0F,0xC1,0xE3,0xF0,0xFF,0xC3,0xFF,0x87,0xF8,0xFF,0xFF,0xE3,0xFF,
0xC3,0xFE,0x0F,0x0F,0xC1,0xE7,0xE1,0xFF,0x87,0xFF,0x87,0xF0,0xFF,0xFF,0xC7,0xFF,
0xC1,0xFF,0x07,0x1F,0x80,0xC7,0xE1,0xFF,0x87,0xFF,0x8F,0xF0,0xFF,0xFF,0x87,0xFF,
0xE0,0xFF,0x02,0x1F,0x80,0xC7,0xE1,0xFF,0x87,0xFF,0x0F,0xF0,0xFF,0xFF,0x0F,0xFF,
0xF8,0x00,0x02,0x1F,0x88,0xC7,0xE3,0xFF,0x87,0xE0,0x0F,0xF1,0xFF,0xFE,0x1F,0xFF,
0xFF,0x00,0x02,0x1F,0x98,0xCF,0xC3,0xFF,0x0F,0xC0,0x0F,0xE1,0xFF,0xFC,0x3F,0xFF,
0xFF,0xFF,0x06,0x3F,0x18,0x8F,0xC3,0xFF,0x0F,0xC0,0x1F,0xE1,0xFF,0xF0,0x7F,0xFF,
0xFF,0xFE,0x0C,0x3F,0x18,0x8F,0xC3,0xFF,0x0F,0xFE,0x1F,0xE1,0xFF,0xE0,0xFF,0xFF,
0xFF,0xFC,0x1C,0x3F,0x18,0x0F,0xC7,0xFF,0x1F,0xFE,0x1F,0xE3,0xFF,0xC1,0xFF,0xFF,
0xFF,0xF8,0x3C,0x3F,0x38,0x1F,0x87,0xFE,0x1F,0xFE,0x1F,0xC3,0xFF,0x03,0xFF,0xFF,
0xFF,0xF8,0x7C,0x7E,0x38,0x1F,0x87,0xFE,0x1F,0xFE,0x3F,0xC3,0xFE,0x07,0xFF,0xFF,
0xFF,0xF0,0xF8,0x7E,0x3C,0x1F,0x87,0xFE,0x1E,0x00,0x3F,0xC3,0xF8,0x0F,0xFF,0xFF,
0xFF,0xE1,0xF8,0x7E,0x3C,0x1F,0x8F,0xFE,0x3E,0x00,0x3F,0xC7,0xF0,0x1F,0xFF,0xFF,
0xFF,0xC3,0xF8,0x7C,0x7C,0x3F,0xEF,0xFC,0x3E,0x00,0x3F,0x87,0xC0,0x3F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,0x84,0x01,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xFF,0xFF,0x80,0x07,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x0F,0xFF,0xFF,0xFF,0xFF,0x00,0x0F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x0F,0xFF,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x08,0x3F,0xFF,0xFF,0x80,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,0x00,0x1F,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};



