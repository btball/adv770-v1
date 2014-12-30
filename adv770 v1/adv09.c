/* adv09.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p729(void)
#else
int p729()
#endif
{
int done=0;
if (value[ARG1] == 8) {value[ARG1]=162; (void)fake(1,162);}
if (value[ARG2] == 8) {value[ARG2]=162; (void)fake(2,162);}
   if (KEY(822)) {
   if (anyof(475,-1))   say(64,2524,0);
   if (anyof(997,-1))   say(64,2748,0);
   if (anyof(754,-1))   say(72,2639,0);
   if (anyof(484,-1))   say(72,2639,1);
   if (anyof(972,538,-1))   say(76,2423,1137);
   if (anyof(949,-1))   say(64,2587,0);
   if (anyof(890,1070,-1))   say(76,2985,1137);
   if (anyof(893,-1))   say(64,3172,0);
   if (anyof(197,98,-1))   say(76,2944,1137);
   if (anyof(1034,-1))   say(64,3173,0);
   if (anyof(196,-1))   say(64,3174,0);
   if (anyof(480,-1))   say(64,3175,0);
   return 0;
   }
   if (KEY(848)) {
   if ((value[1170]==1) ||
   anyof(754,484,1133,950,-1)) {
   if ((value[162]==1) &&
   value[161]!=0) {
   set('E',161,'c',0,NULL,NULL);
   set('E',162,'c',0,NULL,NULL);
   say(0,3381,0);
   move(486,-1);
   if (have(147,-1,-1)) {
   apport(147,195);
   }
   p153();
   }
   p855();
   }}
   if (((KEY(727)) &&
   value[1170]==1) &&
   value[163]<2) {
   if (anyof(727,-1))   say(76,3384,1136);
   }
   if ((KEY(162)) &&
   anyof(758,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (((value[1170]==1) ||
   anyof(754,484,-1)) &&
   KEY(761)) {
   move(486,-1);
   if (have(148,-1,-1)) {
   set('E',148,'c',2,NULL,NULL);
   }
   say(0,3340,0);
   p153();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((KEY(760)) &&
   (value[1139]==486)) {
   p855();
   }
   if (anyof(756,754,162,-1)) {
   if (value[162]==1) {
   move(474,-2442);
   }
   if (anyof(756,162,-1))   say(64,1874,0);
   p855();
   }
   if (anyof(949,893,98,538,972,197,1034,-1))   say(64,2630,0);
   if (anyof(480,196,-1))   say(64,2630,0);
   if (anyof(475,-1))   say(64,1418,0);
   }
   value[1143]=1661;*bitword(1143)=-1;
   value[1142]=486;*bitword(1142)=-1;
   if (irand(100)<33) {
   value[1142] += 1;
   } else {
   if (irand(100)<50) {
   value[1142] -= 1;
   }}
   if (irand(100)<5) {
   value[1142] -= 3;
   }
   if (anyof(997,949,890,893,972,538,98,-1)) {
   bitmod('s',evar(1172),2);
   } else    if (anyof(197,1034,480,196,1070,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p808(void)
#else
int p808()
#endif
{
int done=0;
if (value[ARG1] == 8) value[ARG1]=161;
if (value[ARG2] == 8) value[ARG2]=161;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,3054,0);
   if (anyof(161,-1))   say(64,3055,0);
   if (anyof(376,753,-1))   say(72,2011,16);
   if (anyof(935,-1))   say(64,3056,0);
   return 0;
   }
   if (anyof(753,848,-1)) {
   if (KEY(912)) {
   move(476,-2451);
   }
   if ((KEY(97)) ||
   value[1170]==1) {
   move(474,-2);
   }}
   if (KEY(912)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (keyword(758,161,-1)) {
if (value[ARG1] == 161) value[ARG1]=757;
if (value[ARG2] == 161) value[ARG2]=757;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(757,750,470,-1)) {
   if (value[161]==0) {
   say(72,2495,750);
   }
   set('E',161,'c',1,NULL,NULL);
   set('E',472,'c',1,NULL,NULL);
   move(472,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p771(void)
#else
int p771()
#endif
{
int done=0;
if (value[ARG1] == 8) {value[ARG1]=162; (void)fake(1,162);}
if (value[ARG2] == 8) {value[ARG2]=162; (void)fake(2,162);}
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,17);
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(263,992,992,-1))   say(64,3065,0);
   return 0;
   }
   if (keyword(758,162,-1)) {
if (value[ARG1] == 162) value[ARG1]=757;
if (value[ARG2] == 162) value[ARG2]=757;
   }
   if (keyword(848,912,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(473,0,848,-754);
   move(476,0,-750);
   if (anyof(753,757,-1)) {
   if (value[162]==0) {
   say(64,1874,0);
   }
   move(475,-2445);
   }}
   if (anyof(376,263,992,992,912,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1141]=2532;*bitword(1141)=-1;
   value[1140]=473;*bitword(1140)=-1;
   set('V',1142,'v',1140,NULL,NULL);
   set('V',1143,'e',1667,NULL,NULL);
return done;
}
#ifdef __STDC__
int p772(void)
#else
int p772()
#endif
{
int done=0;
   bitmod('c',482,8);
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,17);
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(263,992,992,-1))   say(64,3065,0);
   return 0;
   }
   if (KEY(912)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(8,-1))   say(64,2201,0);
   if (keyword(848,912,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(473,0,848,-754);
   move(474,0,-746);
   }
   if (anyof(376,263,992,992,912,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   value[1141]=2532;*bitword(1141)=-1;
   value[1140]=473;*bitword(1140)=-1;
   set('V',1142,'v',1140,NULL,NULL);
   set('V',1143,'e',1667,NULL,NULL);
return done;
}
#ifdef __STDC__
int p862(void)
#else
int p862()
#endif
{
int done=0;
   p475();
   if (anyof(974,-1))   say(72,2668,974);
   if (KEY(987)) {
   p396();
   }
   if (KEY(987)) {
   p396();
   }
   if (KEY(822)) {
   if (anyof(196,-1))   say(76,2588,196);
   if (anyof(950,-1))   say(72,2585,950);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(480,195,-1)) {
   p329(-1,481,-1,749,-1,196,-1,746);
   }
   if (have(102,-1,-1)) {
   if (anyof(753,196,200,195,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   }
   if (anyof(950,98,-1)) {
   value[1216]=749;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   if (value[1190]==8) {
   move(544,2154,200,195,-196);
   move(520,2154,950,-98);
   }
   move(195,0,-200);
   move(196,0,746,753,-196);
   move(520,0,744,-745);
   move(544,0,751,-750);
   move(481,0,749,950,-98);
   if (anyof(747,748,-1)) {
   if (irand(100)<50) {
   move(532,-1);
   } else {
   if (KEY(748)) {
   move(533,-1);
   } else {
   move(531,-1);
   }}
   say(64,2457,0);
   }}
   if (KEY(480)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(196,950,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p655(void)
#else
int p655()
#endif
{
int done=0;
   set('E',98,'c',0,NULL,NULL);
   if (KEY(98)) {
   apport(98,value[1138]);
   }
   p184(-1,129);
   p297(-1,1925,-1,129);
   if (anyof(974,-1))   say(72,2668,974);
   p475();
   p184(-1,129);
   if (anyof(129,134,30,1077,1015,74,-1)) {
   if (anyof(764,807,-1))   say(76,2623,129);
   if (anyof(798,822,-1))   say(64,2659,0);
   if (anyof(808,-1))   say(76,2485,129);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(950,-1))   say(64,3310,0);
   if (anyof(538,-1))   say(64,3311,0);
   if (anyof(1044,-1))   say(72,2025,1044);
   if (anyof(960,-1))   say(64,2664,0);
   if (anyof(484,972,1076,756,-1))   say(64,1717,0);
   if (anyof(935,-1))   say(64,2522,0);
   return 0;
   }
   if (KEY(960)) {
   if (anyof(795,783,784,782,-1))   say(76,3309,1136);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(987)) {
   p396();
   }
   if (KEY(767)) {
   if ((value[1170]==1) ||
   KEY(98)) {
   say(64,1719,0);
   }}
   if (KEY(769)) {
   if ((value[1170]==1) ||
   KEY(98)) {
   say(76,1600,98);
   }}
   if (KEY(935)) {
   p895();
   }
   if ((KEY(848)) &&
   anyof(98,935,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(200,196,195,480,744,-1)) {
   if (have(102,-1,-1)) {
   value[1216]=745;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(196,0,-196);
   move(480,0,195,744,-480);
   move(195,0,-200);
   }
   if (KEY(848)) {
   if (anyof(935,-1))   say(64,1758,0);
   if ((KEY(98)) ||
   value[1170]==1) {
   if (have(148,-1,-1)) {
   value[1136]=756;*bitword(1136)=-1;
   } else {
   value[1148]=2638;*bitword(1148)=-1;
   if (value[2625]>1) {
   say(64,2625,0);
   }
   p139();
   if (value[2625]==0) {
   set('V',1172,'c',22,NULL,NULL);
   say(64,1729,0);
   }
   say(64,2625,0);
   }}}
   if (((KEY(760)) &&
   (value[1139]==482)) ||
   anyof(748,756,950,538,484,-1)) {
   if (have(148,-1,-1)) {
   set('T',1732,'c',1,NULL,NULL);
   move(482,-1733);
   }
   say(64,2510,0);
   }
   if (value[1190]==8) {
   move(481,2154,200,-196);
   }
   move(544,0,746,750,745,-751);
   }
   if ((anyof(129,134,30,1015,74,-1)) ||
   anyof(484,950,1076,972,538,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p359(void)
#else
int p359()
#endif
{
int done=0;
   if (KEY(101)) {
   if (anyof(822,-1))   say(72,2634,0);
   if (anyof(764,808,807,-1))   say(64,3301,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(972,1076,-1)) {
   if (anyof(822,-1))   say(64,3137,0);
   }
   if (KEY(950)) {
   if (anyof(822,-1))   say(64,3145,0);
   bitmod('s',evar(1172),2);
   return 0;
   }
   if (anyof(1076,-1))   say(72,1312,1076);
   p362();
   if (KEY(935)) {
   p895();
   }
   if (KEY(822)) {
   if (anyof(966,-1))   say(72,3376,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(485,0,748,-538);
   }
   if (anyof(538,966,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p358(void)
#else
int p358()
#endif
{
int done=0;
   p362();
   set('E',98,'c',1,NULL,NULL);
   if (KEY(950)) {
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   value[1216]=748;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(486,-2);
   }
   if (anyof(822,-1))   say(72,2634,1);
   bitmod('s',evar(1172),2);
   return 0;
   }
   if (KEY(98)) {
   if ((KEY(767)) &&
   have(148,-1,-1)) {
   bitmod('s',98,13);
   say(72,1731,767);
   }
   apport(98,value[1138]);
   }
   if (KEY(935)) {
   p895();
   }
   if (KEY(822)) {
   if (anyof(950,-1))   say(64,3146,0);
   if (anyof(960,-1))   say(64,2664,0);
   return 0;
   }
   if (KEY(960)) {
   if (anyof(795,783,784,782,-1))   say(76,3309,1136);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(848)) {
   if ((KEY(98)) ||
   value[1170]==1) {
   if (have(148,-1,-1)) {
   say(72,1731,848);
   }
   value[1148]=2638;*bitword(1148)=-1;
   p139();
   move(481,-2628);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(486,0,748,-950);
   if (anyof(538,-1))   say(64,1290,0);
   move(487,0,-747);
   move(485,0,-749);
   if (anyof(744,757,-1)) {
   if (have(148,-1,-1)) {
   bitmod('s',98,13);
   set('T',1732,'c',0,NULL,NULL);
   move(481,-1733);
   }
   say(64,2510,0);
   }}
   if (KEY(538)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p357(void)
#else
int p357()
#endif
{
int done=0;
   if (KEY(962)) {
   if (anyof(822,-1))   say(64,3149,0);
   say(72,2029,962);
   }
   if (KEY(950)) {
   if (anyof(822,-1))   say(64,3145,0);
   bitmod('s',evar(1172),2);
   return 0;
   }
   p362();
   if (KEY(935)) {
   p895();
   }
   if (KEY(822)) {
   if (anyof(966,-1))   say(72,3376,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(487,0,-748);
   }
   if (anyof(538,966,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p363(void)
#else
int p363()
#endif
{
int done=0;
   if ((anyof(727,839,-1)) ||
   keyword(852,963,-1)) {
   say(64,2636,0);
   }
   if (KEY(963)) {
   if (anyof(822,-1))   say(72,2634,2);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(935)) {
   p895();
   }
   if (KEY(950)) {
   if (anyof(822,-1))   say(72,3144,1);
   if (anyof(848,753,-1))   say(64,3143,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   p362();
   if (KEY(822)) {
   if (anyof(966,-1))   say(72,3376,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(483,0,-744);
   move(482,0,-745);
   if (KEY(538)) {
   p329(-1,483,-1,744,-1,482,-1,745);
   }}
   if (anyof(538,966,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p360(void)
#else
int p360()
#endif
{
int done=0;
   if (keyword(822,753,-1)) {
if (value[ARG1] == 753) value[ARG1]=950;
if (value[ARG2] == 753) value[ARG2]=950;
   }
   p184(-1,73);
   if (KEY(798)) {
   if ((value[1170]==1) ||
   anyof(73,30,74,134,129,-1)) {
   say(64,2446,0);
   }}
   if (KEY(73)) {
   if (anyof(822,-1))   say(64,2446,0);
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,73);
   }
   say(76,1877,73);
   }
   if (anyof(950,935,-1)) {
   if (anyof(822,-1))   say(72,3144,0);
   if (!(anyof(753,848,-1))) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if ((KEY(935)) ||
   keyword(934,822,-1)) {
   say(72,2521,1);
   }
   p362();
   if ((KEY(760)) &&
   (value[1139]==475)) {
   p855();
   }
   if ((((keyword(848,753,-1)) ||
   anyof(753,848,-1)) &&
   value[1170]==1) ||
   anyof(950,935,934,-1)) {
   p855();
   }
   if (anyof(934,935,-1)) {
   bitmod('s',evar(1172),1);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(482,0,744,-538);
   }
   if (anyof(538,73,30,74,134,129,17,1011,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p361(void)
#else
int p361()
#endif
{
int done=0;
   if (KEY(910)) {
   if (KEY(790)) {
   return 0;
   }
   if (anyof(822,-1))   say(72,2634,3);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(964,32,-1)) {
   if (anyof(822,-1))   say(72,2634,4);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(935)) {
   p895();
   }
   if (KEY(950)) {
   if (anyof(822,-1))   say(72,3144,1);
   if (anyof(848,753,-1))   say(64,3143,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   p362();
   if (KEY(822)) {
   if (anyof(966,-1))   say(72,3376,0);
   if (anyof(17,1011,-1))   say(72,3147,950);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(482,0,-751);
   move(484,0,-744);
   if (KEY(538)) {
   p329(-1,482,-1,751,-1,484,-1,744);
   }}
   if (anyof(538,17,1011,966,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p242(void)
#else
int p242()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(892,453,-1))   say(64,2471,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(757,753,892,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(489,0,754,748,-896);
   if (anyof(753,757,892,453,-1)) {
   move(453,-2062);
   }}
   if (anyof(896,897,308,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p915(void)
#else
int p915()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(753,974,779,1049,916,-1))   say(64,3124,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(935,-1))   say(64,3125,0);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (anyof(916,-1))   say(64,1418,0);
   if (KEY(848)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(488,0,744,896,897,-308);
   if (anyof(757,753,848,545,-1)) {
   move(545,-1700);
   }
   if (anyof(300,916,-1))   say(64,1418,0);
   }
   if (anyof(916,935,1049,974,896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p164(void)
#else
int p164()
#endif
{
int done=0;
   if (KEY(7)) {
if (value[ARG1] == 7) value[ARG1]=171;
if (value[ARG2] == 7) value[ARG2]=171;
   }
   if ((KEY(924)) &&
   value[4]>0) {
   say(64,2323,0);
   }
   if (KEY(822)) {
   if (anyof(756,927,927,-1)) {
   if (value[4]>0) {
   if (KEY(756)) {
if (value[ARG1] == 756) value[ARG1]=4;
if (value[ARG2] == 756) value[ARG2]=4;
   } else    if (KEY(927)) {
if (value[ARG1] == 927) value[ARG1]=4;
if (value[ARG2] == 927) value[ARG2]=4;
   } else {
if (value[ARG1] == 927) value[ARG1]=4;
if (value[ARG2] == 927) value[ARG2]=4;
   }
   } else {
   say(76,1707,4);
   }}
   if (anyof(376,753,-1))   say(72,2011,18);
   }
   if (KEY(925)) {
   if (anyof(822,-1))   say(64,2324,0);
if (value[ARG1] == 925) value[ARG1]=4;
if (value[ARG2] == 925) value[ARG2]=4;
   if (anyof(797,807,-1)) {
   (*procs[767])();
   }}
   if (anyof(911,-1))   say(72,2029,911);
   if (((KEY(96)) &&
   isnear(5,-1,-1)) &&
   bitest(evar(1170),8)) {
   if (KEY(781)) {
   bitmod('s',evar(1210),9);
   if (value[5]<2) {
   say(64,2341,0);
   } else {
   say(64,2342,0);
   }
   } else {
   if (anyof(822,764,809,-1)) {
   return 0;
   }
   if (KEY(765)) {
   apport(96,HERE);
   say(0,3415,0);
   value[1179] -= 1;
   longjmp(loop_back,1);
   }
   if (bitest(evar(1210),9)) {
   if (KEY(805)) {
   return 0;
   }
   bitmod('s',evar(1172),1);
   return 0;
   } else {
   say(0,1259,0);
   say(64,2655,0);
   }}}
   if (KEY(822)) {
   if (KEY(490)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(991,-1))   say(64,2921,0);
   if (anyof(171,959,268,-1))   say(72,2925,1);
   if (anyof(89,-1))   say(72,2372,1);
   return 0;
   }
   if (keyword(848,171,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(753,757,171,-1)) {
   if (isnear(5,0,1)) {
   p881(0,1);
   }
   move(262,-2);
   }}
   if (anyof(171,959,268,911,991,89,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p852(void)
#else
int p852()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
if (value[ARG1] == 7) value[ARG1]=171;
if (value[ARG2] == 7) value[ARG2]=171;
if (value[ARG1] == 914) value[ARG1]=163;
if (value[ARG2] == 914) value[ARG2]=163;
   if ((KEY(141)) &&
   isnear(141,-1,-1)) {
   return 0;
   }
if (value[ARG1] == 141) value[ARG1]=163;
if (value[ARG2] == 141) value[ARG2]=163;
   if ((KEY(163)) &&
   !(bitest(163,4))) {
   set('E',491,'c',1,NULL,NULL);
   apport(163,value[1138]);
   bitmod('s',163,4);
   set('E',163,'c',1,NULL,NULL);
   say(0,3359,0);
   }
   if ((anyof(163,141,-1)) &&
   ishere(163,-1,-1)) {
   if (anyof(798,-1))   say(72,3348,798);
   if (!(KEY(822))) {
   if (anyof(783,784,-1)) {
   set('L',0,'c',0,lval, lbts);
   if (have(54,-1,-1)) {
   lval[0]=54;lbts[0*VARSIZE]=-1;
   } else    if (have(125,-1,-1)) {
   lval[0]=125;lbts[0*VARSIZE]=-1;
   } else    if (have(124,-1,-1)) {
   lval[0]=124;lbts[0*VARSIZE]=-1;
   }
   if (lval[0]!=0) {
   say(72,3346,lval[0]);
   }
   say(64,3358,0);
   }
   say(64,2045,0);
   }}
   if (((((KEY(54)) &&
   have(54,-1,-1)) &&
   anyof(781,793,-1)) &&
   isnear(163,-1,-1)) &&
   !isnear(193,-1,-1)) {
   say(76,2618,1137);
   }
   if (anyof(928,927,141,-1)) {
   if (value[163]>0) {
   if (KEY(927)) {
   return 0;
   }
   if (value[1170]==1) {
   set('V',1149,'v',1136,NULL,NULL);
   } else {
   set('V',1149,'v',1137,NULL,NULL);
   }
   say(76,1312,1149);
   }
   set('V',1170,'c',2,NULL,NULL);
   value[1136]=822;*bitword(1136)=-1;
   value[1137]=163;*bitword(1137)=-1;
   }
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(171,-1))   say(64,2740,0);
   if (anyof(901,-1))   say(72,2894,896);
   if (anyof(965,1051,-1)) {
   if (ishere(163,-1,-1)) {
   say(64,3083,0);
   } else {
if (value[ARG1] == 965) value[ARG1]=163;
if (value[ARG2] == 965) value[ARG2]=163;
   }}
   if (anyof(163,960,-1)) {
   set('E',491,'c',1,NULL,NULL);
   say(32,163,0);
   apport(163,value[1138]);
   bitmod('s',163,4);
   set('E',163,'c',1,NULL,NULL);
   longjmp(loop_back,1);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(262,0,754,-171);
   move(492,0,-744);
   move(467,0,748,965,1051,-756);
   move(495,0,750,-495);
   }
   if (anyof(171,928,927,901,1051,965,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=262;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p35(void)
#else
int p35()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(492)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(491,0,-748);
   move(493,0,744,-492);
   move(495,0,749,-495);
   }
   if (KEY(492)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p618(void)
#else
int p618()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(492)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(492,0,748,757,-492);
   move(494,0,744,756,-896);
   }
   if (anyof(896,897,308,492,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p185(void)
#else
int p185()
#endif
{
int done=0;
   if ((anyof(927,966,-1)) &&
   value[149]==0) {
if (value[ARG1] == 966) value[ARG1]=149;
if (value[ARG2] == 966) value[ARG2]=149;
if (value[ARG1] == 927) value[ARG1]=149;
if (value[ARG2] == 927) value[ARG2]=149;
   }
   p184(-1,134);
   if (anyof(134,129,1025,30,74,-1)) {
   if (anyof(798,822,-1))   say(64,2277,0);
   say(76,1877,134);
   }
   if (KEY(1025)) {
   if (anyof(822,798,-1))   say(64,2963,0);
   if (anyof(764,-1))   say(72,1877,1025);
   if (value[1170]>1) {
   bitmod('s',evar(1172),1);
   return 0;
   } else {
   bitmod('s',evar(1170),5);
   say(76,1500,200);
   }}
   if (KEY(822)) {
   if (anyof(912,-1))   say(72,2961,912);
   if (KEY(494)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(493,0,-748);
   move(492,0,-757);
   if (anyof(494,-1))   say(64,1418,0);
   }
   if (anyof(134,129,1025,30,74,912,494,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p660(void)
#else
int p660()
#endif
{
int done=0;
   if (KEY(892)) {
   if (anyof(822,756,-1)) {
   set('T',1727,'c',1,NULL,NULL);
   say(64,3428,0);
   }
   say(64,1396,0);
   }
   if (KEY(822)) {
   if (anyof(898,966,120,-1))   say(64,2597,0);
   if (anyof(912,-1))   say(76,2029,1137);
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(1051,-1))   say(64,3111,0);
   if (anyof(897,308,896,-1))   say(72,2894,896);
   if (anyof(935,-1))   say(64,3110,0);
   if (KEY(495)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (((KEY(796)) &&
   anyof(84,136,-1)) &&
   have(value[1137],0,2)) {
   say(76,1735,1137);
   }
   if (!((have(119,0,2)) ||
   have(123,0,2))) {
   if (keyword(764,120,-1)) {
   if (have(136,0,2)) {
   say(76,1735,136);
   } else    if (have(84,-1,-1)) {
   say(76,1735,84);
   }}}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(491,0,-746);
   move(492,0,-745);
   move(461,0,744,754,-7);
   move(452,0,-750);
   if ((KEY(103)) &&
   value[1727]==1) {
   say(64,3428,0);
   }
   if (anyof(495,-1))   say(64,1418,0);
   if (anyof(495,-1))   say(64,1290,0);
   }
   if (anyof(7,898,495,912,966,1051,1051,892,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(896,897,308,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p872(void)
#else
int p872()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1052,992,-1))   say(64,3101,0);
   if (anyof(765,1023,-1))   say(64,3102,0);
   if (anyof(475,376,-1))   say(72,3099,0);
   if (anyof(1057,901,892,935,202,-1))   say(72,3096,1057);
   if (anyof(896,308,897,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((anyof(750,887,892,202,-1)) &&
   KEY(756)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(294,0,-748);
   move(497,0,-744);
   if (anyof(896,308,897,-1)) {
   p329(-1,294,-1,748,-1,497,-1,744);
   }
   if (anyof(750,887,892,202,901,-1)) {
   p626(-1,2626,-1,1057);
   move(498,-2);
   }}
   if (anyof(308,896,897,1052,992,1023,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(901,892,935,1057,202,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p884(void)
#else
int p884()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1052,-1))   say(64,3100,0);
   if (anyof(896,308,897,-1))   say(72,2895,896);
   if (anyof(765,1023,-1))   say(64,3042,0);
   if (anyof(475,376,-1))   say(72,3099,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(496,0,748,896,308,-897);
   }
   if (anyof(308,896,897,1052,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p546(void)
#else
int p546()
#endif
{
int done=0;
   if (anyof(790,787,-1)) {
   return 0;
   }
   if (anyof(120,-1))   say(64,3095,0);
   if (KEY(822)) {
   if (anyof(1133,-1))   say(64,3093,0);
   if (anyof(475,376,120,-1))   say(64,3094,0);
   if (anyof(887,892,202,757,-1))   say(76,3096,202);
   return 0;
   }
   if ((KEY(796)) &&
   anyof(123,119,136,-1)) {
   say(64,3095,0);
   }
   if ((KEY(120)) &&
   anyof(764,790,-1)) {
   say(64,3095,0);
   }
   if (((anyof(887,892,901,202,-1)) &&
   anyof(756,757,-1)) ||
   keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(499,0,-750);
   move(499,0,-849);
   if (KEY(754)) {
   if (bitest(94,13)) {
   move(501,-2);
   }
   move(500,-2);
   }
   if (anyof(753,746,887,892,202,757,-1)) {
   p626(-1,2626,-1,202);
   move(496,-2);
   }}
   if (anyof(120,887,892,202,757,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=502;*bitword(1142)=-1;
   value[1143]=2090;*bitword(1143)=-1;
   set('V',1144,'c',1,NULL,NULL);
   set('V',1140,'v',1142,NULL,NULL);
   set('V',1141,'v',1143,NULL,NULL);
return done;
}
#ifdef __STDC__
int p67(void)
#else
int p67()
#endif
{
int done=0;
   if (anyof(790,787,-1)) {
   return 0;
   }
   if (anyof(120,-1))   say(64,3164,0);
   if (anyof(99,-1))   say(64,1722,0);
   if (KEY(940)) {
   if (KEY(764)) {
   if (bitest(443,4)) {
   say(72,2533,1);
   }
   say(72,2533,0);
   }
   if (anyof(822,-1))   say(64,2534,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(99,1055,-1))   say(64,3092,0);
   if (KEY(888)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(498,0,746,754,757,896,897,-308);
   if (anyof(888,-1))   say(64,1418,0);
   }
   if (anyof(896,897,308,888,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p666(void)
#else
int p666()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,120,1059,-1))   say(64,3084,0);
   if (anyof(955,-1))   say(64,3085,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (KEY(980)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((((keyword(848,980,-1)) &&
   anyof(753,754,980,-1)) ||
   keyword(848,980,-1)) ||
   keyword(761,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,761,980,980,-1)) {
   say(0,1710,0);
   say(0,1709,0);
   move(502,-1);
   p153();
   }
   if (anyof(753,757,760,727,848,-1)) {
   bitmod('s',94,13);
   set('E',94,'c',0,NULL,NULL);
   value[1206] = irand(4);
   if (KEY(727)) {
   move(501,-1443);
   }
   move(498,-2);
   }}
   if (anyof(980,34,955,1059,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=502;*bitword(1142)=-1;
   value[1143]=1768;*bitword(1143)=-1;
   set('V',1140,'v',1142,NULL,NULL);
   set('V',1141,'v',1143,NULL,NULL);
return done;
}
#ifdef __STDC__
int p478(void)
#else
int p478()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,120,1059,-1))   say(64,3084,0);
   if (anyof(955,-1))   say(64,3085,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (anyof(503,969,-1))   say(64,3087,0);
   if (KEY(980)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((((keyword(848,980,-1)) &&
   anyof(753,754,980,980,-1)) ||
   keyword(848,980,-1)) ||
   keyword(761,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(761,754,980,-1)) {
   bitmod('c',94,13);
   bitmod('s',94,14);
   move(503,-1710);
   }
   move(498,0,753,757,-848);
   }
   if (anyof(980,955,120,1059,503,34,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=502;*bitword(1142)=-1;
   value[1143]=1768;*bitword(1143)=-1;
   set('V',1140,'v',1142,NULL,NULL);
   set('V',1141,'v',1143,NULL,NULL);
return done;
}
#ifdef __STDC__
int p167(void)
#else
int p167()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(969,935,-1))   say(64,3059,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (KEY(503)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(502,0,-744);
   move(504,0,-748);
   if (KEY(503)) {
   p329(-1,502,-1,744,-1,504,-1,748);
   }}
   if (anyof(955,969,503,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p753(void)
#else
int p753()
#endif
{
int done=0;
   p184(-1,74);
   if (!((isnear(92,-1,-1)) &&
   bitest(92,13))) {
   p297(-1,1862,-1,74);
   }
   if (anyof(79,-1))   say(64,1769,0);
   if (KEY(822)) {
   if (anyof(969,935,-1))   say(64,3059,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (anyof(74,-1))   say(64,3060,0);
   if (anyof(897,896,308,503,308,-1))   say(64,3061,0);
   if (anyof(949,-1))   say(72,2944,949);
   if (anyof(475,376,-1))   say(64,3063,0);
   if (anyof(732,-1))   say(64,3062,0);
   if ((KEY(43)) &&
   !isnear(43,-1,-1)) {
   say(64,3064,0);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(503,0,748,757,503,897,896,-308);
   if (anyof(949,-1))   say(64,1769,0);
   }
   if (anyof(79,955,503,969,74,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(896,897,308,949,732,475,376,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p168(void)
#else
int p168()
#endif
{
int done=0;
   if ((KEY(94)) &&
   value[1170]>1) {
   p696();
   }
   if (KEY(822)) {
   if (anyof(969,935,-1))   say(64,3059,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (anyof(1058,-1))   say(72,1505,1);
   if (anyof(475,376,-1))   say(64,3063,0);
   if (KEY(503)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(503,0,744,-503);
   move(508,0,-749);
   move(509,0,750,-751);
   move(505,0,746,748,-747);
   if (anyof(1058,-1))   say(64,1290,0);
   }
   if (anyof(94,1058,955,969,503,475,376,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p763(void)
#else
int p763()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1058,-1))   say(72,1505,1);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (KEY(271)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(504,0,-744);
   move(506,0,747,-749);
   if (anyof(271,-1))   say(64,1418,0);
   if (anyof(1058,-1))   say(64,1290,0);
   }
   if (anyof(1058,955,271,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p764(void)
#else
int p764()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1058,-1))   say(72,1505,1);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (KEY(271)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(505,0,-744);
   move(507,0,748,-747);
   if (anyof(1058,-1))   say(64,1290,0);
   if (anyof(271,-1))   say(64,1418,0);
   }
   if (anyof(1058,955,271,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p765(void)
#else
int p765()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1058,-1))   say(72,1505,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(506,0,744,757,1058,-271);
   }
   if (anyof(1058,955,271,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p766(void)
#else
int p766()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (anyof(898,-1))   say(72,2157,898);
   if (anyof(935,34,-1))   say(64,3086,0);
   if (anyof(1057,-1))   say(64,3058,0);
   if (anyof(1058,-1))   say(72,1505,2);
   if (KEY(271)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((anyof(758,899,-1)) ||
   value[1170]==1) {
   move(504,0,745,1058,-503);
   if (anyof(753,756,757,899,1057,-1)) {
   set('V',1193,'c',1,NULL,NULL);
   lval[0]=location[132];lbts[0*VARSIZE]=-1;
   if ((503<=lval[0] && lval[0]<=509)) {
   apport(132,502);
   }
   move(510,-3053);
   }
   if (anyof(271,-1))   say(64,1418,0);
   }
   if (anyof(898,1058,955,271,1057,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p767(void)
#else
int p767()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1058,-1))   say(64,1505,0);
   if (anyof(935,34,-1))   say(64,3086,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(504,0,746,757,-503);
   }
   if (anyof(1058,955,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p810(void)
#else
int p810()
#endif
{
int done=0;
   if (KEY(898)) {
   p811();
   say(64,1405,0);
   }
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,897,308,-1))   say(64,1290,0);
   if (anyof(754,850,-1)) {
   bitmod('s',94,14);
   move(508,-2);
   }
   if (anyof(744,745,746,747,748,749,750,751,753,849,-1)) {
   set('E',511,'c',0,NULL,NULL);
   move(511,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p809(void)
#else
int p809()
#endif
{
int done=0;
   if (KEY(898)) {
   p811();
   say(64,1405,0);
   }
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,897,308,-1))   say(64,1290,0);
   if ((anyof(898,753,849,-1)) &&
   !(bitest(94,14))) {
   if (value[511]<4) {
   p401();
   value[511] += 1;
   move(511,-2);
   }
   set('E',511,'c',0,NULL,NULL);
   p240(-1,502);
   move(223,-2);
   }
   if (anyof(754,850,-1)) {
   if (irand(100)<15) {
   move(510,-2);
   }}
   if ((anyof(744,748,746,750,745,747,751,749,-1)) ||
   anyof(849,753,754,850,-1)) {
   p401();
   move(511,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p41(void)
#else
int p41()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(901,935,892,-1))   say(72,3089,901);
   if (anyof(76,-1))   say(64,3088,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (KEY(283)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(284,0,750,901,892,-76);
   move(513,0,744,-896);
   if (anyof(283,-1))   say(64,1418,0);
   }
   if (anyof(901,892,897,308,896,283,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p545(void)
#else
int p545()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(283,-1))   say(76,2944,283);
   if (anyof(935,376,1133,1126,-1))   say(64,3082,0);
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(512,0,748,-283);
   move(514,0,-744);
   if (anyof(897,896,308,-1)) {
   p329(-1,512,-1,748,-1,514,-1,744);
   }}
   if (anyof(896,897,308,283,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p524(void)
#else
int p524()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(475,376,-1))   say(76,2682,1137);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(901,892,-1))   say(64,3090,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (KEY(283)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(513,0,749,-896);
   move(515,0,744,936,901,-892);
   if (anyof(283,-1))   say(64,1418,0);
   }
   if (anyof(936,283,896,475,892,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p820(void)
#else
int p820()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p401();
   }
   if (anyof(746,750,-1)) {
   p542();
   longjmp(loop_back,1);
   }
   if (anyof(748,747,749,-1)) {
   if (irand(100)<33) {
   p240(-1,517);
   move(514,-2);
   }
   p542();
   }
   if (anyof(744,745,751,-1)) {
   if (irand(100)<33) {
   p240(-1,517);
   move(465,-2);
   }
   p542();
   }}
   if (KEY(936)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p172(void)
#else
int p172()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1056,-1))   say(64,3066,0);
   if (KEY(888)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(794,1056,-1)) {
   say(64,2456,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(888,-1))   say(64,1418,0);
   move(457,0,744,760,-757);
   }
   if (anyof(888,1056,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p823(void)
#else
int p823()
#endif
{
int done=0;
   if (keyword(848,1126,-1)) {
   say(64,2456,0);
   }
   p184(-1,1126);
   if ((anyof(822,798,-1)) &&
   anyof(1126,74,1127,1128,1015,173,-1)) {
   p700();
   }
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(515,0,744,745,746,747,748,749,750,751,-760);
   }
   if (anyof(936,74,1127,1128,1015,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p813(void)
#else
int p813()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   p410(0,0);
   if (test("html")) {
   set('T',3188,'c',1,NULL,NULL);
   set('T',3189,'c',1,NULL,NULL);
   } else {
   set('T',3188,'c',0,NULL,NULL);
   set('T',3189,'c',0,NULL,NULL);
   }
   if ((KEY(798)) &&
   value[1170]==1) {
   set('V',1170,'c',2,NULL,NULL);
   value[1137]=129;*bitword(1137)=-1;
   return 0;
   }
   if (isnear(194,-1,-1)) {
   bitmod('s',122,4);
   }
   if (((keyword(772,95,-1)) &&
   have(95,0,2)) &&
   ishere(194,-1,-1)) {
   say(64,2833,0);
   }
   if ((value[1170]==2) &&
   (value[1137]==801)) {
if (value[ARG1] == 801) {value[ARG1]=129; (void)fake(1,129);}
if (value[ARG2] == 801) {value[ARG2]=129; (void)fake(2,129);}
   }
if (value[ARG1] == 13) value[ARG1]=140;
if (value[ARG2] == 13) value[ARG2]=140;
if (value[ARG1] == 139) value[ARG1]=140;
if (value[ARG2] == 139) value[ARG2]=140;
   set('T',2016,'c',1,NULL,NULL);
   if ((ishere(194,-1,-1)) &&
   anyof(907,122,119,141,908,909,118,141,941,-1)) {
   if ((KEY(822)) &&
   anyof(141,941,-1)) {
   say(64,2649,0);
   }
   if (anyof(764,-1))   say(64,2271,0);
   set('V',1146,'v',1136,NULL,NULL);
   if (value[1170]==2) {
   set('V',1146,'v',1137,NULL,NULL);
   }
   if ((anyof(119,141,118,-1)) &&
   isnear(value[1146],-1,-1)) {
   return 0;
   }
   if ((KEY(122)) &&
   isnear(136,0,5)) {
   return 0;
   }
   say(64,2271,0);
   }
   if (anyof(974,-1))   say(72,2668,974);
   if ((keyword(793,102,-1)) &&
   have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((6<=lval[0] && lval[0]<=8)) {
   say(64,2292,0);
   }}
   value[1142]=443;*bitword(1142)=-1;
   value[1143]=1663;*bitword(1143)=-1;
if (value[ARG1] == 131) value[ARG1]=973;
if (value[ARG2] == 131) value[ARG2]=973;
   if (anyof(973,994,-1)) {
   if (anyof(848,-1))   say(72,2661,1);
   say(72,2423,973);
   }
   if (anyof(914,915,-1)) {
   if (value[199]>0) {
   say(64,3338,0);
   }
   if (KEY(822)) {
   if (anyof(914,-1))   say(64,2030,0);
   say(64,2131,0);
   }
   if (anyof(914,-1))   say(72,2029,914);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(197)) {
   if (anyof(822,-1))   say(72,2720,0);
   if (KEY(756)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if ((KEY(822)) &&
   anyof(754,920,-1)) {
   p814(-1,3369,0,1);
   bitmod('s',157,4);
   say(76,2733,139);
   }
   if (KEY(848)) {
   if (anyof(993,-1))   say(64,2737,0);
   if (anyof(920,754,140,-1)) {
   if (value[139]==2) {
   p814(-1,3369,0,1);
   move(444,-2835);
   } else {
   if (KEY(140)) {
   if (value[139]==0) {
   say(76,1312,1137);
   }
   p814(-1,3369,0,1);
   say(64,3343,0);
   }
   say(64,2734,0);
   }}}
   if (KEY(920)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(157)) &&
   bitest(157,4)) {
   p814(-1,3369,0,0);
   if (anyof(822,-1))   say(76,2585,157);
   say(64,2373,0);
   }
   if (KEY(822)) {
   if (KEY(140)) {
   if (value[139]==0) {
   say(76,1312,1137);
   }
   if (value[139]==1) {
   p814(-1,3369,0,1);
   say(76,2944,139);
   }}
   if (anyof(957,-1))   say(72,2585,957);
   if (anyof(439,-1))   say(72,2735,0);
   if (anyof(890,1070,949,781,-1))   say(64,2736,0);
   if (anyof(1028,-1))   say(72,2681,1);
   if (anyof(972,972,995,150,-1))   say(64,2738,0);
   if (anyof(993,-1))   say(64,2737,0);
   if (anyof(997,-1))   say(64,2745,0);
   return 0;
   }
   if (anyof(150,995,-1)) {
   if (anyof(764,-1))   say(64,2739,0);
   }
   if (anyof(983,-1))   say(72,1841,983);
   if (value[1170]==1) {
   if (anyof(890,1070,949,-1))   say(76,2985,1136);
   if (anyof(547,-1))   say(64,2580,0);
   if (anyof(993,972,972,150,995,439,949,781,-1))   say(64,1999,0);
   }
   if (anyof(993,972,972,150,995,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(439,949,781,-1)) {
   bitmod('s',evar(1172),2);
   return 0;
   }
   if (keyword(756,140,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((value[1190]==8) &&
   anyof(200,195,-1)) {
   say(64,2552,0);
   }
   if (have(102,-1,-1)) {
   if (anyof(200,195,-1)) {
   if (value[102]==2) {
   say(8,2286,746);
   move(198,-2);
   }
   value[1216]=747;*bitword(1216)=-1;
   } else    if (anyof(197,757,538,-1)) {
   value[1216]=747;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   if (anyof(200,195,538,197,-1)) {
   if (value[1190]==8) {
   say(64,2698,0);
   }
   move(198,0,-197);
   move(195,0,200,-195);
   }
   if ((anyof(140,13,750,-1)) &&
   value[139]==2) {
   p814(-1,3369,0,1);
   move(446,-2231);
   }
   if (KEY(761)) {
   set('L',0,'e',102,lval, lbts);
   if ((have(102,-1,-1)) &&
   (6<=lval[0] && lval[0]<=8)) {
   say(64,2290,0);
   }
   move(702,-1);
   p800();
   }
   move(198,0,197,538,757,-747);
   }
   if (anyof(197,890,1070,547,949,1028,538,-1)) {
   if (keyword(197,538,-1)) {
   bitmod('s',evar(1172),1);
   } else {
   bitmod('s',evar(1172),2);
   }}
return done;
}
#ifdef __STDC__
int p17(void)
#else
int p17()
#endif
{
int done=0;
   value[586] -= 1;
   if (value[586]>0) {
   bitmod('s',evar(1170),0);
   if (!(bitest(547,4))) {
   bitmod('c',586,4);
   }
   if (anyof(953,921,998,-1)) {
   return 0;
   }
   } else    if (value[586]<2) {
   if (KEY(139)) {
   return 0;
   }}
   if (KEY(822)) {
   if ((value[1170]==1) &&
   !(bitest(547,4))) {
   longjmp(loop_back,1);
   }
   if (anyof(1028,-1))   say(72,2681,1);
   if (anyof(547,-1))   say(64,2785,0);
   if (anyof(997,-1))   say(64,2745,0);
   if (anyof(194,-1))   say(76,3020,586);
   if (anyof(63,-1))   say(64,3021,0);
   if (anyof(957,31,-1))   say(76,2786,586);
   if (anyof(953,439,-1))   say(76,2787,586);
   if (anyof(139,-1))   say(64,2788,0);
   if (anyof(921,998,-1))   say(64,3196,0);
   if (anyof(920,-1))   say(76,2789,586);
   return 0;
   }
   if (KEY(764)) {
   if ((value[1170]==1) ||
   anyof(1007,63,-1)) {
   say(64,2832,0);
   }}
   if (KEY(806)) {
   if ((value[1170]==1) ||
   anyof(750,547,777,759,753,-1)) {
   say(64,3374,0);
   }
   if (((743<=value[1137] && value[1137]<=755)) ||
   KEY(63)) {
   say(64,3375,0);
   }}
   if (anyof(727,-1))   say(64,1374,0);
   if ((anyof(758,806,-1)) ||
   value[1170]==1) {
   if (anyof(777,547,957,-1))   say(64,3195,0);
   if (anyof(760,-1))   say(72,1380,1);
   }
   if (!(((anyof(844,845,823,725,727,829,830,730,856,857,-1)) ||
   anyof(825,826,824,732,733,734,773,728,-1)) ||
   (704<=value[1136] && value[1136]<=722))) {
   say(64,2416,0);
   }
   if (anyof(920,139,921,1028,998,194,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(953,439,957,31,921,997,547,949,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p697(void)
#else
int p697()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(538,754,1133,-1))   say(72,2669,1);
   if (anyof(990,-1))   say(64,2719,0);
   if (anyof(197,-1))   say(72,2720,1);
   if (anyof(993,-1))   say(64,2729,0);
   if (anyof(753,-1))   say(64,2730,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(538,197,-1)) {
   if ((KEY(197)) &&
   (value[1139]==195)) {
   value[1139]=538;*bitword(1139)=-1;
   }
   p329(-1,538,-1,747,-1,198,-1,750);
   }
   if (value[1190]==8) {
   move(199,2154,195,-200);
   move(195,2154,-890);
   }
   if (have(102,-1,-1)) {
   if (anyof(200,195,-1)) {
   value[1216]=747;*bitword(1216)=-1;
   }
   if (KEY(890)) {
   if (value[102]==1) {
   say(8,2286,751);
   move(198,-2);
   }
   value[1216]=751;*bitword(1216)=-1;
   }
   if (KEY(538)) {
   value[1216]=747;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   if (anyof(990,-1))   say(64,2719,0);
   move(195,0,195,-200);
   move(199,0,-890);
   move(198,0,-750);
   move(538,0,-747);
   }
   if (anyof(538,990,197,993,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p698(void)
#else
int p698()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(538,754,1133,-1))   say(72,2669,1);
   if (anyof(990,-1))   say(64,2719,0);
   if (anyof(197,-1))   say(72,2720,1);
   if (anyof(993,-1))   say(64,2729,0);
   if (anyof(753,-1))   say(64,2730,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(538,197,-1)) {
   p329(-1,197,-1,746,-1,199,-1,751);
   }
   if (value[1190]==8) {
   move(199,2154,195,-200);
   move(195,2154,-890);
   }
   if (have(102,-1,-1)) {
   if (KEY(890)) {
   value[1216]=751;*bitword(1216)=-1;
   } else    if (anyof(200,195,195,-1)) {
   if (value[102]==5) {
   say(8,2286,747);
   move(197,-2);
   }
   value[1216]=746;*bitword(1216)=-1;
   }
   if (KEY(538)) {
   value[1216]=746;*bitword(1216)=-1;
   } else    if (KEY(890)) {
   value[1216]=751;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(199,0,-890);
   move(195,0,200,-195);
   move(197,0,-746);
   move(199,0,-751);
   if (anyof(990,-1))   say(64,2719,0);
   }
   if (anyof(538,990,197,993,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p662(void)
#else
int p662()
#endif
{
int done=0;
   if (anyof(974,-1))   say(72,2668,974);
   if (KEY(822)) {
   if (anyof(538,-1))   say(72,2669,0);
   if (anyof(197,-1))   say(72,2720,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(538)) {
   p329(-1,195,-1,747,-1,197,-1,751);
   }
   if (value[1190]==8) {
   move(199,2154,195,-200);
   move(195,2154,-890);
   }
   if (have(102,-1,-1)) {
   if (KEY(890)) {
   if (value[102]==6) {
   say(8,2286,750);
   move(197,-2);
   }
   value[1216]=751;*bitword(1216)=-1;
   } else    if (KEY(197)) {
   value[1216]=751;*bitword(1216)=-1;
   } else    if (KEY(893)) {
   value[1216]=744;*bitword(1216)=-1;
   } else    if (KEY(200)) {
   value[1216]=747;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(197,0,751,-197);
   move(519,0,744,-893);
   move(522,0,-745);
   move(521,0,-746);
   move(195,0,747,195,-200);
   move(196,0,-748);
   move(520,0,749,-750);
   move(199,0,-890);
   }
   if (anyof(538,197,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
