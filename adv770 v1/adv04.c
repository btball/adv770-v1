/* adv04.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p875(void)
#else
int p875()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((KEY(109)) ||
   KEY(39)) {
   return 0;
   }
   if ((value[1143]==0) &&
   value[1142]==value[1138]) {
   return 0;
   }
   if (value[1144]==1) {
   say(12,2028,1137);
   if (bitest(evar(1137),11)) {
   set('L',0,'c',1,lval, lbts);
   } else {
   set('L',0,'c',0,lval, lbts);
   }
   say(10,1143,lval[0]);
   } else {
   say(14,1143,1137);
   }
   apport(value[1137],value[1142]);
   if ((value[1137]==148)) {
   set('E',148,'c',2,NULL,NULL);
   }
   if (KEY(56)) {
   apport(56,702);
   apport(57,value[1142]);
   if (!((location[57]==702))) {
   say(64,1680,0);
   }}
   if ((value[HERE]==210)) {
   if (KEY(47)) {
   set('E',213,'c',1,NULL,NULL);
   set('E',9,'c',1,NULL,NULL);
   say(64,2162,0);
   }}
   if ((KEY(119)) &&
   value[119]>2) {
   set('E',119,'c',2,NULL,NULL);
   if (!((587<=value[1142] && value[1142]<=627))) {
   bitmod('s',evar(1142),13);
   }}
   if ((KEY(136)) &&
   value[136]>2) {
   if (value[136]==6) {
   set('E',136,'c',1,NULL,NULL);
   apport(87,value[1142]);
   } else {
   set('E',136,'c',2,NULL,NULL);
   if (!((587<=value[1142] && value[1142]<=627))) {
   bitmod('s',evar(1142),13);
   }}}
   if ((KEY(123)) &&
   value[123]>2) {
   set('E',123,'c',2,NULL,NULL);
   }
   if ((KEY(108)) &&
   have(109,-1,-1)) {
   apport(109,value[1142]);
   if (!((location[109]==702))) {
   if ((value[HERE]==210)) {
   set('L',0,'c',1,lval, lbts);
   } else {
   set('L',0,'c',0,lval, lbts);
   say(0,1259,0);
   }
   say(8,2027,lval[0]);
   }
   longjmp(loop_back,1);
   }
   if ((KEY(107)) &&
   value[107]==1) {
   set('E',107,'c',0,NULL,NULL);
   p487();
   if (!(bitest(evar(1170),8))) {
   p849(0,1);
   }}
   if ((value[HERE]==210)) {
   say(0,1259,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p394(void)
#else
int p394()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   say(72,1683,0);
   }
   if (bitest(evar(1137),0)) {
   if ((have(value[1137],-1,-1)) ||
   !(bitest(evar(1137),3))) {
   return 0;
   }
   set('L',0,'v',1179,lval, lbts);
   lval[0] -= value[1194];
   lval[0] *= 5;
   lval[0] += 60;
   if (irand(100)<lval[0]) {
   say(12,1684,1137);
   p153();
   }
   say(76,1685,1137);
   }
return done;
}
#ifdef __STDC__
int p688(void)
#else
int p688()
#endif
{
int done=0;
   value[1206] += 1;
   if (irand(100)<40) {
   value[1206] -= 2;
   if (value[1206]<0) {
   set('V',1206,'c',1,NULL,NULL);
   }}
   say(0,1259,0);
   if (value[1206]==7) {
   if ((value[HERE]==503||value[HERE]==504)) {
   value[1206] += 1;
   }
   if (have(118,-1,-1)) {
   apport(118,701);
   }
   move(502,-1);
   say(12,1701,1206);
   p153();
   }
   say(12,1701,1206);
return done;
}
#ifdef __STDC__
int p383(int typ0,int par0)
#else
int p383(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [5];
   short lbts [5];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
   if ((have(95,-1,-1)) &&
   value[95]==2) {
   set('L',4,'c',1,lval, lbts);
   }
   if (value[194]>4) {
   if (bitest(194,15)) {
   bitmod('c',194,15);
   } else {
   return 0;
   }
   if ((isnear(63,-1,-1)) &&
   bitest(158,4)) {
   if (lval[0]==1) {
   say(0,3336,0);
   } else    if (value[194]==5) {
   set('E',194,'c',6,NULL,NULL);
   if (value[1159]==-1) {
   if (have(63,-1,-1)) {
   say(8,1750,lval[4]);
   }
   set('V',1159,'l',4,lval, lbts);
   } else    if (value[1159]==lval[4]) {
   say(0,3219,0);
   } else    if (value[1159]<2) {
   say(8,3220,lval[4]);
   set('V',1159,'c',2,NULL,NULL);
   } else {
   say(0,3219,0);
   }}
   return 0;
   } else    if (lval[4]==1) {
   if (isnear(136,-1,-1)) {
   if (((value[136]==3) ||
   value[136]>=7) ||
   value[136]==5) {
   say(0,3300,0);
   return 0;
   }}
   say(8,2256,lval[0]);
   bitmod('c',198,8);
   if (have(136,-1,-1)) {
   if ((value[136]==1) ||
   value[136]==6) {
   move(198,-2260);
   }
   if (value[136]==2) {
   set('E',136,'c',5,NULL,NULL);
   say(0,2258,0);
   } else {
   say(0,3222,0);
   }
   return 0;
   }
   if ((location[136]==701)) {
   set('E',136,'c',5,NULL,NULL);
   bitmod('s',136,4);
   if (value[1179]<value[1194]) {
   apport(136,INHAND);
   say(8,2257,0);
   return 0;
   } else {
   apport(136,value[1138]);
   say(8,2257,1);
   say(0,1259,0);
   say(0,136,0);
   }
   } else {
   say(0,2259,0);
   }
   } else {
   move(198,-1827);
   }
   return 0;
   }
   if (have(91,-1,-1)) {
   say(0,1779,0);
   bitmod('c',194,13);
   apport(86,value[1138]);
   bitmod('s',86,4);
   apport(141,446);
   bitmod('s',198,8);
   apport(194,199);
   set('E',199,'c',1,NULL,NULL);
   set('E',446,'c',1,NULL,NULL);
   bitmod('c',199,4);
   set('E',194,'c',5,NULL,NULL);
   apport(91,702);
   return 0;
   }
   if (have(53,-1,-1)) {
   set('E',194,'c',2,NULL,NULL);
   value[1236] = irand(60-40+1)+40;
   say(8,1778,0);
   say(0,1780,0);
   apport(53,701);
   } else {
   if (value[194]==0) {
   if ((((bitest(194,4)) &&
   !have(118,-1,-1)) &&
   !(bitest(194,13))) &&
   irand(100)<4) {
   say(0,1787,0);
   bitmod('s',194,13);
   return 0;
   } else {
   set('L',2,'c',0,lval, lbts);
   lbts[1*VARSIZE]=-1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
   if (!isat(lval[1],-1,-1,703)) continue;
   if (!((lval[1]==107))) {
   if (!(((lval[1]==119)) &&
   value[13]<2)) {
   if (lbitest(1,16,lval,lbts)) {
   lval[3]=value[lval[1]];lbts[3*VARSIZE]=0;
   if (lval[3]<2) {
   apport(lval[1],HERE);
   lval[2] += 1;
   }
   } else {
   apport(lval[1],HERE);
   lval[2] += 1;
   }}}}
   if (isnear(118,-1,-1)) {
   lval[2] -= 1;
   }
   say(8,1778,lval[2]);
   flush_command();
   if (isnear(118,-1,-1)) {
   apport(118,701);
   move(495,-1781);
   } else {
   set('E',194,'c',1,NULL,NULL);
   value[1236] = irand(8-5+1)+5;
   if (value[1237]>-1) {
   value[1237] = irand(7-4+1)+4;
   }
   move(453,-1782);
   }}}
   if (value[194]==1) {
   say(8,1778,0);
   flush_command();
   if (value[1236]>0) {
   move(453,-1782);
   }
   say(0,1783,0);
   set('E',194,'c',0,NULL,NULL);
   p153();
   }}
return done;
}
#ifdef __STDC__
int p243(void)
#else
int p243()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[194]==1) {
   if (value[1237]>-1) {
   value[1237] -= 1;
   }
   if (value[1237]==0) {
   say(0,1728,0);
   bitmod('s',103,4);
   set('V',1237,'c',-1,NULL,NULL);
   }
   if (value[1236]<1) {
   set('L',0,'c',9,lval, lbts);
   lval[0] += value[1236];
   if (lval[0]<1) {
   set('L',0,'c',1,lval, lbts);
   }
   lval[0] *= 10;
   if (irand(100)<lval[0]) {
   say(0,1784,0);
   } else {
   say(0,1785,0);
   say(0,1783,0);
   move(452,-1);
   set('E',194,'c',0,NULL,NULL);
   p153();
   }}}
return done;
}
#ifdef __STDC__
int p832(void)
#else
int p832()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[120]==2) {
   if (bitest(120,13)) {
   value[1238] -= value[1179];
   } else {
   value[1238] -= 1;
   }
   if ((587<=value[1138] && value[1138]<=627)) {
   value[1238] -= 1;
   }
   if (value[1238]<1) {
   say(0,1814,0);
   p153();
   }
   if (value[1238]<3) {
   say(0,1813,0);
   }
   return 0;
   }
   if (bitest(120,13)) {
   set('L',0,'v',1179,lval, lbts);
   lval[0] /= 3;
   lval[0] += 4;
   } else {
   set('L',0,'c',2,lval, lbts);
   }
   lval[0] += lval[0];
   bitmod('c',120,13);
   if ((587<=value[1138] && value[1138]<=627)) {
   lval[0] += lval[0];
   }
   value[1238] -= lval[0];
   if (value[1238]<40) {
   if (value[120]<2) {
   say(0,1813,0);
   set('E',120,'c',2,NULL,NULL);
   set('V',1238,'v',1179,NULL,NULL);
   value[1238] += 2;
   value[1238] += value[1238];
   }
   } else    if ((value[1238]<140) &&
   value[120]==0) {
   say(12,1812,1179);
   set('E',120,'c',1,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p768(void)
#else
int p768()
#endif
{
int done=0;
   if (bitest(17,14)) {
   bitmod('s',17,13);
   bitmod('c',17,14);
   }
return done;
}
#ifdef __STDC__
int p331(void)
#else
int p331()
#endif
{
int done=0;
   if (value[1187]>0) {
   set('V',1187,'c',0,NULL,NULL);
   value[1191]=1257;*bitword(1191)=-1;
   say(64,1555,0);
   }
   say(66,1191,0);
return done;
}
#ifdef __STDC__
int p873(void)
#else
int p873()
#endif
{
int done=0;
   bitmod('c',evar(1137),7);
   if ((value[1137]==119)) {
   set('E',119,'c',2,NULL,NULL);
   } else    if ((value[1137]==144)) {
   value[144] += 1;
   if (value[144]>2) {
   say(64,2768,0);
   }
   } else {
value[value[1137]]=1;
   }
return done;
}
#ifdef __STDC__
int p668(void)
#else
int p668()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (bitest(evar(1137),16)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (lval[0]>1) {
value[value[1137]]=1;
   if (!((value[1137]==67))) {
   bitmod('c',evar(1137),12);
   }}}
   if (bitest(evar(1137),7)) {
   p873();
   }
return done;
}
#ifdef __STDC__
int p696(void)
#else
int p696()
#endif
{
int done=0;
   if (value[94]>1) {
   if (anyof(788,-1))   say(64,1353,0);
   if (anyof(795,-1))   say(64,1987,0);
   if (anyof(783,-1))   say(76,2820,94);
   }
   say(32,94,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p792(void)
#else
int p792()
#endif
{
int done=0;
   set('E',126,'c',0,NULL,NULL);
   if (((KEY(793)) &&
   !(value[HERE]==462)) &&
   !isnear(130,-1,-1)) {
   p875();
   }
   say(0,1993,0);
   apport(126,HERE);
   if ((value[HERE]==462)) {
   p936();
   }
   if (isnear(130,-1,-1)) {
   apport(126,702);
   apport(130,702);
   say(64,1622,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p539(void)
#else
int p539()
#endif
{
int done=0;
   if (isnear(10,-1,-1)) {
   say(64,2022,0);
   }
   if (isnear(31,-1,-1)) {
   say(64,2032,0);
   }
   if (isnear(22,-1,-1)) {
   if (value[22]==0) {
   say(64,2023,0);
   }
   say(64,2024,0);
   }
   if ((value[HERE]==632||value[HERE]==631)) {
   say(64,2357,0);
   }
   say(76,1312,11);
return done;
}
#ifdef __STDC__
int p510(int typ0,int par0,int typ1,int par1)
#else
int p510(typ0,par0,typ1,par1)
int typ0;int par0;
int typ1;int par1;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   set('V',1153,'l',0,lval, lbts);
   set('V',1154,'l',1,lval, lbts);
   say(0,lval[0],0);
   value[1153] += 1;
   if (value[1153]>lval[1]) {
   set('V',1172,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   }
   set('V',1172,'c',20,NULL,NULL);
   say(64,1424,0);
return done;
}
#ifdef __STDC__
int p220(void)
#else
int p220()
#endif
{
int done=0;
   say(64,1276,0);
return done;
}
#ifdef __STDC__
int p297(int typ0,int par0,int typ1,int par1)
#else
int p297(typ0,par0,typ1,par1)
int typ0;int par0;
int typ1;int par1;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   if (anyof(129,134,1077,30,74,1015,-1)) {
   if (anyof(822,798,-1))   say(72,lval[0],lval[1]);
   if (anyof(764,800,785,808,807,-1))   say(76,1877,1137);
   bitmod('s',evar(1172),1);
   p39();
   }
return done;
}
#ifdef __STDC__
int p298(void)
#else
int p298()
#endif
{
int done=0;
   if (KEY(757)) {
   if (anyof(848,919,-1))   say(64,2034,0);
   if (KEY(822)) {
   return 0;
   }}
   if (KEY(919)) {
   if (anyof(822,-1))   say(64,2126,0);
   if (anyof(792,800,785,767,769,-1))   say(76,2127,1136);
   if (anyof(848,-1))   say(64,2034,0);
   bitmod('s',evar(1172),1);
   p39();
   }
return done;
}
#ifdef __STDC__
int p869(void)
#else
int p869()
#endif
{
int done=0;
   if ((location[85]==448)) {
   if (bitest(85,14)) {
   if (bitest(85,13)) {
   bitmod('c',85,13);
   say(64,2066,0);
   } else {
   apport(85,702);
   say(64,2068,0);
   }
   } else {
   say(0,2066,0);
   if (bitest(85,13)) {
   bitmod('s',85,14);
   say(64,2067,0);
   }
   bitmod('s',85,13);
   longjmp(loop_back,1);
   }}
   say(64,2066,0);
return done;
}
#ifdef __STDC__
int p651(void)
#else
int p651()
#endif
{
int done=0;
   if (isnear(value[1137],-1,-1)) {
   if (have(value[1137],-1,-1)) {
   say(76,1406,1137);
   }
   if (have(54,-1,-1)) {
   if (KEY(114)) {
   apport(114,702);
   apport(115,value[1138]);
   apport(62,293);
   say(72,1408,0);
   }
   say(72,1408,1);
   }
   say(76,1407,1137);
   }
return done;
}
#ifdef __STDC__
int p125(void)
#else
int p125()
#endif
{
int done=0;
   if (anyof(764,765,738,739,-1)) {
   return 0;
   }
   if ((value[1136]==3)) {
   say(64,1976,0);
   }
   if (KEY(851)) {
   say(64,2160,0);
   }
   say(12,1974,1136);
   say(76,1975,1137);
return done;
}
#ifdef __STDC__
int p752(void)
#else
int p752()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (!(isnear(69,-1,-1))) {
   p39();
   }
   set('L',1,'v',1137,lval, lbts);
   lval[0]=1103;lbts[0*VARSIZE]=-1;
   lval[1] -= lval[0];
   if (((value[69]==0) &&
   lval[1]==1) ||
   value[69]==lval[1]) {
   value[1137]=69;*bitword(1137)=-1;
   } else {
   p39();
   }
   if (((anyof(1104,1105,1106,1107,1108,1109,1110,-1)) ||
   anyof(1111,1112,1113,1114,1115,-1)) ||
   anyof(1116,1117,1118,1119,1120,1121,1122,-1)) {
   say(64,1259,0);
   }
return done;
}
#ifdef __STDC__
int p227(void)
#else
int p227()
#endif
{
int done=0;
   if (KEY(791)) {
   if (value[1244]<3) {
   value[1244] += 1;
   say(64,2272,0);
   }
   say(64,2273,0);
   }
   say(64,2255,0);
return done;
}
#ifdef __STDC__
int p549(void)
#else
int p549()
#endif
{
int done=0;
   if (have(95,0,2)) {
   if ((bitest(evar(1170),8)) &&
   !(bitest(95,13))) {
   bitmod('s',95,13);
   say(0,2262,0);
   }}
   if ((value[HERE]==199)) {
   return 0;
   }
   if (value[1197]>0) {
   value[1197] -= 1;
   }
   if (!(value[95]==2)) {
   return 0;
   }
   if (have(95,0,2)) {
   if (value[1197]==4) {
   say(0,2267,0);
   } else    if (value[1197]==2) {
   say(0,2268,0);
   } else    if (value[1197]==0) {
   apport(95,702);
   if ((bitest(136,4)) &&
   !(value[HERE]==136||value[HERE]==199)) {
   say(8,2266,1);
   } else {
   say(8,2266,0);
   }}}
return done;
}
#ifdef __STDC__
int p151(int typ0,int par0)
#else
int p151(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   if ((lval[0]==0) ||
   !have(102,-1,-1)) {
   return 0;
   }
   set('L',1,'l',0,lval, lbts);
   lval[2]=744;lbts[2*VARSIZE]=-1;
   lval[1] -= lval[2];
   lval[1] += 1;
   if (value[102]==lval[1]) {
   set('L',1,'c',0,lval, lbts);
   } else {
   if (lval[1]==1) {
   set('L',1,'c',8,lval, lbts);
   } else {
   lval[1] -= 1;
   }
   if (value[102]==lval[1]) {
   set('L',1,'c',0,lval, lbts);
   } else {
   if (lval[1]>6) {
   lval[1] -= 6;
   } else {
   lval[1] += 2;
   }
   if (value[102]==lval[1]) {
   set('L',1,'c',0,lval, lbts);
   }}}
   if (lval[1]==0) {
   say(72,2286,lval[0]);
   }
return done;
}
#ifdef __STDC__
int p805(int typ0,int par0)
#else
int p805(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[1] = irand(255-1+1)+1;
   if ((lval[0]==594)) {
   lval[1] &= 48;
   } else    if ((lval[0]==595)) {
   lval[1] &= 93;
   } else    if (((lval[0]==596)) ||
   (lval[0]==597)) {
   lval[1] &= 241;
   } else    if ((lval[0]==598)) {
   lval[1] &= 209;
   } else    if ((lval[0]==599)) {
   lval[1] &= 129;
   } else    if ((lval[0]==600)) {
   lval[1] &= 254;
   } else    if ((lval[0]==602)) {
   lval[1] &= 223;
   } else    if ((lval[0]==603)) {
   lval[1] &= 143;
   } else    if ((lval[0]==604)) {
   lval[1] &= 56;
   } else    if ((lval[0]==606)) {
   lval[1] &= 125;
   } else    if ((lval[0]==608)) {
   lval[1] &= 239;
   } else    if ((lval[0]==609)) {
   lval[1] &= 222;
   } else    if ((lval[0]==610)) {
   lval[1] &= 191;
   } else    if ((lval[0]==611)) {
   lval[1] &= 87;
   } else    if ((lval[0]==612)) {
   lval[1] &= 131;
   } else    if ((lval[0]==613)) {
   lval[1] &= 56;
   } else    if ((lval[0]==614)) {
   lval[1] &= 109;
   } else    if ((lval[0]==615)) {
   lval[1] &= 142;
   } else    if ((lval[0]==616)) {
   lval[1] &= 22;
   } else    if ((lval[0]==617)) {
   lval[1] &= 11;
   }
value[lval[0]]=lbts[1*VARSIZE]==-1?value[lval[1]]:lval[1];
return done;
}
#ifdef __STDC__
int p65(void)
#else
int p65()
#endif
{
int done=0;
   if (!(bitest(evar(1170),0))) {
   say(0,1259,0);
   }
   say(0,2306,0);
   if (bitest(evar(1170),0)) {
   say(0,1259,0);
   }
   p805(*bitword(1138),value[1138]);
   set('V',1249,'c',0,NULL,NULL);
   set('V',1252,'c',0,NULL,NULL);
return done;
}
#ifdef __STDC__
int p211(void)
#else
int p211()
#endif
{
int done=0;
   int lval [4];
   short lbts [4];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   bitmod('c',evar(1138),4);
   if (bitest(evar(1170),0)) {
   lval[3]=value[value[1138]];lbts[3*VARSIZE]=0;
   if (lval[3]==0) {
   p805(*bitword(1138),value[1138]);
   }}
   if (bitest(evar(1249),0)) {
   p65();
   bitmod('c',evar(1249),0);
   return 0;
   }
   if ((bitest(evar(1139),15)) &&
   bitest(evar(1170),0)) {
   if (value[1138]==value[1249]) {
   set('V',1249,'v',1139,NULL,NULL);
   return 0;
   }
   set('L',2,'c',0,lval, lbts);
   if ((743<=value[1136] && value[1136]<=752)) {
   set('L',2,'v',1136,lval, lbts);
   } else {
   if ((KEY(758)) &&
   (743<=value[1137] && value[1137]<=752)) {
   set('L',2,'v',1137,lval, lbts);
   }}
   if (lval[2]==0) {
   return 0;
   }
   lval[1]=744;lbts[1*VARSIZE]=-1;
   set('L',3,'l',2,lval, lbts);
   lval[3] -= lval[1];
   set('V',1251,'c',1,NULL,NULL);
   if (lval[3]>0) {
   lval[0]=1-1; while(++lval[0]<=lval[3]) {
   value[1251] += value[1251];
   }}
   value[1250]=value[value[1139]];*bitword(1250)=0;
   value[1250] &= value[1251];
   if (value[1250]>0) {
   say(8,2305,lval[2]);
   move(value[1139],-1);
   set('V',1139,'v',1249,NULL,NULL);
   bitmod('c',evar(1170),0);
   } else {
   set('V',1249,'v',1139,NULL,NULL);
   p805(*bitword(1138),value[1138]);
   }}
   if (value[1252]==6) {
   set('L',1,'c',100,lval, lbts);
   } else {
   set('L',1,'v',1252,lval, lbts);
   lval[1] *= 5;
   }
   value[1252] += 1;
   if (irand(100)<lval[1]) {
   p65();
   }
return done;
}
#ifdef __STDC__
int p797(void)
#else
int p797()
#endif
{
int done=0;
   if (value[1170]==1) {
   return 0;
   }
   value[1148]=2302;*bitword(1148)=-1;
   set('V',1172,'c',6,NULL,NULL);
   special(23, &value[1148]);
   say(66,1148,0);
return done;
}
#ifdef __STDC__
int p222(void)
#else
int p222()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((value[1170]==0) ||
   KEY(856)) {
   special(24, &value[1148]);
   set('V',1172,'c',0,NULL,NULL);
   if ((KEY(102)) ||
   irand(100)<50) {
   apport(value[1137],702);
   set('L',0,'c',0,lval, lbts);
   if (bitest(evar(1137),11)) {
   set('L',0,'c',1,lval, lbts);
   }
   say(12,1979,1136);
   say(12,1981,1137);
   say(72,2312,lval[0]);
   } else {
   (*procs[765])();
   }
   return 0;
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   lval[0] = irand(4-0+1)+0;
   say(72,2311,lval[0]);
   }
   special(24, &value[1148]);
   say(0,1261,0);
   say(66,1148,0);
return done;
}
#ifdef __STDC__
int p880(void)
#else
int p880()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('V',1146,'c',0,NULL,NULL);
   if (anyof(119,123,136,-1)) {
   set('V',1146,'v',1137,NULL,NULL);
   if (!(have(value[1146],-1,-1))) {
   p625(*bitword(1146),value[1146]);
   }
   lval[0]=value[value[1146]];lbts[0*VARSIZE]=0;
   if (!(lval[0]>2)) {
   say(76,2343,1146);
   }
   if (lval[0]==3) {
   say(12,2333,1137);
   say(64,2334,0);
   }
   if (lval[0]==4) {
   say(64,2335,0);
   }
   if (lval[0]==6) {
   say(64,2336,0);
   }
   if (lval[0]==5) {
   if (value[5]==2) {
   say(64,2770,0);
   }
   if (KEY(136)) {
   set('E',136,'c',2,NULL,NULL);
   apport(136,value[1138]);
   set('E',5,'c',1,NULL,NULL);
   say(64,2338,0);
   }
   say(64,2337,0);
   }}
   if (KEY(120)) {
   p321(0,0);
   if (value[1243]==0) {
   say(76,1506,120);
   }
   say(12,2333,1243);
   say(64,2334,0);
   }
   if (KEY(122)) {
   if (value[5]==2) {
   say(64,2770,0);
   }
   if (have(136,0,5)) {
   set('E',5,'c',1,NULL,NULL);
   set('E',136,'c',2,NULL,NULL);
   apport(136,value[1138]);
   say(64,2338,0);
   }
   if ((have(119,0,5)) ||
   have(123,0,5)) {
   say(64,2337,0);
   }
   say(76,1506,122);
   }
   if (KEY(121)) {
   if (((have(136,0,4)) ||
   have(119,0,4)) ||
   have(123,0,4)) {
   say(64,2335,0);
   }
   say(76,1506,121);
   }
   say(12,2028,5);
   say(76,2345,1137);
return done;
}
#ifdef __STDC__
int p881(int typ0,int par0)
#else
int p881(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   if (bitest(145,4)) {
   return 0;
   }
   apport(145,value[1138]);
   bitmod('s',145,4);
   set('E',5,'c',2,NULL,NULL);
   lval[1]=145;lbts[1*VARSIZE]=-1;
   set('E',166,'l',1,lval, lbts);
   say(72,2339,lval[0]);
return done;
}
#ifdef __STDC__
int p932(void)
#else
int p932()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (anyof(95,116,64,132,138,-1)) {
   if (anyof(138,95,-1)) {
   set('L',0,'c',0,lval, lbts);
   } else {
   set('L',0,'c',1,lval, lbts);
   }
   say(12,2313,1137);
   say(72,2314,lval[0]);
   }
return done;
}
#ifdef __STDC__
int p305(void)
#else
int p305()
#endif
{
int done=0;
   if (have(138,-1,-1)) {
   apport(138,701);
   if ((have(110,-1,-1)) &&
   ishere(109,0,0)) {
   say(0,2350,0);
   say(64,2351,0);
   }
   if (bitest(evar(1210),3)) {
   say(64,2347,0);
   } else {
   bitmod('s',evar(1210),3);
   say(72,2348,0);
   }}
   say(64,1389,0);
return done;
}
#ifdef __STDC__
int p75(void)
#else
int p75()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (KEY(822)) {
   return 0;
   }
   if (KEY(793)) {
   if ((value[1170]==1) ||
   !have(value[1137],-1,-1)) {
   return 0;
   }
   if (KEY(144)) {
   set('E',144,'c',2,NULL,NULL);
   bitmod('s',144,7);
   value[1142]=619;*bitword(1142)=-1;
   } else {
   set('V',1142,'e',702,NULL,NULL);
   }
   value[1143]=2358;*bitword(1143)=-1;
   return 0;
   }
   if ((value[HERE]==632)) {
   set('V',1253,'c',0,NULL,NULL);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   if (!lbitest(0,5,lval,lbts)) continue;
   value[1253] += 1;
   }
   say(0,2355,0);
   move(631,-2);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   if (!lbitest(0,5,lval,lbts)) continue;
   lval[1] += 1;
   }
   if (lval[1]>value[1253]) {
   say(0,2356,0);
   if (have(144,-1,-1)) {
   apport(144,619);
   }
   move(702,-1);
   p153();
   }
   say(0,2355,0);
   move(632,-2);
return done;
}
#ifdef __STDC__
int p926(void)
#else
int p926()
#endif
{
int done=0;
   int lval [5];
   short lbts [5];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
   if ((value[1170]==0) ||
   KEY(856)) {
   special(24, &value[1148]);
   bitmod('c',298,8);
   if (have(109,-1,-1)) {
   apport(109,702);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   lval[1]=value[lval[0]];lbts[1*VARSIZE]=0;
   if (((lval[0]==67||lval[0]==65)) &&
   lval[1]==2) {
   set('L',2,'c',1,lval, lbts);
   } else    if (!((lval[0]==107))) {
   apport(lval[0],702);
   set('L',3,'c',1,lval, lbts);
   }}
   if (lval[3]==0) {
   set('L',2,'c',0,lval, lbts);
   }
   lval[4] += lval[3];
   lval[4] += lval[2];
   lval[4] -= 1;
   set('T',1638,'c',0,NULL,NULL);
   if (have(107,-1,-1)) {
   lval[4] += 2;
   set('V',1179,'c',1,NULL,NULL);
   if (lval[3]==0) {
   set('L',3,'c',1,lval, lbts);
   set('L',4,'c',4,lval, lbts);
   }
   if (value[107]==1) {
   set('T',1638,'c',1,NULL,NULL);
   }
   } else {
   set('V',1179,'c',0,NULL,NULL);
   }
   say(0,1638,0);
   if (lval[3]>0) {
   say(8,1639,lval[4]);
   } else {
   say(0,1259,0);
   }
   set('V',1172,'c',0,NULL,NULL);
   move(299,-1640);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1260,0);
   }
   special(24, &value[1148]);
   say(0,1261,0);
   say(66,1148,0);
return done;
}
#ifdef __STDC__
int p685(void)
#else
int p685()
#endif
{
int done=0;
   if (value[1172]==9) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   set('V',1172,'c',10,NULL,NULL);
   say(64,1562,0);
   }
   if (anyof(823,857,744,-1))   say(64,1260,0);
   }
   set('V',1172,'c',0,NULL,NULL);
   value[1181] += 10;
   say(72,1563,0);
return done;
}
#ifdef __STDC__
int p552(void)
#else
int p552()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   value[1181] += 10;
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   if (!lbitest(0,5,lval,lbts)) continue;
   apport(lval[0],HERE);
   }
   if (have(83,-1,-1)) {
   apport(83,HERE);
   }
   say(2,1157,0);
   if ((227<=value[1138] && value[1138]<=252)) {
   move(226,-2);
   }
   if ((362<=value[1138] && value[1138]<=373)) {
   move(254,-2);
   }
   if ((390<=value[1138] && value[1138]<=426)) {
   move(389,-2);
   }}
   if (anyof(823,857,744,-1))   say(64,1260,0);
   say(72,1715,0);
return done;
}
#ifdef __STDC__
int p742(void)
#else
int p742()
#endif
{
int done=0;
   set('V',1172,'c',0,NULL,NULL);
   bitmod('c',evar(1138),4);
   if ((value[1137]==725)) {
   special(11,&value[0]);
   }
   if (value[163]>1) {
   value[163] += 1;
   }
   special(1, &value[1245]);
   if (value[1245]==0) {
   set('V',1172,'c',16,NULL,NULL);
   say(8,1549,10);
   say(64,1490,0);
   }
   if (value[1245]==2) {
   special(23, &value[1148]);
   set('V',1172,'c',45,NULL,NULL);
   say(64,1536,0);
   } else {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1537,0);
   }
return done;
}
#ifdef __STDC__
int p741(void)
#else
int p741()
#endif
{
int done=0;
   if (value[1172]==14) {
   set('V',1172,'c',0,NULL,NULL);
   if (anyof(823,857,744,-1))   say(64,1547,0);
   if ((value[1170]==0) ||
   KEY(856)) {
   special(24, &value[1148]);
   if (value[1170]<2) {
   set('V',1172,'c',15,NULL,NULL);
   set('V',1170,'c',98,NULL,NULL);
   say(64,1544,0);
   }
   p742();
   }
   say(72,1715,0);
   }
   if ((value[1170]==0) ||
   KEY(856)) {
   value[1181] += 10;
   set('V',1172,'c',0,NULL,NULL);
   say(64,1260,0);
   }
   if (anyof(823,857,744,-1)) {
   say(0,1546,0);
   p322();
   }
   say(0,1261,0);
   say(8,1549,10);
   say(64,1490,0);
return done;
}
#ifdef __STDC__
int p33(void)
#else
int p33()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1172]==17) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   anyof(856,829,-1)) {
   lval[0] = memstore (0);
   if (lval[0]==0) {
   say(64,2363,0);
   } else {
   say(64,2362,0);
   }}
   if (anyof(823,857,744,-1))   say(64,1863,0);
   say(72,1715,0);
   } else {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   lval[0] = memstore (1);
   if (lval[0]==0) {
   value[1181] += 1;
   bitmod('s',evar(1170),0);
   say(64,2364,0);
   }
   say(64,2365,0);
   }
   if (anyof(823,857,744,-1))   say(64,1863,0);
   say(72,1715,0);
   }
return done;
}
#ifdef __STDC__
int p716(void)
#else
int p716()
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   if ((value[1170]==0) ||
   KEY(856)) {
   set('V',1172,'c',0,NULL,NULL);
   say(0,1373,0);
   say(0,1259,0);
   if (value[1180]==4) {
   p322();
   } else {
   if (have(56,-1,-1)) {
   apport(56,702);
   apport(57,INHAND);
   }
   if (have(119,-1,-1)) {
   set('E',119,'c',2,NULL,NULL);
   }
   if ((have(123,-1,-1)) &&
   value[123]!=1) {
   set('E',123,'c',2,NULL,NULL);
   }
   lval[2]=location[110];lbts[2*VARSIZE]=-1;
   if ((587<=lval[2] && lval[2]<=638)) {
   apport(110,195);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   apport(lval[0],HERE);
   if (lbitest(0,16,lval,lbts)) {
   lval[1]=value[lval[0]];lbts[1*VARSIZE]=0;
   if (lval[1]==2) {
value[lval[0]]=1;
   }}
   if (((lval[0]==67)) ||
   (lval[0]==124)) {
   apport(lval[0],195);
   }}
   set('V',1179,'c',0,NULL,NULL);
   set('E',107,'c',0,NULL,NULL);
   move(200,-1);
   set('V',1139,'c',0,NULL,NULL);
   apport(107,195);
   if (value[1173]==0) {
   if (!(bitest(386,4))) {
   lval[2]=location[40];lbts[2*VARSIZE]=-1;
   if ((value[40]==3) ||
   !(lbitest(2,7,lval,lbts))) {
   apport(107,702);
   }}}
   apport(193,701);
   set('E',193,'c',0,NULL,NULL);
   bitmod('c',20,13);
   longjmp(loop_back,1);
   }}
   if (anyof(823,857,744,-1)) {
   p322();
   }
   say(0,1261,0);
   say(64,1264,0);
return done;
}
#ifdef __STDC__
int p760(void)
#else
int p760()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   special(24, &value[1148]);
   say(0,1713,0);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   if (lbitest(0,5,lval,lbts)) {
   apport(lval[0],473);
   } else {
   apport(lval[0],HERE);
   }}
   p153();
return done;
}
#ifdef __STDC__
int p773(void)
#else
int p773()
#endif
{
int done=0;
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1863,0);
   }
   say(0,1936,0);
   voc (0, 0, 0, 0);
   voc (163, 0, 4, 0);
   voc (124, 0, 0, 0);
   voc (43, 0, 4, 0);
   voc (26, 0, 4, 0);
   voc (40, 0, 4, 0);
   voc (65, 0, 4, 0);
   voc (39, 0, 4, 0);
   voc (158, 0, 4, 0);
   voc (109, 0, 4, 0);
   voc (99, 499, 4, 0);
   voc (170, 670, 4, 1937);
   voc (119, 0, 0, 0);
   voc (146, 0, 4, 1938);
   voc (141, 0, 4, 1939);
   voc (70, 0, 4, 0);
   voc (11, 0, 4, 0);
   voc (136, 0, 4, 0);
   voc (148, 0, 4, 0);
   voc (108, 0, 4, 0);
   voc (907, 122, 4, 0);
   voc (66, 0, 4, 0);
   voc (84, 0, 4, 0);
   voc (122, 0, 4, 0);
   voc (22, 303, 4, 0);
   voc (52, 0, 4, 1940);
   voc (114, 0, 4, 0);
   voc (4, 0, 4, 0);
   voc (51, 0, 4, 0);
   voc (46, 0, 4, 0);
   voc (96, 0, 4, 0);
   voc (76, 0, 4, 0);
   voc (48, 0, 4, 0);
   voc (42, 0, 4, 0);
   voc (28, 0, 4, 0);
   voc (91, 0, 4, 0);
   voc (8, 0, 4, 0);
   voc (104, 0, 4, 0);
   voc (21, 0, 4, 0);
   voc (80, 0, 4, 0);
   voc (87, 0, 4, 0);
   voc (193, 0, 4, 1941);
   voc (53, 0, 4, 1942);
   voc (58, 0, 4, 0);
   voc (145, 0, 4, 0);
   voc (123, 0, 4, 0);
   voc (150, 0, 4, 0);
   voc (936, 315, 4, 0);
   voc (118, 0, 4, 0);
   voc (98, 0, 4, 0);
   voc (194, 0, 4, 0);
   voc (130, 0, 4, 0);
   voc (47, 0, 4, 1943);
   voc (27, 0, 4, 0);
   voc (6, 0, 4, 0);
   voc (79, 0, 4, 0);
   voc (55, 0, 4, 0);
   voc (93, 0, 4, 0);
   voc (159, 0, 4, 0);
   voc (74, 0, 4, 1944);
   voc (50, 0, 4, 0);
   voc (106, 0, 0, 0);
   voc (107, 0, 0, 0);
   voc (35, 0, 4, 1945);
   voc (116, 0, 4, 1946);
   voc (95, 0, 4, 0);
   voc (12, 0, 4, 0);
   voc (936, 0, 0, 0);
   voc (128, 0, 4, 0);
   voc (142, 0, 4, 1947);
   voc (129, 0, 4, 0);
   voc (25, 0, 4, 0);
   voc (121, 217, 4, 0);
   voc (71, 0, 4, 1948);
   voc (81, 0, 4, 1949);
   voc (88, 0, 4, 0);
   if (value[151]==2) {
   voc (151, 0, 4, 1950);
   } else {
   voc (151, 0, 4, 0);
   }
   voc (62, 0, 4, 0);
   voc (113, 0, 4, 0);
   voc (153, 559, 4, 0);
   voc (20, 0, 4, 0);
   if ((bitest(13,4)) ||
   bitest(139,4)) {
   voc (13, 0, 4, 1951);
   } else {
   voc (13, 0, 0, 0);
   }
   voc (73, 0, 4, 0);
   voc (111, 0, 4, 0);
   voc (75, 0, 4, 0);
   voc (57, 0, 4, 1952);
   voc (61, 0, 4, 0);
   voc (132, 0, 4, 0);
   voc (94, 0, 4, 0);
   voc (67, 0, 4, 0);
   voc (110, 0, 4, 0);
   voc (78, 0, 4, 0);
   voc (1075, 475, 4, 0);
   voc (146, 0, 4, 0);
   voc (63, 0, 4, 0);
   voc (36, 0, 4, 0);
   voc (157, 0, 4, 0);
   voc (86, 0, 4, 0);
   voc (59, 0, 4, 0);
   voc (69, 0, 4, 0);
   voc (149, 0, 4, 0);
   voc (45, 0, 4, 1954);
   voc (49, 0, 4, 1955);
   voc (38, 0, 4, 0);
   voc (144, 0, 4, 0);
   voc (34, 0, 4, 0);
   voc (9, 0, 4, 0);
   voc (64, 0, 4, 0);
   voc (90, 0, 4, 0);
   voc (593, 593, 4, 0);
   voc (92, 0, 4, 0);
   voc (68, 0, 4, 0);
   voc (15, 0, 4, 0);
   voc (100, 0, 4, 0);
   voc (32, 0, 4, 0);
   voc (7, 0, 4, 0);
   voc (102, 0, 4, 0);
   voc (125, 0, 4, 0);
   voc (133, 0, 4, 0);
   voc (126, 0, 4, 0);
   voc (37, 0, 4, 0);
   voc (147, 0, 4, 0);
   voc (29, 0, 4, 0);
   voc (162, 0, 4, 0);
   voc (131, 0, 0, 0);
   voc (54, 0, 4, 0);
   voc (23, 0, 4, 0);
   voc (83, 0, 4, 0);
   voc (85, 0, 4, 0);
   voc (5, 0, 4, 0);
   voc (56, 0, 4, 0);
   voc (127, 0, 4, 0);
   voc (120, 0, 0, 0);
   voc (89, 0, 4, 0);
   voc (143, 0, 4, 1953);
   voc (152, 0, 4, 0);
   voc (60, 0, 4, 0);
   say(0,1259,0);
   if (value[1172]==0) {
   longjmp(loop_back,1);
   }
   set('V',1172,'c',36,NULL,NULL);
   say(64,1424,0);
return done;
}
#ifdef __STDC__
int p695(void)
#else
int p695()
#endif
{
int done=0;
   value[1295] = jrand(3 - 0) + 0;
   value[1296] = jrand(9 - 0) + 0;
   value[1370] = jrand(10 - 0) + 0;
   value[1343] = jrand(3 - 0) + 0;
   value[1342] = jrand(8 - 0) + 0;
   value[1344] = jrand(9 - 0) + 0;
   value[1486] = jrand(8 - 0) + 0;
   value[1287] = jrand(11 - 0) + 0;
   value[1312] = jrand(3 - 0) + 0;
   value[1288] = jrand(8 - 0) + 0;
   value[1293] = jrand(5 - 0) + 0;
   value[1926] = jrand(5 - 0) + 0;
   value[2157] = jrand(7 - 0) + 0;
   value[2527] = jrand(5 - 0) + 0;
   value[2547] = jrand(6 - 0) + 0;
   value[2556] = jrand(3 - 0) + 0;
   value[2456] = jrand(8 - 0) + 0;
   value[2731] = jrand(3 - 0) + 0;
   value[1989] = jrand(10 - 0) + 0;
   value[2852] = jrand(4 - 0) + 0;
   value[3057] = jrand(3 - 0) + 0;
   value[2895] = jrand(7 - 0) + 0;
   value[2894] = jrand(5 - 0) + 0;
   value[2740] = jrand(4 - 0) + 0;
   value[2495] = jrand(5 - 0) + 0;
   value[2289] = jrand(3 - 0) + 0;
   value[2008] = jrand(3 - 0) + 0;
   value[1307] = jrand(2 - 0) + 0;
   value[1308] = jrand(3 - 0) + 0;
   value[1324] = jrand(2 - 0) + 0;
   value[1371] = jrand(3 - 0) + 0;
   value[1396] = jrand(5 - 0) + 0;
   value[1417] = jrand(3 - 0) + 0;
   value[1446] = jrand(4 - 0) + 0;
   value[1499] = jrand(3 - 0) + 0;
   value[1500] = jrand(3 - 0) + 0;
   value[2496] = jrand(4 - 0) + 0;
   value[2526] = jrand(3 - 0) + 0;
   value[2579] = jrand(3 - 0) + 0;
   value[2588] = jrand(4 - 0) + 0;
   value[2668] = jrand(3 - 0) + 0;
   value[2712] = jrand(3 - 0) + 0;
   value[2723] = jrand(5 - 0) + 0;
   value[2765] = jrand(2 - 0) + 0;
   value[3029] = jrand(4 - 0) + 0;
   value[3209] = jrand(5 - 0) + 0;
   value[3212] = jrand(6 - 0) + 0;
   value[3307] = jrand(8 - 0) + 0;
   value[3114] = jrand(7 - 0) + 0;
   value[3213] = jrand(3 - 0) + 0;
   value[3329] = jrand(5 - 0) + 0;
   value[1262] = jrand(3 - 0) + 0;
   value[3305] = jrand(6 - 0) + 0;
   value[3367] = jrand(5 - 0) + 0;
   value[3371] = jrand(6 - 0) + 0;
   value[1801] = jrand(7 - 0) + 0;
   value[3381] = jrand(3 - 0) + 0;
   value[3404] = jrand(3 - 0) + 0;
   value[3395] = jrand(4 - 0) + 0;
   value[3418] = jrand(6 - 0) + 0;
   value[2058] = jrand(4 - 0) + 0;
   value[2331] = jrand(3 - 0) + 0;
   set('T',3306,'e',3305,NULL,NULL);
   value[2549] = jrand(16 - 0) + 0;
   value[2549] /= 4;
   value[2549] *= 4;
return done;
}
#ifdef __STDC__
int p714(void)
#else
int p714()
#endif
{
int done=0;
   if (value[107]==1) {
   value[1173] += 1;
   }
   set('V',1172,'c',43,NULL,NULL);
   say(64,1543,0);
return done;
}
#ifdef __STDC__
int p250(void)
#else
int p250()
#endif
{
int done=0;
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   value[1181] += 10;
   p714();
   }
   if (anyof(857,744,-1)) {
   say(0,1260,0);
   } else {
   say(8,1715,0);
   }
   special(28,&value[0]);
   set('V',1172,'c',0,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p715(void)
#else
int p715()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('V',1172,'c',0,NULL,NULL);
   if ((725<=value[1156] && value[1156]<=740)) {
   if ((value[1156]==738) ||
   value[1156]==739) {
   value[1156]=720;*bitword(1156)=-1;
   } else    if (value[1156]==734) {
   value[1156]=715;*bitword(1156)=-1;
   } else    if (value[1156]==732) {
   value[1156]=714;*bitword(1156)=-1;
   } else    if (value[1156]<=727) {
   value[1156]=708;*bitword(1156)=-1;
   }}
   p695();
   if ((value[1170]==0) ||
   KEY(856)) {
   say(0,1260,0);
   } else    if (anyof(857,744,-1)) {
   special(24, &value[0]);
   special(3,&value[1245]);
   if (value[1245]==0) {
   say(0,1548,0);
   } else {
   say(0,2825,0);
   }
   } else {
   say(8,1715,1);
   }
   move(value[1138],-1);
   bitmod('c',evar(1138),4);
   say(64,1259,0);
return done;
}
#ifdef __STDC__
int p762(void)
#else
int p762()
#endif
{
int done=0;
   set('V',1190,'c',2,NULL,NULL);
   set('V',1245,'c',1,NULL,NULL);
   special(14,&value[1245]);
   if (value[1245]!=1) {
   say(0,1269,0);
   move(302,-1);
   bitmod('c',evar(1170),0);
   set('V',1139,'v',1138,NULL,NULL);
   set('V',1172,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   } else {
   bitmod('s',evar(1170),0);
   move(195,-1);
   set('V',1139,'v',1138,NULL,NULL);
   say(0,1259,0);
   set('V',1172,'c',21,NULL,NULL);
   say(64,1266,0);
   }
return done;
}
#ifdef __STDC__
int p652(void)
#else
int p652()
#endif
{
int done=0;
   set('E',19,'c',0,NULL,NULL);
   set('E',575,'c',1,NULL,NULL);
   set('E',576,'c',1,NULL,NULL);
   say(12,2494,1149);
   bitmod('s',576,3);
   if (((value[HERE]==576)) &&
   !(bitest(evar(1170),8))) {
   set('V',1170,'c',1,NULL,NULL);
   value[1136]=822;*bitword(1136)=-1;
   say(0,1259,0);
   (*procs[822])();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p146(void)
#else
int p146()
#endif
{
int done=0;
   set('E',575,'c',0,NULL,NULL);
   set('E',576,'c',0,NULL,NULL);
   bitmod('c',576,3);
   if ((value[1254]==0) ||
   KEY(878)) {
   if ((value[1136]==878)) {
   say(12,1342,1136);
   } else    if (value[1170]>1) {
   say(12,1344,1137);
   }
   say(0,1259,0);
   if (KEY(767)) {
   set('T',2491,'c',1,NULL,NULL);
   } else {
   set('T',2491,'c',0,NULL,NULL);
   }
   say(0,2492,0);
   } else {
   say(8,1979,769);
   say(12,1980,8);
   }
   if ((value[HERE]==576)) {
   set('E',19,'c',1,NULL,NULL);
   p487();
   if (!(bitest(evar(1170),8))) {
   say(0,1259,0);
   p849(0,1);
   }}
return done;
}
#ifdef __STDC__
int p145(void)
#else
int p145()
#endif
{
int done=0;
   set('E',472,'c',2,NULL,NULL);
   set('E',161,'c',2,NULL,NULL);
   say(64,1876,0);
return done;
}
#ifdef __STDC__
int p895(void)
#else
int p895()
#endif
{
int done=0;
   if (KEY(822)) {
   say(72,2521,0);
   } else    if (KEY(848)) {
   say(64,2522,0);
   } else    if (KEY(758)) {
   say(64,2523,0);
   } else {
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p306(void)
#else
int p306()
#endif
{
int done=0;
   if (isnear(118,-1,-1)) {
   if (((location[87]==702)) ||
   !(bitest(87,4))) {
   apport(118,701);
   apport(87,value[1138]);
   bitmod('s',87,4);
   set('E',85,'c',1,NULL,NULL);
   say(64,1748,0);
   } else {
   say(12,2028,85);
   say(76,2345,118);
   }}
   say(64,1747,0);
return done;
}
#ifdef __STDC__
int p851(void)
#else
int p851()
#endif
{
int done=0;
   if (!(isnear(126,-1,-1))) {
   if (bitest(126,4)) {
   say(76,1312,126);
   }
   say(64,1486,0);
   }
   if ((KEY(764)) &&
   have(126,-1,-1)) {
   say(76,1307,126);
   }
   if ((anyof(765,793,-1)) &&
   !have(126,-1,-1)) {
   p625(-1,126);
   }
   say(76,2577,1136);
return done;
}
#ifdef __STDC__
int p50(void)
#else
int p50()
#endif
{
int done=0;
if (value[ARG1] == 1099) value[ARG1]=953;
if (value[ARG2] == 1099) value[ARG2]=953;
   if (anyof(120,949,-1)) {
   if (anyof(756,758,756,-1))   say(72,1706,0);
   if (anyof(764,-1))   say(64,1358,0);
   }
   if (KEY(790)) {
   p321(0,0);
   if (value[1243]!=0) {
   return 0;
   }
   say(64,1358,0);
   }
   if (KEY(848)) {
   if ((KEY(154)) ||
   value[1170]==1) {
   if (isnear(154,-1,-1)) {
   say(64,1819,0);
   }
   if (KEY(154)) {
   p39();
   }}}
   if (KEY(796)) {
   if ((anyof(123,119,136,-1)) &&
   isnear(value[1137],-1,-1)) {
   say(64,1358,0);
   }}
   if ((value[HERE]==440||value[HERE]==441||value[HERE]==442)) {
   if ((KEY(139)) &&
   value[139]>0) {
   say(76,2585,139);
   }
   if (anyof(206,-1))   say(76,1841,1137);
   if (anyof(992,-1))   say(72,3214,992);
   }
   if (KEY(822)) {
   if (anyof(949,781,120,-1))   say(64,2743,0);
   if (anyof(890,997,-1))   say(64,2748,0);
   if (anyof(999,-1))   say(64,2754,0);
   if (KEY(439)) {
   set('V',1170,'c',1,NULL,NULL);
   (*procs[822])();
   longjmp(loop_back,1);
   }}
   if ((anyof(920,983,-1)) &&
   (438<=value[1138] && value[1138]<=446)) {
   if (value[1170]==1) {
   say(72,1764,920);
   }
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p139(void)
#else
int p139()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,703)) continue;
   if (!lbitest(0,15,lval,lbts)) continue;
   if (!((lval[0]==107))) {
   say(66,1148,0);
   }
   set('T',2453,'c',0,NULL,NULL);
   if (have(107,-1,-1)) {
   set('T',2453,'c',1,NULL,NULL);
   }}
return done;
}
#ifdef __STDC__
int p855(void)
#else
int p855()
#endif
{
int done=0;
   if ((value[HERE]==475)) {
   value[1148]=2506;*bitword(1148)=-1;
   } else {
   value[1148]=2455;*bitword(1148)=-1;
   }
   p139();
   bitmod('s',evar(1138),16);
   if ((value[HERE]==475)) {
   move(486,-2507);
   } else {
   move(475,-2454);
   }
return done;
}
#ifdef __STDC__
int p529(void)
#else
int p529()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[161]==0) {
   set('E',161,'c',2,NULL,NULL);
   set('E',472,'c',2,NULL,NULL);
   set('E',163,'c',10,NULL,NULL);
   lbts[0*VARSIZE]=-1; lval[0]=466; while (++lval[0]<=479) {
   lbitmod(1,'c',0,4,lval,lbts);
   }
   say(64,2281,0);
   }
   say(64,2282,0);
return done;
}
#ifdef __STDC__
int p476(void)
#else
int p476()
#endif
{
int done=0;
   if (KEY(974)) {
   if ((value[1136]==974)) {
   if (anyof(974,-1))   say(76,2668,1136);
   } else {
   if (anyof(974,-1))   say(76,2668,1137);
   }}
   if (anyof(922,-1))   say(64,2366,0);
   if (KEY(822)) {
   if (anyof(893,967,-1))   say(64,1348,0);
   if (anyof(157,157,-1))   say(64,3295,0);
   if (anyof(131,153,970,971,914,-1))   say(64,2018,0);
   if (anyof(972,972,-1))   say(64,2017,0);
   if (anyof(1132,753,-1))   say(72,2019,0);
   if (anyof(1133,754,-1))   say(72,2019,1);
   if (anyof(921,-1))   say(72,2372,0);
   }
   if (KEY(848)) {
   if ((value[1170]==1) ||
   anyof(131,970,153,-1)) {
   if ((value[HERE]==196)) {
   say(72,1817,1);
   } else {
   say(72,1817,0);
   }}
   if (anyof(157,971,914,-1))   say(64,2020,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(776)) {
   if (anyof(131,970,971,914,157,157,-1)) {
   return 0;
   }
   if (anyof(972,972,-1)) {
   say(64,2456,0);
   }}
   if ((anyof(972,921,970,971,153,157,157,914,-1)) ||
   anyof(131,970,914,157,157,972,1133,1132,921,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p80(void)
#else
int p80()
#endif
{
int done=0;
   if (KEY(974)) {
   if ((value[1136]==974)) {
   if (anyof(974,-1))   say(76,2668,1136);
   } else {
   if (anyof(974,-1))   say(76,2668,1137);
   }}
   if (KEY(200)) {
   if (value[1170]==1) {
   if ((value[HERE]==195)) {
   return 0;
   }
   say(76,3331,1136);
   }
   if (anyof(822,-1))   say(64,2129,0);
   if (anyof(848,-1))   say(64,2456,0);
   if (anyof(756,758,-1)) {
   if ((value[HERE]==195)) {
   return 0;
   } else {
   say(76,1312,8);
   }}
   say(64,1396,0);
   }
   if (KEY(893)) {
   if (anyof(822,-1))   say(64,2663,0);
   if ((value[1170]==1) ||
   anyof(758,756,-1)) {
   say(64,2015,0);
   }
   say(64,1396,0);
   }
   if ((value[1170]==1) &&
   anyof(131,970,153,921,475,969,-1)) {
   special(11,&value[0]);
   }
   if (KEY(785)) {
   if (anyof(200,935,969,-1))   say(72,3418,935);
   if (anyof(970,153,131,-1))   say(76,3418,131);
   }
   if ((anyof(131,970,153,921,475,969,935,200,-1)) &&
   anyof(783,800,-1)) {
   say(64,3307,0);
   }
   if (anyof(131,-1))   say(76,2423,131);
   if (anyof(970,153,-1))   say(76,2423,1137);
   if (anyof(921,-1))   say(72,2372,0);
   if (anyof(475,-1))   say(64,2012,0);
   if (anyof(969,-1))   say(64,2013,0);
   if (KEY(966)) {
   if (anyof(822,-1))   say(72,3376,2);
   bitmod('s',evar(1172),1);
   }
   if (KEY(935)) {
   if (anyof(822,-1))   say(64,2014,0);
   if (anyof(848,-1))   say(64,2456,0);
   if (anyof(808,807,764,-1))   say(64,2013,0);
   if (anyof(800,-1))   say(64,3307,0);
   say(64,1396,0);
   }
   p476();
return done;
}
#ifdef __STDC__
int p475(void)
#else
int p475()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(893,-1))   say(64,2589,0);
   if (anyof(480,195,-1))   say(72,2186,0);
   if (anyof(1133,754,-1)) {
   say(72,2186,1);
   }
   if (KEY(131)) {
if (value[ARG1] == 131) {value[ARG1]=973; (void)fake(1,973);}
if (value[ARG2] == 131) {value[ARG2]=973; (void)fake(2,973);}
   }
   if (anyof(973,-1))   say(76,2662,1137);
   if (anyof(972,-1))   say(64,2017,0);
   }
   if (KEY(893)) {
   if ((anyof(758,756,-1)) ||
   value[1170]==1) {
   say(64,2015,0);
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(131,973,-1)) {
   say(72,2661,0);
   }
   if (anyof(131,973,973,972,1133,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p474(void)
#else
int p474()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(893)) {
   say(0,3261,0);
   say(64,1259,0);
   }
   if (anyof(753,1132,-1))   say(72,2665,0);
   if (anyof(754,1133,-1))   say(72,2665,1);
   if (KEY(131)) {
if (value[ARG1] == 131) {value[ARG1]=973; (void)fake(1,973);}
if (value[ARG2] == 131) {value[ARG2]=973; (void)fake(2,973);}
   }
   if (anyof(973,-1))   say(76,2662,1137);
   if (anyof(972,-1))   say(64,2017,0);
   if (anyof(538,480,-1)) {
   if (!(((value[HERE]==544)) &&
   value[544]==0)) {
   if (KEY(538)) {
   say(72,2666,0);
   } else {
   say(72,2666,1);
   }}}}
   if (anyof(848,-1))   say(72,2661,0);
   if (anyof(972,973,131,1133,1132,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(893)) {
   if ((anyof(758,756,-1)) ||
   value[1170]==1) {
   say(64,2015,0);
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
return done;
}
#ifdef __STDC__
int p479(void)
#else
int p479()
#endif
{
int done=0;
   if (KEY(974)) {
   if ((value[1136]==974)) {
   if (anyof(974,-1))   say(76,2668,1136);
   } else {
   if (anyof(974,-1))   say(76,2668,1137);
   }}
   if (keyword(822,201,-1)) {
   if ((value[HERE]==518)) {
   say(72,2710,1);
   }
   say(72,2710,0);
   }
   if (anyof(918,1126,-1)) {
   if (anyof(822,-1))   say(64,2701,0);
   if (KEY(834)) {
   return 0;
   }
   if (value[1170]>1) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (anyof(131,970,153,-1))   say(76,2423,1137);
   if (anyof(921,-1))   say(72,2372,0);
return done;
}
#ifdef __STDC__
int p20(int typ0,int par0)
#else
int p20(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (anyof(641,-1))   say(64,1396,0);
   if (lval[0]==0) {
   if (anyof(935,203,1067,-1))   say(64,1396,0);
   } else    if (lval[0]==1) {
   if (anyof(977,779,-1))   say(64,1396,0);
   } else    if (lval[0]==2) {
   if (anyof(977,1066,-1))   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p467(int typ0,int par0)
#else
int p467(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   if (KEY(761)) {
   if (anyof(754,756,641,-1)) {
   if ((value[HERE]==668||value[HERE]==669||value[HERE]==670)) {
   set('L',1,'c',0,lval, lbts);
   } else {
   set('L',1,'c',1,lval, lbts);
   }
   say(8,2439,lval[1]);
   move(702,-1);
   p153();
   } else {
   say(64,2773,0);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   if ((value[1136]==758)) {
   set('V',1136,'v',1137,NULL,NULL);
   }
   say(76,2417,1136);
   }}
   p20(-1,lval[0]);
   value[1142]=702;*bitword(1142)=-1;
   value[1140]=702;*bitword(1140)=-1;
   value[1143]=2419;*bitword(1143)=-1;
   value[1141]=2420;*bitword(1141)=-1;
return done;
}
#ifdef __STDC__
int p21(int typ0,int par0)
#else
int p21(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   if ((KEY(761)) &&
   anyof(754,756,641,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(746,750,-1)) {
   set('V',1147,'v',1138,NULL,NULL);
   if (KEY(746)) {
   value[1147] += 1;
   } else {
   value[1147] -= 1;
   }
   move(value[1147],-2);
   }
   if (KEY(761)) {
   if ((value[HERE]==642)) {
   set('L',1,'c',0,lval, lbts);
   } else    if ((value[HERE]==649)) {
   set('L',1,'c',2,lval, lbts);
   } else {
   set('L',1,'c',1,lval, lbts);
   }
   say(8,2439,lval[1]);
   move(702,-1);
   p153();
   }}
   p20(-1,lval[0]);
   value[1142]=702;*bitword(1142)=-1;
   value[1140]=702;*bitword(1140)=-1;
   value[1143]=2419;*bitword(1143)=-1;
   value[1141]=2420;*bitword(1141)=-1;
return done;
}
