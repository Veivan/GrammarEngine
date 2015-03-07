#if defined LEM_UNICODE_EX2

#include <lem/unicode.h>

using namespace lem;

static wchar_t ua[256]=
{
    /* 0*/ 0x0000
  , /* 1*/ 0x0001
  , /* 2*/ 0x0002
  , /* 3*/ 0x0003
  , /* 4*/ 0x0004
  , /* 5*/ 0x0005
  , /* 6*/ 0x0006
  , /* 7*/ 0x0007
  , /* 8*/ 0x0008
  , /* 9*/ 0x0009
  , /* a*/ 0x000a
  , /* b*/ 0x000b
  , /* c*/ 0x000c
  , /* d*/ 0x000d
  , /* e*/ 0x000e
  , /* f*/ 0x000f
  , /*10*/ 0x0010
  , /*11*/ 0x0011
  , /*12*/ 0x0012
  , /*13*/ 0x0013
  , /*14*/ 0x0014
  , /*15*/ 0x0015
  , /*16*/ 0x0016
  , /*17*/ 0x0017
  , /*18*/ 0x0018
  , /*19*/ 0x0019
  , /*1a*/ 0x001a
  , /*1b*/ 0x001b
  , /*1c*/ 0x001c
  , /*1d*/ 0x001d
  , /*1e*/ 0x001e
  , /*1f*/ 0x001f
  , /*20*/ 0x0020
  , /*21*/ 0x0021
  , /*22*/ 0x0022
  , /*23*/ 0x0023
  , /*24*/ 0x0024
  , /*25*/ 0x0025
  , /*26*/ 0x0026
  , /*27*/ 0x0027
  , /*28*/ 0x0028
  , /*29*/ 0x0029
  , /*2a*/ 0x002a
  , /*2b*/ 0x002b
  , /*2c*/ 0x002c
  , /*2d*/ 0x002d
  , /*2e*/ 0x002e
  , /*2f*/ 0x002f
  , /*30*/ 0x0030
  , /*31*/ 0x0031
  , /*32*/ 0x0032
  , /*33*/ 0x0033
  , /*34*/ 0x0034
  , /*35*/ 0x0035
  , /*36*/ 0x0036
  , /*37*/ 0x0037
  , /*38*/ 0x0038
  , /*39*/ 0x0039
  , /*3a*/ 0x003a
  , /*3b*/ 0x003b
  , /*3c*/ 0x003c
  , /*3d*/ 0x003d
  , /*3e*/ 0x003e
  , /*3f*/ 0x003f
  , /*40*/ 0x0040
  , /*41*/ 0x0041
  , /*42*/ 0x0042
  , /*43*/ 0x0043
  , /*44*/ 0x0044
  , /*45*/ 0x0045
  , /*46*/ 0x0046
  , /*47*/ 0x0047
  , /*48*/ 0x0048
  , /*49*/ 0x0049
  , /*4a*/ 0x004a
  , /*4b*/ 0x004b
  , /*4c*/ 0x004c
  , /*4d*/ 0x004d
  , /*4e*/ 0x004e
  , /*4f*/ 0x004f
  , /*50*/ 0x0050
  , /*51*/ 0x0051
  , /*52*/ 0x0052
  , /*53*/ 0x0053
  , /*54*/ 0x0054
  , /*55*/ 0x0055
  , /*56*/ 0x0056
  , /*57*/ 0x0057
  , /*58*/ 0x0058
  , /*59*/ 0x0059
  , /*5a*/ 0x005a
  , /*5b*/ 0x005b
  , /*5c*/ 0x005c
  , /*5d*/ 0x005d
  , /*5e*/ 0x005e
  , /*5f*/ 0x005f
  , /*60*/ 0x0060
  , /*61*/ 0x0061
  , /*62*/ 0x0062
  , /*63*/ 0x0063
  , /*64*/ 0x0064
  , /*65*/ 0x0065
  , /*66*/ 0x0066
  , /*67*/ 0x0067
  , /*68*/ 0x0068
  , /*69*/ 0x0069
  , /*6a*/ 0x006a
  , /*6b*/ 0x006b
  , /*6c*/ 0x006c
  , /*6d*/ 0x006d
  , /*6e*/ 0x006e
  , /*6f*/ 0x006f
  , /*70*/ 0x0070
  , /*71*/ 0x0071
  , /*72*/ 0x0072
  , /*73*/ 0x0073
  , /*74*/ 0x0074
  , /*75*/ 0x0075
  , /*76*/ 0x0076
  , /*77*/ 0x0077
  , /*78*/ 0x0078
  , /*79*/ 0x0079
  , /*7a*/ 0x007a
  , /*7b*/ 0x007b
  , /*7c*/ 0x007c
  , /*7d*/ 0x007d
  , /*7e*/ 0x007e
  , /*7f*/ 0x007f
  , /*80*/ 0x0000
  , /*81*/ 0x0000
  , /*82*/ 0x0000
  , /*83*/ 0x0000
  , /*84*/ 0x0000
  , /*85*/ 0x0000
  , /*86*/ 0x0386
  , /*87*/ 0x0000
  , /*88*/ 0x0000
  , /*89*/ 0x00ac
  , /*8a*/ 0x00a6
  , /*8b*/ 0x2018
  , /*8c*/ 0x2019
  , /*8d*/ 0x0388
  , /*8e*/ 0x2015
  , /*8f*/ 0x0389
  , /*90*/ 0x038a
  , /*91*/ 0x03aa
  , /*92*/ 0x038c
  , /*93*/ 0x0000
  , /*94*/ 0x0000
  , /*95*/ 0x038e
  , /*96*/ 0x03ab
  , /*97*/ 0x00a9
  , /*98*/ 0x038f
  , /*99*/ 0x00b2
  , /*9a*/ 0x00b3
  , /*9b*/ 0x03ac
  , /*9c*/ 0x00a3
  , /*9d*/ 0x03ad
  , /*9e*/ 0x03ae
  , /*9f*/ 0x03af
  , /*a0*/ 0x03ca
  , /*a1*/ 0x0390
  , /*a2*/ 0x03cc
  , /*a3*/ 0x03cd
  , /*a4*/ 0x0391
  , /*a5*/ 0x0392
  , /*a6*/ 0x0393
  , /*a7*/ 0x0394
  , /*a8*/ 0x0395
  , /*a9*/ 0x0396
  , /*aa*/ 0x0397
  , /*ab*/ 0x00bd
  , /*ac*/ 0x0398
  , /*ad*/ 0x0399
  , /*ae*/ 0x00ab
  , /*af*/ 0x00bb
  , /*b0*/ 0x2591
  , /*b1*/ 0x2592
  , /*b2*/ 0x2593
  , /*b3*/ 0x2502
  , /*b4*/ 0x2524
  , /*b5*/ 0x039a
  , /*b6*/ 0x039b
  , /*b7*/ 0x039c
  , /*b8*/ 0x039d
  , /*b9*/ 0x2563
  , /*ba*/ 0x2551
  , /*bb*/ 0x2557
  , /*bc*/ 0x255d
  , /*bd*/ 0x039e
  , /*be*/ 0x039f
  , /*bf*/ 0x2510
  , /*c0*/ 0x2514
  , /*c1*/ 0x2534
  , /*c2*/ 0x252c
  , /*c3*/ 0x251c
  , /*c4*/ 0x2500
  , /*c5*/ 0x253c
  , /*c6*/ 0x03a0
  , /*c7*/ 0x03a1
  , /*c8*/ 0x255a
  , /*c9*/ 0x2554
  , /*ca*/ 0x2569
  , /*cb*/ 0x2566
  , /*cc*/ 0x2560
  , /*cd*/ 0x2550
  , /*ce*/ 0x256c
  , /*cf*/ 0x03a3
  , /*d0*/ 0x03a4
  , /*d1*/ 0x03a5
  , /*d2*/ 0x03a6
  , /*d3*/ 0x03a7
  , /*d4*/ 0x03a8
  , /*d5*/ 0x03a9
  , /*d6*/ 0x03b1
  , /*d7*/ 0x03b2
  , /*d8*/ 0x03b3
  , /*d9*/ 0x2518
  , /*da*/ 0x250c
  , /*db*/ 0x2588
  , /*dc*/ 0x2584
  , /*dd*/ 0x03b4
  , /*de*/ 0x03b5
  , /*df*/ 0x2580
  , /*e0*/ 0x03b6
  , /*e1*/ 0x03b7
  , /*e2*/ 0x03b8
  , /*e3*/ 0x03b9
  , /*e4*/ 0x03ba
  , /*e5*/ 0x03bb
  , /*e6*/ 0x03bc
  , /*e7*/ 0x03bd
  , /*e8*/ 0x03be
  , /*e9*/ 0x03bf
  , /*ea*/ 0x03c0
  , /*eb*/ 0x03c1
  , /*ec*/ 0x03c3
  , /*ed*/ 0x03c2
  , /*ee*/ 0x03c4
  , /*ef*/ 0x0384
  , /*f0*/ 0x00ad
  , /*f1*/ 0x00b1
  , /*f2*/ 0x03c5
  , /*f3*/ 0x03c6
  , /*f4*/ 0x03c7
  , /*f5*/ 0x00a7
  , /*f6*/ 0x03c8
  , /*f7*/ 0x0385
  , /*f8*/ 0x00b0
  , /*f9*/ 0x00a8
  , /*fa*/ 0x03c9
  , /*fb*/ 0x03cb
  , /*fc*/ 0x03b0
  , /*fd*/ 0x03ce
  , /*fe*/ 0x25a0
  , /*ff*/ 0x00a0
 };

CP_869::CP_869(void) : SBCodeConverter(869,ua)
{}

#endif