/*
 *  Attributes.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All Rights Reserved.
 *
 */

#pragma once
#ifndef _G_ATTRIBUTES_H_
#define _G_ATTRIBUTES_H_

#include "Internal.h"
#include "Encode.h"
#include "Object.h"


#define COUNT_ARGS_FILL() 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
#define COUNT_ARGS__( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, N, ... ) N 
#define COUNT_ARGS_(...) COUNT_ARGS__( __VA_ARGS__ )
#define COUNT_ARGS(...) COUNT_ARGS_( __VA_ARGS__, COUNT_ARGS_FILL() )


#define TO_STRING_0( )
#define TO_STRING_1( a0 ) #a0
#define TO_STRING_2( a0, a1 ) #a0, #a1
#define TO_STRING_3( a0, a1, a2 ) #a0, #a1, #a2
#define TO_STRING_4( a0, a1, a2, a3 ) #a0, #a1, #a2, #a3
#define TO_STRING_5( a0, a1, a2, a3, a4 ) #a0, #a1, #a2, #a3, #a4
#define TO_STRING_6( a0, a1, a2, a3, a4, a5 ) #a0, #a1, #a2, #a3, #a4, #a5
#define TO_STRING_7( a0, a1, a2, a3, a4, a5, a6 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6
#define TO_STRING_8( a0, a1, a2, a3, a4, a5, a6, a7 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7
#define TO_STRING_9( a0, a1, a2, a3, a4, a5, a6, a7, a8 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8
#define TO_STRING_10( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9
#define TO_STRING_11( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10
#define TO_STRING_12( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11
#define TO_STRING_13( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12
#define TO_STRING_14( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13
#define TO_STRING_15( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14
#define TO_STRING_16( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15
#define TO_STRING_17( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16
#define TO_STRING_18( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17
#define TO_STRING_19( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18
#define TO_STRING_20( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19
#define TO_STRING_21( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20
#define TO_STRING_22( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21
#define TO_STRING_23( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22
#define TO_STRING_24( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23
#define TO_STRING_25( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24
#define TO_STRING_26( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25
#define TO_STRING_27( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26
#define TO_STRING_28( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27
#define TO_STRING_29( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28
#define TO_STRING_30( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29
#define TO_STRING_31( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30
#define TO_STRING_32( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31
#define TO_STRING_33( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32
#define TO_STRING_34( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33
#define TO_STRING_35( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34
#define TO_STRING_36( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35
#define TO_STRING_37( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36
#define TO_STRING_38( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37
#define TO_STRING_39( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38
#define TO_STRING_40( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39
#define TO_STRING_41( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40
#define TO_STRING_42( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41
#define TO_STRING_43( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42
#define TO_STRING_44( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43
#define TO_STRING_45( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44
#define TO_STRING_46( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45
#define TO_STRING_47( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46
#define TO_STRING_48( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47
#define TO_STRING_49( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48
#define TO_STRING_50( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49
#define TO_STRING_51( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50
#define TO_STRING_52( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51
#define TO_STRING_53( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52
#define TO_STRING_54( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53
#define TO_STRING_55( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54
#define TO_STRING_56( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55
#define TO_STRING_57( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56
#define TO_STRING_58( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57
#define TO_STRING_59( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58
#define TO_STRING_60( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58, #a59
#define TO_STRING_61( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58, #a59, #a60
#define TO_STRING_62( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58, #a59, #a60, #a61
#define TO_STRING_63( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58, #a59, #a60, #a61, #a62
#define TO_STRING_64( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63 ) #a0, #a1, #a2, #a3, #a4, #a5, #a6, #a7, #a8, #a9, #a10, #a11, #a12, #a13, #a14, #a15, #a16, #a17, #a18, #a19, #a20, #a21, #a22, #a23, #a24, #a25, #a26, #a27, #a28, #a29, #a30, #a31, #a32, #a33, #a34, #a35, #a36, #a37, #a38, #a39, #a40, #a41, #a42, #a43, #a44, #a45, #a46, #a47, #a48, #a49, #a50, #a51, #a52, #a53, #a54, #a55, #a56, #a57, #a58, #a59, #a60, #a61, #a62, #a63
#define TO_STRING__( n, ... ) TO_STRING_##n( __VA_ARGS__ )
#define TO_STRING_( n, ... ) TO_STRING__( n, __VA_ARGS__ )
#define TO_STRING( ... ) TO_STRING_( COUNT_ARGS(__VA_ARGS__), __VA_ARGS__ )


