#include <math.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <Eigen/Core>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int sign(int x);
void tau( double* tau_out, const double* parms, const double* q, const double* dq, const double* ddq );
void Hb_code( double* H, const double* q, const double* dq, const double* ddq );

int sign(int x)
{
	if(x>0)
		return 1;
	else if(x==0)
		return 0;
	else
		return -1;
 
}

// 全参数动力学模型
void tau( double* tau_out, const double* parms, const double* q, const double* dq, const double* ddq )
{
  double x0 = cos(q[1]);
  double x1 = sin(q[3]);
  double x2 = -x1;
  double x3 = cos(q[4]);
  double x4 = sin(q[6]);
  double x5 = sin(q[5]);
  double x6 = sin(q[2]);
  double x7 = cos(q[2]);
  double x8 = sin(q[1]);
  double x9 = -dq[0];
  double x10 = x8*x9;
  double x11 = dq[1]*x6 + x10*x7;
  double x12 = -x11;
  double x13 = cos(q[3]);
  double x14 = x0*x9;
  double x15 = -x14;
  double x16 = dq[2] + x15;
  double x17 = -x16;
  double x18 = x1*x12 + x13*x17;
  double x19 = -x18;
  double x20 = dq[4] + x19;
  double x21 = -x20;
  double x22 = x1*x17 + x11*x13;
  double x23 = sin(q[4]);
  double x24 = -x6;
  double x25 = dq[1]*x7 + x10*x24;
  double x26 = dq[3] + x25;
  double x27 = x22*x3 + x23*x26;
  double x28 = cos(q[5]);
  double x29 = x21*x5 + x27*x28;
  double x30 = -x29;
  double x31 = -x22;
  double x32 = x23*x31 + x26*x3;
  double x33 = dq[5] + x32;
  double x34 = cos(q[6]);
  double x35 = x30*x4 + x33*x34;
  double x36 = -x27;
  double x37 = x21*x28 + x36*x5;
  double x38 = -x37;
  double x39 = dq[6] + x38;
  double x40 = x29*x34 + x33*x4;
  double x41 = parms[78]*x40 + parms[79]*x35 + parms[80]*x39;
  double x42 = -ddq[0];
  double x43 = dq[0]*dq[1]*x8 + x0*x42;
  double x44 = ddq[2] - x43;
  double x45 = -x44;
  double x46 = dq[1]*x14;
  double x47 = x42*x8 + x46;
  double x48 = ddq[1]*x6 + dq[2]*x25 + x47*x7;
  double x49 = -x48;
  double x50 = dq[3]*x31 + x1*x49 + x13*x45;
  double x51 = -x50;
  double x52 = ddq[4] + x51;
  double x53 = -x52;
  double x54 = ddq[1]*x7 + dq[2]*x12 - x47*x6;
  double x55 = ddq[3] + x54;
  double x56 = dq[3]*x18 + x1*x45 + x13*x48;
  double x57 = dq[4]*x32 + x23*x55 + x3*x56;
  double x58 = dq[5]*x37 + x28*x57 + x5*x53;
  double x59 = -x56;
  double x60 = dq[4]*x36 + x23*x59 + x3*x55;
  double x61 = ddq[5] + x60;
  double x62 = dq[6]*x35 + x34*x58 + x4*x61;
  double x63 = -x40;
  double x64 = -x58;
  double x65 = dq[6]*x63 + x34*x61 + x4*x64;
  double x66 = -x57;
  double x67 = dq[5]*x30 + x28*x53 + x5*x66;
  double x68 = -x67;
  double x69 = ddq[6] + x68;
  double x70 = x18*x22;
  double x71 = -x55 + x70;
  double x72 = -9.81*x0;
  double x73 = -x72;
  double x74 = -0.4375*((dq[1])*(dq[1])) - 0.4375*((x10)*(x10)) + x73;
  double x75 = -0.4375*x46 - 0.4375*x47;
  double x76 = -9.81*x8;
  double x77 = 0.4375*ddq[1] - 0.4375*x10*x14 + x76;
  double x78 = x6*x75 + x7*x77;
  double x79 = x13*x78 + x2*x74;
  double x80 = -0.4125*x71 + x79;
  double x81 = -x23;
  double x82 = x24*x77 + x7*x75;
  double x83 = x18*x26;
  double x84 = x56 + x83;
  double x85 = x82 - 0.4125*x84;
  double x86 = x3*x85 + x80*x81;
  double x87 = x33*x37;
  double x88 = x58 + x87;
  double x89 = x86 - 0.2755*x88;
  double x90 = x29*x37;
  double x91 = -x61 + x90;
  double x92 = -((x26)*(x26));
  double x93 = -((x22)*(x22));
  double x94 = x92 + x93;
  double x95 = -x74;
  double x96 = x13*x95 + x2*x78;
  double x97 = -x96;
  double x98 = 0.4125*x94 + x97;
  double x99 = -x98;
  double x100 = x23*x85 + x3*x80;
  double x101 = x100*x28 + x5*x99;
  double x102 = x101 - 0.2755*x91;
  double x103 = x102*x34 + x4*x89;
  double x104 = parms[79]*x40 + parms[81]*x35 + parms[82]*x39;
  double x105 = -x4;
  double x106 = x102*x105 + x34*x89;
  double x107 = parms[80]*x62 + parms[82]*x65 + parms[83]*x69 + parms[84]*x106 - parms[85]*x103 + x104*x40 - x35*x41;
  double x108 = parms[65]*x29 + parms[66]*x37 + parms[67]*x33;
  double x109 = parms[67]*x29 + parms[69]*x37 + parms[70]*x33;
  double x110 = -x86;
  double x111 = parms[66]*x58 + parms[68]*x67 + parms[69]*x61 + parms[71]*x110 + parms[73]*x101 - x107 + x108*x33 + x109*x30;
  double x112 = -x5;
  double x113 = parms[53]*x27 + parms[55]*x32 + parms[56]*x20;
  double x114 = parms[54]*x27 + parms[56]*x32 + parms[57]*x20;
  double x115 = -((x33)*(x33));
  double x116 = -((x29)*(x29));
  double x117 = x115 + x116;
  double x118 = -x100;
  double x119 = x118*x5 + x28*x99;
  double x120 = -x119;
  double x121 = 0.2755*x117 + x120;
  double x122 = parms[80]*x40 + parms[82]*x35 + parms[83]*x39;
  double x123 = parms[78]*x62 + parms[79]*x65 + parms[80]*x69 + parms[85]*x121 - parms[86]*x106 - x104*x39 + x122*x35;
  double x124 = parms[66]*x29 + parms[68]*x37 + parms[69]*x33;
  double x125 = x35*x40;
  double x126 = x39*x40;
  double x127 = -((x39)*(x39));
  double x128 = -((x35)*(x35));
  double x129 = parms[84]*(x127 + x128) + parms[85]*(x125 - x69) + parms[86]*(x126 + x65) + parms[87]*x103;
  double x130 = x129*x4;
  double x131 = x35*x39;
  double x132 = -((x40)*(x40));
  double x133 = parms[84]*(x125 + x69) + parms[85]*(x127 + x132) + parms[86]*(x131 - x62) + parms[87]*x106;
  double x134 = x133*x34;
  double x135 = parms[79]*x62 + parms[81]*x65 + parms[82]*x69 - parms[84]*x121 + parms[86]*x103 + x122*x63 + x39*x41;
  double x136 = parms[65]*x58 + parms[66]*x67 + parms[67]*x61 + parms[72]*x86 + parms[73]*x120 + x105*x135 + x109*x37 + x123*x34 - x124*x33 - 0.2755*x130 - 0.2755*x134;
  double x137 = parms[52]*x57 + parms[53]*x60 + parms[54]*x52 + parms[59]*x98 + parms[60]*x110 + x111*x112 + x113*x21 + x114*x32 + x136*x28;
  double x138 = parms[52]*x27 + parms[53]*x32 + parms[54]*x20;
  double x139 = x129*x34;
  double x140 = parms[67]*x58 + parms[69]*x67 + parms[70]*x61 + parms[71]*x119 - parms[72]*x101 + x108*x38 + x123*x4 + x124*x29 - 0.2755*x133*x4 + x135*x34 + 0.2755*x139;
  double x141 = parms[53]*x57 + parms[55]*x60 + parms[56]*x52 + parms[58]*x99 + parms[60]*x100 + x114*x36 + x138*x20 + x140;
  double x142 = -((x37)*(x37));
  double x143 = x29*x33;
  double x144 = parms[71]*(x115 + x142) + parms[72]*x91 + parms[73]*(x143 + x67) + parms[74]*x101 + x105*x133 + x139;
  double x145 = -parms[71]*(x61 + x90) - parms[72]*x117 - parms[73]*(x64 + x87) - parms[74]*x119 + parms[84]*(x126 - x65) + parms[85]*(x131 + x62) + parms[86]*(x128 + x132) + parms[87]*x121;
  double x146 = x20*x27;
  double x147 = x27*x32;
  double x148 = -((x32)*(x32));
  double x149 = -((x20)*(x20));
  double x150 = parms[58]*(x148 + x149) + parms[59]*(x147 + x53) + parms[60]*(x146 + x60) + parms[61]*x100 + x144*x28 + x145*x5;
  double x151 = x150*x23;
  double x152 = parms[40]*x22 + parms[42]*x18 + parms[43]*x26;
  double x153 = parms[41]*x22 + parms[43]*x18 + parms[44]*x26;
  double x154 = -((x27)*(x27));
  double x155 = x20*x32;
  double x156 = parms[58]*(x147 + x52) + parms[59]*(x149 + x154) + parms[60]*(x155 + x66) + parms[61]*x86 + parms[71]*(x143 + x68) + parms[72]*x88 + parms[73]*(x116 + x142) + parms[74]*x86 + x130 + x134;
  double x157 = x156*x3;
  double x158 = parms[39]*x56 + parms[40]*x50 + parms[41]*x55 + parms[46]*x82 + parms[47]*x97 + x137*x3 + x141*x81 - 0.4125*x151 - x152*x26 + x153*x18 - 0.4125*x157;
  double x159 = parms[27]*x11 + parms[29]*x25 + parms[30]*x16;
  double x160 = parms[26]*x11 + parms[27]*x25 + parms[28]*x16;
  double x161 = parms[39]*x22 + parms[40]*x18 + parms[41]*x26;
  double x162 = -x82;
  double x163 = parms[54]*x57 + parms[56]*x60 + parms[57]*x52 + parms[58]*x86 + parms[59]*x118 - x111*x28 + x112*x136 + x113*x27 - x138*x32;
  double x164 = parms[40]*x56 + parms[42]*x50 + parms[43]*x55 + parms[45]*x162 + parms[47]*x79 + x153*x31 + x161*x26 - x163;
  double x165 = parms[28]*x48 + parms[30]*x54 + parms[31]*x44 + parms[32]*x82 - parms[33]*x78 + x11*x159 - x13*x164 + x158*x2 - x160*x25;
  double x166 = dq[1]*parms[18] + parms[15]*x10 + parms[17]*x14;
  double x167 = dq[1]*parms[15] + parms[13]*x10 + parms[14]*x14;
  double x168 = parms[28]*x11 + parms[30]*x25 + parms[31]*x16;
  double x169 = parms[26]*x48 + parms[27]*x54 + parms[28]*x44 + parms[33]*x74 + parms[34]*x162 + x13*x158 + x159*x17 + x164*x2 + x168*x25;
  double x170 = x150*x3;
  double x171 = -((x18)*(x18));
  double x172 = x22*x26;
  double x173 = x11*x25;
  double x174 = -((x16)*(x16));
  double x175 = parms[32]*(x174 - ((x25)*(x25))) + parms[33]*(x173 + x45) + parms[34]*(x11*x16 + x54) + parms[35]*x78 + x13*(parms[45]*(x171 + x92) + parms[46]*x71 + parms[47]*(x172 + x50) + parms[48]*x79 + x156*x81 + x170) + x2*(parms[45]*(x55 + x70) + parms[46]*x94 + parms[47]*(x59 + x83) + parms[48]*x96 - parms[58]*(x146 - x60) - parms[59]*(x155 + x57) - parms[60]*(x148 + x154) - parms[61]*x98 - x112*x144 - x145*x28);
  double x176 = parms[41]*x56 + parms[43]*x50 + parms[44]*x55 + parms[45]*x96 - parms[46]*x79 + x137*x23 + x141*x3 + x152*x22 - 0.4125*x156*x23 + x161*x19 + 0.4125*x170;
  double x177 = parms[27]*x48 + parms[29]*x54 + parms[30]*x44 + parms[32]*x95 + parms[34]*x78 + x12*x168 + x16*x160 + x176;
  double x178 = parms[32]*(x173 + x44) + parms[33]*(-((x11)*(x11)) + x174) + parms[34]*(x16*x25 + x49) + parms[35]*x82 + parms[45]*(x172 + x51) + parms[46]*x84 + parms[47]*(x171 + x93) + parms[48]*x82 + x151 + x157;
  double x179 = dq[1]*parms[17] + parms[14]*x10 + parms[16]*x14;
//
  tau_out[0] = ddq[0]*parms[10] + ddq[0]*parms[5] + dq[0]*parms[11] + parms[12]*sign(dq[0]) - x0*(ddq[1]*parms[17] + dq[1]*x167 + parms[14]*x47 + parms[16]*x43 + parms[21]*x76 - x10*x166 - x165) - x8*(ddq[1]*parms[15] - dq[1]*x179 + parms[13]*x47 + parms[14]*x43 + parms[21]*x73 + x14*x166 + x169*x7 - 0.4375*x175*x6 + x177*x24 - 0.4375*x178*x7);
  tau_out[1] = ddq[1]*parms[18] + ddq[1]*parms[23] + dq[1]*parms[24] + parms[15]*x47 + parms[17]*x43 + parms[19]*x72 - parms[20]*x76 + parms[25]*sign(dq[1]) + x10*x179 + x15*x167 + x169*x6 + 0.4375*x175*x7 + x177*x7 - 0.4375*x178*x6;
  tau_out[2] = ddq[2]*parms[36] + dq[2]*parms[37] + parms[38]*sign(dq[2]) + x165;
  tau_out[3] = ddq[3]*parms[49] + dq[3]*parms[50] + parms[51]*sign(dq[3]) + x176;
  tau_out[4] = ddq[4]*parms[62] + dq[4]*parms[63] + parms[64]*sign(dq[4]) + x163;
  tau_out[5] = ddq[5]*parms[75] + dq[5]*parms[76] + parms[77]*sign(dq[5]) + x140;
  tau_out[6] = ddq[6]*parms[88] + dq[6]*parms[89] + parms[90]*sign(dq[6]) + x107;
//
  return;
} 

