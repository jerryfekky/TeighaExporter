/////////////////////////////////////////////////////////////////////////////// 
// Copyright (C) 2002-2018, Open Design Alliance (the "Alliance"). 
// All rights reserved. 
// 
// This software and its documentation and related materials are owned by 
// the Alliance. The software may only be incorporated into application 
// programs owned by members of the Alliance, subject to a signed 
// Membership Agreement and Supplemental Software License Agreement with the
// Alliance. The structure and organization of this software are the valuable  
// trade secrets of the Alliance and its suppliers. The software is also 
// protected by copyright law and international treaty provisions. Application  
// programs incorporating this software must include the following statement 
// with their copyright notices:
//   
//   This application incorporates Teigha(R) software pursuant to a license 
//   agreement with Open Design Alliance.
//   Teigha(R) Copyright (C) 2002-2018 by Open Design Alliance. 
//   All rights reserved.
//
// By use of this software, its documentation or related materials, you 
// acknowledge and accept the above terms.
///////////////////////////////////////////////////////////////////////////////
#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Tps_2_0 PaletteShader.hlsl /FhPaletteShader.h
//
//
// Parameters:
//
//   float u_Highlighted;
//   sampler2D u_Highlighting;
//   sampler2D u_Image;
//   sampler1D u_Palette;
//   float u_TexLut;
//
//
// Registers:
//
//   Name           Reg   Size
//   -------------- ----- ----
//   u_TexLut       c0       1
//   u_Highlighted  c1       1
//   u_Image        s0       1
//   u_Highlighting s1       1
//   u_Palette      s2       1
//

    ps_2_0
    def c2, 1, 255, -1, 0
    dcl t0.xy
    dcl t1.xy
    dcl v0
    dcl_2d s0
    dcl_2d s1
    dcl_2d s2
    texld r0, t0, s0
    rcp r1.w, c0.x
    add r1.x, -r1.w, c2.x
    mul r1.x, r1.x, c2.y
    mov r2.w, c0.x
    add r1.y, r2.w, c2.z
    rcp r1.y, r1.y
    mul r1.x, r1.y, r1.x
    add r1.y, c0.x, c0.x
    rcp r1.y, r1.y
    mad r1.xy, r0.x, r1.x, r1.y
    texld r1, r1, s2
    texld r2, t1, s1
    cmp r0, -c0.x, r0, r1
    mul r0.w, r0.w, v0.w
    mul r1, r2, r0
    mul r2.x, c1.x, c1.x
    cmp r0, -r2.x, r0, r1
    mov oC0, r0

// approximately 19 instruction slots used (3 texture, 16 arithmetic)
#endif

static const BYTE g_ps20_PaletteShader_main[] =
{
      0,   2, 255, 255, 254, 255, 
     79,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,   4,   1, 
      0,   0,   0,   2, 255, 255, 
      5,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    253,   0,   0,   0, 128,   0, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   0,   0, 144,   0, 
      0,   0,   0,   0,   0,   0, 
    160,   0,   0,   0,   3,   0, 
      1,   0,   1,   0,   0,   0, 
    176,   0,   0,   0,   0,   0, 
      0,   0, 192,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0, 200,   0,   0,   0, 
      0,   0,   0,   0, 216,   0, 
      0,   0,   3,   0,   2,   0, 
      1,   0,   0,   0, 228,   0, 
      0,   0,   0,   0,   0,   0, 
    244,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
    144,   0,   0,   0,   0,   0, 
      0,   0, 117,  95,  72, 105, 
    103, 104, 108, 105, 103, 104, 
    116, 101, 100,   0, 171, 171, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 117,  95, 
     72, 105, 103, 104, 108, 105, 
    103, 104, 116, 105, 110, 103, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    117,  95,  73, 109,  97, 103, 
    101,   0,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    117,  95,  80,  97, 108, 101, 
    116, 116, 101,   0, 171, 171, 
      4,   0,  11,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 117,  95, 
     84, 101, 120,  76, 117, 116, 
      0, 112, 115,  95,  50,  95, 
     48,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  57,  46,  50,  57,  46, 
     57,  53,  50,  46,  51,  49, 
     49,  49,   0, 171, 171, 171, 
     81,   0,   0,   5,   2,   0, 
     15, 160,   0,   0, 128,  63, 
      0,   0, 127,  67,   0,   0, 
    128, 191,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   1,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   2,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 176, 
      0,   8, 228, 160,   6,   0, 
      0,   2,   1,   0,   8, 128, 
      0,   0,   0, 160,   2,   0, 
      0,   3,   1,   0,   1, 128, 
      1,   0, 255, 129,   2,   0, 
      0, 160,   5,   0,   0,   3, 
      1,   0,   1, 128,   1,   0, 
      0, 128,   2,   0,  85, 160, 
      1,   0,   0,   2,   2,   0, 
      8, 128,   0,   0,   0, 160, 
      2,   0,   0,   3,   1,   0, 
      2, 128,   2,   0, 255, 128, 
      2,   0, 170, 160,   6,   0, 
      0,   2,   1,   0,   2, 128, 
      1,   0,  85, 128,   5,   0, 
      0,   3,   1,   0,   1, 128, 
      1,   0,  85, 128,   1,   0, 
      0, 128,   2,   0,   0,   3, 
      1,   0,   2, 128,   0,   0, 
      0, 160,   0,   0,   0, 160, 
      6,   0,   0,   2,   1,   0, 
      2, 128,   1,   0,  85, 128, 
      4,   0,   0,   4,   1,   0, 
      3, 128,   0,   0,   0, 128, 
      1,   0,   0, 128,   1,   0, 
     85, 128,  66,   0,   0,   3, 
      1,   0,  15, 128,   1,   0, 
    228, 128,   2,   8, 228, 160, 
     66,   0,   0,   3,   2,   0, 
     15, 128,   1,   0, 228, 176, 
      1,   8, 228, 160,  88,   0, 
      0,   4,   0,   0,  15, 128, 
      0,   0,   0, 161,   0,   0, 
    228, 128,   1,   0, 228, 128, 
      5,   0,   0,   3,   0,   0, 
      8, 128,   0,   0, 255, 128, 
      0,   0, 255, 144,   5,   0, 
      0,   3,   1,   0,  15, 128, 
      2,   0, 228, 128,   0,   0, 
    228, 128,   5,   0,   0,   3, 
      2,   0,   1, 128,   1,   0, 
      0, 160,   1,   0,   0, 160, 
     88,   0,   0,   4,   0,   0, 
     15, 128,   2,   0,   0, 129, 
      0,   0, 228, 128,   1,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
    228, 128, 255, 255,   0,   0
};