#define ArchiveAttributes( ... ) \
	void Encode( Archivist::Object & object ) const \
	{ \
		const char * names[] = { TO_STRING( __VA_ARGS__ ), NULL }; \
		Archivist::GetProxy( __VA_ARGS__ ).Encode( object, names ); \
		EncodeNotification( *this, object ); \
	} \
\
	Archivist::Object Encode( void ) const \
	{ \
		Archivist::Object object; \
		Encode( object ); \
		return object; \
	} \
\
	void Decode( const Archivist::Object & object ) \
	{ \
		const char * names[] = { TO_STRING( __VA_ARGS__ ), NULL }; \
		Archivist::GetProxy( __VA_ARGS__ ).Decode( object, names ); \
		DecodeNotification( *this, object ); \
	}
	
	
#define ArchiveAttributesBase( ... ) \
	virtual void Encode( Archivist::Object & object ) const \
	{ \
		const char * names[] = { TO_STRING( __VA_ARGS__ ), NULL }; \
		Archivist::GetProxy( __VA_ARGS__ ).Encode( object, names ); \
		EncodeNotification( *this, object ); \
	} \
\
	virtual Archivist::Object Encode( void ) const \
	{ \
		Archivist::Object object; \
		Encode( object ); \
		return object; \
	} \
\
	virtual void Decode( const Archivist::Object & object ) \
	{ \
		const char * names[] = { TO_STRING( __VA_ARGS__ ), NULL }; \
		Archivist::GetProxy( __VA_ARGS__ ).Decode( object, names ); \
		DecodeNotification( *this, object ); \
	}


namespace Archivist
{

template <typename A0 = void, typename A1 = void, typename A2 = void, typename A3 = void, typename A4 = void, typename A5 = void, typename A6 = void, typename A7 = void, typename A8 = void, typename A9 = void, typename A10 = void, typename A11 = void, typename A12 = void, typename A13 = void, typename A14 = void, typename A15 = void, typename A16 = void, typename A17 = void, typename A18 = void, typename A19 = void, typename A20 = void, typename A21 = void, typename A22 = void, typename A23 = void, typename A24 = void, typename A25 = void, typename A26 = void, typename A27 = void, typename A28 = void, typename A29 = void, typename A30 = void, typename A31 = void, typename A32 = void, typename A33 = void, typename A34 = void, typename A35 = void, typename A36 = void, typename A37 = void, typename A38 = void, typename A39 = void, typename A40 = void, typename A41 = void, typename A42 = void, typename A43 = void, typename A44 = void, typename A45 = void, typename A46 = void, typename A47 = void, typename A48 = void, typename A49 = void, typename A50 = void, typename A51 = void, typename A52 = void, typename A53 = void, typename A54 = void, typename A55 = void, typename A56 = void, typename A57 = void, typename A58 = void, typename A59 = void, typename A60 = void, typename A61 = void, typename A62 = void, typename A63 = void, typename A64 = void, typename A65 = void>
struct DefineAttributes;

template <>
struct DefineAttributes<>
{
	typedef DefineAttributes<> value_type;

	void Encode( Archivist::Object & object, const char * names[] ) const
	{
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{
	}
};


template <typename A0>
struct DefineAttributes<A0>
{
	typedef DefineAttributes<A0> value_type;

	DefineAttributes( A0 & _a0 )
	: a0(_a0)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
	}

