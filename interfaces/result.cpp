Matrix([[L_1xx], [L_1xy], [L_1xz], [L_1yy], [L_1yz], [L_1zz], [l_1x], [l_1y], [l_1z], [m_1], [fv_1], [fc_1], [L_2xx], [L_2xy], [L_2xz], [L_2yy], [L_2yz], [L_2zz], [l_2x], [l_2y], [l_2z], [m_2], [fv_2], [fc_2], [L_3xx], [L_3xy], [L_3xz], [L_3yy], [L_3yz], [L_3zz], [l_3x], [l_3y], [l_3z], [m_3], [fv_3], [fc_3], [L_4xx], [L_4xy], [L_4xz], [L_4yy], [L_4yz], [L_4zz], [l_4x], [l_4y], [l_4z], [m_4], [fv_4], [fc_4], [L_5xx], [L_5xy], [L_5xz], [L_5yy], [L_5yz], [L_5zz], [l_5x], [l_5y], [l_5z], [m_5], [fv_5], [fc_5], [L_6xx], [L_6xy], [L_6xz], [L_6yy], [L_6yz], [L_6zz], [l_6x], [l_6y], [l_6z], [m_6], [fv_6], [fc_6], [L_7xx], [L_7xy], [L_7xz], [L_7yy], [L_7yz], [L_7zz], [l_7x], [l_7y], [l_7z], [m_7], [fv_7], [fc_7]]) 
void get_franka_M( double* M, const double* parms, const double* q )
{
  double x0 = -cos(q[1]);
  double x1 = -sin(q[1]);
  double x2 = sin(q[2]);
  double x3 = -0.316*x2;
  double x4 = x1*x3;
  double x5 = -x4;
  double x6 = -x1*x2;
  double x7 = cos(q[2]);
  double x8 = x1*x7;
  double x9 = -0.316*x8;
  double x10 = -x0;
  double x11 = cos(q[3]);
  double x12 = sin(q[3]);
  double x13 = x10*x12 + x11*x8;
  double x14 = cos(q[4]);
  double x15 = -x6;
  double x16 = -x15;
  double x17 = sin(q[4]);
  double x18 = x13*x14 + x16*x17;
  double x19 = cos(q[5]);
  double x20 = -x8;
  double x21 = x10*x11 + x12*x20;
  double x22 = sin(q[5]);
  double x23 = x18*x19 + x21*x22;
  double x24 = -x23;
  double x25 = sin(q[6]);
  double x26 = -x13;
  double x27 = x14*x16 + x17*x26;
  double x28 = -x27;
  double x29 = cos(q[6]);
  double x30 = x24*x25 + x28*x29;
  double x31 = -x18;
  double x32 = x19*x21 + x22*x31;
  double x33 = -x32;
  double x34 = -x9;
  double x35 = -0.0825*x10 + x34;
  double x36 = -x21;
  double x37 = -0.384*x13 - x35 + 0.0825*x36;
  double x38 = -x17;
  double x39 = 0.0825*x15;
  double x40 = x11*x4 + x12*x39;
  double x41 = 0.384*x16 + x40;
  double x42 = x14*x37 + x38*x41;
  double x43 = -x42;
  double x44 = -0.107*x23 + 0.088*x33 + x43;
  double x45 = x11*x39 + x12*x5;
  double x46 = -0.0825*x15 + x45;
  double x47 = x14*x41 + x17*x37;
  double x48 = x19*x47 + x22*x46;
  double x49 = -x28;
  double x50 = x48 - 0.107*x49;
  double x51 = x25*x44 + x29*x50;
  double x52 = -parms[79]*x33 + parms[80]*x30 + parms[81]*x51;
  double x53 = x29*x52;
  double x54 = x23*x29 + x25*x28;
  double x55 = -x25;
  double x56 = x29*x44 + x50*x55;
  double x57 = parms[78]*x33 - parms[80]*x54 + parms[81]*x56;
  double x58 = parms[67]*x49 + parms[68]*x32 + parms[69]*x48 + x53 + x55*x57;
  double x59 = -x47;
  double x60 = x19*x46 + x22*x59;
  double x61 = -x60;
  double x62 = -0.088*x28 + x61;
  double x63 = -parms[78]*x30 + parms[79]*x54 + parms[81]*x62;
  double x64 = parms[66]*x28 + parms[68]*x24 + parms[69]*x60 - x63;
  double x65 = -x22;
  double x66 = parms[55]*x36 + parms[56]*x27 + parms[57]*x47 + x19*x58 + x64*x65;
  double x67 = x17*x66;
  double x68 = -parms[42];
  double x69 = -parms[78];
  double x70 = parms[73]*x54 + parms[75]*x30 + parms[76]*x33 + parms[80]*x51 + x62*x69;
  double x71 = x25*x52;
  double x72 = -parms[80];
  double x73 = parms[72]*x54 + parms[73]*x30 + parms[74]*x33 + parms[79]*x62 + x56*x72;
  double x74 = x29*x57;
  double x75 = parms[60]*x23 + parms[61]*x32 + parms[62]*x28 + parms[67]*x43 + parms[68]*x61 + x29*x73 + x55*x70 - 0.107*x71 - 0.107*x74;
  double x76 = -parms[79];
  double x77 = parms[74]*x54 + parms[76]*x30 + parms[77]*x33 + parms[78]*x56 + x51*x76;
  double x78 = -parms[66];
  double x79 = parms[61]*x23 + parms[63]*x32 + parms[64]*x28 + parms[68]*x48 + x43*x78 - 0.088*x71 - 0.088*x74 - x77;
  double x80 = parms[50]*x18 + parms[52]*x27 + parms[53]*x21 + parms[54]*x42 + parms[55]*x59 + x19*x79 + x22*x75;
  double x81 = parms[54]*x21 + parms[56]*x31 + parms[57]*x42 - parms[66]*x33 - parms[67]*x23 - parms[69]*x43 - x71 - x74;
  double x82 = x14*x81;
  double x83 = parms[37]*x13 + parms[39]*x21 + parms[40]*x15 + parms[44]*x40 + x35*x68 - 0.0825*x67 + x80 - 0.0825*x82;
  double x84 = parms[48]*x18 + parms[49]*x27 + parms[50]*x21 + parms[55]*x46 + parms[56]*x43 + x19*x75 + x65*x79;
  double x85 = -parms[54];
  double x86 = -parms[67];
  double x87 = -0.107*x25;
  double x88 = parms[62]*x23 + parms[64]*x32 + parms[65]*x28 + parms[66]*x60 + x25*x73 + x29*x70 + x48*x86 + 0.107*x53 + x57*x87 - 0.088*x63;
  double x89 = parms[49]*x18 + parms[51]*x27 + parms[52]*x21 + parms[56]*x47 + x46*x85 - x88;
  double x90 = -parms[44];
  double x91 = parms[36]*x13 + parms[37]*x21 + parms[38]*x15 + parms[43]*x35 + x14*x84 + x38*x89 + x45*x90 - 0.384*x67 - 0.384*x82;
  double x92 = parms[42]*x36 + parms[43]*x13 + parms[45]*x35 + x38*x66 - x82;
  double x93 = parms[26]*x8 + parms[28]*x6 + parms[29]*x10 + parms[30]*x9 + parms[31]*x5 + x11*x83 + x12*x91 - 0.0825*x92;
  double x94 = parms[54]*x28 + parms[55]*x18 + parms[57]*x46 + x19*x64 + x22*x58;
  double x95 = parms[42]*x15 + parms[44]*x26 + parms[45]*x45 + x94;
  double x96 = -x12;
  double x97 = x14*x66;
  double x98 = parms[43]*x16 + parms[44]*x21 + parms[45]*x40 + x38*x81 + x97;
  double x99 = -parms[31]*x10 + parms[32]*x6 + parms[33]*x4 + x11*x98 + x95*x96;
  double x100 = parms[24]*x8 + parms[25]*x6 + parms[26]*x10 + parms[32]*x34 + x11*x91 + x83*x96;
  double x101 = parms[30]*x10 + parms[32]*x20 + parms[33]*x9 - x92;
  double x102 = -parms[43];
  double x103 = -x14;
  double x104 = 0.384*x17;
  double x105 = parms[38]*x13 + parms[40]*x21 + parms[41]*x15 + parms[42]*x45 + x102*x40 + x103*x89 + x104*x81 + x38*x84 - 0.0825*x94 - 0.384*x97;
  double x106 = parms[25]*x8 + parms[27]*x6 + parms[28]*x10 + parms[32]*x4 - x105 - 0.0825*x11*x95 - 0.0825*x12*x98;
  double x107 = -x2;
  double x108 = parms[14]*x1 + parms[16]*x0 + x100*x2 + x101*x3 + x106*x7 + 0.316*x7*x99;
  double x109 = -x3;
  double x110 = x11*x2;
  double x111 = -x7;
  double x112 = -x111;
  double x113 = x110*x38 + x112*x14;
  double x114 = x2*x96;
  double x115 = -x114;
  double x116 = x109 + 0.384*x110 - 0.0825*x115;
  double x117 = 0.316*x7;
  double x118 = 0.0825*x111;
  double x119 = x11*x117 + x118*x12;
  double x120 = 0.384*x112 + x119;
  double x121 = x116*x38 + x120*x14;
  double x122 = x110*x14 + x111*x38;
  double x123 = x114*x19 + x122*x65;
  double x124 = -x123;
  double x125 = x114*x22 + x122*x19;
  double x126 = x103*x116 + x120*x38;
  double x127 = -x126;
  double x128 = 0.088*x124 - 0.107*x125 + x127;
  double x129 = x11*x118 + x117*x96;
  double x130 = -0.0825*x111 + x129;
  double x131 = x121*x19 + x130*x22;
  double x132 = -x113;
  double x133 = -x132;
  double x134 = x131 - 0.107*x133;
  double x135 = x128*x29 + x134*x55;
  double x136 = x125*x29 + x132*x25;
  double x137 = parms[78]*x124 - parms[80]*x136 + parms[81]*x135;
  double x138 = x125*x55 + x132*x29;
  double x139 = x128*x25 + x134*x29;
  double x140 = -parms[79]*x124 + parms[80]*x138 + parms[81]*x139;
  double x141 = x140*x29;
  double x142 = parms[67]*x133 + parms[68]*x123 + parms[69]*x131 + x137*x55 + x141;
  double x143 = x121*x65 + x130*x19;
  double x144 = -x143;
  double x145 = -0.088*x132 + x144;
  double x146 = -parms[78]*x138 + parms[79]*x136 + parms[81]*x145;
  double x147 = parms[66]*x132 - parms[68]*x125 + parms[69]*x143 - x146;
  double x148 = parms[55]*x115 + parms[56]*x113 + parms[57]*x121 + x142*x19 + x147*x65;
  double x149 = x148*x17;
  double x150 = x140*x25;
  double x151 = parms[72]*x136 + parms[73]*x138 + parms[74]*x124 + parms[79]*x145 + x135*x72;
  double x152 = x137*x29;
  double x153 = parms[73]*x136 + parms[75]*x138 + parms[76]*x124 + parms[80]*x139 + x145*x69;
  double x154 = parms[60]*x125 + parms[61]*x123 + parms[62]*x132 + parms[67]*x127 + parms[68]*x144 - 0.107*x150 + x151*x29 - 0.107*x152 + x153*x55;
  double x155 = -parms[55];
  double x156 = parms[74]*x136 + parms[76]*x138 + parms[77]*x124 + parms[78]*x135 + x139*x76;
  double x157 = parms[61]*x125 + parms[63]*x123 + parms[64]*x132 + parms[68]*x131 + x127*x78 - 0.088*x150 - 0.088*x152 - x156;
  double x158 = parms[50]*x122 + parms[52]*x113 + parms[53]*x114 + parms[54]*x126 + x121*x155 + x154*x22 + x157*x19;
  double x159 = parms[54]*x114 - parms[56]*x122 + parms[57]*x126 - parms[66]*x124 - parms[67]*x125 - parms[69]*x127 - x150 - x152;
  double x160 = x14*x159;
  double x161 = parms[37]*x110 + parms[39]*x114 + parms[40]*x111 + parms[44]*x119 + x109*x68 - 0.0825*x149 + x158 - 0.0825*x160;
  double x162 = parms[62]*x125 + parms[64]*x123 + parms[65]*x132 + parms[66]*x143 + x131*x86 + x137*x87 + 0.107*x141 - 0.088*x146 + x151*x25 + x153*x29;
  double x163 = parms[49]*x122 + parms[51]*x113 + parms[52]*x114 + parms[56]*x121 + x130*x85 - x162;
  double x164 = parms[48]*x122 + parms[49]*x113 + parms[50]*x114 + parms[55]*x130 + parms[56]*x127 + x154*x19 + x157*x65;
  double x165 = parms[36]*x110 + parms[37]*x114 + parms[38]*x111 + parms[43]*x109 + x129*x90 + x14*x164 - 0.384*x149 - 0.384*x160 + x163*x38;
  double x166 = x14*x148;
  double x167 = parms[43]*x112 + parms[44]*x114 + parms[45]*x119 + x159*x38 + x166;
  double x168 = parms[54]*x132 + parms[55]*x122 + parms[57]*x130 + x142*x22 + x147*x19;
  double x169 = parms[42]*x111 - parms[44]*x110 + parms[45]*x129 + x168;
  double x170 = parms[38]*x110 + parms[40]*x114 + parms[41]*x111 + parms[42]*x129 + x102*x119 + x103*x163 + x104*x159 + x164*x38 - 0.384*x166 - 0.0825*x168;
  double x171 = parms[42]*x115 + parms[43]*x110 + parms[45]*x109 + x103*x159 + x148*x38;
  double x172 = parms[26]*x2 + parms[28]*x7 + parms[30]*x3 - parms[31]*x117 + x11*x161 + x12*x165 - 0.0825*x171;
  double x173 = -x11;
  double x174 = 0.384*x12 - 0.0825*x173 - 0.0825;
  double x175 = x174*x38;
  double x176 = x175*x65;
  double x177 = -x176;
  double x178 = x12*x38;
  double x179 = -x178;
  double x180 = x177 - 0.088*x179;
  double x181 = x12*x14;
  double x182 = x11*x22 + x181*x19;
  double x183 = x179*x29 + x182*x55;
  double x184 = x179*x25 + x182*x29;
  double x185 = -parms[78]*x183 + parms[79]*x184 + parms[81]*x180;
  double x186 = parms[66]*x179 - parms[68]*x182 + parms[69]*x176 - x185;
  double x187 = x11*x19 + x181*x65;
  double x188 = -x187;
  double x189 = -x179;
  double x190 = x175*x19;
  double x191 = -0.107*x189 + x190;
  double x192 = x103*x174;
  double x193 = -x192;
  double x194 = -0.107*x182 + 0.088*x188 + x193;
  double x195 = x191*x55 + x194*x29;
  double x196 = parms[78]*x188 - parms[80]*x184 + parms[81]*x195;
  double x197 = x191*x29 + x194*x25;
  double x198 = -parms[79]*x188 + parms[80]*x183 + parms[81]*x197;
  double x199 = x198*x29;
  double x200 = parms[67]*x189 + parms[68]*x187 + parms[69]*x190 + x196*x55 + x199;
  double x201 = parms[55]*x173 + parms[56]*x178 + parms[57]*x175 + x186*x65 + x19*x200;
  double x202 = x17*x201;
  double x203 = x198*x25;
  double x204 = x196*x29;
  double x205 = parms[54]*x11 - parms[56]*x181 + parms[57]*x192 - parms[66]*x188 - parms[67]*x182 - parms[69]*x193 - x203 - x204;
  double x206 = x14*x205;
  double x207 = parms[72]*x184 + parms[73]*x183 + parms[74]*x188 + parms[79]*x180 + x195*x72;
  double x208 = parms[73]*x184 + parms[75]*x183 + parms[76]*x188 + parms[80]*x197 + x180*x69;
  double x209 = parms[60]*x182 + parms[61]*x187 + parms[62]*x179 + parms[67]*x193 + parms[68]*x177 + x198*x87 - 0.107*x204 + x207*x29 + x208*x55;
  double x210 = parms[74]*x184 + parms[76]*x183 + parms[77]*x188 + parms[78]*x195 + x197*x76;
  double x211 = parms[61]*x182 + parms[63]*x187 + parms[64]*x179 + parms[68]*x190 + x193*x78 - 0.088*x203 - 0.088*x204 - x210;
  double x212 = parms[50]*x181 + parms[52]*x178 + parms[53]*x11 + parms[54]*x192 + x155*x175 + x19*x211 + x209*x22;
  double x213 = parms[48]*x181 + parms[49]*x178 + parms[50]*x11 + parms[56]*x193 + x19*x209 + x211*x65;
  double x214 = parms[62]*x182 + parms[64]*x187 + parms[65]*x179 + parms[66]*x176 - 0.088*x185 + x190*x86 + x196*x87 + 0.107*x199 + x207*x25 + x208*x29;
  double x215 = parms[49]*x181 + parms[51]*x178 + parms[52]*x11 + parms[56]*x175 - x214;
  double x216 = parms[38]*x12 + parms[40]*x11 - 0.0825*parms[54]*x179 - 0.0825*parms[55]*x181 + x103*x215 + x104*x205 - 0.384*x14*x201 - 0.0825*x186*x19 - 0.0825*x200*x22 + x213*x38;
  double x217 = x19*x38;
  double x218 = -x103;
  double x219 = x217*x29 + x218*x25;
  double x220 = -0.384*x14;
  double x221 = -0.0825*x19 + x220*x65;
  double x222 = -x221;
  double x223 = -0.088*x218 + x222;
  double x224 = x217*x55 + x218*x29;
  double x225 = -parms[78]*x224 + parms[79]*x219 + parms[81]*x223;
  double x226 = parms[66]*x218 - parms[68]*x217 + parms[69]*x221 - x225;
  double x227 = -x104;
  double x228 = x38*x65;
  double x229 = -x228;
  double x230 = -0.107*x217 + x227 + 0.088*x229;
  double x231 = -x218;
  double x232 = x19*x220 - 0.0825*x22;
  double x233 = -0.107*x231 + x232;
  double x234 = x230*x29 + x233*x55;
  double x235 = parms[78]*x229 - parms[80]*x219 + parms[81]*x234;
  double x236 = x230*x25 + x233*x29;
  double x237 = -parms[79]*x229 + parms[80]*x224 + parms[81]*x236;
  double x238 = x237*x29;
  double x239 = parms[67]*x231 + parms[68]*x228 + parms[69]*x232 + x235*x55 + x238;
  double x240 = parms[74]*x219 + parms[76]*x224 + parms[77]*x229 + parms[78]*x234 + x236*x76;
  double x241 = x235*x29;
  double x242 = x237*x25;
  double x243 = parms[61]*x217 + parms[63]*x228 + parms[64]*x218 + parms[68]*x232 + x227*x78 - x240 - 0.088*x241 - 0.088*x242;
  double x244 = parms[73]*x219 + parms[75]*x224 + parms[76]*x229 + parms[80]*x236 + x223*x69;
  double x245 = parms[72]*x219 + parms[73]*x224 + parms[74]*x229 + parms[79]*x223 + x234*x72;
  double x246 = parms[60]*x217 + parms[61]*x228 + parms[62]*x218 + parms[67]*x227 + parms[68]*x222 + x237*x87 - 0.107*x241 + x244*x55 + x245*x29;
  double x247 = parms[62]*x217 + parms[64]*x228 + parms[65]*x218 + parms[66]*x221 - 0.088*x225 + x232*x86 + x235*x87 + 0.107*x238 + x244*x29 + x245*x25;
  double x248 = parms[50]*x38 + parms[52]*x103 + parms[54]*x104 + x155*x220 + x19*x243 + x22*x246;
  double x249 = x22*x29;
  double x250 = x22*x55;
  double x251 = -x19;
  double x252 = -0.107*x22 + 0.088*x251;
  double x253 = x25*x252;
  double x254 = parms[73]*x249 + parms[75]*x250 + parms[76]*x251 + parms[80]*x253;
  double x255 = x252*x29;
  double x256 = parms[72]*x249 + parms[73]*x250 + parms[74]*x251 + x255*x72;
  double x257 = -parms[79]*x251 + parms[80]*x250 + parms[81]*x253;
  double x258 = parms[78]*x251 - parms[80]*x249 + parms[81]*x255;
  double x259 = x258*x29;
  double x260 = parms[74]*x249 + parms[76]*x250 + parms[77]*x251 + parms[78]*x255 + x253*x76;
  double x261 = parms[62]*x22 + parms[64]*x19 + 0.088*parms[78]*x250 - 0.088*parms[79]*x249 + x25*x256 + x254*x29 + 0.107*x257*x29 + x258*x87;
  double x262 = 0.107*x29;
  double x263 = parms[74]*x25 + parms[76]*x29 + parms[78]*x87 + x262*x76;
//
  M[0] = parms[5] + x0*(parms[13]*x1 + parms[15]*x0 - x93) + x1*(parms[12]*x1 + parms[13]*x0 + x100*x7 - 0.316*x101*x7 + x106*x107 - 0.316*x2*x99);
  M[1] = x108;
  M[2] = x93;
  M[3] = x105;
  M[4] = x80;
  M[5] = x88;
  M[6] = x77;
  M[7] = x108;
  M[8] = parms[17] + x117*(parms[32]*x7 + parms[33]*x117 + x11*x167 + x169*x96) + x2*(parms[24]*x2 + parms[25]*x7 + parms[32]*x109 + x11*x165 + x161*x96) + x3*(parms[32]*x107 + parms[33]*x3 - x171) + x7*(parms[25]*x2 + parms[27]*x7 + parms[32]*x117 - 0.0825*x11*x169 - 0.0825*x12*x167 - x170);
  M[9] = x172;
  M[10] = x170;
  M[11] = x158;
  M[12] = x162;
  M[13] = x156;
  M[14] = x93;
  M[15] = x172;
  M[16] = parms[29] - 0.0825*parms[42]*x173 - 0.0825*parms[43]*x12 + 0.00680625*parms[45] - 0.0825*x103*x205 + x11*(parms[37]*x12 + parms[39]*x11 + 0.0825*parms[42] - 0.0825*x202 - 0.0825*x206 + x212) + x12*(parms[36]*x12 + parms[37]*x11 - 0.0825*parms[43] + x14*x213 - 0.384*x202 - 0.384*x206 + x215*x38) - 0.0825*x201*x38;
  M[17] = x216;
  M[18] = x212;
  M[19] = x214;
  M[20] = x210;
  M[21] = x105;
  M[22] = x170;
  M[23] = x216;
  M[24] = parms[41] - 0.0825*parms[54]*x218 - 0.0825*parms[55]*x38 + 0.00680625*parms[57] + x103*(parms[49]*x38 + parms[51]*x103 + 0.0825*parms[54] + parms[56]*x220 - x247) + x104*(-parms[56]*x38 + parms[57]*x104 - parms[66]*x229 - parms[67]*x217 - parms[69]*x227 - x241 - x242) - 0.0825*x19*x226 - 0.0825*x22*x239 + x220*(parms[56]*x103 + parms[57]*x220 + x19*x239 + x226*x65) + x38*(parms[48]*x38 + parms[49]*x103 - 0.0825*parms[55] + parms[56]*x227 + x19*x246 + x243*x65);
  M[25] = x248;
  M[26] = x247;
  M[27] = x240;
  M[28] = x80;
  M[29] = x158;
  M[30] = x212;
  M[31] = x248;
  M[32] = parms[53] + x19*(parms[61]*x22 + parms[63]*x19 - 0.088*x25*x257 - 0.088*x259 - x260) + x22*(parms[60]*x22 + parms[61]*x19 + x254*x55 + x256*x29 + x257*x87 - 0.107*x259);
  M[33] = x261;
  M[34] = x260;
  M[35] = x88;
  M[36] = x162;
  M[37] = x214;
  M[38] = x247;
  M[39] = x261;
  M[40] = parms[65] + 0.088*parms[78]*x29 - 0.088*parms[79]*x25 + 0.007744*parms[81] + x25*(parms[72]*x25 + parms[73]*x29 - 0.088*parms[79] + x72*x87) + x262*(parms[80]*x29 + parms[81]*x262) + x29*(parms[73]*x25 + parms[75]*x29 + 0.088*parms[78] + parms[80]*x262) + x87*(parms[80]*x55 + parms[81]*x87);
  M[41] = x263;
  M[42] = x77;
  M[43] = x156;
  M[44] = x210;
  M[45] = x240;
  M[46] = x260;
  M[47] = x263;
  M[48] = parms[77];
//
  return;
} 
void get_franka_c( double* c, const double* parms, const double* q, const double* dq )
{
  double x0 = cos(q[1]);
  double x1 = sin(q[2]);
  double x2 = cos(q[2]);
  double x3 = sin(q[1]);
  double x4 = -dq[0];
  double x5 = x3*x4;
  double x6 = dq[1]*x1 + x2*x5;
  double x7 = -x6;
  double x8 = x0*x4;
  double x9 = dq[1]*x8;
  double x10 = dq[2]*x7 - x1*x9;
  double x11 = x5*x8;
  double x12 = -0.632*x9;
  double x13 = 0.316*x1*x11 + x12*x2;
  double x14 = dq[0]*dq[1]*x3;
  double x15 = -x14;
  double x16 = -x5;
  double x17 = dq[1]*x2 + x1*x16;
  double x18 = -x8;
  double x19 = dq[2] + x18;
  double x20 = parms[25]*x6 + parms[27]*x17 + parms[28]*x19;
  double x21 = x1*x12 - 0.316*x11*x2;
  double x22 = dq[2]*x17 + x2*x9;
  double x23 = parms[24]*x6 + parms[25]*x17 + parms[26]*x19;
  double x24 = -x17;
  double x25 = sin(q[3]);
  double x26 = cos(q[3]);
  double x27 = x19*x26 + x25*x7;
  double x28 = dq[4] + x27;
  double x29 = -((x28)*(x28));
  double x30 = cos(q[4]);
  double x31 = x19*x25 + x26*x6;
  double x32 = sin(q[4]);
  double x33 = dq[3] + x24;
  double x34 = -x33;
  double x35 = x30*x31 + x32*x34;
  double x36 = -((x35)*(x35));
  double x37 = -x31;
  double x38 = x30*x34 + x32*x37;
  double x39 = x35*x38;
  double x40 = -x22;
  double x41 = dq[3]*x37 + x15*x26 + x25*x40;
  double x42 = -0.316*((dq[1])*(dq[1])) - 0.316*((x5)*(x5));
  double x43 = x19*x6;
  double x44 = -x10;
  double x45 = x42 + 0.0825*x43 + 0.0825*x44;
  double x46 = -((x19)*(x19));
  double x47 = -((x17)*(x17)) + x46;
  double x48 = x21 + 0.0825*x47;
  double x49 = x25*x45 + x26*x48;
  double x50 = -((x33)*(x33));
  double x51 = -((x27)*(x27));
  double x52 = x50 + x51;
  double x53 = -x44;
  double x54 = x27*x31;
  double x55 = x53 + x54;
  double x56 = x49 - 0.0825*x52 + 0.384*x55;
  double x57 = -x32;
  double x58 = dq[3]*x27 + x15*x25 + x22*x26;
  double x59 = x27*x33;
  double x60 = x58 + x59;
  double x61 = -x41;
  double x62 = x31*x33;
  double x63 = x61 + x62;
  double x64 = x17*x6;
  double x65 = x15 + x64;
  double x66 = -x13;
  double x67 = -0.0825*x65 + x66;
  double x68 = 0.384*x60 - 0.0825*x63 + x67;
  double x69 = -x30;
  double x70 = x56*x57 + x68*x69;
  double x71 = dq[4]*x38 + x30*x58 + x32*x53;
  double x72 = -x71;
  double x73 = x28*x38;
  double x74 = sin(q[6]);
  double x75 = sin(q[5]);
  double x76 = -x35;
  double x77 = cos(q[5]);
  double x78 = x28*x77 + x75*x76;
  double x79 = -x78;
  double x80 = dq[6] + x79;
  double x81 = -((x80)*(x80));
  double x82 = -x38;
  double x83 = dq[5] + x82;
  double x84 = cos(q[6]);
  double x85 = x28*x75 + x35*x77;
  double x86 = -x85;
  double x87 = x74*x86 + x83*x84;
  double x88 = -((x87)*(x87));
  double x89 = x74*x83 + x84*x85;
  double x90 = x80*x89;
  double x91 = -x89;
  double x92 = dq[5]*x78 + x41*x75 + x71*x77;
  double x93 = -x92;
  double x94 = -x58;
  double x95 = dq[4]*x76 + x30*x53 + x32*x94;
  double x96 = -x95;
  double x97 = dq[6]*x91 + x74*x93 + x84*x96;
  double x98 = dq[5]*x86 + x41*x77 + x72*x75;
  double x99 = -x98;
  double x100 = x87*x89;
  double x101 = x30*x56 + x57*x68;
  double x102 = -x25;
  double x103 = x102*x48 + x26*x45;
  double x104 = x44 + x54;
  double x105 = -((x31)*(x31));
  double x106 = x105 + x50;
  double x107 = x103 - 0.0825*x104 + 0.384*x106;
  double x108 = x101*x77 + x107*x75;
  double x109 = x78*x85;
  double x110 = x109 - x96;
  double x111 = -((x83)*(x83));
  double x112 = -((x78)*(x78));
  double x113 = x111 + x112;
  double x114 = x108 - 0.107*x110 + 0.088*x113;
  double x115 = x83*x85;
  double x116 = x115 + x99;
  double x117 = -x70;
  double x118 = x78*x83;
  double x119 = x118 + x92;
  double x120 = 0.088*x116 + x117 - 0.107*x119;
  double x121 = x114*x84 + x120*x74;
  double x122 = parms[78]*(x81 + x88) + parms[79]*(x100 - x99) + parms[80]*(x90 + x97) + parms[81]*x121;
  double x123 = x122*x74;
  double x124 = -((x85)*(x85));
  double x125 = dq[6]*x87 + x74*x96 + x84*x92;
  double x126 = x80*x87;
  double x127 = -((x89)*(x89));
  double x128 = -x74;
  double x129 = x114*x128 + x120*x84;
  double x130 = parms[78]*(x100 + x99) + parms[79]*(x127 + x81) + parms[80]*(-x125 + x126) + parms[81]*x129;
  double x131 = x130*x84;
  double x132 = parms[54]*(x39 + x41) + parms[55]*(x29 + x36) + parms[56]*(x72 + x73) + parms[57]*x70 - parms[66]*x116 - parms[67]*x119 - parms[68]*(x112 + x124) - parms[69]*x117 - x123 - x131;
  double x133 = x28*x35;
  double x134 = -((x38)*(x38));
  double x135 = x122*x84;
  double x136 = parms[66]*x113 + parms[67]*x110 + parms[68]*(x115 + x98) + parms[69]*x108 + x128*x130 + x135;
  double x137 = x109 + x96;
  double x138 = -x101;
  double x139 = x107*x77 + x138*x75;
  double x140 = -x139;
  double x141 = x111 + x124;
  double x142 = -0.088*x137 + x140 + 0.107*x141;
  double x143 = parms[78]*(x90 - x97) + parms[79]*(x125 + x126) + parms[80]*(x127 + x88) + parms[81]*x142;
  double x144 = parms[66]*x137 + parms[67]*x141 + parms[68]*(x118 + x93) + parms[69]*x139 - x143;
  double x145 = -x75;
  double x146 = parms[54]*(x134 + x29) + parms[55]*(x39 + x61) + parms[56]*(x133 + x95) + parms[57]*x101 + x136*x77 + x144*x145;
  double x147 = parms[42]*x63 + parms[43]*x60 + parms[44]*(x105 + x51) + parms[45]*x67 + x132*x69 + x146*x57;
  double x148 = x146*x32;
  double x149 = parms[38]*x31 + parms[40]*x27 + parms[41]*x33;
  double x150 = parms[36]*x31 + parms[37]*x27 + parms[38]*x33;
  double x151 = parms[48]*x35 + parms[49]*x38 + parms[50]*x28;
  double x152 = parms[49]*x35 + parms[51]*x38 + parms[52]*x28;
  double x153 = parms[60]*x85 + parms[61]*x78 + parms[62]*x83;
  double x154 = parms[62]*x85 + parms[64]*x78 + parms[65]*x83;
  double x155 = parms[72]*x89 + parms[73]*x87 + parms[74]*x80;
  double x156 = parms[73]*x89 + parms[75]*x87 + parms[76]*x80;
  double x157 = parms[74]*x125 + parms[76]*x97 + parms[77]*x99 + parms[78]*x129 - parms[79]*x121 - x155*x87 + x156*x89;
  double x158 = parms[61]*x92 + parms[63]*x98 + parms[64]*x96 - parms[66]*x117 + parms[68]*x108 - 0.088*x123 - 0.088*x131 + x153*x83 + x154*x86 - x157;
  double x159 = parms[74]*x89 + parms[76]*x87 + parms[77]*x80;
  double x160 = parms[72]*x125 + parms[73]*x97 + parms[74]*x99 + parms[79]*x142 - parms[80]*x129 - x156*x80 + x159*x87;
  double x161 = parms[73]*x125 + parms[75]*x97 + parms[76]*x99 - parms[78]*x142 + parms[80]*x121 + x155*x80 + x159*x91;
  double x162 = parms[61]*x85 + parms[63]*x78 + parms[64]*x83;
  double x163 = parms[60]*x92 + parms[61]*x98 + parms[62]*x96 + parms[67]*x117 + parms[68]*x140 - 0.107*x123 + x128*x161 - 0.107*x131 + x154*x78 + x160*x84 - x162*x83;
  double x164 = parms[50]*x71 + parms[52]*x95 + parms[53]*x41 + parms[54]*x70 + parms[55]*x138 + x151*x82 + x152*x35 + x158*x77 + x163*x75;
  double x165 = x132*x30;
  double x166 = parms[37]*x58 + parms[39]*x41 + parms[40]*x44 - parms[42]*x67 + parms[44]*x49 - 0.0825*x148 + x149*x37 + x150*x33 + x164 - 0.0825*x165;
  double x167 = parms[37]*x31 + parms[39]*x27 + parms[40]*x33;
  double x168 = parms[50]*x35 + parms[52]*x38 + parms[53]*x28;
  double x169 = parms[48]*x71 + parms[49]*x95 + parms[50]*x41 + parms[55]*x107 + parms[56]*x117 + x145*x158 - x152*x28 + x163*x77 + x168*x38;
  double x170 = parms[62]*x92 + parms[64]*x98 + parms[65]*x96 + parms[66]*x139 - parms[67]*x108 - 0.107*x130*x74 + 0.107*x135 - 0.088*x143 + x153*x79 + x160*x74 + x161*x84 + x162*x85;
  double x171 = parms[49]*x71 + parms[51]*x95 + parms[52]*x41 - parms[54]*x107 + parms[56]*x101 + x151*x28 + x168*x76 - x170;
  double x172 = parms[36]*x58 + parms[37]*x41 + parms[38]*x44 + parms[43]*x67 - parms[44]*x103 - 0.384*x148 + x149*x27 - 0.384*x165 + x167*x34 + x169*x30 + x171*x57;
  double x173 = parms[26]*x22 + parms[28]*x10 + parms[29]*x15 + parms[30]*x13 - parms[31]*x21 - 0.0825*x147 + x166*x26 + x172*x25 + x20*x6 + x23*x24;
  double x174 = dq[1]*parms[17] + parms[14]*x5 + parms[16]*x8;
  double x175 = dq[1]*parms[14] + parms[12]*x5 + parms[13]*x8;
  double x176 = dq[1]*parms[16] + parms[13]*x5 + parms[15]*x8;
  double x177 = parms[54]*(x133 + x96) + parms[55]*(x71 + x73) + parms[56]*(x134 + x36) + parms[57]*x107 + x136*x75 + x144*x77;
  double x178 = parms[42]*x104 + parms[43]*x106 + parms[44]*(x59 + x94) + parms[45]*x103 + x177;
  double x179 = x146*x30;
  double x180 = parms[42]*x52 + parms[43]*x55 + parms[44]*(x41 + x62) + parms[45]*x49 + x132*x57 + x179;
  double x181 = parms[30]*x47 + parms[31]*(-x15 + x64) + parms[32]*(x10 + x43) + parms[33]*x21 + x102*x178 + x180*x26;
  double x182 = parms[26]*x6 + parms[28]*x17 + parms[29]*x19;
  double x183 = parms[38]*x58 + parms[40]*x41 + parms[41]*x44 + parms[42]*x103 - parms[43]*x49 + 0.384*x132*x32 - x150*x27 + x167*x31 + x169*x57 + x171*x69 - 0.0825*x177 - 0.384*x179;
  double x184 = parms[25]*x22 + parms[27]*x10 + parms[28]*x15 - parms[30]*x42 + parms[32]*x21 - 0.0825*x178*x26 - 0.0825*x180*x25 + x182*x7 - x183 + x19*x23;
  double x185 = parms[24]*x22 + parms[25]*x10 + parms[26]*x15 + parms[31]*x42 + parms[32]*x66 + x102*x166 + x17*x182 + x172*x26 - x19*x20;
  double x186 = parms[30]*x65 + parms[31]*(x46 - ((x6)*(x6))) + parms[32]*(x17*x19 + x40) + parms[33]*x13 - x147;
//
  c[0] = -x0*(dq[1]*x175 + parms[13]*x9 + parms[15]*x14 + x16*x174 - x173) - x3*(-dq[1]*x176 + parms[12]*x9 + parms[13]*x14 - 0.316*x1*x181 - x1*x184 + x174*x8 + x185*x2 - 0.316*x186*x2);
  c[1] = parms[14]*x9 + parms[16]*x14 + x1*x185 - 0.316*x1*x186 + x175*x18 + x176*x5 + 0.316*x181*x2 + x184*x2;
  c[2] = x173;
  c[3] = x183;
  c[4] = x164;
  c[5] = x170;
  c[6] = x157;
//
  return;
} 
void get_franka_g( double* g, const double* parms, const double* q )
{
  double x0 = cos(q[1]);
  double x1 = sin(q[6]);
  double x2 = cos(q[4]);
  double x3 = sin(q[1]);
  double x4 = -9.81*x3;
  double x5 = -x4;
  double x6 = sin(q[2]);
  double x7 = x5*x6;
  double x8 = -x7;
  double x9 = -x8;
  double x10 = cos(q[2]);
  double x11 = x10*x4;
  double x12 = cos(q[3]);
  double x13 = sin(q[3]);
  double x14 = -9.81*x0;
  double x15 = -x14;
  double x16 = x11*x12 + x13*x15;
  double x17 = -x16;
  double x18 = sin(q[4]);
  double x19 = x17*x18 + x2*x9;
  double x20 = -x19;
  double x21 = -x11;
  double x22 = x12*x15 + x13*x21;
  double x23 = sin(q[5]);
  double x24 = x16*x2 + x18*x9;
  double x25 = cos(q[5]);
  double x26 = x22*x23 + x24*x25;
  double x27 = cos(q[6]);
  double x28 = x1*x20 + x26*x27;
  double x29 = parms[81]*x28;
  double x30 = x1*x29;
  double x31 = -x26;
  double x32 = x1*x31 + x20*x27;
  double x33 = parms[81]*x32;
  double x34 = x27*x33;
  double x35 = parms[57]*x19 - parms[69]*x20 - x30 - x34;
  double x36 = x2*x35;
  double x37 = -x1;
  double x38 = x27*x29;
  double x39 = parms[69]*x26 + x33*x37 + x38;
  double x40 = -x23;
  double x41 = -x24;
  double x42 = x22*x25 + x23*x41;
  double x43 = -x42;
  double x44 = parms[81]*x43;
  double x45 = parms[69]*x42 - x44;
  double x46 = parms[57]*x24 + x25*x39 + x40*x45;
  double x47 = x18*x46;
  double x48 = parms[79]*x43 - parms[80]*x32;
  double x49 = -parms[78]*x43 + parms[80]*x28;
  double x50 = parms[67]*x20 + parms[68]*x43 + x27*x48 - 0.107*x30 - 0.107*x34 + x37*x49;
  double x51 = parms[78]*x32 - parms[79]*x28;
  double x52 = -parms[66]*x20 + parms[68]*x26 - 0.088*x30 - 0.088*x34 - x51;
  double x53 = parms[54]*x19 + parms[55]*x41 + x23*x50 + x25*x52;
  double x54 = parms[42]*x9 + parms[44]*x16 - 0.0825*x36 - 0.0825*x47 + x53;
  double x55 = parms[55]*x22 + parms[56]*x20 + x25*x50 + x40*x52;
  double x56 = -x22;
  double x57 = parms[66]*x42 + parms[67]*x31 - 0.107*x1*x33 + x1*x48 + x27*x49 + 0.107*x38 - 0.088*x44;
  double x58 = -parms[54]*x56 - parms[56]*x24 + x57;
  double x59 = parms[43]*x8 + parms[44]*x56 + x18*x58 + x2*x55 - 0.384*x36 - 0.384*x47;
  double x60 = -x35;
  double x61 = parms[45]*x8 + x2*x60 - x47;
  double x62 = parms[30]*x7 + parms[31]*x21 + x12*x54 + x13*x59 - 0.0825*x61;
  double x63 = parms[33]*x7 - x61;
  double x64 = x2*x46;
  double x65 = parms[45]*x16 + x18*x60 + x64;
  double x66 = parms[57]*x22 + x23*x39 + x25*x45;
  double x67 = parms[45]*x22 + x66;
  double x68 = -x13;
  double x69 = parms[33]*x11 + x12*x65 + x67*x68;
  double x70 = parms[31]*x15 + parms[32]*x8 + x12*x59 + x54*x68;
  double x71 = parms[42]*x22 + parms[43]*x17 + 0.384*x18*x35 - x18*x55 + x2*x58 - 0.384*x64 - 0.0825*x66;
  double x72 = -parms[30]*x15 + parms[32]*x11 - 0.0825*x12*x67 - 0.0825*x13*x65 - x71;
//
  g[0] = -x0*(parms[20]*x4 - x62) - x3*(parms[20]*x15 - 0.316*x10*x63 + x10*x70 - 0.316*x6*x69 - x6*x72);
  g[1] = parms[18]*x14 + parms[19]*x5 + 0.316*x10*x69 + x10*x72 - 0.316*x6*x63 + x6*x70;
  g[2] = x62;
  g[3] = x71;
  g[4] = x53;
  g[5] = x57;
  g[6] = x51;
//
  return;
}
