/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _clcb7b_h_
#define _clcb7b_h_


#ifdef __cplusplus
extern "C" {
#endif

#define NVCB7B_WINDOW_IMM_CHANNEL_DMA                                           (0x0000CB7B)

// dma opcode instructions
#define NVCB7B_DMA                                                                     
#define NVCB7B_DMA_OPCODE                                                        31:29 
#define NVCB7B_DMA_OPCODE_METHOD                                            0x00000000 
#define NVCB7B_DMA_OPCODE_JUMP                                              0x00000001 
#define NVCB7B_DMA_OPCODE_NONINC_METHOD                                     0x00000002 
#define NVCB7B_DMA_OPCODE_SET_SUBDEVICE_MASK                                0x00000003 
#define NVCB7B_DMA_METHOD_COUNT                                                  27:18 
#define NVCB7B_DMA_METHOD_OFFSET                                                  15:2 
#define NVCB7B_DMA_DATA                                                           31:0 
#define NVCB7B_DMA_DATA_NOP                                                 0x00000000 
#define NVCB7B_DMA_JUMP_OFFSET                                                    15:2 
#define NVCB7B_DMA_SET_SUBDEVICE_MASK_VALUE                                       11:0 

// class methods
#define NVCB7B_PUT                                                              (0x00000000)
#define NVCB7B_PUT_PTR                                                          13:0
#define NVCB7B_GET                                                              (0x00000004)
#define NVCB7B_GET_PTR                                                          13:0
#define NVCB7B_UPDATE                                                           (0x00000200)
#define NVCB7B_UPDATE_RELEASE_ELV                                               0:0
#define NVCB7B_UPDATE_RELEASE_ELV_FALSE                                         (0x00000000)
#define NVCB7B_UPDATE_RELEASE_ELV_TRUE                                          (0x00000001)
#define NVCB7B_UPDATE_INTERLOCK_WITH_WINDOW                                     1:1
#define NVCB7B_UPDATE_INTERLOCK_WITH_WINDOW_DISABLE                             (0x00000000)
#define NVCB7B_UPDATE_INTERLOCK_WITH_WINDOW_ENABLE                              (0x00000001)
#define NVCB7B_UPDATE_FORCE_FULLSCREEN                                          4:4
#define NVCB7B_UPDATE_FORCE_FULLSCREEN_FALSE                                    (0x00000000)
#define NVCB7B_UPDATE_FORCE_FULLSCREEN_TRUE                                     (0x00000001)
#define NVCB7B_SET_POINT_OUT(b)                                                 (0x00000208 + (b)*0x00000004)
#define NVCB7B_SET_POINT_OUT_X                                                  15:0
#define NVCB7B_SET_POINT_OUT_Y                                                  31:16

#ifdef __cplusplus
};     /* extern "C" */
#endif
#endif // _clcb7b_h