	A0 & a0;
};

template <typename A0, typename A1>
struct DefineAttributes<A0, A1>
{
	typedef DefineAttributes<A0, A1> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1 )
	: a0(_a0), a1(_a1)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
	}

	A0 & a0;
	A1 & a1;
};

template <typename A0, typename A1, typename A2>
struct DefineAttributes<A0, A1, A2>
{
	typedef DefineAttributes<A0, A1, A2> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2 )
	: a0(_a0), a1(_a1), a2(_a2)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
};

template <typename A0, typename A1, typename A2, typename A3>
struct DefineAttributes<A0, A1, A2, A3>
{
	typedef DefineAttributes<A0, A1, A2, A3> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4>
struct DefineAttributes<A0, A1, A2, A3, A4>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
struct DefineAttributes<A0, A1, A2, A3, A4, A5>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59, A60 & _a60 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59), a60(_a60)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
		object[ names[60] ] = Archivist::Encode( a60 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
		iter = object.Find( names[60] );
		if (iter != object.End()) Archivist::Decode( iter->second, a60 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
	A60 & a60;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59, A60 & _a60, A61 & _a61 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59), a60(_a60), a61(_a61)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
		object[ names[60] ] = Archivist::Encode( a60 ); 
		object[ names[61] ] = Archivist::Encode( a61 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
		iter = object.Find( names[60] );
		if (iter != object.End()) Archivist::Decode( iter->second, a60 ); 
		iter = object.Find( names[61] );
		if (iter != object.End()) Archivist::Decode( iter->second, a61 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
	A60 & a60;
	A61 & a61;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59, A60 & _a60, A61 & _a61, A62 & _a62 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59), a60(_a60), a61(_a61), a62(_a62)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
		object[ names[60] ] = Archivist::Encode( a60 ); 
		object[ names[61] ] = Archivist::Encode( a61 ); 
		object[ names[62] ] = Archivist::Encode( a62 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
		iter = object.Find( names[60] );
		if (iter != object.End()) Archivist::Decode( iter->second, a60 ); 
		iter = object.Find( names[61] );
		if (iter != object.End()) Archivist::Decode( iter->second, a61 ); 
		iter = object.Find( names[62] );
		if (iter != object.End()) Archivist::Decode( iter->second, a62 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
	A60 & a60;
	A61 & a61;
	A62 & a62;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62, typename A63>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59, A60 & _a60, A61 & _a61, A62 & _a62, A63 & _a63 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59), a60(_a60), a61(_a61), a62(_a62), a63(_a63)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
		object[ names[60] ] = Archivist::Encode( a60 ); 
		object[ names[61] ] = Archivist::Encode( a61 ); 
		object[ names[62] ] = Archivist::Encode( a62 ); 
		object[ names[63] ] = Archivist::Encode( a63 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
		iter = object.Find( names[60] );
		if (iter != object.End()) Archivist::Decode( iter->second, a60 ); 
		iter = object.Find( names[61] );
		if (iter != object.End()) Archivist::Decode( iter->second, a61 ); 
		iter = object.Find( names[62] );
		if (iter != object.End()) Archivist::Decode( iter->second, a62 ); 
		iter = object.Find( names[63] );
		if (iter != object.End()) Archivist::Decode( iter->second, a63 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
	A60 & a60;
	A61 & a61;
	A62 & a62;
	A63 & a63;
};

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62, typename A63, typename A64>
struct DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63, A64>
{
	typedef DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63, A64> value_type;

	DefineAttributes( A0 & _a0, A1 & _a1, A2 & _a2, A3 & _a3, A4 & _a4, A5 & _a5, A6 & _a6, A7 & _a7, A8 & _a8, A9 & _a9, A10 & _a10, A11 & _a11, A12 & _a12, A13 & _a13, A14 & _a14, A15 & _a15, A16 & _a16, A17 & _a17, A18 & _a18, A19 & _a19, A20 & _a20, A21 & _a21, A22 & _a22, A23 & _a23, A24 & _a24, A25 & _a25, A26 & _a26, A27 & _a27, A28 & _a28, A29 & _a29, A30 & _a30, A31 & _a31, A32 & _a32, A33 & _a33, A34 & _a34, A35 & _a35, A36 & _a36, A37 & _a37, A38 & _a38, A39 & _a39, A40 & _a40, A41 & _a41, A42 & _a42, A43 & _a43, A44 & _a44, A45 & _a45, A46 & _a46, A47 & _a47, A48 & _a48, A49 & _a49, A50 & _a50, A51 & _a51, A52 & _a52, A53 & _a53, A54 & _a54, A55 & _a55, A56 & _a56, A57 & _a57, A58 & _a58, A59 & _a59, A60 & _a60, A61 & _a61, A62 & _a62, A63 & _a63, A64 & _a64 )
	: a0(_a0), a1(_a1), a2(_a2), a3(_a3), a4(_a4), a5(_a5), a6(_a6), a7(_a7), a8(_a8), a9(_a9), a10(_a10), a11(_a11), a12(_a12), a13(_a13), a14(_a14), a15(_a15), a16(_a16), a17(_a17), a18(_a18), a19(_a19), a20(_a20), a21(_a21), a22(_a22), a23(_a23), a24(_a24), a25(_a25), a26(_a26), a27(_a27), a28(_a28), a29(_a29), a30(_a30), a31(_a31), a32(_a32), a33(_a33), a34(_a34), a35(_a35), a36(_a36), a37(_a37), a38(_a38), a39(_a39), a40(_a40), a41(_a41), a42(_a42), a43(_a43), a44(_a44), a45(_a45), a46(_a46), a47(_a47), a48(_a48), a49(_a49), a50(_a50), a51(_a51), a52(_a52), a53(_a53), a54(_a54), a55(_a55), a56(_a56), a57(_a57), a58(_a58), a59(_a59), a60(_a60), a61(_a61), a62(_a62), a63(_a63), a64(_a64)
	{
	}

	void Encode( Archivist::Object & object, const char * names[] ) const
	{	
		object[ names[0] ] = Archivist::Encode( a0 ); 
		object[ names[1] ] = Archivist::Encode( a1 ); 
		object[ names[2] ] = Archivist::Encode( a2 ); 
		object[ names[3] ] = Archivist::Encode( a3 ); 
		object[ names[4] ] = Archivist::Encode( a4 ); 
		object[ names[5] ] = Archivist::Encode( a5 ); 
		object[ names[6] ] = Archivist::Encode( a6 ); 
		object[ names[7] ] = Archivist::Encode( a7 ); 
		object[ names[8] ] = Archivist::Encode( a8 ); 
		object[ names[9] ] = Archivist::Encode( a9 ); 
		object[ names[10] ] = Archivist::Encode( a10 ); 
		object[ names[11] ] = Archivist::Encode( a11 ); 
		object[ names[12] ] = Archivist::Encode( a12 ); 
		object[ names[13] ] = Archivist::Encode( a13 ); 
		object[ names[14] ] = Archivist::Encode( a14 ); 
		object[ names[15] ] = Archivist::Encode( a15 ); 
		object[ names[16] ] = Archivist::Encode( a16 ); 
		object[ names[17] ] = Archivist::Encode( a17 ); 
		object[ names[18] ] = Archivist::Encode( a18 ); 
		object[ names[19] ] = Archivist::Encode( a19 ); 
		object[ names[20] ] = Archivist::Encode( a20 ); 
		object[ names[21] ] = Archivist::Encode( a21 ); 
		object[ names[22] ] = Archivist::Encode( a22 ); 
		object[ names[23] ] = Archivist::Encode( a23 ); 
		object[ names[24] ] = Archivist::Encode( a24 ); 
		object[ names[25] ] = Archivist::Encode( a25 ); 
		object[ names[26] ] = Archivist::Encode( a26 ); 
		object[ names[27] ] = Archivist::Encode( a27 ); 
		object[ names[28] ] = Archivist::Encode( a28 ); 
		object[ names[29] ] = Archivist::Encode( a29 ); 
		object[ names[30] ] = Archivist::Encode( a30 ); 
		object[ names[31] ] = Archivist::Encode( a31 ); 
		object[ names[32] ] = Archivist::Encode( a32 ); 
		object[ names[33] ] = Archivist::Encode( a33 ); 
		object[ names[34] ] = Archivist::Encode( a34 ); 
		object[ names[35] ] = Archivist::Encode( a35 ); 
		object[ names[36] ] = Archivist::Encode( a36 ); 
		object[ names[37] ] = Archivist::Encode( a37 ); 
		object[ names[38] ] = Archivist::Encode( a38 ); 
		object[ names[39] ] = Archivist::Encode( a39 ); 
		object[ names[40] ] = Archivist::Encode( a40 ); 
		object[ names[41] ] = Archivist::Encode( a41 ); 
		object[ names[42] ] = Archivist::Encode( a42 ); 
		object[ names[43] ] = Archivist::Encode( a43 ); 
		object[ names[44] ] = Archivist::Encode( a44 ); 
		object[ names[45] ] = Archivist::Encode( a45 ); 
		object[ names[46] ] = Archivist::Encode( a46 ); 
		object[ names[47] ] = Archivist::Encode( a47 ); 
		object[ names[48] ] = Archivist::Encode( a48 ); 
		object[ names[49] ] = Archivist::Encode( a49 ); 
		object[ names[50] ] = Archivist::Encode( a50 ); 
		object[ names[51] ] = Archivist::Encode( a51 ); 
		object[ names[52] ] = Archivist::Encode( a52 ); 
		object[ names[53] ] = Archivist::Encode( a53 ); 
		object[ names[54] ] = Archivist::Encode( a54 ); 
		object[ names[55] ] = Archivist::Encode( a55 ); 
		object[ names[56] ] = Archivist::Encode( a56 ); 
		object[ names[57] ] = Archivist::Encode( a57 ); 
		object[ names[58] ] = Archivist::Encode( a58 ); 
		object[ names[59] ] = Archivist::Encode( a59 ); 
		object[ names[60] ] = Archivist::Encode( a60 ); 
		object[ names[61] ] = Archivist::Encode( a61 ); 
		object[ names[62] ] = Archivist::Encode( a62 ); 
		object[ names[63] ] = Archivist::Encode( a63 ); 
		object[ names[64] ] = Archivist::Encode( a64 ); 
	}

	void Decode( const Archivist::Object & object, const char * names[] )
	{	
		Object::ConstIterator iter; 
		iter = object.Find( names[0] );
		if (iter != object.End()) Archivist::Decode( iter->second, a0 ); 
		iter = object.Find( names[1] );
		if (iter != object.End()) Archivist::Decode( iter->second, a1 ); 
		iter = object.Find( names[2] );
		if (iter != object.End()) Archivist::Decode( iter->second, a2 ); 
		iter = object.Find( names[3] );
		if (iter != object.End()) Archivist::Decode( iter->second, a3 ); 
		iter = object.Find( names[4] );
		if (iter != object.End()) Archivist::Decode( iter->second, a4 ); 
		iter = object.Find( names[5] );
		if (iter != object.End()) Archivist::Decode( iter->second, a5 ); 
		iter = object.Find( names[6] );
		if (iter != object.End()) Archivist::Decode( iter->second, a6 ); 
		iter = object.Find( names[7] );
		if (iter != object.End()) Archivist::Decode( iter->second, a7 ); 
		iter = object.Find( names[8] );
		if (iter != object.End()) Archivist::Decode( iter->second, a8 ); 
		iter = object.Find( names[9] );
		if (iter != object.End()) Archivist::Decode( iter->second, a9 ); 
		iter = object.Find( names[10] );
		if (iter != object.End()) Archivist::Decode( iter->second, a10 ); 
		iter = object.Find( names[11] );
		if (iter != object.End()) Archivist::Decode( iter->second, a11 ); 
		iter = object.Find( names[12] );
		if (iter != object.End()) Archivist::Decode( iter->second, a12 ); 
		iter = object.Find( names[13] );
		if (iter != object.End()) Archivist::Decode( iter->second, a13 ); 
		iter = object.Find( names[14] );
		if (iter != object.End()) Archivist::Decode( iter->second, a14 ); 
		iter = object.Find( names[15] );
		if (iter != object.End()) Archivist::Decode( iter->second, a15 ); 
		iter = object.Find( names[16] );
		if (iter != object.End()) Archivist::Decode( iter->second, a16 ); 
		iter = object.Find( names[17] );
		if (iter != object.End()) Archivist::Decode( iter->second, a17 ); 
		iter = object.Find( names[18] );
		if (iter != object.End()) Archivist::Decode( iter->second, a18 ); 
		iter = object.Find( names[19] );
		if (iter != object.End()) Archivist::Decode( iter->second, a19 ); 
		iter = object.Find( names[20] );
		if (iter != object.End()) Archivist::Decode( iter->second, a20 ); 
		iter = object.Find( names[21] );
		if (iter != object.End()) Archivist::Decode( iter->second, a21 ); 
		iter = object.Find( names[22] );
		if (iter != object.End()) Archivist::Decode( iter->second, a22 ); 
		iter = object.Find( names[23] );
		if (iter != object.End()) Archivist::Decode( iter->second, a23 ); 
		iter = object.Find( names[24] );
		if (iter != object.End()) Archivist::Decode( iter->second, a24 ); 
		iter = object.Find( names[25] );
		if (iter != object.End()) Archivist::Decode( iter->second, a25 ); 
		iter = object.Find( names[26] );
		if (iter != object.End()) Archivist::Decode( iter->second, a26 ); 
		iter = object.Find( names[27] );
		if (iter != object.End()) Archivist::Decode( iter->second, a27 ); 
		iter = object.Find( names[28] );
		if (iter != object.End()) Archivist::Decode( iter->second, a28 ); 
		iter = object.Find( names[29] );
		if (iter != object.End()) Archivist::Decode( iter->second, a29 ); 
		iter = object.Find( names[30] );
		if (iter != object.End()) Archivist::Decode( iter->second, a30 ); 
		iter = object.Find( names[31] );
		if (iter != object.End()) Archivist::Decode( iter->second, a31 ); 
		iter = object.Find( names[32] );
		if (iter != object.End()) Archivist::Decode( iter->second, a32 ); 
		iter = object.Find( names[33] );
		if (iter != object.End()) Archivist::Decode( iter->second, a33 ); 
		iter = object.Find( names[34] );
		if (iter != object.End()) Archivist::Decode( iter->second, a34 ); 
		iter = object.Find( names[35] );
		if (iter != object.End()) Archivist::Decode( iter->second, a35 ); 
		iter = object.Find( names[36] );
		if (iter != object.End()) Archivist::Decode( iter->second, a36 ); 
		iter = object.Find( names[37] );
		if (iter != object.End()) Archivist::Decode( iter->second, a37 ); 
		iter = object.Find( names[38] );
		if (iter != object.End()) Archivist::Decode( iter->second, a38 ); 
		iter = object.Find( names[39] );
		if (iter != object.End()) Archivist::Decode( iter->second, a39 ); 
		iter = object.Find( names[40] );
		if (iter != object.End()) Archivist::Decode( iter->second, a40 ); 
		iter = object.Find( names[41] );
		if (iter != object.End()) Archivist::Decode( iter->second, a41 ); 
		iter = object.Find( names[42] );
		if (iter != object.End()) Archivist::Decode( iter->second, a42 ); 
		iter = object.Find( names[43] );
		if (iter != object.End()) Archivist::Decode( iter->second, a43 ); 
		iter = object.Find( names[44] );
		if (iter != object.End()) Archivist::Decode( iter->second, a44 ); 
		iter = object.Find( names[45] );
		if (iter != object.End()) Archivist::Decode( iter->second, a45 ); 
		iter = object.Find( names[46] );
		if (iter != object.End()) Archivist::Decode( iter->second, a46 ); 
		iter = object.Find( names[47] );
		if (iter != object.End()) Archivist::Decode( iter->second, a47 ); 
		iter = object.Find( names[48] );
		if (iter != object.End()) Archivist::Decode( iter->second, a48 ); 
		iter = object.Find( names[49] );
		if (iter != object.End()) Archivist::Decode( iter->second, a49 ); 
		iter = object.Find( names[50] );
		if (iter != object.End()) Archivist::Decode( iter->second, a50 ); 
		iter = object.Find( names[51] );
		if (iter != object.End()) Archivist::Decode( iter->second, a51 ); 
		iter = object.Find( names[52] );
		if (iter != object.End()) Archivist::Decode( iter->second, a52 ); 
		iter = object.Find( names[53] );
		if (iter != object.End()) Archivist::Decode( iter->second, a53 ); 
		iter = object.Find( names[54] );
		if (iter != object.End()) Archivist::Decode( iter->second, a54 ); 
		iter = object.Find( names[55] );
		if (iter != object.End()) Archivist::Decode( iter->second, a55 ); 
		iter = object.Find( names[56] );
		if (iter != object.End()) Archivist::Decode( iter->second, a56 ); 
		iter = object.Find( names[57] );
		if (iter != object.End()) Archivist::Decode( iter->second, a57 ); 
		iter = object.Find( names[58] );
		if (iter != object.End()) Archivist::Decode( iter->second, a58 ); 
		iter = object.Find( names[59] );
		if (iter != object.End()) Archivist::Decode( iter->second, a59 ); 
		iter = object.Find( names[60] );
		if (iter != object.End()) Archivist::Decode( iter->second, a60 ); 
		iter = object.Find( names[61] );
		if (iter != object.End()) Archivist::Decode( iter->second, a61 ); 
		iter = object.Find( names[62] );
		if (iter != object.End()) Archivist::Decode( iter->second, a62 ); 
		iter = object.Find( names[63] );
		if (iter != object.End()) Archivist::Decode( iter->second, a63 ); 
		iter = object.Find( names[64] );
		if (iter != object.End()) Archivist::Decode( iter->second, a64 ); 
	}

	A0 & a0;
	A1 & a1;
	A2 & a2;
	A3 & a3;
	A4 & a4;
	A5 & a5;
	A6 & a6;
	A7 & a7;
	A8 & a8;
	A9 & a9;
	A10 & a10;
	A11 & a11;
	A12 & a12;
	A13 & a13;
	A14 & a14;
	A15 & a15;
	A16 & a16;
	A17 & a17;
	A18 & a18;
	A19 & a19;
	A20 & a20;
	A21 & a21;
	A22 & a22;
	A23 & a23;
	A24 & a24;
	A25 & a25;
	A26 & a26;
	A27 & a27;
	A28 & a28;
	A29 & a29;
	A30 & a30;
	A31 & a31;
	A32 & a32;
	A33 & a33;
	A34 & a34;
	A35 & a35;
	A36 & a36;
	A37 & a37;
	A38 & a38;
	A39 & a39;
	A40 & a40;
	A41 & a41;
	A42 & a42;
	A43 & a43;
	A44 & a44;
	A45 & a45;
	A46 & a46;
	A47 & a47;
	A48 & a48;
	A49 & a49;
	A50 & a50;
	A51 & a51;
	A52 & a52;
	A53 & a53;
	A54 & a54;
	A55 & a55;
	A56 & a56;
	A57 & a57;
	A58 & a58;
	A59 & a59;
	A60 & a60;
	A61 & a61;
	A62 & a62;
	A63 & a63;
	A64 & a64;
};


inline DefineAttributes<> GetProxy( void )
{
	return DefineAttributes<>();
}

template <typename A0>
DefineAttributes<A0> GetProxy( A0 & a0 )
{
	return DefineAttributes<A0>( a0 );
}

template <typename A0, typename A1>
DefineAttributes<A0, A1> GetProxy( A0 & a0, A1 & a1 )
{
	return DefineAttributes<A0, A1>( a0, a1 );
}

template <typename A0, typename A1, typename A2>
DefineAttributes<A0, A1, A2> GetProxy( A0 & a0, A1 & a1, A2 & a2 )
{
	return DefineAttributes<A0, A1, A2>( a0, a1, a2 );
}

template <typename A0, typename A1, typename A2, typename A3>
DefineAttributes<A0, A1, A2, A3> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3 )
{
	return DefineAttributes<A0, A1, A2, A3>( a0, a1, a2, a3 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4>
DefineAttributes<A0, A1, A2, A3, A4> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4 )
{
	return DefineAttributes<A0, A1, A2, A3, A4>( a0, a1, a2, a3, a4 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
DefineAttributes<A0, A1, A2, A3, A4, A5> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5>( a0, a1, a2, a3, a4, a5 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6>( a0, a1, a2, a3, a4, a5, a6 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7>( a0, a1, a2, a3, a4, a5, a6, a7 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8>( a0, a1, a2, a3, a4, a5, a6, a7, a8 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59, A60 & a60 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59, A60 & a60, A61 & a61 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59, A60 & a60, A61 & a61, A62 & a62 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62, typename A63>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59, A60 & a60, A61 & a61, A62 & a62, A63 & a63 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63 );
}

template <typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9, typename A10, typename A11, typename A12, typename A13, typename A14, typename A15, typename A16, typename A17, typename A18, typename A19, typename A20, typename A21, typename A22, typename A23, typename A24, typename A25, typename A26, typename A27, typename A28, typename A29, typename A30, typename A31, typename A32, typename A33, typename A34, typename A35, typename A36, typename A37, typename A38, typename A39, typename A40, typename A41, typename A42, typename A43, typename A44, typename A45, typename A46, typename A47, typename A48, typename A49, typename A50, typename A51, typename A52, typename A53, typename A54, typename A55, typename A56, typename A57, typename A58, typename A59, typename A60, typename A61, typename A62, typename A63, typename A64>
DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63, A64> GetProxy( A0 & a0, A1 & a1, A2 & a2, A3 & a3, A4 & a4, A5 & a5, A6 & a6, A7 & a7, A8 & a8, A9 & a9, A10 & a10, A11 & a11, A12 & a12, A13 & a13, A14 & a14, A15 & a15, A16 & a16, A17 & a17, A18 & a18, A19 & a19, A20 & a20, A21 & a21, A22 & a22, A23 & a23, A24 & a24, A25 & a25, A26 & a26, A27 & a27, A28 & a28, A29 & a29, A30 & a30, A31 & a31, A32 & a32, A33 & a33, A34 & a34, A35 & a35, A36 & a36, A37 & a37, A38 & a38, A39 & a39, A40 & a40, A41 & a41, A42 & a42, A43 & a43, A44 & a44, A45 & a45, A46 & a46, A47 & a47, A48 & a48, A49 & a49, A50 & a50, A51 & a51, A52 & a52, A53 & a53, A54 & a54, A55 & a55, A56 & a56, A57 & a57, A58 & a58, A59 & a59, A60 & a60, A61 & a61, A62 & a62, A63 & a63, A64 & a64 )
{
	return DefineAttributes<A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36, A37, A38, A39, A40, A41, A42, A43, A44, A45, A46, A47, A48, A49, A50, A51, A52, A53, A54, A55, A56, A57, A58, A59, A60, A61, A62, A63, A64>( a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63, a64 );
}


}  // namespace


#endif // _G_DEFINE_H_

