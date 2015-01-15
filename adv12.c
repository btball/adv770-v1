/* adv12.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p465(void)
#else
int p465()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(666,0,-747);
   move(670,0,-750);
   if ((value[1139]==666)) {
   move(655,0,-746);
   }}
   p467(0,0);
return done;
}
#ifdef __STDC__
int p468(void)
#else
int p468()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3421,0);
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(665,0,-745);
   }
   p467(0,0);
return done;
}
#ifdef __STDC__
int p469(void)
#else
int p469()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3421,0);
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(665,0,-747);
   }
   p467(0,0);
return done;
}
#ifdef __STDC__
int p466(void)
#else
int p466()
#endif
{
int done=0;
   if (value[170]>1) {
   set('E',170,'c',1,NULL,NULL);
   if (anyof(744,857,-1)) {
   set('V',1164,'c',3,NULL,NULL);
   say(64,3389,0);
   }
   if (KEY(856)) {
   say(64,3469,0);
   }}
   if (KEY(767)) {
   if ((KEY(170)) ||
   value[1170]==1) {
if (value[ARG1] == 767) value[ARG1]=798;
if (value[ARG2] == 767) value[ARG2]=798;
   }}
   if (KEY(170)) {
if (value[ARG1] == 822) value[ARG1]=798;
if (value[ARG2] == 822) value[ARG2]=798;
   }
   p184(-1,170);
   if (((KEY(170)) ||
   value[1170]==1) &&
   KEY(798)) {
   if (value[1164]==0) {
   set('V',1164,'c',1,NULL,NULL);
   }
   say(64,2776,0);
   }
   if (((KEY(170)) ||
   value[1170]==1) &&
   KEY(764)) {
   if (value[1164]==3) {
   say(64,3390,0);
   }
   say(0,2774,0);
   if (value[1164]==1) {
   set('V',1164,'c',2,NULL,NULL);
   }
   if (value[1164]==2) {
   set('E',170,'c',2,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (KEY(170)) {
   if (anyof(808,807,-1)) {
   say(76,2775,1136);
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3421,0);
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(667,0,-746);
   }
   p467(0,0);
   if (KEY(1015)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p402(void)
#else
int p402()
#endif
{
int done=0;
   if (anyof(744,745,746,747,748,749,750,751,753,754,757,-1)) {
   move(515,-2);
   }
return done;
}
#ifdef __STDC__
int p530(void)
#else
int p530()
#endif
{
int done=0;
   if (KEY(6)) {
   if (isnear(6,-1,-1)) {
   if (value[6]==1) {
   say(76,1598,6);
   }
   say(12,2180,1136);
   if (value[1190]>3) {
   say(64,3302,0);
   } else {
   say(64,1259,0);
   }}
   return 0;
   }
   (*procs[764])();
return done;
}
#ifdef __STDC__
int p366(void)
#else
int p366()
#endif
{
int done=0;
   if (anyof(790,844,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   if (value[1137]<LPROC && value[1137]>= 0) (*procs[value[1137]])(); else pcall(value[1137]);
   }
return done;
}
#ifdef __STDC__
int p367(void)
#else
int p367()
#endif
{
int done=0;
   if (!(bitest(evar(1170),8))) {
   if ((KEY(88)) &&
   isnear(88,-1,-1)) {
   if (bitest(evar(1170),8)) {
   if ((value[HERE]==264)) {
   apport(88,262);
   } else {
   apport(88,264);
   }}
   say(64,1776,0);
   }
   p394();
   }
return done;
}
#ifdef __STDC__
int p368(void)
#else
int p368(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(120)) return 0;
   if ((value[HERE]==443)) {
   say(64,2841,0);
   }
   if (!(bitest(evar(1138),17))) {
   set('V',1146,'c',0,NULL,NULL);
   if (ishere(123,0,3)) {
   value[1146]=123;*bitword(1146)=-1;
   } else    if (ishere(119,0,3)) {
   value[1146]=119;*bitword(1146)=-1;
   } else    if (ishere(136,-1,-1)) {
   if ((value[136]==3) ||
   value[136]>=7) {
   value[1146]=136;*bitword(1146)=-1;
   }}
   if (value[1146]!=0) {
if (value[ARG1] == 120) {value[ARG1]=value[1146]; (void)fake(1,value[1146]);}
if (value[ARG2] == 120) {value[ARG2]=value[1146]; (void)fake(2,value[1146]);}
   }
   return 0;
   }
   if (have(84,-1,-1)) {
   set('E',84,'c',2,NULL,NULL);
   say(72,1736,0);
   }
   if (!(((have(119,-1,-1)) ||
   have(123,-1,-1)) ||
   have(136,-1,-1))) {
   say(76,1393,120);
   }
   set('V',1146,'c',0,NULL,NULL);
   if ((((value[136]==2) ||
   value[136]==1) ||
   value[136]>=7) &&
   have(136,-1,-1)) {
   value[1146]=136;*bitword(1146)=-1;
   } else    if (have(119,0,2)) {
   value[1146]=119;*bitword(1146)=-1;
   } else    if (have(123,0,2)) {
   value[1146]=123;*bitword(1146)=-1;
   }
   if (value[1146]==0) {
   say(64,1833,0);
   }
   if (((value[1146]==136)) &&
   value[136]==1) {
   if ((value[HERE]==200)) {
   say(64,2250,0);
   } else {
   say(0,2251,0);
   say(0,1259,0);
   }}
value[value[1146]]=3;
   say(12,2234,1146);
   say(72,2235,3);
return done;
}
#ifdef __STDC__
int p369(void)
#else
int p369(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(121)) return 0;
   if (ishere(121,-1,-1)) {
   if (!((have(119,-1,-1)) ||
   have(123,-1,-1))) {
   if ((have(136,0,2)) ||
   have(136,0,1)) {
   say(64,2237,0);
   }
   say(76,1393,121);
   }
   if (have(119,0,2)) {
   set('E',119,'c',4,NULL,NULL);
   say(12,2234,119);
   say(72,2235,4);
   }
   if (have(123,0,2)) {
   set('E',123,'c',4,NULL,NULL);
   say(12,2234,123);
   say(72,2235,4);
   }
   say(64,1833,0);
   } else {
   set('V',1146,'c',0,NULL,NULL);
   if (isnear(119,0,4)) {
   value[1146]=119;*bitword(1146)=-1;
   } else    if (isnear(123,0,4)) {
   value[1146]=123;*bitword(1146)=-1;
   }
   if (value[1146]!=0) {
if (value[ARG1] == 121) {value[ARG1]=value[1146]; (void)fake(1,value[1146]);}
if (value[ARG2] == 121) {value[ARG2]=value[1146]; (void)fake(2,value[1146]);}
   }}
return done;
}
#ifdef __STDC__
int p370(void)
#else
int p370()
#endif
{
int done=0;
   default_to(0,value[HERE],3);
   if (KEY(126)) {
   set('E',126,'c',0,NULL,NULL);
   }
   if ((anyof(109,108,66,39,114,137,953,-1)) ||
   anyof(125,59,117,81,100,85,-1)) {
   if (KEY(109)) {
   p373();
   } else    if (KEY(108)) {
   p374();
   } else    if ((((KEY(66)) &&
   (value[HERE]==361)) &&
   ishere(66,-1,-1)) &&
   value[66]!=1) {
   say(64,1460,0);
   }
   if (KEY(39)) {
   p372();
   } else    if (KEY(125)) {
   p381();
   } else    if (KEY(59)) {
   p377();
   } else    if (KEY(117)) {
   p375();
   } else    if (KEY(81)) {
   p376();
   } else    if (KEY(100)) {
   p379();
   } else    if ((KEY(85)) &&
   ishere(85,-1,-1)) {
   say(64,2155,0);
   } else    if (KEY(137)) {
   if (isnear(137,-1,-1)) {
   say(64,2572,0);
   }
   if ((value[HERE]==581)) {
   say(64,1396,0);
   }}}
return done;
}
#ifdef __STDC__
int p371(void)
#else
int p371()
#endif
{
int done=0;
   if (value[1170]==1) {
   return 0;
   }
   if (!(bitest(evar(1137),0))) {
   return 0;
   }
   if (have(value[1137],-1,-1)) {
   say(76,1307,1137);
   }
   if (!(isnear(value[1137],-1,-1))) {
   p39();
   }
   if (KEY(87)) {
   if ((have(136,0,2)) ||
   have(136,0,1)) {
   apport(87,701);
   set('E',136,'c',6,NULL,NULL);
   say(64,2244,0);
   }
   if (have(136,-1,-1)) {
   say(64,2242,0);
   }
   if (!(bitest(139,4))) {
   say(64,3472,0);
   }
   say(0,2243,0);
   if ((have(55,-1,-1)) &&
   !(bitest(55,14))) {
   bitmod('s',55,14);
   say(72,3325,0);
   }
   if ((have(92,-1,-1)) &&
   !(bitest(92,14))) {
   bitmod('s',92,14);
   say(72,3325,1);
   }
   if ((have(84,-1,-1)) &&
   !(bitest(84,14))) {
   bitmod('s',84,14);
   say(72,3325,2);
   }
   if ((have(56,-1,-1)) &&
   !(bitest(56,14))) {
   bitmod('s',56,14);
   say(72,3325,3);
   }
   if ((have(111,-1,-1)) &&
   !(bitest(111,14))) {
   bitmod('s',111,14);
   say(72,3325,4);
   }
   if (have(55,-1,-1)) {
   say(76,3318,55);
   }
   if (have(92,-1,-1)) {
   say(76,3318,92);
   }
   if (have(84,-1,-1)) {
   say(76,3318,84);
   }
   if (have(56,-1,-1)) {
   say(76,3318,56);
   }
   say(64,1259,0);
   }
   if (!(bitest(evar(1137),3))) {
   say(64,1308,0);
   }
   if ((KEY(63)) &&
   value[63]!=0) {
   say(64,2173,0);
   }
   if ((KEY(149)) &&
   value[149]==0) {
   apport(149,INHAND);
   say(12,1704,149);
   set('E',149,'c',1,NULL,NULL);
   longjmp(loop_back,1);
   }
   if ((value[1179]<value[1194]) ||
   bitest(evar(1137),12)) {
   if (KEY(152)) {
   set('E',152,'c',0,NULL,NULL);
   }
   apport(value[1137],INHAND);
   p668();
   say(12,1979,1136);
   if (((KEY(112)) &&
   value[112]==0) &&
   !(bitest(112,4))) {
   say(12,1980,110);
   } else {
   if ((value[1190]==6) &&
   value[1137]==value[1165]) {
   if ((value[1137]==115)) {
   set('T',1980,'c',2,NULL,NULL);
   } else {
   set('T',1980,'c',1,NULL,NULL);
   }
   } else {
   set('T',1980,'c',0,NULL,NULL);
   }
   say(12,1980,1137);
   set('T',1980,'c',0,NULL,NULL);
   }
   if (anyof(110,112,-1)) {
   if (((value[HERE]==447)) ||
   (value[HERE]==448)) {
   bitmod('s',evar(1137),4);
   }}
   if (((KEY(115)) &&
   value[1190]==6) &&
   value[115]==0) {
   say(0,1850,0);
   set('E',115,'c',1,NULL,NULL);
   }
   } else {
   say(0,1381,0);
   flush_command();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p229(void)
#else
int p229()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(126)) {
   set('E',126,'c',1,NULL,NULL);
   }
   if (bitest(evar(1138),15)) {
   say(64,2303,0);
   }
   if ((KEY(152)) &&
   have(152,-1,-1)) {
   if ((587<=value[1138] && value[1138]<=627)) {
   apport(152,702);
   say(64,2799,0);
   }
   if (irand(100)<95) {
   bitmod('s',evar(1210),12);
   } else {
   say(0,3296,0);
   }}
   if (anyof(123,119,136,-1)) {
   p237();
   }
   if ((value[HERE]==618)) {
   p932();
   }
   if ((anyof(109,108,121,120,122,56,127,28,39,-1)) ||
   anyof(100,102,138,87,110,-1)) {
   if (KEY(109)) {
   p231();
   } else    if (KEY(108)) {
   p232();
   } else    if (anyof(121,120,-1)) {
   if (KEY(121)) {
   p320(0,1);
   } else {
   p321(0,1);
   }
   p217();
   } else    if ((KEY(122)) &&
   have(136,0,5)) {
   value[1243]=136;*bitword(1243)=-1;
   p268();
   } else    if ((KEY(87)) &&
   have(136,0,6)) {
   if ((value[HERE]==443||value[HERE]==218)) {
   p304();
   }
   value[1243]=136;*bitword(1243)=-1;
   p268();
   } else    if (KEY(56)) {
   p236();
   } else    if (KEY(127)) {
   p238();
   } else    if ((KEY(28)) &&
   isnear(28,-1,-1)) {
   apport(28,702);
   bitmod('s',28,13);
   value[1189] = irand(12-4+1)+4;
   set('V',1198,'v',1189,NULL,NULL);
   say(64,1625,0);
   } else    if (KEY(39)) {
   if (have(39,-1,-1)) {
   apport(39,HERE);
   say(0,2179,0);
   say(64,1259,0);
   } else    if (isnear(39,0,0)) {
   say(64,1321,0);
   } else    if (isnear(39,0,1)) {
   if (have(106,-1,-1)) {
   set('E',66,'c',1,NULL,NULL);
   set('E',39,'c',2,NULL,NULL);
   say(64,1461,0);
   }
   p625(-1,106);
   } else    if (((value[HERE]==361)) &&
   isnear(39,0,2)) {
   say(64,2594,0);
   } else {
   say(76,2595,1136);
   }
   } else    if (KEY(102)) {
   p235();
   } else    if (KEY(100)) {
   p234();
   } else    if ((((KEY(110)) &&
   ishere(109,-1,-1)) &&
   bitest(138,13)) &&
   !(bitest(evar(1210),3))) {
   apport(110,HERE);
   bitmod('s',evar(1210),3);
   say(72,2348,1);
   } else    if (KEY(138)) {
   if (ishere(109,0,0)) {
   p305();
   } else    if (have(138,-1,-1)) {
   apport(138,701);
   say(0,2350,0);
   bitmod('s',138,13);
   say(64,1259,0);
   }}}
return done;
}
#ifdef __STDC__
int p230(void)
#else
int p230()
#endif
{
int done=0;
   if (value[1170]==1) {
   return 0;
   }
   if (!(bitest(evar(1137),0))) {
   return 0;
   }
   if (have(value[1137],-1,-1)) {
   p127();
   if (KEY(152)) {
   set('E',152,'c',1,NULL,NULL);
   }
   if ((value[HERE]==462)) {
   if ((bitest(evar(1137),15)) ||
   (value[1137]==107)) {
   set('V',1140,'v',1138,NULL,NULL);
   }}
   apport(value[1137],value[1140]);
   if (((value[HERE]==498||value[HERE]==501||value[HERE]==500)) ||
   bitest(evar(1138),12)) {
   if (KEY(118)) {
   apport(118,701);
   if (isnear(94,-1,-1)) {
   say(0,1766,0);
   if (value[94]>1) {
   say(0,1767,0);
   }
   set('E',94,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   }
   } else    if (KEY(132)) {
   set('E',132,'c',3,NULL,NULL);
   if ((value[HERE]==502||value[HERE]==511||value[HERE]==510)) {
   value[132] += 1;
   }
   } else {
   if (KEY(126)) {
   set('E',126,'c',0,NULL,NULL);
   }
   apport(value[1137],502);
   }}
   if (value[1140]==value[1138]) {
   say(12,1979,1136);
   if ((KEY(112)) &&
   value[112]==0) {
   say(12,1980,110);
   } else {
   say(12,1980,1137);
   }
   } else {
   say(12,2028,1137);
   if (bitest(evar(1137),11)) {
   say(10,1141,1);
   } else {
   say(10,1141,0);
   }
   if ((value[1137]==148)) {
   set('E',148,'c',2,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (!(value[1140]==value[1138])) {
   return 0;
   }
   if ((KEY(92)) &&
   !(bitest(92,13))) {
   say(0,2821,0);
   bitmod('s',92,13);
   } else {
   if (anyof(123,119,136,-1)) {
   p237();
   }}
   } else {
   if (anyof(168,3,-1)) {
   return 0;
   }
   if (bitest(evar(1137),3)) {
   say(12,1311,1137);
   } else {
   say(12,3329,1137);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p391(void)
#else
int p391()
#endif
{
int done=0;
   if (value[1170]==1) {
   say(76,1371,1136);
   }
   if (((((743<=value[1136] && value[1136]<=755)) ||
   (743<=value[1137] && value[1137]<=755)) ||
   (886<=value[1137] && value[1137]<=902)) ||
   anyof(760,888,757,756,-1)) {
   if (value[1137]<LPROC && value[1137]>= 0) (*procs[value[1137]])(); else pcall(value[1137]);
   } else {
   if (bitest(evar(1137),1)) {
   if ((value[HERE]==value[1137])) {
   say(64,1340,0);
   }
   say(64,1417,0);
   }
   if (anyof(20,193,85,17,39,88,-1)) {
   if (isnear(value[1137],-1,-1)) {
   say(76,2071,1137);
   }
   p39();
   }
   say(64,1999,0);
   }
return done;
}
#ifdef __STDC__
int p108(void)
#else
int p108()
#endif
{
int done=0;
   if ((value[HERE]==201||value[HERE]==195||value[HERE]==202||value[HERE]==200)) {
   say(64,1339,0);
   }
   say(64,1340,0);
return done;
}
#ifdef __STDC__
int p633(void)
#else
int p633()
#endif
{
int done=0;
   p320(0,0);
   if ((value[1243]==0) &&
   !(value[HERE]==217)) {
   say(12,1506,121);
   if (have(127,-1,-1)) {
glue_text();
   say(0,1888,0);
   }
   longjmp(loop_back,1);
   }
   if (value[1170]>1) {
   if (((value[1136]==121)) &&
   !isnear(value[1137],-1,-1)) {
   p39();
   }}
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   p39();
   }
   if (anyof(19,161,164,-1)) {
   if (((isnear(19,-1,-1)) ||
   isnear(161,-1,-1)) ||
   isnear(164,-1,-1)) {
   say(64,2501,0);
   }}
   if (KEY(13)) {
   set('V',1247,'c',1,NULL,NULL);
   p217();
   say(64,1398,0);
   }
   if (anyof(139,-1))   say(64,1396,0);
   if (KEY(98)) {
   if (((value[HERE]==482)) &&
   have(148,0,1)) {
   say(76,1731,121);
   }
   if ((value[HERE]==481||value[HERE]==482)) {
   say(64,1718,0);
   }}
   if (KEY(75)) {
   set('V',1247,'c',1,NULL,NULL);
   p217();
   set('E',75,'c',1,NULL,NULL);
   say(64,2174,0);
   }
   if (KEY(124)) {
   set('T',2185,'c',3,NULL,NULL);
   } else    if (KEY(125)) {
   if (value[125]==0) {
   set('T',2185,'c',1,NULL,NULL);
   } else {
   set('T',2185,'c',2,NULL,NULL);
   }
   } else    if (KEY(106)) {
   set('T',2185,'c',4,NULL,NULL);
   } else {
   set('T',2185,'c',0,NULL,NULL);
   }
   if ((value[1136]==121)) {
   say(76,2185,1137);
   } else {
   say(76,2185,1136);
   }
return done;
}
#ifdef __STDC__
int p834(void)
#else
int p834()
#endif
{
int done=0;
   if (anyof(124,125,54,-1)) {
   if (bitest(evar(1170),8)) {
   p907();
   }}
return done;
}
#ifdef __STDC__
int p835(void)
#else
int p835(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(120)) return 0;
   p321(0,1);
   p217();
return done;
}
#ifdef __STDC__
int p836(void)
#else
int p836(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(121)) return 0;
   p320(0,1);
   p217();
return done;
}
#ifdef __STDC__
int p837(void)
#else
int p837(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(122)) return 0;
   if (have(136,0,5)) {
   value[1243]=136;*bitword(1243)=-1;
   p217();
   } else {
   say(76,1506,122);
   }
return done;
}
#ifdef __STDC__
int p838(void)
#else
int p838(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(87)) return 0;
   if (have(136,0,6)) {
   say(64,2245,0);
   } else {
   p625(-1,87);
   }
return done;
}
#ifdef __STDC__
int p839(void)
#else
int p839(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(118)) return 0;
   if (have(118,-1,-1)) {
   if (isnear(23,-1,-1)) {
   say(64,1475,0);
   }
   if (isnear(193,-1,-1)) {
   apport(118,HERE);
   bitmod('s',193,14);
   say(64,1392,0);
   }
   if (isnear(39,-1,-1)) {
   apport(118,701);
   set('E',39,'c',1,NULL,NULL);
   if (value[124]==1) {
   set('E',124,'c',0,NULL,NULL);
   }
   say(64,1458,0);
   }
   if (isnear(94,-1,-1)) {
   say(0,1766,0);
   apport(118,701);
   if (value[94]>1) {
   say(64,1767,0);
   }
   longjmp(loop_back,1);
   }}
return done;
}
#ifdef __STDC__
int p840(void)
#else
int p840(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(126)) return 0;
   if (have(126,-1,-1)) {
   p792();
   }
return done;
}
#ifdef __STDC__
int p841(void)
#else
int p841(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(127)) return 0;
   if (have(127,-1,-1)) {
   p73();
   }
return done;
}
#ifdef __STDC__
int p842(void)
#else
int p842()
#endif
{
int done=0;
   if (value[1170]==2) {
   if (bitest(evar(1137),0)) {
   if ((have(value[1137],-1,-1)) &&
   value[1138]!=value[1142]) {
   p127();
   p875();
   }}
   if ((value[1137]==119||value[1137]==123||value[1137]==136)) {
   apport(value[1137],HERE);
   say(12,1979,1136);
   value[1248]=value[value[1137]];*bitword(1248)=0;
   if (value[1248]>2) {
   if (value[1248]==6) {
   set('E',136,'c',1,NULL,NULL);
   apport(87,value[1138]);
   } else {
value[value[1137]]=2;
   if (!((587<=value[1138] && value[1138]<=627))) {
   bitmod('s',evar(1138),13);
   }}
   if (bitest(evar(1170),8)) {
   say(12,1981,1137);
   say(76,2253,1248);
   }}
   say(76,1980,1137);
   }}
   (*procs[765])();
return done;
}
#ifdef __STDC__
int p744(void)
#else
int p744()
#endif
{
int done=0;
   if (value[1170]>1) {
   if (KEY(126)) {
   if (have(126,-1,-1)) {
   p792();
   }
   p625(*bitword(1137),value[1137]);
   }
   if (KEY(138)) {
   (*procs[765])();
   }
   if (anyof(51,48,71,-1))   say(76,1409,1137);
   if (anyof(151,-1))   say(64,2401,0);
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p904(void)
#else
int p904(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(147)) return 0;
   if (!(have(147,-1,-1))) {
   return 0;
   }
   if (bitest(evar(1138),7)) {
   say(64,2460,0);
   }
   if (bitest(evar(1170),8)) {
   say(0,2461,0);
   } else {
   say(0,2462,0);
   }
   if ((value[HERE]==491)) {
   if (value[163]>1) {
   say(64,2458,0);
   }
   if (value[163]==0) {
   apport(163,value[1138]);
   bitmod('s',163,4);
   set('E',163,'c',1,NULL,NULL);
   set('E',491,'c',1,NULL,NULL);
   }
   value[1147]=467-1; while(++value[1147]<=476) {
   bitmod('c',evar(1147),8);
   bitmod('c',evar(1147),4);
   }
   set('E',164,'c',0,NULL,NULL);
   set('E',479,'c',0,NULL,NULL);
   set('E',478,'c',0,NULL,NULL);
   say(0,2463,0);
   set('E',477,'c',1,NULL,NULL);
   value[163] = irand(10);
   value[163] += 25;
   bitmod('c',evar(1171),7);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p905(void)
#else
int p905(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(63)) return 0;
   if (isnear(63,-1,-1)) {
   if (value[63]==0) {
   say(72,2653,0);
   } else    if (bitest(63,13)) {
   say(72,2653,1);
   } else {
   say(72,2653,2);
   }}
return done;
}
#ifdef __STDC__
int p906(void)
#else
int p906()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   bitmod('s',17,13);
   if ((value[1170]>1) &&
   !KEY(17)) {
   if (!(bitest(evar(1137),0))) {
   return 0;
   }
   if (!(bitest(evar(1137),3))) {
   say(64,1308,0);
   }
   if (!(have(value[1137],-1,-1))) {
   say(76,1311,1137);
   }
   } else {
   if (isnear(17,-1,-1)) {
   say(0,2133,0);
   say(64,1259,0);
   }
   default_to(0,value[HERE],8);
   if (value[1170]==1) {
   say(64,2134,0);
   }
   say(76,2817,1137);
   }
   if (KEY(110)) {
   if ((547<=value[1138] && value[1138]<=564)) {
   say(64,2410,0);
   }
   if (isnear(10,-1,-1)) {
   if (value[1190]<5) {
   value[10] += 1;
   if (value[10]==2) {
   set('E',10,'c',0,NULL,NULL);
   bitmod('s',10,10);
   apport(11,701);
   } else {
   bitmod('c',10,10);
   }
   say(12,1977,10);
   } else {
   say(0,1322,0);
   }
   } else    if (isnear(33,-1,-1)) {
   if (value[1190]>4) {
   say(64,1322,0);
   }
   say(8,1564,0);
   set('E',33,'c',1,NULL,NULL);
   } else    if ((isnear(31,-1,-1)) &&
   value[1190]<5) {
   value[31] += 1;
   say(0,31,0);
   value[31] += 1;
   if (value[31]==4) {
   set('E',31,'c',0,NULL,NULL);
   bitmod('s',31,10);
   apport(11,701);
   } else {
   apport(11,value[1138]);
   bitmod('c',31,10);
   }
   } else    if ((value[HERE]==318)) {
   if (bitest(318,16)) {
   say(8,2307,1);
   } else {
   say(8,2307,0);
   bitmod('s',318,16);
   }
   if (!(bitest(evar(1210),10))) {
   bitmod('s',evar(1170),12);
   }
   lval[0]=594-1; while(++lval[0]<=617) {
   p805(-1,lval[0]);
   }
   move(627,-1);
   } else    if ((value[HERE]==627)) {
   if (bitest(627,16)) {
   say(8,2308,1);
   } else {
   say(8,2308,0);
   bitmod('s',627,16);
   }
   move(318,-1);
   } else    if (isnear(109,-1,-1)) {
   if (value[109]==0) {
   if ((value[HERE]==208)) {
   apport(109,207);
   } else {
   apport(109,208);
   }}
   if (value[109]==1) {
   say(64,3468,0);
   }
   say(64,2421,0);
   } else    if (((((bitest(10,13)) &&
   !(bitest(evar(1210),4))) &&
   !(bitest(evar(1138),7))) &&
   !(547<=value[1138] && value[1138]<=702)) &&
   irand(100)<1) {
   bitmod('s',evar(1210),4);
   if (bitest(evar(1170),8)) {
   say(64,2371,0);
   }
   } else    if (value[2480]>0) {
   say(64,2483,0);
   } else {
   say(64,1322,0);
   }
   } else {
   if (anyof(124,125,54,-1)) {
   if (!(bitest(evar(1170),8))) {
   say(76,2132,1137);
   }
   p907();
   } else {
   say(64,1322,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p617(void)
#else
int p617()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p785(void)
#else
int p785()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p874(void)
#else
int p874()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   anyof(758,848,-1)) {
   say(72,1287,753);
   }
   say(64,1345,0);
return done;
}
#ifdef __STDC__
int p224(void)
#else
int p224()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   anyof(758,848,-1)) {
   say(72,1287,754);
   }
   say(64,1345,0);
return done;
}
#ifdef __STDC__
int p251(void)
#else
int p251()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p916(void)
#else
int p916()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p622(void)
#else
int p622()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p623(void)
#else
int p623()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p790(void)
#else
int p790()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p791(void)
#else
int p791()
#endif
{
int done=0;
   p614();
return done;
}
#ifdef __STDC__
int p485(void)
#else
int p485()
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
   if (value[1170]>1) {
   say(64,1486,0);
   }
   set('L',1,'c',0,lval, lbts);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (have(lval[0],-1,-1)) {
   if (lval[1]==0) {
   if (bitest(evar(1170),8)) {
   say(8,1388,0);
   } else {
   say(8,1388,1);
   }
   set('L',2,'l',0,lval, lbts);
   }
   lval[1] += 1;
   say(0,lval[0],0);
   }}
   if (lval[1]==0) {
   say(0,1382,0);
   } else    if (lval[1]==1) {
   set('E',166,'l',2,lval, lbts);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p275(void)
#else
int p275()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (value[1170]==1) {
   if (!(bitest(evar(1170),2))) {
   bitmod('s',evar(1170),3);
   }
   p187();
   bitmod('c',evar(1170),3);
   bitmod('s',evar(1138),4);
   if (value[1212]==25) {
   set('V',1212,'c',100,NULL,NULL);
   say(64,3352,0);
   }
   if (bitest(evar(1172),3)) {
   value[1212] += 1;
   }
   longjmp(loop_back,1);
   }
   if (anyof(1003,-1))   say(64,2811,0);
   if (anyof(1133,-1))   say(76,2708,1137);
   if (anyof(1127,-1))   say(76,2888,1137);
   if ((743<=value[1137] && value[1137]<=752)) {
   say(76,2695,1137);
   }
   if (KEY(173)) {
   if (isnear(27,-1,-1)) {
   say(76,3350,27);
   }
   if (isnear(147,-1,-1)) {
   say(76,3350,147);
   }}
   if ((KEY(201)) &&
   (531<=value[1138] && value[1138]<=537)) {
   say(64,2675,0);
   }
   if (anyof(1126,-1))   say(64,2701,0);
   if (KEY(1132)) {
   if ((587<=value[1138] && value[1138]<=627)) {
   say(72,2678,4);
   } else    if ((value[HERE]==318)) {
   say(76,2678,318);
   }}
   if (KEY(976)) {
   if ((587<=value[1138] && value[1138]<=627)) {
   say(72,2677,0);
   } else    if ((value[HERE]==588)) {
   say(72,2677,3);
   } else    if ((value[HERE]==318)) {
   if (value[318]==2) {
   say(72,2677,1);
   } else    if (value[318]==3) {
   say(72,2677,2);
   }
   } else    if ((value[HERE]==444||value[HERE]==446)) {
   say(72,2676,1);
   } else    if ((value[HERE]==544||value[HERE]==542||value[HERE]==543)) {
   say(72,2676,2);
   } else    if (((value[HERE]==573||value[HERE]==574||value[HERE]==568||value[HERE]==566||value[HERE]==567)) ||
   (value[HERE]==561||value[HERE]==559||value[HERE]==560)) {
   say(72,2682,976);
   } else    if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   say(72,2676,0);
   }}
   if (KEY(888)) {
   if ((bitest(evar(1138),7)) &&
   !(value[HERE]==203||value[HERE]==438||value[HERE]==318||value[HERE]==627)) {
   say(72,1312,888);
   } else {
   say(64,2670,0);
   }}
   if (anyof(376,475,753,-1)) {
   if (((642<=value[1138] && value[1138]<=648)) ||
   (651<=value[1138] && value[1138]<=670)) {
   say(72,2011,20);
   }
   if ((391<=value[1138] && value[1138]<=426)) {
   say(72,2011,12);
   }
   if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   say(72,2011,0);
   }
   say(76,2025,376);
   }
   if (anyof(936,76,855,-1)) {
   if (value[1137]<LPROC && value[1137]>= 0) (*procs[value[1137]])(); else pcall(value[1137]);
   }
   if (((631<=value[1138] && value[1138]<=632)) ||
   (635<=value[1138] && value[1138]<=638)) {
   if (anyof(635,898,-1))   say(72,2617,0);
   if (anyof(912,-1))   say(72,2617,1);
   if (anyof(120,898,-1))   say(72,2617,2);
   if (anyof(1061,-1))   say(72,2617,3);
   if (anyof(993,999,1007,-1))   say(72,2617,4);
   }
   if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   if (anyof(753,-1))   say(72,2468,1);
   if (anyof(1132,-1))   say(64,2021,0);
   } else {
   if (anyof(753,-1))   say(72,2468,0);
   if (anyof(1132,-1))   say(72,1312,1132);
   }
   if (anyof(1133,-1))   say(64,1446,0);
   if (anyof(754,-1))   say(64,2469,0);
   if (anyof(95,145,46,-1)) {
   p127();
   }
   if ((anyof(173,63,-1)) &&
   isnear(63,-1,-1)) {
   p701();
   }
   if (anyof(129,173,91,74,116,73,-1)) {
   (*procs[798])();
   longjmp(loop_back,1);
   }
   if ((KEY(912)) &&
   (value[HERE]==473||value[HERE]==474||value[HERE]==476)) {
   say(64,2443,0);
   }
   if ((KEY(87)) &&
   isnear(136,0,6)) {
   say(32,87,0);
   longjmp(loop_back,1);
   }
   if ((KEY(1005)) &&
   isnear(148,-1,-1)) {
   say(64,2816,0);
   }
   if (KEY(1069)) {
   if (((587<=value[1138] && value[1138]<=627)) &&
   !(value[HERE]==618)) {
   if (bitest(evar(1138),15)) {
   p534(0,0);
   set('L',1,'v',1138,lval, lbts);
   lval[0]=594;lbts[0*VARSIZE]=-1;
   lval[1] -= lval[0];
   set('T',2996,'l',1,lval, lbts);
   if ((value[HERE]==596||value[HERE]==597||value[HERE]==601||value[HERE]==607||value[HERE]==610)) {
   say(12,2995,1245);
   set('L',0,'c',0,lval, lbts);
   } else {
   set('L',0,'c',1,lval, lbts);
   say(12,2997,1245);
   }
   if (value[1245]==0) {
   say(64,1259,0);
   }
   p534(*bitword(1245),value[1245]);
   say(0,3200,0);
   if ((value[HERE]==604)) {
   say(0,3373,0);
   }
   say(64,1259,0);
   }
   if ((value[HERE]==619)) {
   say(72,3001,0);
   }
   if ((value[HERE]==623)) {
   say(72,3001,1);
   }
   if ((value[HERE]==626)) {
   say(72,3001,2);
   }
   say(64,3000,0);
   } else {
   say(72,1312,1069);
   }}
   if (anyof(938,-1))   say(64,3457,0);
   if (KEY(1054)) {
   if ((((((value[HERE]==220||value[HERE]==462||value[HERE]==463||value[HERE]==464||value[HERE]==473)) ||
   (value[HERE]==474||value[HERE]==475||value[HERE]==282||value[HERE]==448)) ||
   isnear(110,-1,-1)) ||
   isnear(112,-1,-1)) ||
   isnear(111,-1,-1)) {
   say(64,3080,0);
   }}
   if (((KEY(40)) &&
   isnear(107,-1,-1)) &&
   !isnear(40,-1,-1)) {
   if (anyof(40,-1))   say(64,3458,0);
   }
return done;
}
#ifdef __STDC__
int p276(void)
#else
int p276(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(61)) return 0;
   if (isnear(61,-1,-1)) {
   say(32,61,0);
   if (value[61]==0) {
   value[61] += 1;
   }
   longjmp(loop_back,1);
   }
   p39();
return done;
}
#ifdef __STDC__
int p277(void)
#else
int p277(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(121)) return 0;
   p320(0,0);
   if ((value[1243]!=0) ||
   isnear(121,-1,-1)) {
   say(64,1917,0);
   }
return done;
}
#ifdef __STDC__
int p278(void)
#else
int p278(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(13)) return 0;
   if (((isnear(14,-1,-1)) &&
   value[14]>0) ||
   isnear(13,-1,-1)) {
   say(76,2073,13);
   }
return done;
}
#ifdef __STDC__
int p279(void)
#else
int p279(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(139)) return 0;
   if ((((isnear(140,-1,-1)) &&
   value[139]==2) ||
   isnear(139,-1,-1)) ||
   (value[HERE]==444||value[HERE]==446)) {
   say(76,2074,139);
   }
return done;
}
#ifdef __STDC__
int p280(void)
#else
int p280(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(120)) return 0;
   if ((isnear(119,0,3)) ||
   bitest(evar(1138),17)) {
   say(64,2072,0);
   }
return done;
}
#ifdef __STDC__
int p281(void)
#else
int p281(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(593)) return 0;
   if ((((bitest(593,4)) &&
   (606<=value[1138] && value[1138]<=608)) ||
   (612<=value[1138] && value[1138]<=613)) ||
   (value[HERE]==627)) {
   say(76,2585,593);
   }
   if ((((609<=value[1138] && value[1138]<=611)) ||
   (614<=value[1138] && value[1138]<=616)) ||
   (value[HERE]==617)) {
   say(64,2402,0);
   }
   if ((587<=value[1138] && value[1138]<=593)) {
   say(64,2403,0);
   }
return done;
}
#ifdef __STDC__
int p282(void)
#else
int p282(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(122)) return 0;
   if (isnear(136,0,5)) {
   say(64,2648,0);
   }
return done;
}
#ifdef __STDC__
int p283(void)
#else
int p283()
#endif
{
int done=0;
   if (anyof(756,-1))   say(72,1291,1);
   if (anyof(757,-1))   say(64,2654,0);
   if (bitest(evar(1137),0)) {
   if (!(isnear(value[1137],-1,-1))) {
   p39();
   }
   } else    if (bitest(evar(1137),1)) {
   if (KEY(547)) {
   if ((value[HERE]==199)) {
   say(64,2580,0);
   }
   if ((547<=value[1138] && value[1138]<=575)) {
   say(64,2581,0);
   }}
   if ((value[HERE]==value[1137])) {
   say(64,1446,0);
   }
   p39();
   }
   if (KEY(949)) {
   if (((((value[HERE]==199||value[HERE]==586||value[HERE]==561||value[HERE]==502)) ||
   (547<=value[1138] && value[1138]<=555)) ||
   (557<=value[1138] && value[1138]<=558)) ||
   (438<=value[1138] && value[1138]<=442)) {
   say(64,2587,0);
   }}
   if (anyof(898,-1))   say(76,1312,1137);
   if (KEY(11)) {
   p539();
   }
   if (KEY(81)) {
   (*procs[854])();
   }
   if ((KEY(887)) &&
   isnear(84,-1,-1)) {
   say(64,3471,0);
   }
return done;
}
#ifdef __STDC__
int p284(void)
#else
int p284(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(102)) return 0;
   if (bitest(evar(1210),6)) {
   say(76,2285,102);
   }
   bitmod('s',evar(1210),6);
return done;
}
#ifdef __STDC__
int p285(void)
#else
int p285(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(123)) return 0;
   if (value[123]<2) {
   say(64,2089,0);
   }
return done;
}
#ifdef __STDC__
int p286(void)
#else
int p286(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(115)) return 0;
   if (((value[1190]==6) &&
   value[115]==0) &&
   have(115,-1,-1)) {
   set('E',115,'c',1,NULL,NULL);
   say(64,1850,0);
   }
return done;
}
#ifdef __STDC__
int p287(void)
#else
int p287()
#endif
{
int done=0;
   if (anyof(935,920,-1)) {
   if ((value[HERE]==438||value[HERE]==443||value[HERE]==444||value[HERE]==445)) {
   say(64,2367,0);
   }
   if ((value[HERE]==439||value[HERE]==440||value[HERE]==441||value[HERE]==442)) {
   say(64,2368,0);
   }
   if (((value[HERE]==318||value[HERE]==618)) ||
   (620<=value[1138] && value[1138]<=627)) {
   say(64,2369,0);
   }}
   if (((KEY(920)) &&
   (587<=value[1138] && value[1138]<=619)) &&
   !(value[HERE]==590)) {
   say(64,2374,0);
   }
return done;
}
#ifdef __STDC__
int p288(void)
#else
int p288(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(1019)) return 0;
   if (((value[HERE]==318||value[HERE]==618)) ||
   (620<=value[1138] && value[1138]<=627)) {
   say(64,2369,0);
   }
   if ((value[HERE]==604||value[HERE]==605)) {
   say(64,2370,0);
   }
return done;
}
#ifdef __STDC__
int p289(void)
#else
int p289(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(921)) return 0;
   if (((((519<=value[1138] && value[1138]<=544)) ||
   (195<=value[1138] && value[1138]<=203)) &&
   !(value[HERE]==200)) ||
   (value[HERE]==518||value[HERE]==444||value[HERE]==446)) {
   say(72,2372,0);
   }
   if ((value[HERE]==441||value[HERE]==440||value[HERE]==442)) {
   say(64,2373,0);
   }
   if ((value[HERE]==443)) {
   say(76,2074,139);
   }
return done;
}
#ifdef __STDC__
int p290(void)
#else
int p290()
#endif
{
int done=0;
   if (KEY(141)) {
   set('T',2249,'c',1,NULL,NULL);
   }
   if ((KEY(149)) &&
   !have(149,-1,-1)) {
   say(64,1703,0);
   }
   if (KEY(92)) {
   bitmod('s',92,13);
   }
   if ((bitest(evar(1137),0)) ||
   bitest(evar(1137),1)) {
   if (((KEY(4)) &&
   value[4]>0) &&
   !isnear(5,-1,-1)) {
   say(12,2340,4);
   }
   say(34,1137,0);
   if (((KEY(4)) &&
   value[4]>0) &&
   !isnear(5,-1,-1)) {
   apport(5,value[1138]);
   bitmod('s',5,4);
   say(0,2329,0);
   bitmod('c',5,13);
   value[4] += 1;
   longjmp(loop_back,1);
   }
   if (((KEY(151)) &&
   value[151]!=2) &&
   value[151]!=0) {
   say(0,2377,0);
   set('E',151,'c',2,NULL,NULL);
   }
   if (KEY(104)) {
   value[1147]=location[104];*bitword(1147)=-1;
   apport(104,702);
   apport(105,value[1147]);
   }
   longjmp(loop_back,1);
   }
   if (bitest(evar(1137),2)) {
   if ((886<=value[1137] && value[1137]<=902)) {
   if (anyof(892,-1))   say(72,1312,892);
   say(64,1446,0);
   }
   if (((903<=value[1137] && value[1137]<=1134)) ||
   KEY(781)) {
   if (KEY(935)) {
   if (((bitest(evar(1138),7)) &&
   !(value[HERE]==195||value[HERE]==539||value[HERE]==541||value[HERE]==540||value[HERE]==545)) &&
   !(481<=value[1138] && value[1138]<=487)) {
   say(64,1396,0);
   }
   say(76,2025,1137);
   }
   if (anyof(1126,-1))   say(64,1446,0);
   p39();
   }
   say(64,1396,0);
   }
   if (anyof(1015,74,-1)) {
   if (isnear(123,-1,-1)) {
   say(64,3341,0);
   }
   if (isnear(107,-1,-1)) {
   say(64,3342,0);
   }}
return done;
}
#ifdef __STDC__
int p751(void)
#else
int p751()
#endif
{
int done=0;
   if (!((value[1170]==1) ||
   KEY(81))) {
   say(64,1308,0);
   }
   if (!(bitest(evar(1170),8))) {
   say(64,1882,0);
   }
   if (isnear(81,-1,-1)) {
   bitmod('s',evar(1234),4);
   p889();
   }
   if (((value[HERE]==463)) &&
   (location[81]==462)) {
   say(64,1691,0);
   }
   say(64,1883,0);
return done;
}
#ifdef __STDC__
int p822(void)
#else
int p822()
#endif
{
int done=0;
   if (KEY(40)) {
if (value[ARG1] == 937) {value[ARG1]=799; (void)fake(1,799);}
if (value[ARG2] == 937) {value[ARG2]=799; (void)fake(2,799);}
   (*procs[799])();
   } else    if (isnear(107,-1,-1)) {
   if (anyof(822,-1))   say(64,3456,0);
   if ((value[1170]==1) ||
   anyof(808,818,390,107,777,778,-1)) {
   if (value[107]==0) {
if (value[ARG1] == 937) {value[ARG1]=777; (void)fake(1,777);}
if (value[ARG2] == 937) {value[ARG2]=777; (void)fake(2,777);}
   (*procs[777])();
   } else {
if (value[ARG1] == 937) {value[ARG1]=778; (void)fake(1,778);}
if (value[ARG2] == 937) {value[ARG2]=778; (void)fake(2,778);}
   (*procs[778])();
   }
   } else {
   say(64,1396,0);
   }
   } else {
   say(72,1312,937);
   }
return done;
}
#ifdef __STDC__
int p636(void)
#else
int p636()
#endif
{
int done=0;
   if (value[1170]==2) {
   if ((bitest(evar(1136),16)) ||
   bitest(evar(1137),16)) {
if (value[ARG1] == 777) {value[ARG1]=771; (void)fake(1,771);}
if (value[ARG2] == 777) {value[ARG2]=771; (void)fake(2,771);}
   (*procs[771])();
   }}
   (*procs[779])();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p531(void)
#else
int p531()
#endif
{
int done=0;
   if (KEY(778)) {
   (*procs[780])();
   }
   if (KEY(738)) {
   (*procs[738])();
   }
   if ((anyof(107,777,-1)) ||
   value[1170]==1) {
   if (isnear(107,-1,-1)) {
   if (value[107]==1) {
   say(72,1320,1);
   }
   if (value[1173]<40) {
   if (isnear(40,0,1)) {
   say(0,1532,0);
   set('E',40,'c',3,NULL,NULL);
   value[1173] += 400;
   }}
   if (value[1173]>0) {
   say(8,1319,1);
   set('E',107,'c',1,NULL,NULL);
   if (!(bitest(evar(1170),8))) {
   bitmod('s',evar(1170),8);
   if (isnear(88,-1,-1)) {
   p657();
   }
   set('V',1170,'c',1,NULL,NULL);
   set('E',16,'c',0,NULL,NULL);
   (*procs[822])();
   }
   longjmp(loop_back,1);
   } else {
   say(0,1477,0);
   }
   } else {
   if (KEY(107)) {
   p39();
   }
   say(64,1318,0);
   }
   longjmp(loop_back,1);
   }
   (*procs[817])();
return done;
}
#ifdef __STDC__
int p631(void)
#else
int p631()
#endif
{
int done=0;
   if (value[1170]==2) {
   if ((bitest(evar(1136),16)) ||
   bitest(evar(1137),16)) {
if (value[ARG1] == 778) {value[ARG1]=772; (void)fake(1,772);}
if (value[ARG2] == 778) {value[ARG2]=772; (void)fake(2,772);}
   (*procs[772])();
   }}
   (*procs[780])();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p294(void)
#else
int p294()
#endif
{
int done=0;
   if (KEY(738)) {
   (*procs[738])();
   }
   if ((anyof(107,778,-1)) ||
   value[1170]==1) {
   if (isnear(107,-1,-1)) {
   if (value[107]==0) {
   say(72,1320,0);
   }
   set('E',107,'c',0,NULL,NULL);
   say(8,1319,0);
   p487();
   if (bitest(evar(1170),8)) {
   if ((value[HERE]==315)) {
   p665();
   say(0,16,0);
   }
   } else {
   p849(0,0);
   }
   } else {
   if (KEY(107)) {
   p39();
   }
   return 0;
   }
   longjmp(loop_back,1);
   } else {
   say(64,1429,0);
   }
   say(64,1999,0);
return done;
}
#ifdef __STDC__
int p870(void)
#else
int p870()
#endif
{
int done=0;
   default_to(0,value[HERE],9);
   if ((((KEY(6)) &&
   ishere(6,-1,-1)) &&
   value[6]==0) &&
   !have(106,-1,-1)) {
   p625(-1,106);
   }
   if (anyof(19,161,164,-1))   say(64,2500,0);
   (*procs[767])();
return done;
}
#ifdef __STDC__
int p639(void)
#else
int p639(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(322)) return 0;
   if ((value[HERE]==322)) {
   if (isnear(28,-1,-1)) {
   apport(28,702);
   bitmod('s',28,13);
   say(64,1625,0);
   }
   say(64,1627,0);
   }
   p39();
return done;
}
#ifdef __STDC__
int p640(void)
#else
int p640()
#endif
{
int done=0;
   if (anyof(831,-1))   say(64,1332,0);
   if ((KEY(141)) &&
   isnear(141,-1,-1)) {
   say(64,1763,0);
   }
   if ((KEY(769)) &&
   isnear(6,-1,-1)) {
   set('V',1170,'c',2,NULL,NULL);
   value[1136]=768;*bitword(1136)=-1;
   value[1137]=6;*bitword(1137)=-1;
   (*procs[768])();
   }
   default_to(0,value[HERE],9);
   if ((value[1170]==2) &&
   !isnear(value[1137],-1,-1)) {
   p39();
   }
   if ((anyof(119,43,52,108,114,115,127,106,98,-1)) ||
   anyof(151,76,-1)) {
   if (anyof(119,-1))   say(64,1928,0);
   if (anyof(43,-1))   say(64,1927,0);
   if (anyof(52,-1))   say(64,1847,0);
   if (anyof(108,-1))   say(64,1260,0);
   if (anyof(114,115,-1)) {
   p651();
   }
   if (KEY(127)) {
   p73();
   }
   if (anyof(106,-1))   say(64,1337,0);
   if (KEY(76)) {
   if ((value[HERE]==284)) {
   say(64,2086,0);
   }
   say(64,2087,0);
   }
   if (anyof(98,-1))   say(64,1719,0);
   if (KEY(151)) {
   if ((value[HERE]==443||value[HERE]==218)) {
   p304();
   }
   say(64,2401,0);
   }}
return done;
}
#ifdef __STDC__
int p641(void)
#else
int p641()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (anyof(6,66,36,4,-1)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (((KEY(4)) &&
   lval[0]>=1) ||
   lval[0]==1) {
   say(76,1598,1137);
   }
   if ((KEY(925)) &&
   !(value[HERE]==490)) {
   p39();
   }
   if (anyof(4,925,-1)) {
   if (value[5]==2) {
   say(64,2325,0);
   } else {
   set('E',4,'c',1,NULL,NULL);
   say(64,2326,0);
   }}
   if (!((KEY(36)) ||
   have(106,-1,-1))) {
   if (KEY(6)) {
   (*procs[797])();
   }
   p625(-1,106);
   }}
return done;
}
#ifdef __STDC__
int p642(void)
#else
int p642(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
if (!KEY(6)) return 0;
   if ((value[1190]>4) ||
   bitest(evar(1171),2)) {
   say(0,1317,0);
   if (value[1190]>4) {
   bitmod('s',evar(1171),3);
   if (!(bitest(6,13))) {
   bitmod('s',6,13);
   say(64,1414,0);
   }}
   longjmp(loop_back,1);
   }
   set('E',6,'c',1,NULL,NULL);
   bitmod('c',203,8);
   set('L',0,'c',1,lval, lbts);
   if (KEY(767)) {
   lval[0] += 1;
   }
   say(72,1316,lval[0]);
return done;
}
#ifdef __STDC__
int p643(void)
#else
int p643(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(66)) return 0;
   if (value[39]==0) {
   say(64,1321,0);
   }
   set('E',66,'c',1,NULL,NULL);
   set('E',39,'c',2,NULL,NULL);
   say(64,1461,0);
return done;
}
#ifdef __STDC__
int p644(void)
#else
int p644(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(8)) return 0;
   if (isnear(8,-1,-1)) {
   if (value[8]==0) {
   say(64,1397,0);
   }
   say(64,1260,0);
   }
return done;
}
#ifdef __STDC__
int p645(void)
#else
int p645(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(19)) return 0;
   if (isnear(19,-1,-1)) {
   if (value[1254]==1) {
   if (value[575]==1) {
   say(76,1598,8);
   }
   if ((value[HERE]==575)) {
   value[1149]=808;*bitword(1149)=-1;
   } else {
   value[1149]=807;*bitword(1149)=-1;
   }
   p652();
   }
   if (value[575]==1) {
   say(12,1598,8);
   }
   say(76,2496,8);
   }
return done;
}
#ifdef __STDC__
int p646(void)
#else
int p646(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(161)) return 0;
   if ((value[HERE]==472)) {
   if (value[161]==0) {
   say(64,1887,0);
   }
   if (value[161]==2) {
   set('E',161,'c',1,NULL,NULL);
   value[163] += 1;
   set('E',472,'c',1,NULL,NULL);
   say(64,2505,0);
   }
   say(76,1598,8);
   } else    if ((value[HERE]==473)) {
   if (value[161]==0) {
   say(64,2496,0);
   }
   if (value[161]==2) {
   set('E',161,'c',1,NULL,NULL);
   set('E',472,'c',1,NULL,NULL);
   say(64,1260,0);
   }
   say(76,1598,8);
   }
return done;
}
#ifdef __STDC__
int p647(void)
#else
int p647(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(164)) return 0;
   if (isnear(164,-1,-1)) {
   if (value[1190]==5) {
   say(64,2496,0);
   }
   if (value[164]==1) {
   say(76,1598,8);
   }
   set('E',164,'c',1,NULL,NULL);
   set('E',479,'c',1,NULL,NULL);
   set('E',478,'c',1,NULL,NULL);
   say(72,2603,1);
   }
return done;
}
#ifdef __STDC__
int p648(void)
#else
int p648(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(36)) return 0;
   if (isnear(36,-1,-1)) {
   if (value[36]==0) {
   say(64,1597,0);
   }
   if (value[36]==1) {
   say(76,1598,1137);
   }
   say(64,1599,0);
   }
return done;
}
#ifdef __STDC__
int p649(void)
#else
int p649(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(123)) return 0;
   if (isnear(123,-1,-1)) {
   if (value[123]<2) {
   set('E',123,'c',2,NULL,NULL);
   if ((location[123]==322)) {
   apport(28,322);
   say(64,1623,0);
   }
   say(64,1624,0);
   }
   say(76,1598,1137);
   }
return done;
}
#ifdef __STDC__
int p650(void)
#else
int p650(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(162)) return 0;
   if (isnear(162,-1,-1)) {
   if (value[162]==0) {
   set('E',162,'c',1,NULL,NULL);
   if ((value[HERE]==474)) {
   say(72,2508,0);
   }
   say(72,2508,1);
   }
   say(76,1598,162);
   }
   if ((value[HERE]==473||value[HERE]==476)) {
   say(64,2201,0);
   }
return done;
}
#ifdef __STDC__
int p141(void)
#else
int p141()
#endif
{
int done=0;
   default_to(0,value[HERE],9);
   if ((value[1170]==2) &&
   !isnear(value[1137],-1,-1)) {
   p39();
   }
   if (anyof(119,8,108,123,19,161,164,-1)) {
   if (KEY(19)) {
   if (value[575]==1) {
   p146();
   longjmp(loop_back,1);
   }
   say(76,2498,8);
   }
   if (KEY(161)) {
   if (value[161]>0) {
   p145();
   }
   say(76,2498,8);
   }
   if (KEY(164)) {
   if (value[164]>0) {
   set('E',164,'c',0,NULL,NULL);
   set('E',479,'c',0,NULL,NULL);
   set('E',478,'c',0,NULL,NULL);
   say(72,2603,0);
   }
   say(76,2498,8);
   }
   if (anyof(119,-1))   say(64,1928,0);
   if (anyof(8,-1))   say(64,1315,0);
   if (anyof(108,-1))   say(66,1192,0);
   if (KEY(123)) {
   if (value[123]<2) {
   say(76,1600,1137);
   }
   say(64,2092,0);
   }}
return done;
}
#ifdef __STDC__
int p142(void)
#else
int p142(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(4)) return 0;
   if (isnear(4,-1,-1)) {
   if (value[4]>0) {
   if (!(isnear(5,-1,-1))) {
   set('T',2340,'c',1,NULL,NULL);
   (*procs[822])();
   }
   if (value[5]==1) {
   p881(0,0);
   }
   if (value[5]==2) {
   set('E',4,'c',0,NULL,NULL);
   apport(5,702);
   say(64,2328,0);
   } else {
   say(64,2327,0);
   }
   } else {
   say(76,2498,4);
   }}
return done;
}
