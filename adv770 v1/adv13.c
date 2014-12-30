/* adv13.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p143(void)
#else
int p143(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(162)) return 0;
   if (isnear(162,-1,-1)) {
   if (value[162]==0) {
   say(76,2498,162);
   }
   set('E',162,'c',0,NULL,NULL);
   if ((value[HERE]==474)) {
   say(72,2509,0);
   }
   say(72,2509,1);
   }
   if ((value[HERE]==473||value[HERE]==476)) {
   say(64,2201,0);
   }
return done;
}
#ifdef __STDC__
int p144(void)
#else
int p144()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (anyof(6,66,36,-1)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (lval[0]!=1) {
   say(76,1600,1137);
   }
value[value[1137]]=0;
   if (anyof(6,-1))   say(72,1316,0);
   if (anyof(36,-1))   say(64,1601,0);
   if ((value[HERE]==361)) {
   if (have(66,-1,-1)) {
   apport(66,HERE);
   }
   if (isnear(39,-1,-1)) {
   apport(39,HERE);
   set('E',39,'c',1,NULL,NULL);
   say(64,1463,0);
   }
   set('E',66,'c',2,NULL,NULL);
   say(64,1462,0);
   }
   say(64,1464,0);
   }
return done;
}
#ifdef __STDC__
int p399(void)
#else
int p399()
#endif
{
int done=0;
   if ((value[HERE]==544)) {
   say(8,1922,10);
   set('V',1172,'c',11,NULL,NULL);
   say(64,1923,0);
   }
   if (((((227<=value[1138] && value[1138]<=252)) ||
   (362<=value[1138] && value[1138]<=373)) ||
   (390<=value[1138] && value[1138]<=426)) &&
   !(bitest(evar(1138),8))) {
   p378();
   if (value[1182]>99) {
   say(64,2138,0);
   }
   say(8,2137,10);
   set('V',1172,'c',12,NULL,NULL);
   say(64,1923,0);
   }
   if (value[1193]==0) {
   set('V',1193,'c',1,NULL,NULL);
   }
   p405();
   if (value[1193]>0) {
   p410(0,1);
   if ((value[1245]<0) &&
   !(bitest(evar(1209),10))) {
   value[1148]=3378;*bitword(1148)=-1;
   set('V',1172,'c',4,NULL,NULL);
   say(66,1148,0);
   }
   if (((((((((((isnear(193,-1,-1)) ||
   isnear(21,-1,-1)) ||
   isnear(23,-1,-1)) ||
   isnear(25,-1,-1)) ||
   value[18]>0) ||
   isnear(33,-1,-1)) ||
   value[130]>0) ||
   isnear(26,-1,-1)) ||
   isnear(90,-1,-1)) ||
   isnear(36,-1,-1)) ||
   isnear(74,-1,-1)) {
   say(8,1335,0);
   } else {
   if (bitest(evar(1209),3)) {
   if (value[1245]==0) {
   say(72,1335,2);
   } else {
   say(72,1335,1);
   }
   } else {
   bitmod('s',evar(1209),3);
   p510(-1,1333,-1,1334);
   }}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p481(void)
#else
int p481()
#endif
{
int done=0;
   p510(-1,1420,-1,1423);
return done;
}
#ifdef __STDC__
int p693(void)
#else
int p693()
#endif
{
int done=0;
   set('V',1172,'c',8,NULL,NULL);
   say(64,1425,0);
return done;
}
#ifdef __STDC__
int p616(void)
#else
int p616()
#endif
{
int done=0;
   if (bitest(evar(1170),1)) {
   say(72,2822,1);
   }
   bitmod('s',evar(1170),1);
   bitmod('c',evar(1170),2);
   value[1192]=1260;*bitword(1192)=-1;
   say(64,1447,0);
return done;
}
#ifdef __STDC__
int p935(void)
#else
int p935()
#endif
{
int done=0;
   if ((value[HERE]==302)) {
   say(64,2310,0);
   } else {
   set('V',1172,'c',9,NULL,NULL);
   say(64,1561,0);
   }
return done;
}
#ifdef __STDC__
int p326(void)
#else
int p326()
#endif
{
int done=0;
   if (!((value[1170]==1) ||
   KEY(63))) {
   return 0;
   }
   if (isnear(63,0,1)) {
   if (have(102,-1,-1)) {
   say(64,2551,0);
   }
   if (((value[HERE]==199)) &&
   !(bitest(evar(1171),12))) {
   set('V',1172,'c',47,NULL,NULL);
   say(64,1755,0);
   }
   set('E',63,'c',3,NULL,NULL);
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if ((((have(value[1146],-1,-1)) &&
   bitest(evar(1146),17)) &&
   !(value[1146]==148)) &&
   !(value[1146]==81)) {
   say(64,2488,0);
   }}
   if (((have(136,-1,-1)) &&
   value[136]>2) &&
   value[136]<9) {
   say(64,2488,0);
   }
   if ((value[HERE]==199)) {
   apport(63,547);
   set('T',2502,'c',0,NULL,NULL);
   set('E',586,'c',3,NULL,NULL);
   move(586,-2375);
   }
   if ((value[HERE]==438)) {
   apport(63,439);
   move(439,-2450);
   }
   if ((value[HERE]==318||value[HERE]==311)) {
   say(64,2289,0);
   }
   if ((value[HERE]==475)) {
   apport(63,484);
   move(484,-2452);
   }
   if ((value[HERE]==561||value[HERE]==570)) {
   apport(63,547);
   say(0,2487,0);
   if (value[1870]==1) {
   set('T',1870,'c',2,NULL,NULL);
   }
   bitmod('s',evar(1170),9);
   move(547,-2);
   }
   say(0,2223,0);
   if ((547<=value[1138] && value[1138]<=570)) {
   say(0,2646,0);
   }
   longjmp(loop_back,1);
   }
   if (isnear(63,-1,-1)) {
   if (bitest(63,14)) {
   say(64,2224,0);
   }
   say(64,2225,0);
   }
return done;
}
#ifdef __STDC__
int p327(void)
#else
int p327()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   bitest(evar(1137),1)) {
   say(64,1797,0);
   }
   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p407(void)
#else
int p407()
#endif
{
int done=0;
   if (value[1170]==2) {
   if (KEY(63)) {
   if (!(have(158,-1,-1))) {
   say(0,2220,0);
   if ((have(110,-1,-1)) &&
   value[3445]==0) {
   say(64,3445,0);
   } else    if ((have(54,-1,-1)) ||
   have(59,-1,-1)) {
   say(64,3446,0);
   } else {
   say(64,1259,0);
   }}
   if (value[63]==0) {
   say(64,2217,0);
   }
   if ((value[63]==3) ||
   value[63]==1) {
   say(64,2218,0);
   }
   set('E',63,'c',3,NULL,NULL);
   bitmod('s',63,13);
   if (value[3334]>0) {
   bitmod('s',63,14);
   set('T',2219,'c',1,NULL,NULL);
   }
   say(64,2219,0);
   }
   if (bitest(evar(1137),8)) {
   (*procs[783])();
   } else    if ((KEY(27)) &&
   isnear(27,-1,-1)) {
   if (isnear(29,-1,-1)) {
   say(64,1635,0);
   }
   set('T',2940,'c',1,NULL,NULL);
   set('T',2941,'c',1,NULL,NULL);
   apport(29,value[1138]);
   say(64,1636,0);
   } else    if (KEY(12)) {
   (*procs[800])();
   } else    if (anyof(35,935,-1)) {
   (*procs[785])();
   } else {
   say(64,1396,0);
   }}
return done;
}
#ifdef __STDC__
int p512(void)
#else
int p512()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (!(bitest(evar(1170),8))) {
   if (((value[1170]==1) &&
   isnear(88,-1,-1)) ||
   KEY(88)) {
   say(64,1776,0);
   }
   say(64,1558,0);
   }
   if (((KEY(193)) &&
   value[1190]==6) &&
   isnear(193,-1,-1)) {
   say(0,1845,0);
   p153();
   }
   if (KEY(35)) {
   (*procs[785])();
   }
   default_to(0,value[HERE],8);
   if (value[1170]==1) {
   if (value[1137]==-3) {
   bitmod('s',evar(1170),5);
   say(64,2600,0);
   } else {
   say(64,1324,0);
   }}
   if (isnear(value[1137],-1,-1)) {
   if (anyof(23,-1))   say(64,1448,0);
   if (anyof(5,-1))   say(64,3351,0);
   if (anyof(159,-1))   say(64,2611,0);
   if (anyof(9,-1))   say(64,1326,0);
   if (anyof(18,-1))   say(64,1609,0);
   if (anyof(39,-1))   say(76,1456,39);
   if (anyof(114,115,-1))   say(64,1434,0);
   if (anyof(28,-1))   say(64,1620,0);
   if (anyof(29,-1))   say(64,2136,0);
   if (anyof(85,-1))   say(64,1746,0);
   if (anyof(90,-1))   say(64,1777,0);
   if (KEY(193)) {
   p515();
   } else    if (KEY(21)) {
   p514();
   } else    if (KEY(25)) {
   p516();
   } else    if (KEY(194)) {
   if (!(KEY(124))) {
   if (have(125,-1,-1)) {
if (value[ARG1] == 194) {value[ARG1]=125; (void)fake(1,125);}
if (value[ARG2] == 194) {value[ARG2]=125; (void)fake(2,125);}
   p907();
   } else    if (have(54,-1,-1)) {
if (value[ARG1] == 194) {value[ARG1]=54; (void)fake(1,54);}
if (value[ARG2] == 194) {value[ARG2]=54; (void)fake(2,54);}
   p907();
   }}
   if (have(124,-1,-1)) {
if (value[ARG1] == 194) {value[ARG1]=124; (void)fake(1,124);}
if (value[ARG2] == 194) {value[ARG2]=124; (void)fake(2,124);}
   p907();
   }
   set('V',1172,'c',13,NULL,NULL);
   say(64,1330,0);
   } else    if (KEY(130)) {
   say(0,1626,0);
   p153();
   } else    if (KEY(26)) {
   if (value[26]<2) {
   say(0,1616,0);
   p153();
   }
   say(64,1457,0);
   } else    if (KEY(94)) {
   p696();
   } else    if (KEY(109)) {
   p513();
   } else    if (isnear(value[1137],-1,-1)) {
   say(64,3307,0);
   }}
return done;
}
#ifdef __STDC__
int p829(void)
#else
int p829()
#endif
{
int done=0;
   if (bitest(evar(1170),2)) {
   say(72,2822,0);
   }
   bitmod('c',evar(1170),1);
   bitmod('s',evar(1170),2);
   value[1192]=1257;*bitword(1192)=-1;
   say(64,2823,0);
return done;
}
#ifdef __STDC__
int p882(void)
#else
int p882()
#endif
{
int done=0;
   if (!((bitest(evar(1170),1)) ||
   bitest(evar(1170),2))) {
   say(72,2822,2);
   }
   bitmod('c',evar(1170),1);
   bitmod('c',evar(1170),2);
   value[1192]=1260;*bitword(1192)=-1;
   say(0,2824,0);
   if (bitest(evar(1170),8)) {
   say(0,1259,0);
   bitmod('s',evar(1170),3);
   p187();
   bitmod('c',evar(1170),3);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p302(void)
#else
int p302()
#endif
{
int done=0;
   default_to(0,value[HERE],8);
   if ((anyof(39,23,109,9,193,21,26,-1)) ||
   anyof(130,85,139,-1)) {
   if (isnear(value[1137],-1,-1)) {
   if (KEY(39)) {
   if (isnear(118,-1,-1)) {
   set('E',39,'c',1,NULL,NULL);
   if (have(118,-1,-1)) {
   }
   apport(118,701);
   if (value[124]==1) {
   set('E',124,'c',0,NULL,NULL);
   }
   say(64,1458,0);
   }
   say(76,1391,39);
   }
   if (anyof(23,-1))   say(64,1475,0);
   if (KEY(9)) {
   if (have(109,-1,-1)) {
   p941();
   say(64,1390,0);
   }
   say(76,1391,9);
   }
   if (KEY(193)) {
   if (value[1190]>4) {
   say(64,1396,0);
   }
   bitmod('s',193,14);
   say(64,1392,0);
   }
   if (KEY(109)) {
   p305();
   }
   if (KEY(21)) {
   if (value[21]==0) {
   say(76,1391,21);
   }
   say(64,1457,0);
   }
   if (KEY(26)) {
   if (value[26]<2) {
   say(64,2473,0);
   }
   say(64,1457,0);
   }
   if (anyof(130,-1))   say(64,1621,0);
   if (KEY(139)) {
   if ((value[HERE]==443||value[HERE]==218)) {
   p304();
   }}
   if (KEY(85)) {
   p306();
   }}
   p39();
   }
return done;
}
#ifdef __STDC__
int p303(void)
#else
int p303()
#endif
{
int done=0;
   if (!(value[1170]==1)) {
   if ((bitest(evar(1137),0)) &&
   isnear(value[1137],-1,-1)) {
   say(64,1396,0);
   }
   p39();
   }
return done;
}
#ifdef __STDC__
int p745(void)
#else
int p745()
#endif
{
int done=0;
   p378();
   say(12,1514,1182);
   if (value[1162]>0) {
   say(12,1515,1162);
   say(12,1516,1163);
   }
   say(12,1517,1183);
   say(12,1518,1185);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p507(void)
#else
int p507()
#endif
{
int done=0;
   say(64,2599,0);
return done;
}
#ifdef __STDC__
int p472(void)
#else
int p472()
#endif
{
int done=0;
   say(72,1291,0);
return done;
}
#ifdef __STDC__
int p654(void)
#else
int p654()
#endif
{
int done=0;
   say(72,1291,0);
return done;
}
#ifdef __STDC__
int p354(void)
#else
int p354()
#endif
{
int done=0;
   say(64,1958,0);
return done;
}
#ifdef __STDC__
int p761(void)
#else
int p761()
#endif
{
int done=0;
   say(64,1332,0);
return done;
}
#ifdef __STDC__
int p300(void)
#else
int p300()
#endif
{
int done=0;
   if (value[1190]>5) {
   say(64,1322,0);
   }
   if (value[1187]<=0) {
   set('V',1187,'c',1,NULL,NULL);
   say(2,1192,0);
   value[1192]=1257;*bitword(1192)=-1;
   longjmp(loop_back,1);
   }
   p331();
return done;
}
#ifdef __STDC__
int p307(void)
#else
int p307()
#endif
{
int done=0;
   if (value[1190]>5) {
   say(64,1322,0);
   }
   if (value[1187]==0) {
   set('V',1187,'c',2,NULL,NULL);
   say(2,1192,0);
   value[1192]=1257;*bitword(1192)=-1;
   longjmp(loop_back,1);
   }
   p331();
return done;
}
#ifdef __STDC__
int p328(void)
#else
int p328()
#endif
{
int done=0;
   if (value[1190]>5) {
   say(64,1322,0);
   }
   if (value[1187]==1) {
   set('V',1187,'c',3,NULL,NULL);
   say(2,1192,0);
   value[1192]=1257;*bitword(1192)=-1;
   longjmp(loop_back,1);
   }
   p331();
return done;
}
#ifdef __STDC__
int p330(void)
#else
int p330()
#endif
{
int done=0;
   if (value[1190]>5) {
   say(64,1322,0);
   }
   if ((value[1170]==2) &&
   !KEY(730)) {
   say(64,1345,0);
   }
   if (value[1187]==2) {
   if (((location[53]==281)) ||
   bitest(53,14)) {
   say(0,1322,0);
   if ((location[53]==281)) {
   say(0,1556,0);
   }
   } else {
   if (((value[HERE]==281)) &&
   bitest(evar(1170),8)) {
   if (have(53,-1,-1)) {
   say(0,3463,0);
   } else {
   say(8,3461,1);
   say(0,1259,0);
   say(0,53,0);
   }
   } else {
   if (((have(53,-1,-1)) ||
   ishere(53,-1,-1)) &&
   bitest(evar(1170),8)) {
   say(8,3461,0);
   } else {
   say(8,3461,1);
   }}
   if (bitest(53,13)) {
   bitmod('c',53,13);
   bitmod('s',23,13);
   if ((value[23]==1) ||
   value[23]==2) {
   if (isnear(24,-1,-1)) {
   say(0,1914,0);
   }
   set('E',23,'c',0,NULL,NULL);
   apport(23,303);
   bitmod('s',23,6);
   apport(24,701);
   }}
   apport(53,281);
   if (value[194]==2) {
   set('E',194,'c',3,NULL,NULL);
   value[1236] = irand(5-3+1)+3;
   }}
   set('V',1187,'c',0,NULL,NULL);
   } else {
   p331();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p356(void)
#else
int p356()
#endif
{
int done=0;
   set('V',1187,'c',-1,NULL,NULL);
   say(64,1931,0);
return done;
}
#ifdef __STDC__
int p938(void)
#else
int p938()
#endif
{
int done=0;
   say(64,1322,0);
return done;
}
#ifdef __STDC__
int p681(void)
#else
int p681()
#endif
{
int done=0;
   say(64,1322,0);
return done;
}
#ifdef __STDC__
int p754(void)
#else
int p754()
#endif
{
int done=0;
   say(64,1929,0);
return done;
}
#ifdef __STDC__
int p318(void)
#else
int p318(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(888)) return 0;
   if ((bitest(evar(1138),7)) &&
   !(bitest(204,4))) {
   say(64,1339,0);
   }
   say(64,1340,0);
return done;
}
#ifdef __STDC__
int p319(void)
#else
int p319()
#endif
{
int done=0;
   if (value[1170]>1) {
   if (bitest(evar(1137),0)) {
   if (KEY(155)) {
   if ((547<=value[1138] && value[1138]<=582)) {
   say(64,2763,0);
   }
   p39();
   }
   if (isnear(value[1137],-1,-1)) {
   if ((have(value[1137],-1,-1)) ||
   KEY(17)) {
   say(64,1384,0);
   }
   say(64,1867,0);
   }
   say(64,1341,0);
   }
   if (bitest(evar(1137),1)) {
   if ((value[HERE]==value[1137])) {
   say(64,1418,0);
   }
   say(64,1341,0);
   }
   say(64,1345,0);
   }
return done;
}
#ifdef __STDC__
int p819(void)
#else
int p819()
#endif
{
int done=0;
   if (((((547<=value[1138] && value[1138]<=554)) ||
   (439<=value[1138] && value[1138]<=442)) ||
   (value[HERE]==631||value[HERE]==632||value[HERE]==298||value[HERE]==299)) ||
   (635<=value[1138] && value[1138]<=638)) {
   say(72,1706,0);
   }
   if (bitest(evar(1138),17)) {
   say(72,1706,1);
   }
   say(72,1706,2);
return done;
}
#ifdef __STDC__
int p72(void)
#else
int p72()
#endif
{
int done=0;
   if ((value[1170]>1) &&
   bitest(evar(1137),0)) {
   if (isnear(value[1137],-1,-1)) {
   if (KEY(56)) {
   apport(56,702);
   apport(57,value[1138]);
   say(64,1488,0);
   }
   if (KEY(127)) {
   p73();
   }
   if (KEY(12)) {
   if (value[1190]==6) {
   say(0,1835,0);
   p153();
   }
   say(64,1843,0);
   }
   if (KEY(153)) {
   if (value[153]==0) {
   say(64,1754,0);
   } else {
   say(64,2456,0);
   }}}
   if (anyof(78,-1))   say(64,1800,0);
   say(64,3307,0);
   }
   if ((value[1170]==1) ||
   !(bitest(evar(1170),1))) {
   say(64,3307,0);
   }
return done;
}
#ifdef __STDC__
int p324(void)
#else
int p324()
#endif
{
int done=0;
if (value[ARG1] == 56) value[ARG1]=57;
if (value[ARG2] == 56) value[ARG2]=57;
if (value[ARG1] == 887) value[ARG1]=84;
if (value[ARG2] == 887) value[ARG2]=84;
   if ((value[1170]==1) ||
   !isnear(value[1137],-1,-1)) {
   return 0;
   }
   if (anyof(84,57,42,-1)) {
   say(76,1428,1137);
   }
   if (KEY(63)) {
   if (bitest(63,13)) {
   say(72,2010,1);
   } else {
   say(72,2010,0);
   }}
return done;
}
#ifdef __STDC__
int p309(void)
#else
int p309()
#endif
{
int done=0;
   if (value[1170]>1) {
   return 0;
   }
   set('V',1243,'c',0,NULL,NULL);
   if (have(136,0,2)) {
   value[1243]=136;*bitword(1243)=-1;
   } else    if (have(119,0,2)) {
   value[1243]=119;*bitword(1243)=-1;
   } else    if (have(123,0,2)) {
   value[1243]=123;*bitword(1243)=-1;
   } else    if (ishere(136,0,2)) {
   value[1243]=136;*bitword(1243)=-1;
   } else    if (ishere(119,0,2)) {
   value[1243]=119;*bitword(1243)=-1;
   } else    if (ishere(123,0,2)) {
   value[1243]=123;*bitword(1243)=-1;
   } else {
   return 0;
   }
   if (have(value[1243],-1,-1)) {
   set('V',1170,'c',2,NULL,NULL);
   value[1137]=119;*bitword(1137)=-1;
if (value[ARG1] == 119) {value[ARG1]=value[1243]; (void)fake(1,value[1243]);}
if (value[ARG2] == 119) {value[ARG2]=value[1243]; (void)fake(2,value[1243]);}
   } else {
   say(76,2779,1243);
   }
   if ((value[HERE]==443)) {
   say(64,2841,0);
   }
return done;
}
#ifdef __STDC__
int p310(void)
#else
int p310(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(146)) return 0;
   if (isnear(146,-1,-1)) {
   if (bitest(evar(1138),17)) {
   say(64,2007,0);
   }
   say(76,1394,146);
   }
return done;
}
#ifdef __STDC__
int p311(void)
#else
int p311(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(56)) return 0;
   if (isnear(56,-1,-1)) {
   if ((bitest(evar(1138),17)) ||
   (value[HERE]==217)) {
   if (have(56,-1,-1)) {
   value[1179] -= 1;
   }
   apport(56,702);
   apport(57,value[1138]);
   say(64,1427,0);
   }
   say(64,1426,0);
   }
return done;
}
#ifdef __STDC__
int p312(void)
#else
int p312(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(123)) return 0;
   if (have(123,-1,-1)) {
   if (value[123]<2) {
   say(64,1834,0);
   }
   if (value[123]==2) {
   if (bitest(evar(1138),17)) {
   set('E',123,'c',3,NULL,NULL);
   say(12,2234,123);
   say(72,2235,3);
   }
   if ((value[HERE]==217)) {
   set('E',123,'c',4,NULL,NULL);
   say(12,2234,123);
   say(72,2235,4);
   }
   if ((bitest(evar(1138),12)) ||
   (value[HERE]==502)) {
   say(64,1362,0);
   }
   say(76,1394,123);
   }
   say(12,2234,123);
   say(76,2236,123);
   }
   p625(*bitword(1137),value[1137]);
return done;
}
#ifdef __STDC__
int p313(void)
#else
int p313(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(119)) return 0;
   if (have(119,-1,-1)) {
   if (value[119]==2) {
   if (bitest(evar(1138),17)) {
   set('E',119,'c',3,NULL,NULL);
   say(12,2234,119);
   say(72,2235,3);
   }
   if ((value[HERE]==217)) {
   set('E',119,'c',4,NULL,NULL);
   say(12,2234,119);
   say(72,2235,4);
   }
   say(76,1394,119);
   }
   say(12,2234,119);
   say(76,2236,119);
   }
   p625(*bitword(1137),value[1137]);
return done;
}
#ifdef __STDC__
int p314(void)
#else
int p314(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(136)) return 0;
   if (have(136,-1,-1)) {
   if (((value[136]==2) ||
   value[136]>=7) ||
   value[136]==1) {
   if (bitest(evar(1138),17)) {
   if (value[136]==1) {
   if ((value[HERE]==200)) {
   say(64,2250,0);
   } else {
   say(0,2251,0);
   say(0,1259,0);
   set('E',136,'c',2,NULL,NULL);
   }}
   set('E',136,'c',3,NULL,NULL);
   say(12,2234,136);
   say(72,2235,3);
   }
   if ((value[HERE]==217)) {
   say(64,2237,0);
   }
   say(76,1394,136);
   }
   say(12,2234,136);
   say(76,2236,136);
   }
   p625(*bitword(1137),value[1137]);
return done;
}
#ifdef __STDC__
int p315(void)
#else
int p315(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(84)) return 0;
   if (isnear(84,-1,-1)) {
   if (bitest(evar(1138),17)) {
   if (have(84,-1,-1)) {
   if ((value[HERE]==495)) {
   say(76,1735,84);
   }
   set('E',84,'c',2,NULL,NULL);
   say(72,1736,0);
   }
   p321(0,0);
   if (value[1243]==0) {
   say(76,3455,84);
   }
   } else {
   p321(0,0);
   }
   if (value[1243]!=0) {
   if ((value[1243]==136)) {
   if (value[136]==3) {
   set('E',136,'c',7,NULL,NULL);
   } else    if (value[136]==9) {
   set('E',136,'c',2,NULL,NULL);
   } else {
   value[136] += 1;
   }
   set('E',84,'c',2,NULL,NULL);
   say(72,1736,1);
   }
value[value[1243]]=2;
   bitmod('s',evar(1138),13);
   say(76,3452,1243);
   }
   if (have(136,0,5)) {
   set('V',1172,'c',50,NULL,NULL);
   say(64,3453,0);
   }
   if ((value[HERE]==443)) {
   say(64,2841,0);
   }
   say(76,1394,84);
   }
   p625(*bitword(1137),value[1137]);
return done;
}
#ifdef __STDC__
int p316(void)
#else
int p316()
#endif
{
int done=0;
   if ((value[1170]>1) &&
   isnear(value[1137],-1,-1)) {
   say(64,1395,0);
   }
return done;
}
#ifdef __STDC__
int p262(void)
#else
int p262()
#endif
{
int done=0;
   if (anyof(119,123,84,127,136,151,-1)) {
   if (!(have(value[1137],-1,-1))) {
   say(76,1506,1137);
   }}
return done;
}
#ifdef __STDC__
int p263(void)
#else
int p263(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(84)) return 0;
   if (value[84]>=1) {
   set('E',84,'c',0,NULL,NULL);
   say(72,1794,0);
   }
   say(76,1737,84);
return done;
}
#ifdef __STDC__
int p264(void)
#else
int p264(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(119)) return 0;
   value[1243]=119;*bitword(1243)=-1;
   p268();
return done;
}
#ifdef __STDC__
int p265(void)
#else
int p265(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(136)) return 0;
   value[1243]=136;*bitword(1243)=-1;
   p268();
return done;
}
#ifdef __STDC__
int p266(void)
#else
int p266(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(123)) return 0;
   if (value[123]<2) {
   (*procs[767])();
   longjmp(loop_back,1);
   }
   value[1243]=123;*bitword(1243)=-1;
   p268();
return done;
}
#ifdef __STDC__
int p267(void)
#else
int p267()
#endif
{
int done=0;
   if (KEY(151)) {
   (*procs[767])();
   longjmp(loop_back,1);
   }
   if (anyof(127,-1))   say(64,1292,0);
   if (value[1170]==2) {
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p686(void)
#else
int p686()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   p321(0,0);
   if (value[1243]==0) {
   p320(0,0);
   }
   if (value[1243]==0) {
   return 0;
   }
   set('V',1170,'c',2,NULL,NULL);
   set('V',1137,'v',1243,NULL,NULL);
   }
   if (anyof(120,121,122,87,-1)) {
   if (KEY(120)) {
   p321(0,1);
   p217();
   }
   if (KEY(121)) {
   p320(0,1);
   p217();
   }
   if (KEY(122)) {
   if (have(136,0,5)) {
   value[1243]=136;*bitword(1243)=-1;
   p217();
   } else {
   say(76,1506,122);
   }}
   if (KEY(87)) {
   if (have(136,0,6)) {
   say(64,2246,0);
   } else {
   p625(-1,87);
   }}}
   if (anyof(123,119,136,-1)) {
   if (isnear(value[1137],-1,-1)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (lval[0]>2) {
   if (lval[0]==6) {
   say(64,2246,0);
   }
   set('V',1243,'v',1137,NULL,NULL);
   p217();
   } else {
   say(76,1737,1137);
   }
   } else {
   say(76,1506,1137);
   }
   longjmp(loop_back,1);
   }
   if (KEY(151)) {
   if (isnear(151,-1,-1)) {
   say(76,1707,151);
   }
   return 0;
   }
   if (value[1170]>1) {
   say(64,1369,0);
   }
return done;
}
#ifdef __STDC__
int p671(void)
#else
int p671()
#endif
{
int done=0;
   if (((anyof(193,9,109,21,23,39,20,25,26,-1)) ||
   anyof(130,85,-1)) &&
   isnear(value[1137],-1,-1)) {
   say(64,1294,0);
   }
return done;
}
#ifdef __STDC__
int p259(void)
#else
int p259()
#endif
{
int done=0;
   if (keyword(788,153,-1)) {
   (*procs[789])();
   }
   if (isnear(118,-1,-1)) {
   if ((KEY(118)) ||
   value[1170]==1) {
   if (have(145,0,2)) {
   say(64,2315,0);
   }
   apport(118,701);
   say(64,1355,0);
   }}
   if ((isnear(141,-1,-1)) &&
   KEY(141)) {
   say(64,2249,0);
   }
   if (isnear(128,-1,-1)) {
   if ((KEY(128)) ||
   value[1170]==1) {
   if (have(145,0,2)) {
   say(64,2315,0);
   }
   value[1195] = irand(33-28+1)+28;
   value[1195] += value[1198];
   value[1194] += 6;
   bitmod('c',517,8);
   set('E',128,'c',2,NULL,NULL);
   apport(128,702);
   say(64,128,0);
   }}
   if (KEY(87)) {
   p126(0,0);
   say(64,1354,0);
   }
   if (value[1170]==1) {
   say(64,1465,0);
   }
   if ((bitest(evar(1137),8)) ||
   anyof(13,139,-1)) {
   say(64,1353,0);
   }
return done;
}
#ifdef __STDC__
int p260(void)
#else
int p260()
#endif
{
int done=0;
   if (bitest(evar(1137),0)) {
   if ((isnear(value[1137],-1,-1)) ||
   bitest(evar(1172),1)) {
   say(64,1362,0);
   }}
return done;
}
#ifdef __STDC__
int p732(void)
#else
int p732(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(107)) return 0;
   if (isnear(107,-1,-1)) {
   say(76,1360,1137);
   }
return done;
}
#ifdef __STDC__
int p733(void)
#else
int p733(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(92)) return 0;
   if (isnear(92,-1,-1)) {
   say(64,2175,0);
   }
return done;
}
#ifdef __STDC__
int p734(void)
#else
int p734(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(111)) return 0;
   if ((isnear(111,-1,-1)) &&
   value[111]<2) {
   if (have(132,-1,-1)) {
   set('E',111,'c',2,NULL,NULL);
   bitmod('c',111,7);
   set('E',132,'c',2,NULL,NULL);
   say(76,1828,1136);
   }
   say(76,2031,1136);
   }
return done;
}
#ifdef __STDC__
int p735(void)
#else
int p735(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(322)) return 0;
   if ((value[HERE]==322)) {
   say(64,1361,0);
   }
   say(76,1312,322);
return done;
}
#ifdef __STDC__
int p736(void)
#else
int p736()
#endif
{
int done=0;
   if (value[1170]>1) {
   if ((anyof(1054,171,-1)) &&
   (value[HERE]==220||value[HERE]==464)) {
   say(76,3081,171);
   } else    if ((anyof(1054,75,-1)) &&
   (value[HERE]==463||value[HERE]==462)) {
   say(76,3081,75);
   } else    if ((anyof(1054,97,-1)) &&
   (value[HERE]==473||value[HERE]==474)) {
   say(76,3081,97);
   } else    if ((anyof(1054,162,-1)) &&
   (value[HERE]==475||value[HERE]==474)) {
   say(76,3081,162);
   } else    if ((anyof(1054,8,-1)) &&
   (value[HERE]==282)) {
   say(76,3081,8);
   } else    if ((anyof(1054,106,-1)) &&
   isnear(106,-1,-1)) {
   set('T',3081,'c',1,NULL,NULL);
   say(12,3081,106);
   set('T',3081,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   } else    if ((anyof(1054,110,-1)) &&
   isnear(110,-1,-1)) {
   say(72,3081,977);
   } else    if (anyof(1054,112,-1)) {
   if ((isnear(112,-1,-1)) ||
   (value[HERE]==448)) {
   say(76,3081,110);
   }
   } else    if (bitest(evar(1137),0)) {
   if (isnear(value[1137],-1,-1)) {
   if ((((bitest(evar(1137),8)) &&
   !KEY(114)) &&
   !KEY(115)) &&
   !KEY(85)) {
   say(64,1396,0);
   }
   say(64,1361,0);
   }}}
return done;
}
#ifdef __STDC__
int p38(void)
#else
int p38()
#endif
{
int done=0;
   if (((bitest(evar(1138),6)) ||
   bitest(evar(1139),6)) ||
   value[1139]==0) {
   say(72,1380,0);
   }
   move(value[1139],-2);
return done;
}
#ifdef __STDC__
int p603(void)
#else
int p603()
#endif
{
int done=0;
   if ((value[HERE]==302)) {
   say(64,2084,0);
   }
   if ((((value[HERE]==210||value[HERE]==209||value[HERE]==211||value[HERE]==224||value[HERE]==225||value[HERE]==289)) ||
   (value[HERE]==296||value[HERE]==298||value[HERE]==303||value[HERE]==514||value[HERE]==515)) ||
   (value[HERE]==304||value[HERE]==517||value[HERE]==22)) {
   say(64,1352,0);
   }
return done;
}
#ifdef __STDC__
int p170(void)
#else
int p170()
#endif
{
int done=0;
   if ((value[HERE]==284||value[HERE]==461||value[HERE]==512)) {
   say(64,1698,0);
   }
   p39();
return done;
}
#ifdef __STDC__
int p743(void)
#else
int p743()
#endif
{
int done=0;
   if (KEY(866)) {
   (*procs[866])();
   }
   if (KEY(867)) {
   (*procs[867])();
   }
   if (value[1170]==1) {
   say(76,2694,1136);
   }
   special(27,&value[0]);
   if (KEY(3)) {
   longjmp(loop_back,1);
   }
   if (anyof(947,-1))   say(64,2575,0);
   if (isnear(26,-1,-1)) {
   say(64,2693,0);
   }
   if ((bitest(evar(1137),0)) &&
   isnear(value[1137],1,8)) {
   say(76,2692,1137);
   }
   if (((anyof(710,706,707,713,712,709,-1)) ||
   anyof(714,705,715,708,720,711,831,-1)) ||
   anyof(719,718,717,716,833,721,-1)) {
   if (value[1137]<LPROC && value[1137]>= 0) (*procs[value[1137]])(); else pcall(value[1137]);
   longjmp(loop_back,1);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (isnear(value[1146],1,8)) {
   say(76,2692,1146);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p740(void)
#else
int p740()
#endif
{
int done=0;
   if (value[1190]<3) {
   say(72,1534,0);
   }
   value[1148]=1489;*bitword(1148)=-1;
   verbatim(1137);
   special(23, &value[1148]);
   say(8,1535,10);
   set('V',1172,'c',14,NULL,NULL);
   say(64,1489,0);
return done;
}
#ifdef __STDC__
int p593(void)
#else
int p593()
#endif
{
int done=0;
   if (value[1190]<3) {
   say(72,1534,1);
   }
   set('V',1172,'c',17,NULL,NULL);
   if (bitest(evar(1210),11)) {
   p33();
   } else {
   say(8,2361,0);
   bitmod('s',evar(1210),11);
   say(64,1489,0);
   }
return done;
}
#ifdef __STDC__
int p702(void)
#else
int p702()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   special(33,&lval[0]);
   if (lval[0]!=0) {
   say(64,2365,0);
   }
   set('V',1172,'c',18,NULL,NULL);
   say(8,2361,1);
   say(64,1489,0);
return done;
}
#ifdef __STDC__
int p713(void)
#else
int p713()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (value[1170]<2) {
   p925();
   } else {
   set('V',1137,'c',0,NULL,NULL);
   }
   if (value[1170]==2) {
   verbatim(1137);
   }
   if (KEY(823)) {
   say(0,1863,0);
   finita();
   }
   set('V',1170,'c',2,NULL,NULL);
   value[1148]=1259;*bitword(1148)=-1;
   special(23, &value[1148]);
   special(2, &lval[0]);
   if (lval[0]==3) {
   longjmp(loop_back,1);
   }
   if (lval[0]==0) {
   special(8,&lval[1]);
   if (lval[1]<10) {
   say(8,1540,10);
   say(8,1541,10);
   set('V',1172,'c',42,NULL,NULL);
   say(64,1542,0);
   }
   } else    if (lval[0]==1) {
   say(0,1538,0);
   set('V',1172,'c',0,NULL,NULL);
   if (value[1185]>0) {
   value[1185] -= 1;
   }
   longjmp(loop_back,1);
   } else {
   special(28,&value[0]);
   set('V',1172,'c',41,NULL,NULL);
   say(64,1539,0);
   }
   p714();
return done;
}
#ifdef __STDC__
int p774(void)
#else
int p774()
#endif
{
int done=0;
   if (value[1170]==1) {
   p39();
   }
   if (anyof(120,121,127,122,-1)) {
   (*procs[790])();
   }
   if (KEY(87)) {
   p126(0,1);
   say(64,1354,0);
   }
   if (!((bitest(evar(1137),0)) &&
   isnear(value[1137],-1,-1))) {
   p39();
   }
   if (anyof(128,-1))   say(64,2791,0);
   if (KEY(118)) {
   set('E',118,'c',1,NULL,NULL);
   say(64,2790,0);
   }
   if (anyof(119,123,136,-1)) {
   (*procs[790])();
   }
   p39();
return done;
}
#ifdef __STDC__
int p226(void)
#else
int p226()
#endif
{
int done=0;
   if (KEY(764)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(910)) {
   if ((value[HERE]==333||value[HERE]==487)) {
   value[1137]=120;*bitword(1137)=-1;
   } else {
   return 0;
   }}
   if (KEY(575)) {
   if ((value[HERE]==575||value[HERE]==574)) {
   value[1137]=120;*bitword(1137)=-1;
   } else {
   return 0;
   }}
   if (KEY(898)) {
   if ((((value[HERE]==566||value[HERE]==567||value[HERE]==259||value[HERE]==195||value[HERE]==201||value[HERE]==202||value[HERE]==495)) ||
   (value[HERE]==511||value[HERE]==632||value[HERE]==631||value[HERE]==638||value[HERE]==637||value[HERE]==635)) ||
   (value[HERE]==636||value[HERE]==283||value[HERE]==568||value[HERE]==554||value[HERE]==200)) {
   value[1137]=120;*bitword(1137)=-1;
   } else {
   return 0;
   }}
   if (KEY(917)) {
   if ((value[HERE]==200||value[HERE]==259)) {
   value[1137]=120;*bitword(1137)=-1;
   } else {
   return 0;
   }}
   if (anyof(298,298,-1)) {
   if ((value[HERE]==298||value[HERE]==299||value[HERE]==671)) {
   value[1137]=120;*bitword(1137)=-1;
   } else {
   return 0;
   }}
   if (KEY(121)) {
   p320(0,0);
   if ((value[1243]==0) &&
   !isnear(121,-1,-1)) {
   say(76,1312,121);
   }
   say(64,2183,0);
   }
   if (KEY(127)) {
   if (isnear(127,-1,-1)) {
   say(64,1889,0);
   }
   say(76,1312,127);
   }
   if (isnear(136,0,5)) {
   if (anyof(122,136,-1)) {
   p227();
   }}
   if (KEY(122)) {
   say(76,1312,122);
   }
   if ((KEY(84)) &&
   isnear(84,-1,-1)) {
   if (value[84]>=1) {
   p122();
   }
   say(76,1737,84);
   }
   if (((value[1170]==1) &&
   isnear(84,-1,-1)) &&
   value[84]>=1) {
   p122();
   }
   if ((value[1170]==1) ||
   anyof(120,898,910,-1)) {
   if (bitest(evar(1138),17)) {
   if ((value[HERE]==298||value[HERE]==299)) {
   set('T',1356,'c',5,NULL,NULL);
   } else    if ((value[HERE]==333||value[HERE]==487)) {
   set('T',1356,'c',1,NULL,NULL);
   } else    if ((value[HERE]==575||value[HERE]==574)) {
   set('T',1356,'c',3,NULL,NULL);
   } else    if ((value[HERE]==200)) {
   set('T',1356,'c',2,NULL,NULL);
   } else    if ((value[HERE]==568||value[HERE]==566||value[HERE]==567||value[HERE]==554)) {
   set('T',1356,'c',4,NULL,NULL);
   } else {
   set('T',1356,'c',0,NULL,NULL);
   }
   p899(0,800,-1,1356,0,0);
   }
   p321(0,0);
   if (value[1243]==0) {
   if ((value[1170]==1) &&
   have(136,0,5)) {
   p227();
   }
   if ((value[1170]==1) ||
   KEY(120)) {
   if ((value[HERE]==453||value[HERE]==499)) {
   say(64,3164,0);
   }
   if ((value[HERE]==498)) {
   p899(0,200,-1,3357,0,0);
   }}
   say(64,1552,0);
   }
   special(10,&value[1243]);
   }
   value[1248]=value[value[1137]];*bitword(1248)=0;
   if (value[1248]==4) {
   say(64,2183,0);
   }
   if (!((value[1137]==123||value[1137]==119||value[1137]==127||value[1137]==136))) {
   say(64,1308,0);
   }
   if (isnear(value[1137],-1,-1)) {
   if (value[1248]==2) {
   say(76,2182,1137);
   }
   if (((value[1137]==123)) &&
   value[123]<2) {
   say(64,2184,0);
   }
   } else {
   p39();
   }
   if (!(have(value[1137],-1,-1))) {
   say(76,2181,1137);
   }
   if ((value[1137]==136)) {
   if ((value[136]==6) ||
   value[136]==1) {
   say(64,1354,0);
   }
   p899(0,900,-1,1359,-1,136);
   }
   if ((value[1137]==119)) {
   p899(0,600,-1,1359,-1,119);
   }
   if ((value[1137]==123)) {
   p899(0,300,-1,1832,-1,123);
   }
   if (bitest(evar(1137),0)) {
   if (isnear(value[1137],-1,-1)) {
   say(64,1396,0);
   }
   p39();
   }
   say(64,1308,0);
return done;
}
#ifdef __STDC__
int p406(void)
#else
int p406()
#endif
{
int done=0;
   say(64,1437,0);
return done;
}
#ifdef __STDC__
int p271(void)
#else
int p271()
#endif
{
int done=0;
   if (isnear(92,-1,-1)) {
   set('E',92,'c',1,NULL,NULL);
   say(64,1721,0);
   }
   say(64,1911,0);
return done;
}
#ifdef __STDC__
int p699(void)
#else
int p699()
#endif
{
int done=0;
   if (KEY(141)) {
   (*procs[822])();
   }
   if (KEY(63)) {
   p701();
   }
   if (KEY(173)) {
   if (isnear(27,-1,-1)) {
   say(76,3349,27);
   }
   if (isnear(147,-1,-1)) {
   say(76,3349,147);
   }
   if ((value[HERE]==356)) {
   say(72,3349,935);
   }}
   if (((value[HERE]==199)) &&
   anyof(129,134,1015,30,74,-1)) {
   say(32,129,0);
   if (value[129]==0) {
   set('E',129,'c',1,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (value[1170]>1) {
   if (KEY(91)) {
   if (isnear(89,0,0)) {
   say(76,2197,1137);
   }
   if (isnear(89,0,1)) {
   say(64,1804,0);
   }
   if (isnear(91,-1,-1)) {
   say(64,1788,0);
   }}
   if ((KEY(74)) &&
   !isnear(74,-1,-1)) {
   if ((isnear(92,-1,-1)) &&
   bitest(92,13)) {
   say(64,1720,0);
   }
   if (isnear(63,0,3)) {
if (value[ARG1] == 74) value[ARG1]=63;
if (value[ARG2] == 74) value[ARG2]=63;
   (*procs[822])();
   }
   if ((value[HERE]==356)) {
   say(76,2029,1137);
   }}
   if ((KEY(133)) &&
   (value[HERE]==288)) {
   say(64,1487,0);
   }
   if (bitest(evar(1137),0)) {
   if (isnear(value[1137],-1,-1)) {
   if (anyof(116,-1))   say(64,1483,0);
   if (anyof(30,-1))   say(64,1484,0);
   if (KEY(92)) {
   bitmod('s',92,13);
   say(64,1720,0);
   }
   if (((KEY(1126)) &&
   (value[HERE]==517)) ||
   KEY(74)) {
   p700();
   }
   if (KEY(115)) {
   p658();
   }
   if (anyof(35,-1))   say(64,1485,0);
   if (anyof(152,-1))   say(64,2650,0);
   if (anyof(123,-1))   say(64,3341,0);
   if (anyof(107,-1))   say(64,3342,0);
   if (KEY(151)) {
   (*procs[822])();
   }}}
   if ((anyof(1015,74,-1)) &&
   isnear(123,-1,-1)) {
   say(64,3341,0);
   }
   if ((anyof(1015,74,937,-1)) &&
   isnear(107,-1,-1)) {
   say(64,3342,0);
   }}
   p39();
return done;
}
#ifdef __STDC__
int p409(void)
#else
int p409()
#endif
{
int done=0;
   say(64,1560,0);
return done;
}
#ifdef __STDC__
int p138(void)
#else
int p138()
#endif
{
int done=0;
   if (((value[1170]==1) ||
   anyof(593,753,-1)) &&
   (587<=value[1138] && value[1138]<=592)) {
   say(64,2304,0);
   }
   if (((value[1170]==1) ||
   anyof(153,131,-1)) &&
   (value[HERE]==544)) {
   say(72,1817,0);
   }
   if ((value[1170]==1) ||
   anyof(153,131,973,-1)) {
   if (((519<=value[1138] && value[1138]<=544)) ||
   (value[HERE]==480||value[HERE]==481)) {
   say(72,1818,0);
   }}
   if (((KEY(63)) ||
   value[1170]==1) &&
   isnear(63,0,1)) {
   (*procs[806])();
   }
   if (value[1170]==1) {
   say(64,1499,0);
   }
return done;
}
#ifdef __STDC__
int p541(void)
#else
int p541()
#endif
{
int done=0;
   say(64,1351,0);
return done;
}
#ifdef __STDC__
int p591(void)
#else
int p591()
#endif
{
int done=0;
   if (isnear(32,0,0)) {
   set('E',32,'c',1,NULL,NULL);
   set('E',313,'c',1,NULL,NULL);
   bitmod('c',313,8);
   say(64,1610,0);
   }
   say(64,1322,0);
return done;
}
#ifdef __STDC__
int p624(void)
#else
int p624()
#endif
{
int done=0;
   if (((bitest(evar(1171),8)) ||
   value[1190]>5) ||
   !isnear(107,-1,-1)) {
   bitmod('c',evar(1171),8);
   value[1191]=1257;*bitword(1191)=-1;
   say(64,1322,0);
   }
   bitmod('s',evar(1171),8);
   say(64,1260,0);
return done;
}
#ifdef __STDC__
int p737(void)
#else
int p737()
#endif
{
int done=0;
   if (bitest(evar(1171),8)) {
   if (have(107,-1,-1)) {
   say(0,1567,0);
   p153();
   }
   if (value[1173]>40) {
   apport(107,702);
   set('E',40,'c',3,NULL,NULL);
   set('E',107,'c',0,NULL,NULL);
   set('V',1173,'c',0,NULL,NULL);
   if (irand(100)<50) {
   say(0,1568,0);
   p487();
   if (!(bitest(evar(1170),8))) {
   p849(0,0);
   }
   } else {
   say(0,1569,0);
   p153();
   }
   } else {
   bitmod('s',evar(1234),8);
   say(0,1570,0);
   value[1173] += 300;
   set('E',107,'c',1,NULL,NULL);
   bitmod('s',evar(1170),8);
   if (isnear(88,-1,-1)) {
   p657();
   }
   set('V',1170,'c',1,NULL,NULL);
   set('E',16,'c',0,NULL,NULL);
   (*procs[822])();
   }
   } else {
   say(2,1191,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p844(void)
#else
int p844()
#endif
{
int done=0;
   say(64,1322,0);
return done;
}
#ifdef __STDC__
int p47(void)
#else
int p47()
#endif
{
int done=0;
   if (!(isnear(63,-1,-1))) {
   say(64,1322,0);
   }
   if (!(bitest(63,14))) {
   say(0,3334,0);
   set('T',2213,'c',1,NULL,NULL);
   if (bitest(63,13)) {
   bitmod('s',63,14);
   }}
   if (!(bitest(evar(1138),7))) {
   say(64,2221,0);
   }
   if (have(63,-1,-1)) {
   say(72,2215,1);
   }
   if (value[63]==0) {
   say(72,2215,0);
   }
   if (bitest(63,14)) {
   if (value[63]==1) {
   set('E',63,'c',3,NULL,NULL);
   say(64,2214,0);
   }
   if ((value[HERE]==593)) {
   set('E',63,'c',0,NULL,NULL);
   bitmod('s',evar(1210),1);
   say(64,2226,0);
   }
   set('E',63,'c',1,NULL,NULL);
   say(64,2216,0);
   } else {
   set('E',63,'c',0,NULL,NULL);
   say(64,3333,0);
   }
return done;
}
#ifdef __STDC__
int p942(void)
#else
int p942()
#endif
{
int done=0;
   if ((value[125]==0) ||
   !isnear(125,-1,-1)) {
   say(0,1322,0);
   } else {
   if (have(125,-1,-1)) {
   say(8,1806,0);
   } else {
   say(8,1806,1);
   }
   if (bitest(evar(1171),9)) {
   say(0,1807,0);
   }
   apport(125,702);
   apport(67,value[1138]);
   bitmod('s',67,4);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p519(void)
#else
int p519()
#endif
{
int done=0;
   p661();
return done;
}
#ifdef __STDC__
int p518(void)
#else
int p518()
#endif
{
int done=0;
   p661();
return done;
}
#ifdef __STDC__
int p782(void)
#else
int p782()
#endif
{
int done=0;
   p661();
return done;
}
#ifdef __STDC__
int p63(void)
#else
int p63()
#endif
{
int done=0;
   p661();
return done;
}
#ifdef __STDC__
int p717(void)
#else
int p717()
#endif
{
int done=0;
   if (((value[1170]==1) &&
   ishere(63,0,1)) ||
   KEY(63)) {
   (*procs[806])();
   }
   if (((value[1170]==1) ||
   KEY(29)) &&
   isnear(29,-1,-1)) {
   apport(29,701);
   move(298,-1634);
   }
   if (((value[1170]==1) ||
   KEY(85)) &&
   isnear(85,-1,-1)) {
   if (value[1190]==6) {
   p602();
   }
   if (bitest(evar(1138),7)) {
   say(8,1744,1);
   } else {
   say(8,1744,0);
   }
   say(0,1259,0);
   finita();
   }
return done;
}
#ifdef __STDC__
int p667(void)
#else
int p667()
#endif
{
int done=0;
   bitmod('s',28,14);
   if ((bitest(evar(1138),7)) ||
   value[1190]>5) {
   say(0,1322,0);
   } else {
   if ((isnear(119,0,3)) ||
   bitest(evar(1138),17)) {
   if (irand(100)<85) {
   say(0,1322,0);
   } else {
   if (irand(100)<95) {
   say(0,1642,0);
   p153();
   }
   say(0,1643,0);
   set('V',1172,'c',40,NULL,NULL);
   say(64,1644,0);
   }
   } else {
   if ((isnear(124,-1,-1)) ||
   isnear(125,-1,-1)) {
   if (isnear(124,-1,-1)) {
   say(0,1647,0);
   apport(124,702);
   }
   if (isnear(125,-1,-1)) {
   say(0,1648,0);
   apport(125,702);
   }
   } else {
   if (isnear(193,-1,-1)) {
   if (irand(100)<70) {
   if (value[193]==1) {
   say(0,1652,0);
   } else {
   say(0,1653,0);
   }
   p517(0,1);
   longjmp(loop_back,1);
   } else {
   if (value[193]==1) {
   say(0,1657,0);
   } else {
   say(0,1658,0);
   }
   p153();
   }
   } else {
   say(0,1322,0);
   }}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p746(void)
#else
int p746()
#endif
{
int done=0;
   say(64,1723,0);
return done;
}
#ifdef __STDC__
int p710(void)
#else
int p710()
#endif
{
int done=0;
   if (value[1170]>1) {
   (*procs[726])();
   }
   if ((value[HERE]==200||value[HERE]==264||value[HERE]==333)) {
   say(72,2041,0);
   }
   if (bitest(evar(1138),15)) {
   bitmod('s',evar(1249),0);
   say(12,1979,1136);
   say(72,2041,1);
   }
   say(76,1724,1136);
return done;
}
#ifdef __STDC__
int p152(void)
#else
int p152()
#endif
{
int done=0;
   if (KEY(81)) {
   (*procs[822])();
   }
   say(64,1725,0);
return done;
}
#ifdef __STDC__
int p776(void)
#else
int p776()
#endif
{
int done=0;
   say(64,1726,0);
return done;
}
#ifdef __STDC__
int p408(void)
#else
int p408()
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
   if ((location[88]==702)) {
   say(64,2003,0);
   }
   if (isnear(88,-1,-1)) {
   say(64,1775,0);
   }
   if (((((isnear(22,-1,-1)) &&
   value[22]>0) ||
   isnear(90,-1,-1)) ||
   (value[HERE]==264)) ||
   isnear(21,-1,-1)) {
   p656(0,0,0,30);
   }
   if ((((bitest(evar(1138),3)) ||
   bitest(evar(1138),5)) ||
   bitest(evar(1138),7)) ||
   (547<=value[1138] && value[1138]<=702)) {
   say(64,2003,0);
   }
   lval[0]=location[88];lbts[0*VARSIZE]=-1;
   lval[0] -= value[1138];
   if (lval[0]<0) {
   lval[0] *= -1;
   }
   lval[0] -= 1;
   lval[0] *= 3;
   set('L',1,'l',0,lval, lbts);
   lval[1] *= 2;
   p656(-1,lval[0],-1,lval[1]);
   } else {
   flush_command();
   say(0,1345,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p171(void)
#else
int p171()
#endif
{
int done=0;
   if (value[1170]==1) {
   return 0;
   }
   if (!((have(125,-1,-1)) ||
   have(124,-1,-1))) {
   say(72,1799,0);
   }
   if (((anyof(131,154,153,973,-1)) &&
   isnear(value[1137],-1,-1)) ||
   KEY(973)) {
   if (have(124,-1,-1)) {
   say(64,1816,0);
   }
   say(64,2514,0);
   }
   if (!(bitest(evar(1137),0))) {
   p39();
   }
   if (bitest(evar(1137),8)) {
   (*procs[783])();
   }
   if (((KEY(154)) &&
   !(value[HERE]==558)) ||
   KEY(131)) {
   say(64,1816,0);
   }
   if ((KEY(78)) &&
   isnear(78,-1,-1)) {
   say(64,1800,0);
   }
   if (KEY(139)) {
   if (((value[HERE]==443||value[HERE]==444||value[HERE]==446)) ||
   isnear(140,-1,-1)) {
   if (value[139]==0) {
   say(64,1801,0);
   }
   if (value[139]==1) {
   say(64,2200,0);
   }
   say(64,2456,0);
   }}
   if (KEY(13)) {
   if ((value[HERE]==218)) {
   say(64,1801,0);
   }
   if (((value[HERE]==215)) &&
   value[13]>0) {
   say(64,1801,0);
   }}
   if (KEY(89)) {
   if ((value[HERE]==457)) {
   if (value[89]==0) {
   say(64,1777,0);
   }
   if (value[89]==1) {
   apport(91,value[1138]);
   set('E',89,'c',2,NULL,NULL);
   say(64,1795,0);
   }
   say(64,1802,0);
   }}
   if (anyof(921,-1))   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p64(void)
#else
int p64(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
if (!KEY(93)) return 0;
   if (have(93,-1,-1)) {
   if ((bitest(evar(1138),7)) ||
   (547<=value[1138] && value[1138]<=702)) {
   say(64,1809,0);
   }
   if ((468<=value[1138] && value[1138]<=477)) {
   set('L',0,'v',1138,lval, lbts);
   lval[1]=467;lbts[1*VARSIZE]=-1;
   lval[0] -= lval[1];
   value[1188] += lval[0];
   if (value[1188]>9) {
   set('V',1188,'c',9,NULL,NULL);
   }
   if (value[1713]<2) {
   set('T',1713,'c',1,NULL,NULL);
   }}
   if ((bitest(evar(1138),5)) ||
   value[1188]==0) {
   say(64,1810,0);
   }
   if (value[193]<value[1188]) {
   set('L',0,'v',1188,lval, lbts);
   lval[0] -= value[193];
   say(8,1811,lval[0]);
   apport(193,value[1138]);
   set('E',193,'v',1188,NULL,NULL);
   if (bitest(evar(1170),8)) {
   bitmod('s',193,14);
   say(0,193,0);
   }
   } else {
   say(12,1829,193);
   bitmod('s',193,14);
   set('V',1202,'c',0,NULL,NULL);
   set('V',1201,'c',100,NULL,NULL);
   }
   } else {
   p625(*bitword(1137),value[1137]);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p511(void)
#else
int p511()
#endif
{
int done=0;
   if (((KEY(35)) ||
   value[1170]==1) &&
   isnear(35,-1,-1)) {
   if ((bitest(40,4)) &&
   !(bitest(104,4))) {
   bitmod('s',104,4);
   apport(104,value[1138]);
   say(64,1824,0);
   }
   say(64,1322,0);
   }
   if (!(value[1170]==2)) {
   return 0;
   }
   if (KEY(935)) {
   p39();
   }
   if (anyof(1126,1127,1128,-1))   say(76,3418,1137);
   if ((anyof(8,19,161,164,-1)) &&
   isnear(value[1137],-1,-1)) {
   say(64,2596,0);
   }
   if (isnear(value[1137],-1,-1)) {
   if ((KEY(193)) &&
   isnear(193,-1,-1)) {
   if (value[1190]==6) {
   say(0,1837,0);
   } else {
   say(0,1329,0);
   }
   p153();
   }}
   (*procs[800])();
return done;
}
#ifdef __STDC__
int p706(void)
#else
int p706(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(40)) return 0;
   if ((isnear(40,-1,-1)) &&
   value[40]<3) {
   set('V',1173,'c',400,NULL,NULL);
   set('E',40,'c',3,NULL,NULL);
   say(64,1826,0);
   }
   say(64,1825,0);
return done;
}
#ifdef __STDC__
int p355(void)
#else
int p355()
#endif
{
int done=0;
   say(64,1370,0);
return done;
}
#ifdef __STDC__
int p892(void)
#else
int p892()
#endif
{
int done=0;
   if (KEY(136)) {
   if ((isnear(136,-1,-1)) &&
   value[136]>2) {
   say(64,2456,0);
   }
   say(76,2343,136);
   }
   if (KEY(122)) {
   if (isnear(136,0,5)) {
   say(64,2456,0);
   }
   if ((isnear(194,-1,-1)) &&
   value[194]>=5) {
   say(64,2271,0);
   }}
return done;
}
#ifdef __STDC__
int p893(void)
#else
int p893()
#endif
{
int done=0;
   if (anyof(1003,753,-1))   say(64,3386,0);
   p39();
return done;
}
#ifdef __STDC__
int p61(void)
#else
int p61()
#endif
{
int done=0;
   if ((value[1190]==6) &&
   bitest(112,4)) {
   if ((location[112]==702)) {
   say(64,1868,0);
   }
   if (isnear(112,-1,-1)) {
   say(0,1838,0);
   p153();
   }
   if ((value[HERE]==447)) {
   say(0,1839,0);
   p153();
   }
   bitmod('s',450,4);
   value[1139]=449;*bitword(1139)=-1;
   apport(112,702);
   apport(193,702);
   apport(85,value[1138]);
   say(64,1840,0);
   }
   say(64,1350,0);
return done;
}