void Hb_code( double* H, const double* q, const double* dq, const double* ddq )
{
  double x0 = sin(q[1]);
  double x1 = cos(q[1]);
  double x2 = -dq[0];
  double x3 = x1*x2;
  double x4 = dq[1]*x3;
  double x5 = -ddq[0];
  double x6 = x0*x5 + x4;
  double x7 = -x6;
  double x8 = x0*x2;
  double x9 = dq[1]*x8;
  double x10 = -x9;
  double x11 = x1*x10;
  double x12 = -x1;
  double x13 = x4 + x6;
  double x14 = dq[0]*dq[1]*x0 + x1*x5;
  double x15 = -x0;
  double x16 = ((x8)*(x8));
  double x17 = -x16;
  double x18 = ((dq[1])*(dq[1]));
  double x19 = x3*x8;
  double x20 = -x19;
  double x21 = -x18;
  double x22 = ((x3)*(x3));
  double x23 = sin(q[2]);
  double x24 = cos(q[2]);
  double x25 = dq[1]*x23 + x24*x8;
  double x26 = -x23;
  double x27 = dq[1]*x24 + x26*x8;
  double x28 = x25*x27;
  double x29 = -x28;
  double x30 = ddq[1]*x23 + dq[2]*x27 + x24*x6;
  double x31 = dq[2] - x3;
  double x32 = x25*x31;
  double x33 = ((x25)*(x25));
  double x34 = ((x27)*(x27));
  double x35 = -x34;
  double x36 = x33 + x35;
  double x37 = -x32;
  double x38 = -x25;
  double x39 = ddq[1]*x24 + dq[2]*x38 + x23*x7;
  double x40 = x37 + x39;
  double x41 = x27*x31;
  double x42 = x30 + x41;
  double x43 = ((x31)*(x31));
  double x44 = -x33;
  double x45 = x43 + x44;
  double x46 = ddq[2] - x14;
  double x47 = x28 + x46;
  double x48 = x24*x47;
  double x49 = x30 - x41;
  double x50 = x32 + x39;
  double x51 = -x43;
  double x52 = x34 + x51;
  double x53 = x29 + x46;
  double x54 = -x46;
  double x55 = -9.81*x0;
  double x56 = 0.4375*ddq[1] - 0.4375*x19 + x55;
  double x57 = -0.4375*x13;
  double x58 = x24*x57 + x26*x56;
  double x59 = -x58;
  double x60 = x35 + x51;
  double x61 = -9.81*x1;
  double x62 = 0.4375*x17 + 0.4375*x21 - x61;
  double x63 = -x62;
  double x64 = x23*x57 + x24*x56;
  double x65 = -x64;
  double x66 = x44 + x51;
  double x67 = x28 + x54;
  double x68 = cos(q[3]);
  double x69 = sin(q[3]);
  double x70 = -x31;
  double x71 = x38*x69 + x68*x70;
  double x72 = dq[3]*x71 + x30*x68 + x54*x69;
  double x73 = -x69;
  double x74 = x25*x68 + x69*x70;
  double x75 = dq[3] + x27;
  double x76 = x74*x75;
  double x77 = x68*x72 + x73*x76;
  double x78 = x71*x74;
  double x79 = -x78;
  double x80 = -x68;
  double x81 = x72*x73 + x76*x80;
  double x82 = x71*x75;
  double x83 = x72 + x82;
  double x84 = -x76;
  double x85 = -x74;
  double x86 = dq[3]*x85 - x30*x69 + x54*x68;
  double x87 = x84 + x86;
  double x88 = x68*x87 + x73*x83;
  double x89 = ((x71)*(x71));
  double x90 = -x89;
  double x91 = ((x74)*(x74));
  double x92 = x90 + x91;
  double x93 = x73*x87 + x80*x83;
  double x94 = ((x75)*(x75));
  double x95 = -x91;
  double x96 = x94 + x95;
  double x97 = ddq[3] + x39;
  double x98 = x78 + x97;
  double x99 = x73*x98;
  double x100 = x80*x96 + x99;
  double x101 = x72 - x82;
  double x102 = x68*x98 + x73*x96;
  double x103 = -x94;
  double x104 = x103 + x89;
  double x105 = x79 + x97;
  double x106 = x104*x73 + x105*x80;
  double x107 = x104*x68 + x105*x73;
  double x108 = x76 + x86;
  double x109 = x73*x82 + x80*x84;
  double x110 = x68*x82 + x73*x84;
  double x111 = x59*x80;
  double x112 = -0.4375*x23;
  double x113 = x68*(x103 + x90) + x99;
  double x114 = x59*x73;
  double x115 = -x86;
  double x116 = x115 + x76;
  double x117 = x63*x68 + x64*x73;
  double x118 = x62*x73 + x64*x68;
  double x119 = -x118;
  double x120 = x78 - x97;
  double x121 = x103 + x95;
  double x122 = x120*x68 + x121*x73;
  double x123 = x58*x68;
  double x124 = x58*x73;
  double x125 = cos(q[4]);
  double x126 = sin(q[4]);
  double x127 = x125*x74 + x126*x75;
  double x128 = dq[4] - x71;
  double x129 = x127*x128;
  double x130 = x125*x75 + x126*x85;
  double x131 = dq[4]*x130 + x125*x72 + x126*x97;
  double x132 = x125*x129 + x126*x131;
  double x133 = x127*x130;
  double x134 = -x133;
  double x135 = -x134;
  double x136 = -x126;
  double x137 = x125*x131 + x129*x136;
  double x138 = x135*x73 + x137*x68;
  double x139 = x135*x80 + x137*x73;
  double x140 = -x129;
  double x141 = -x127;
  double x142 = dq[4]*x141 + x125*x97 - x126*x72;
  double x143 = x140 + x142;
  double x144 = x128*x130;
  double x145 = x131 + x144;
  double x146 = x125*x145 + x126*x143;
  double x147 = x125*x143 + x136*x145;
  double x148 = ((x127)*(x127));
  double x149 = ((x130)*(x130));
  double x150 = -x149;
  double x151 = x148 + x150;
  double x152 = -x151;
  double x153 = x147*x68 + x152*x73;
  double x154 = x147*x73 + x152*x80;
  double x155 = x131 - x144;
  double x156 = -x155;
  double x157 = -x148;
  double x158 = ((x128)*(x128));
  double x159 = x157 + x158;
  double x160 = ddq[4] + x115;
  double x161 = x133 + x160;
  double x162 = x125*x161;
  double x163 = x136*x159 + x162;
  double x164 = x156*x80 + x163*x73;
  double x165 = x126*x161;
  double x166 = x125*x159 + x165;
  double x167 = x156*x73 + x163*x68;
  double x168 = -x158;
  double x169 = x149 + x168;
  double x170 = x134 + x160;
  double x171 = x125*x169 + x136*x170;
  double x172 = x129 + x142;
  double x173 = -x172;
  double x174 = x171*x68 + x173*x73;
  double x175 = x125*x170 + x126*x169;
  double x176 = x171*x73 + x173*x80;
  double x177 = x125*x140 + x126*x144;
  double x178 = -x160;
  double x179 = x125*x144 + x136*x140;
  double x180 = x178*x73 + x179*x68;
  double x181 = x178*x80 + x179*x73;
  double x182 = x150 + x168;
  double x183 = x126*x182;
  double x184 = x162 + x183;
  double x185 = x118 - 0.4125*x120;
  double x186 = x58 - 0.4125*x83;
  double x187 = x125*x186 + x136*x185;
  double x188 = -x187;
  double x189 = -x117 + 0.4125*x121;
  double x190 = -x189;
  double x191 = x136*x190 - 0.4125*x162 - 0.4125*x183;
  double x192 = x188*x73 + x191*x68;
  double x193 = x125*x182;
  double x194 = x68*(x136*x161 + x193) + x73*(-x129 + x142);
  double x195 = x125*x190 - 0.4125*x165 + 0.4125*x193;
  double x196 = x188*x80 + x191*x73;
  double x197 = x133 + x178;
  double x198 = x126*x197;
  double x199 = x157 + x168;
  double x200 = x125*x199;
  double x201 = x125*x189 - 0.4125*x198 - 0.4125*x200;
  double x202 = x125*x185 + x126*x186;
  double x203 = -x202;
  double x204 = -x203;
  double x205 = x201*x73 + x204*x80;
  double x206 = x201*x68 + x204*x73;
  double x207 = x198 + x200;
  double x208 = x125*x197;
  double x209 = -x145*x73 + x68*(x136*x199 + x208);
  double x210 = -0.4125*x126;
  double x211 = x126*x189 + x199*x210 + 0.4125*x208;
  double x212 = cos(q[5]);
  double x213 = -x128;
  double x214 = sin(q[5]);
  double x215 = x141*x214 + x212*x213;
  double x216 = dq[5]*x215 + x131*x212 + x178*x214;
  double x217 = x127*x212 + x213*x214;
  double x218 = dq[5] + x130;
  double x219 = x217*x218;
  double x220 = -x219;
  double x221 = x214*x220;
  double x222 = x212*x216 + x221;
  double x223 = x215*x217;
  double x224 = -x223;
  double x225 = x125*x222 + x136*x224;
  double x226 = -x216;
  double x227 = x212*x220;
  double x228 = x214*x226 + x227;
  double x229 = -x228;
  double x230 = x225*x68 + x229*x73;
  double x231 = x125*x224 + x126*x222;
  double x232 = x225*x73 + x229*x80;
  double x233 = ((x215)*(x215));
  double x234 = -x233;
  double x235 = ((x217)*(x217));
  double x236 = x234 + x235;
  double x237 = -x217;
  double x238 = dq[5]*x237 - x131*x214 + x178*x212;
  double x239 = x220 + x238;
  double x240 = x215*x218;
  double x241 = x216 + x240;
  double x242 = -x241;
  double x243 = x212*x239 + x214*x242;
  double x244 = x125*x243 + x136*x236;
  double x245 = -x214;
  double x246 = x212*x242 + x239*x245;
  double x247 = -x246;
  double x248 = x244*x68 + x247*x73;
  double x249 = x125*x236 + x126*x243;
  double x250 = x244*x73 + x247*x80;
  double x251 = ddq[5] + x142;
  double x252 = x223 + x251;
  double x253 = x212*x252;
  double x254 = ((x218)*(x218));
  double x255 = -x235;
  double x256 = x254 + x255;
  double x257 = x245*x256 + x253;
  double x258 = -x240;
  double x259 = x216 + x258;
  double x260 = x125*x257 + x136*x259;
  double x261 = -x212;
  double x262 = x245*x252;
  double x263 = x256*x261 + x262;
  double x264 = -x263;
  double x265 = x260*x68 + x264*x73;
  double x266 = x125*x259 + x126*x257;
  double x267 = x260*x73 + x264*x80;
  double x268 = -x254;
  double x269 = x233 + x268;
  double x270 = x224 + x251;
  double x271 = x245*x269 + x261*x270;
  double x272 = -x271;
  double x273 = x219 + x238;
  double x274 = x212*x269 + x245*x270;
  double x275 = x125*x274 + x136*x273;
  double x276 = x272*x73 + x275*x68;
  double x277 = x125*x273 + x126*x274;
  double x278 = x272*x80 + x275*x73;
  double x279 = x214*x258 - x227;
  double x280 = -x279;
  double x281 = x212*x240 - x221;
  double x282 = -x251;
  double x283 = x125*x281 + x126*x282;
  double x284 = x280*x80 + x283*x73;
  double x285 = x280*x73 + x283*x68;
  double x286 = x125*x251 + x126*x281;
  double x287 = x188*x261;
  double x288 = -x287;
  double x289 = -x238;
  double x290 = x219 + x289;
  double x291 = x125*x290;
  double x292 = x188*x245;
  double x293 = x190*x212 + x203*x214;
  double x294 = -x293;
  double x295 = x234 + x268;
  double x296 = x212*x295 + x262;
  double x297 = x125*x292 + x126*x294 + x210*x296 - 0.4125*x291;
  double x298 = x288*x73 + x297*x68;
  double x299 = x125*x296;
  double x300 = x125*x293 + x126*x292 + x210*x290 + 0.4125*x299;
  double x301 = x68*(x136*x290 + x299) + x73*(-x245*x295 + x253);
  double x302 = x126*x296 + x291;
  double x303 = x288*x80 + x297*x73;
  double x304 = x125*x241;
  double x305 = x255 + x268;
  double x306 = x223 + x282;
  double x307 = x212*x306 + x245*x305;
  double x308 = x126*x307 + x304;
  double x309 = x190*x214 + x202*x212;
  double x310 = -x309;
  double x311 = x187*x212;
  double x312 = x125*x311 + x136*x310 + x210*x307 - 0.4125*x304;
  double x313 = x188*x214;
  double x314 = -x313;
  double x315 = x312*x68 + x314*x73;
  double x316 = x125*x307;
  double x317 = x68*(x136*x241 + x316) + x73*(-x245*x306 - x261*x305);
  double x318 = x125*x310 + x126*x311 + x210*x241 + 0.4125*x316;
  double x319 = x312*x73 + x314*x80;
  double x320 = cos(q[6]);
  double x321 = sin(q[6]);
  double x322 = x218*x320 + x237*x321;
  double x323 = dq[6]*x322 + x216*x320 + x251*x321;
  double x324 = -x321;
  double x325 = x217*x320 + x218*x321;
  double x326 = dq[6] - x215;
  double x327 = x325*x326;
  double x328 = x320*x323 + x324*x327;
  double x329 = x322*x325;
  double x330 = -x329;
  double x331 = -x330;
  double x332 = x245*x328 + x261*x331;
  double x333 = -x332;
  double x334 = x320*x327 + x321*x323;
  double x335 = x212*x328 + x245*x331;
  double x336 = x125*x335 + x136*x334;
  double x337 = x333*x80 + x336*x73;
  double x338 = x333*x73 + x336*x68;
  double x339 = x125*x334 + x126*x335;
  double x340 = -x327;
  double x341 = -dq[6]*x325 + x226*x321 + x251*x320;
  double x342 = x340 + x341;
  double x343 = x322*x326;
  double x344 = x323 + x343;
  double x345 = x320*x344 + x321*x342;
  double x346 = x320*x342 + x324*x344;
  double x347 = ((x322)*(x322));
  double x348 = -x347;
  double x349 = ((x325)*(x325));
  double x350 = x348 + x349;
  double x351 = -x350;
  double x352 = x212*x346 + x245*x351;
  double x353 = x125*x345 + x126*x352;
  double x354 = x125*x352 + x136*x345;
  double x355 = x245*x346 + x261*x351;
  double x356 = -x355;
  double x357 = x354*x68 + x356*x73;
  double x358 = x354*x73 + x356*x80;
  double x359 = -x349;
  double x360 = ((x326)*(x326));
  double x361 = x359 + x360;
  double x362 = ddq[6] + x289;
  double x363 = x329 + x362;
  double x364 = x321*x363;
  double x365 = x320*x361 + x364;
  double x366 = x320*x363;
  double x367 = x324*x361 + x366;
  double x368 = x323 - x343;
  double x369 = -x368;
  double x370 = x212*x367 + x245*x369;
  double x371 = x125*x365 + x126*x370;
  double x372 = x245*x367 + x261*x369;
  double x373 = -x372;
  double x374 = x125*x370 + x136*x365;
  double x375 = x373*x73 + x374*x68;
  double x376 = x373*x80 + x374*x73;
  double x377 = -x360;
  double x378 = x347 + x377;
  double x379 = x330 + x362;
  double x380 = x320*x379 + x321*x378;
  double x381 = x320*x378 + x324*x379;
  double x382 = x327 + x341;
  double x383 = -x382;
  double x384 = x212*x381 + x245*x383;
  double x385 = x125*x384 + x136*x380;
  double x386 = x245*x381 + x261*x383;
  double x387 = -x386;
  double x388 = x385*x73 + x387*x80;
  double x389 = x125*x380 + x126*x384;
  double x390 = x385*x68 + x387*x73;
  double x391 = x320*x340 + x321*x343;
  double x392 = x320*x343 + x324*x340;
  double x393 = -x362;
  double x394 = x212*x392 + x245*x393;
  double x395 = x125*x394 + x136*x391;
  double x396 = x245*x392 + x261*x393;
  double x397 = -x396;
  double x398 = x395*x73 + x397*x80;
  double x399 = x125*x391 + x126*x394;
  double x400 = x395*x68 + x397*x73;
  double x401 = -x327 + x341;
  double x402 = x348 + x377;
  double x403 = x320*x402;
  double x404 = x324*x363 + x403;
  double x405 = x212*x404 + x245*x401;
  double x406 = x321*x402;
  double x407 = x366 + x406;
  double x408 = x125*x407;
  double x409 = x294 + 0.2755*x305;
  double x410 = -x409;
  double x411 = x324*x410 - 0.2755*x366 - 0.2755*x406;
  double x412 = x187 - 0.2755*x241;
  double x413 = -0.2755*x306 + x309;
  double x414 = x320*x412 + x324*x413;
  double x415 = -x414;
  double x416 = x212*x411 + x245*x415;
  double x417 = x320*x410 - 0.2755*x364 + 0.2755*x403;
  double x418 = x125*x416 + x136*x417 + x210*x405 - 0.4125*x408;
  double x419 = x245*x411 + x261*x415;
  double x420 = -x419;
  double x421 = x418*x73 + x420*x80;
  double x422 = x126*x405 + x408;
  double x423 = x125*x405;
  double x424 = x125*x417 + x126*x416 + x210*x407 + 0.4125*x423;
  double x425 = x418*x68 + x420*x73;
  double x426 = x68*(x136*x407 + x423) + x73*(-x245*x404 - x261*x401);
  double x427 = x359 + x377;
  double x428 = x320*x427;
  double x429 = x329 + x393;
  double x430 = x321*x429;
  double x431 = x428 + x430;
  double x432 = x320*x429;
  double x433 = x324*x427 + x432;
  double x434 = -x344;
  double x435 = x212*x433 + x245*x434;
  double x436 = x125*x435;
  double x437 = x68*(x136*x431 + x436) + x73*(-x245*x433 - x261*x434);
  double x438 = x320*x409 - 0.2755*x428 - 0.2755*x430;
  double x439 = -x320*x413 - x321*x412;
  double x440 = -x439;
  double x441 = x245*x438 + x261*x440;
  double x442 = -x441;
  double x443 = x125*x431;
  double x444 = x321*x409 - 0.2755*x321*x427 + 0.2755*x432;
  double x445 = x212*x438 + x245*x440;
  double x446 = x125*x445 + x136*x444 + x210*x435 - 0.4125*x443;
  double x447 = x442*x73 + x446*x68;
  double x448 = x126*x435 + x443;
  double x449 = x125*x444 + x126*x445 + x210*x431 + 0.4125*x436;
  double x450 = x442*x80 + x446*x73;
  double x451 = x23*x47;
//
  H[0] = ddq[0];
  H[1] = dq[0];
  H[2] = sign(dq[0]);
  H[3] = x0*x7 + x11;
  H[4] = x12*x13 + x15*(x10 + x14);
  H[5] = x12*(x17 + x18) + x15*(ddq[1] + x19);
  H[6] = x12*(ddq[1] + x20) + x15*(x21 + x22);
  H[7] = -x11 + x15*x4;
  H[8] = 0;
  H[9] = 0;
  H[10] = 0;
  H[11] = 0;
  H[12] = -x12*x29 + x15*(x24*x30 + x26*x32);
  H[13] = -x12*x36 + x15*(x24*x40 + x26*x42);
  H[14] = -x12*x49 + x15*(x26*x45 + x48);
  H[15] = -x12*x50 + x15*(x24*x52 + x26*x53);
  H[16] = x12*x54 + x15*(x24*x41 + x26*x37);
  H[17] = x12*x59 + x15*(-0.4375*x23*x60 + x26*x63 - 0.4375*x48);
  H[18] = -x12*x65 + x15*(-0.4375*x23*x67 + x24*x62 - 0.4375*x24*x66);
  H[19] = 0;
  H[20] = 0;
  H[21] = 0;
  H[22] = -x12*x81 + x15*(x24*x77 + x26*x79);
  H[23] = -x12*x93 + x15*(x24*x88 + x26*x92);
  H[24] = -x100*x12 + x15*(x101*x26 + x102*x24);
  H[25] = -x106*x12 + x15*(x107*x24 + x108*x26);
  H[26] = -x109*x12 + x15*(x110*x24 + x26*x97);
  H[27] = -x111*x12 + x15*(x112*x113 + x114*x24 - 0.4375*x116*x24 + x117*x26);
  H[28] = -x12*x124 + x15*(x112*x122 + x119*x26 + x123*x24 - 0.4375*x24*x83);
  H[29] = 0;
  H[30] = 0;
  H[31] = 0;
  H[32] = -x12*x139 + x15*(x132*x26 + x138*x24);
  H[33] = -x12*x154 + x15*(x146*x26 + x153*x24);
  H[34] = -x12*x164 + x15*(x166*x26 + x167*x24);
  H[35] = -x12*x176 + x15*(x174*x24 + x175*x26);
  H[36] = -x12*x181 + x15*(x177*x26 + x180*x24);
  H[37] = -x12*x196 + x15*(x112*x194 - 0.4375*x184*x24 + x192*x24 + x195*x26);
  H[38] = -x12*x205 + x15*(x112*x209 + x206*x24 - 0.4375*x207*x24 + x211*x26);
  H[39] = 0;
  H[40] = 0;
  H[41] = 0;
  H[42] = -x12*x232 + x15*(x230*x24 + x231*x26);
  H[43] = -x12*x250 + x15*(x24*x248 + x249*x26);
  H[44] = -x12*x267 + x15*(x24*x265 + x26*x266);
  H[45] = -x12*x278 + x15*(x24*x276 + x26*x277);
  H[46] = -x12*x284 + x15*(x24*x285 + x26*x286);
  H[47] = -x12*x303 + x15*(x112*x301 + x24*x298 - 0.4375*x24*x302 + x26*x300);
  H[48] = -x12*x319 + x15*(x112*x317 - 0.4375*x24*x308 + x24*x315 + x26*x318);
  H[49] = 0;
  H[50] = 0;
  H[51] = 0;
  H[52] = -x12*x337 + x15*(x24*x338 + x26*x339);
  H[53] = -x12*x358 + x15*(x24*x357 + x26*x353);
  H[54] = -x12*x376 + x15*(x24*x375 + x26*x371);
  H[55] = -x12*x388 + x15*(x24*x390 + x26*x389);
  H[56] = -x12*x398 + x15*(x24*x400 + x26*x399);
  H[57] = -x12*x421 + x15*(x112*x426 - 0.4375*x24*x422 + x24*x425 + x26*x424);
  H[58] = -x12*x450 + x15*(x112*x437 + x24*x447 - 0.4375*x24*x448 + x26*x449);
  H[59] = 0;
  H[60] = 0;
  H[61] = 0;
  H[62] = 0;
  H[63] = 0;
  H[64] = 0;
  H[65] = x20;
  H[66] = x16 - x22;
  H[67] = -x4 + x6;
  H[68] = x14 + x9;
  H[69] = ddq[1];
  H[70] = x61;
  H[71] = -x55;
  H[72] = dq[1];
  H[73] = sign(dq[1]);
  H[74] = x23*x30 + x24*x32;
  H[75] = x23*x40 + x24*x42;
  H[76] = x24*x45 + x451;
  H[77] = x23*x52 + x24*x53;
  H[78] = x23*x41 + x24*x37;
  H[79] = 0.4375*x24*x60 + x24*x63 - 0.4375*x451;
  H[80] = x112*x66 + x23*x62 + 0.4375*x24*x67;
  H[81] = 0;
  H[82] = 0;
  H[83] = 0;
  H[84] = x23*x77 + x24*x79;
  H[85] = x23*x88 + x24*x92;
  H[86] = x101*x24 + x102*x23;
  H[87] = x107*x23 + x108*x24;
  H[88] = x110*x23 + x24*x97;
  H[89] = x112*x116 + 0.4375*x113*x24 + x114*x23 + x117*x24;
  H[90] = x112*x83 + x119*x24 + 0.4375*x122*x24 + x123*x23;
  H[91] = 0;
  H[92] = 0;
  H[93] = 0;
  H[94] = x132*x24 + x138*x23;
  H[95] = x146*x24 + x153*x23;
  H[96] = x166*x24 + x167*x23;
  H[97] = x174*x23 + x175*x24;
  H[98] = x177*x24 + x180*x23;
  H[99] = x112*x184 + x192*x23 + 0.4375*x194*x24 + x195*x24;
  H[100] = x112*x207 + x206*x23 + 0.4375*x209*x24 + x211*x24;
  H[101] = 0;
  H[102] = 0;
  H[103] = 0;
  H[104] = x23*x230 + x231*x24;
  H[105] = x23*x248 + x24*x249;
  H[106] = x23*x265 + x24*x266;
  H[107] = x23*x276 + x24*x277;
  H[108] = x23*x285 + x24*x286;
  H[109] = x112*x302 + x23*x298 + x24*x300 + 0.4375*x24*x301;
  H[110] = x112*x308 + x23*x315 + 0.4375*x24*x317 + x24*x318;
  H[111] = 0;
  H[112] = 0;
  H[113] = 0;
  H[114] = x23*x338 + x24*x339;
  H[115] = x23*x357 + x24*x353;
  H[116] = x23*x375 + x24*x371;
  H[117] = x23*x390 + x24*x389;
  H[118] = x23*x400 + x24*x399;
  H[119] = x112*x422 + x23*x425 + x24*x424 + 0.4375*x24*x426;
  H[120] = x112*x448 + x23*x447 + 0.4375*x24*x437 + x24*x449;
  H[121] = 0;
  H[122] = 0;
  H[123] = 0;
  H[124] = 0;
  H[125] = 0;
  H[126] = 0;
  H[127] = 0;
  H[128] = 0;
  H[129] = 0;
  H[130] = 0;
  H[131] = 0;
  H[132] = 0;
  H[133] = 0;
  H[134] = 0;
  H[135] = 0;
  H[136] = x29;
  H[137] = x36;
  H[138] = x49;
  H[139] = x50;
  H[140] = x46;
  H[141] = x58;
  H[142] = x65;
  H[143] = ddq[2];
  H[144] = dq[2];
  H[145] = sign(dq[2]);
  H[146] = x81;
  H[147] = x93;
  H[148] = x100;
  H[149] = x106;
  H[150] = x109;
  H[151] = x111;
  H[152] = x124;
  H[153] = 0;
  H[154] = 0;
  H[155] = 0;
  H[156] = x139;
  H[157] = x154;
  H[158] = x164;
  H[159] = x176;
  H[160] = x181;
  H[161] = x196;
  H[162] = x205;
  H[163] = 0;
  H[164] = 0;
  H[165] = 0;
  H[166] = x232;
  H[167] = x250;
  H[168] = x267;
  H[169] = x278;
  H[170] = x284;
  H[171] = x303;
  H[172] = x319;
  H[173] = 0;
  H[174] = 0;
  H[175] = 0;
  H[176] = x337;
  H[177] = x358;
  H[178] = x376;
  H[179] = x388;
  H[180] = x398;
  H[181] = x421;
  H[182] = x450;
  H[183] = 0;
  H[184] = 0;
  H[185] = 0;
  H[186] = 0;
  H[187] = 0;
  H[188] = 0;
  H[189] = 0;
  H[190] = 0;
  H[191] = 0;
  H[192] = 0;
  H[193] = 0;
  H[194] = 0;
  H[195] = 0;
  H[196] = 0;
  H[197] = 0;
  H[198] = 0;
  H[199] = 0;
  H[200] = 0;
  H[201] = 0;
  H[202] = 0;
  H[203] = 0;
  H[204] = 0;
  H[205] = 0;
  H[206] = 0;
  H[207] = 0;
  H[208] = x79;
  H[209] = x92;
  H[210] = x101;
  H[211] = x108;
  H[212] = x97;
  H[213] = x117;
  H[214] = x119;
  H[215] = ddq[3];
  H[216] = dq[3];
  H[217] = sign(dq[3]);
  H[218] = x132;
  H[219] = x146;
  H[220] = x166;
  H[221] = x175;
  H[222] = x177;
  H[223] = x195;
  H[224] = x211;
  H[225] = 0;
  H[226] = 0;
  H[227] = 0;
  H[228] = x231;
  H[229] = x249;
  H[230] = x266;
  H[231] = x277;
  H[232] = x286;
  H[233] = x300;
  H[234] = x318;
  H[235] = 0;
  H[236] = 0;
  H[237] = 0;
  H[238] = x339;
  H[239] = x353;
  H[240] = x371;
  H[241] = x389;
  H[242] = x399;
  H[243] = x424;
  H[244] = x449;
  H[245] = 0;
  H[246] = 0;
  H[247] = 0;
  H[248] = 0;
  H[249] = 0;
  H[250] = 0;
  H[251] = 0;
  H[252] = 0;
  H[253] = 0;
  H[254] = 0;
  H[255] = 0;
  H[256] = 0;
  H[257] = 0;
  H[258] = 0;
  H[259] = 0;
  H[260] = 0;
  H[261] = 0;
  H[262] = 0;
  H[263] = 0;
  H[264] = 0;
  H[265] = 0;
  H[266] = 0;
  H[267] = 0;
  H[268] = 0;
  H[269] = 0;
  H[270] = 0;
  H[271] = 0;
  H[272] = 0;
  H[273] = 0;
  H[274] = 0;
  H[275] = 0;
  H[276] = 0;
  H[277] = 0;
  H[278] = 0;
  H[279] = 0;
  H[280] = x134;
  H[281] = x151;
  H[282] = x155;
  H[283] = x172;
  H[284] = x160;
  H[285] = x187;
  H[286] = x203;
  H[287] = ddq[4];
  H[288] = dq[4];
  H[289] = sign(dq[4]);
  H[290] = x228;
  H[291] = x246;
  H[292] = x263;
  H[293] = x271;
  H[294] = x279;
  H[295] = x287;
  H[296] = x313;
  H[297] = 0;
  H[298] = 0;
  H[299] = 0;
  H[300] = x332;
  H[301] = x355;
  H[302] = x372;
  H[303] = x386;
  H[304] = x396;
  H[305] = x419;
  H[306] = x441;
  H[307] = 0;
  H[308] = 0;
  H[309] = 0;
  H[310] = 0;
  H[311] = 0;
  H[312] = 0;
  H[313] = 0;
  H[314] = 0;
  H[315] = 0;
  H[316] = 0;
  H[317] = 0;
  H[318] = 0;
  H[319] = 0;
  H[320] = 0;
  H[321] = 0;
  H[322] = 0;
  H[323] = 0;
  H[324] = 0;
  H[325] = 0;
  H[326] = 0;
  H[327] = 0;
  H[328] = 0;
  H[329] = 0;
  H[330] = 0;
  H[331] = 0;
  H[332] = 0;
  H[333] = 0;
  H[334] = 0;
  H[335] = 0;
  H[336] = 0;
  H[337] = 0;
  H[338] = 0;
  H[339] = 0;
  H[340] = 0;
  H[341] = 0;
  H[342] = 0;
  H[343] = 0;
  H[344] = 0;
  H[345] = 0;
  H[346] = 0;
  H[347] = 0;
  H[348] = 0;
  H[349] = 0;
  H[350] = 0;
  H[351] = 0;
  H[352] = x224;
  H[353] = x236;
  H[354] = x259;
  H[355] = x273;
  H[356] = x251;
  H[357] = x293;
  H[358] = x310;
  H[359] = ddq[5];
  H[360] = dq[5];
  H[361] = sign(dq[5]);
  H[362] = x334;
  H[363] = x345;
  H[364] = x365;
  H[365] = x380;
  H[366] = x391;
  H[367] = x417;
  H[368] = x444;
  H[369] = 0;
  H[370] = 0;
  H[371] = 0;
  H[372] = 0;
  H[373] = 0;
  H[374] = 0;
  H[375] = 0;
  H[376] = 0;
  H[377] = 0;
  H[378] = 0;
  H[379] = 0;
  H[380] = 0;
  H[381] = 0;
  H[382] = 0;
  H[383] = 0;
  H[384] = 0;
  H[385] = 0;
  H[386] = 0;
  H[387] = 0;
  H[388] = 0;
  H[389] = 0;
  H[390] = 0;
  H[391] = 0;
  H[392] = 0;
  H[393] = 0;
  H[394] = 0;
  H[395] = 0;
  H[396] = 0;
  H[397] = 0;
  H[398] = 0;
  H[399] = 0;
  H[400] = 0;
  H[401] = 0;
  H[402] = 0;
  H[403] = 0;
  H[404] = 0;
  H[405] = 0;
  H[406] = 0;
  H[407] = 0;
  H[408] = 0;
  H[409] = 0;
  H[410] = 0;
  H[411] = 0;
  H[412] = 0;
  H[413] = 0;
  H[414] = 0;
  H[415] = 0;
  H[416] = 0;
  H[417] = 0;
  H[418] = 0;
  H[419] = 0;
  H[420] = 0;
  H[421] = 0;
  H[422] = 0;
  H[423] = 0;
  H[424] = x330;
  H[425] = x350;
  H[426] = x368;
  H[427] = x382;
  H[428] = x362;
  H[429] = x414;
  H[430] = x439;
  H[431] = ddq[6];
  H[432] = dq[6];
  H[433] = sign(dq[6]);
//
  return;
} 

void read_parms(double *parms, std::string parms_file_path)
{
  int cout = 0;
  std::ifstream file;
  file.open(parms_file_path);
  if(!file)
  {
    std::cout << "Failed open the file" << std::endl;
    return;
  }
  else
  {
    while( ! file.eof() )
      file >> parms[cout++];
        
    file.close();
  }
}