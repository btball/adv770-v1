/* adv14.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p825(void)
#else
int p825()
#endif
{
int done=0;
   say(64,1846,0);
return done;
}
#ifdef __STDC__
int p908(void)
#else
int p908()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if ((value[1170]==1) ||
   !(bitest(evar(1137),0))) {
   return 0;
   }
   if (isnear(value[1137],-1,-1)) {
   if (anyof(96,-1))   say(64,1357,0);
   if (!(bitest(evar(1137),16))) {
   say(64,1308,0);
   }
   if (anyof(55,-1))   say(64,1884,0);
   if (have(value[1137],-1,-1)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (lval[0]>1) {
   say(76,1885,1137);
   }
   } else {
   if ((value[1179]<value[1194]) ||
   bitest(evar(1137),12)) {
   apport(value[1137],INHAND);
   p668();
   } else {
   say(64,1381,0);
   }}
   if (KEY(45)) {
   if ((value[HERE]==572||value[HERE]==573)) {
   set('E',45,'c',2,NULL,NULL);
   if (bitest(45,13)) {
   say(0,2436,0);
   say(64,1259,0);
   }
   bitmod('s',45,13);
   say(64,2437,0);
   } else    if ((value[HERE]==568||value[HERE]==574)) {
   say(64,2433,0);
   } else {
   say(64,2434,0);
   }}
   if (KEY(95)) {
   if ((((isnear(23,-1,-1)) ||
   isnear(5,-1,-1)) ||
   isnear(25,-1,-1)) ||
   isnear(194,-1,-1)) {
   say(64,3368,0);
   }
   if (value[1197]>0) {
   say(64,2265,0);
   }}
value[value[1137]]=2;
   bitmod('s',evar(1137),12);
   if (KEY(46)) {
   if (bitest(46,14)) {
   say(64,3415,0);
   } else {
   bitmod('s',46,14);
   say(64,1892,0);
   }}
   if (KEY(95)) {
   value[1197] = irand(12-8+1)+8;
   if (bitest(evar(1170),8)) {
   bitmod('s',95,13);
   say(64,2263,0);
   } else {
   say(64,2264,0);
   }}
   if (KEY(145)) {
   lval[1] = irand(5-2+1)+2;
   lval[1] += 2;
   set('E',145,'l',1,lval, lbts);
   if (!(bitest(evar(1210),2))) {
   bitmod('s',evar(1210),2);
   say(64,2319,0);
   }}
   if (anyof(50,-1))   say(64,1890,0);
   say(64,3415,0);
   }
return done;
}
#ifdef __STDC__
int p705(void)
#else
int p705()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if ((KEY(109)) &&
   have(109,-1,-1)) {
   p231();
   longjmp(loop_back,1);
   }
   if (value[1170]==1) {
   return 0;
   }
   if (!(bitest(evar(1137),16))) {
   say(64,1396,0);
   }
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if ((lval[0]<2) ||
   !have(value[1137],-1,-1)) {
   say(64,1886,0);
   }
   if (!(value[1179]<value[1194])) {
   say(76,3441,1137);
   }
   if (!(anyof(67,95,145,65,-1))) {
   bitmod('c',evar(1137),12);
   }
   if (KEY(95)) {
   lval[1] = irand(5-2+1)+2;
   value[1197] -= lval[1];
   }
   if (KEY(46)) {
   set('L',0,'e',46,lval, lbts);
   if (lval[0]>1) {
   set('E',46,'c',1,NULL,NULL);
   if (lval[0]<9) {
   if (!((lval[0]==3) ||
   (value[HERE]==311||value[HERE]==312||value[HERE]==310))) {
   say(64,2097,0);
   }
   } else {
   if (lval[0]<12) {
   say(64,2098,0);
   }
   if (lval[0]<17) {
   say(64,2099,0);
   }
   if (lval[0]<19) {
   say(64,2100,0);
   }
   say(64,2101,0);
   }}}
value[value[1137]]=1;
   if ((KEY(95)) &&
   bitest(95,13)) {
   say(64,2269,0);
   }
   if (anyof(145,-1))   say(64,2321,0);
   say(64,3415,0);
return done;
}
#ifdef __STDC__
int p876(void)
#else
int p876()
#endif
{
int done=0;
   if (KEY(160)) {
   if (isnear(160,-1,-1)) {
   if (value[2281]==0) {
   say(0,2278,0);
   }
   p529();
   }
   p39();
   }
   if (((anyof(92,55,84,56,111,-1)) &&
   isnear(87,-1,-1)) &&
   isnear(value[1137],-1,-1)) {
   if (!(bitest(139,4))) {
   if (anyof(92,-1))   say(64,1353,0);
   say(72,1894,852);
   }
   if (bitest(evar(1137),14)) {
   say(64,3319,0);
   }
   bitmod('s',evar(1137),14);
   if (KEY(92)) {
   say(0,3315,0);
   } else    if (KEY(55)) {
   say(0,3316,0);
   } else    if (KEY(111)) {
   say(0,3321,0);
   } else    if (KEY(84)) {
   say(0,3317,0);
   } else {
   say(0,3324,0);
   }
   say(64,1259,0);
   }
   say(72,1894,852);
return done;
}
#ifdef __STDC__
int p704(void)
#else
int p704()
#endif
{
int done=0;
   if (value[1170]==1) {
   if (isnear(17,-1,-1)) {
   if ((value[HERE]==224)) {
   if (!(bitest(224,5))) {
   bitmod('s',225,5);
   }
   move(225,-1);
   } else {
   if (!(bitest(225,5))) {
   bitmod('s',224,5);
   }
   move(224,-1);
   }
   bitmod('c',evar(1170),0);
   bitmod('c',17,14);
   if (!((location[193]==701))) {
   value[1147]=location[193];*bitword(1147)=-1;
   if (value[1147]==value[1138]) {
   say(8,1564,1);
   say(64,193,0);
   } else    if (value[1147]==value[1139]) {
   say(76,2036,193);
   }}
   say(72,1564,0);
   }
   if (isnear(12,-1,-1)) {
   say(64,1897,0);
   }
   say(64,1896,0);
   }
   p39();
return done;
}
#ifdef __STDC__
int p863(void)
#else
int p863()
#endif
{
int done=0;
   if (KEY(866)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((((value[1170]==1) ||
   KEY(193)) &&
   bitest(evar(1207),0)) &&
   value[1207]==1) {
   say(64,1900,0);
   }
   if (anyof(92,74,-1)) {
   if (isnear(92,-1,-1)) {
   say(64,3320,0);
   }
   return 0;
   }
   if (((anyof(8,19,161,164,-1)) ||
   value[1170]==1) &&
   (value[HERE]==575||value[HERE]==472||value[HERE]==478)) {
   say(64,1900,0);
   }
   if (value[1170]==2) {
   if (!(anyof(73,116,193,91,-1))) {
   p39();
   }}
   if (isnear(91,-1,-1)) {
   if ((value[1170]==1) ||
   KEY(91)) {
   say(64,1533,0);
   }}
   if (((isnear(73,-1,-1)) ||
   isnear(116,-1,-1)) ||
   isnear(193,-1,-1)) {
   say(64,1900,0);
   }
   say(76,1901,1136);
return done;
}
#ifdef __STDC__
int p940(void)
#else
int p940()
#endif
{
int done=0;
   say(64,1991,0);
return done;
}
#ifdef __STDC__
int p613(void)
#else
int p613()
#endif
{
int done=0;
   say(64,1991,0);
return done;
}
#ifdef __STDC__
int p551(void)
#else
int p551()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   lval[0] = irand(3);
   say(72,2331,lval[0]);
return done;
}
#ifdef __STDC__
int p890(void)
#else
int p890()
#endif
{
int done=0;
   if (anyof(929,-1))   say(64,1935,0);
   if (KEY(930)) {
   p773();
   }
   if (anyof(758,-1))   say(64,1956,0);
   if (anyof(733,-1))   say(64,1957,0);
   if ((value[1170]==1) ||
   KEY(3)) {
   say(0,1934,0);
   set('V',1172,'c',34,NULL,NULL);
   say(64,1424,0);
   }
return done;
}
#ifdef __STDC__
int p161(void)
#else
int p161()
#endif
{
int done=0;
   if (((value[HERE]==195||value[HERE]==201||value[HERE]==202||value[HERE]==259||value[HERE]==508)) ||
   (value[HERE]==510||value[HERE]==511)) {
   if ((KEY(898)) ||
   value[1170]==1) {
   say(64,1959,0);
   }}
   if ((value[HERE]==195||value[HERE]==538||value[HERE]==197||value[HERE]==198||value[HERE]==542||value[HERE]==543)) {
   if ((KEY(538)) ||
   value[1170]==1) {
   say(64,2704,0);
   }}
   if ((value[HERE]==195||value[HERE]==196||value[HERE]==480||value[HERE]==481)) {
   if ((anyof(195,480,-1)) ||
   value[1170]==1) {
   say(64,2696,0);
   }}
   if ((value[HERE]==566||value[HERE]==567)) {
   if ((KEY(898)) ||
   value[1170]==1) {
   say(64,1960,0);
   }}
   default_to(0,value[HERE],8);
   if (value[1170]==1) {
   say(64,2705,0);
   } else    if (bitest(evar(1137),8)) {
   if (anyof(39,-1))   say(72,1456,1);
   if (anyof(25,90,5,-1))   say(76,2706,1137);
   if (anyof(193,-1))   say(76,2707,193);
   }
   p39();
return done;
}
#ifdef __STDC__
int p535(void)
#else
int p535()
#endif
{
int done=0;
   if (anyof(855,929,930,-1)) {
   if ((KEY(855)) &&
   anyof(929,930,-1)) {
   set('V',1136,'v',1137,NULL,NULL);
   }
   set('V',1170,'c',1,NULL,NULL);
   (*procs[855])();
   longjmp(loop_back,1);
   }
   if (((value[HERE]==215||value[HERE]==218)) &&
   value[13]<2) {
   if (((value[HERE]==218)) ||
   value[13]==1) {
   say(76,1440,13);
   }}
   if (((value[HERE]==217||value[HERE]==216)) &&
   value[13]==1) {
   say(72,1440,2);
   }
   if (((value[HERE]==442||value[HERE]==441||value[HERE]==440)) &&
   value[139]==1) {
   say(72,1441,2);
   }
   if (((value[HERE]==443)) &&
   value[139]<2) {
   say(76,1441,139);
   }
   if ((value[HERE]==477)) {
   say(64,2619,0);
   }
   if ((value[HERE]==447)) {
   say(64,3185,0);
   }
   if ((value[HERE]==311||value[HERE]==312||value[HERE]==451||value[HERE]==650)) {
   say(64,1964,0);
   }
   if ((have(46,-1,-1)) &&
   value[46]>2) {
   if (!(bitest(46,13))) {
   value[46] += 1;
   }
   if (value[46]<9) {
   say(64,2102,0);
   }
   say(64,2103,0);
   }
   if (((isnear(193,-1,-1)) ||
   isnear(130,-1,-1)) ||
   value[18]>0) {
   say(64,1969,0);
   }
   if (ishere(109,-1,-1)) {
   say(76,1962,109);
   }
   if (isnear(125,-1,-1)) {
   say(76,1962,125);
   }
   if ((value[HERE]==309||value[HERE]==308||value[HERE]==310||value[HERE]==358||value[HERE]==464)) {
   if (bitest(311,4)) {
   if ((value[HERE]==310)) {
   say(72,2918,0);
   }
   say(72,2918,1);
   } else {
   say(64,1963,0);
   }}
   if ((value[HERE]==515||value[HERE]==386)) {
   say(64,1963,0);
   }
   if ((value[HERE]==289||value[HERE]==298)) {
   say(72,2128,0);
   }
   if ((value[HERE]==574||value[HERE]==575)) {
   say(72,2128,1);
   }
   if ((value[HERE]==573)) {
   say(72,2128,2);
   }
   if ((((bitest(20,13)) &&
   !(bitest(evar(1138),7))) &&
   !(547<=value[1138] && value[1138]<=702)) &&
   !(bitest(evar(1138),3))) {
   say(64,1411,0);
   }
   if ((value[HERE]==618)) {
   say(64,1965,0);
   }
   if ((value[HERE]==619)) {
   say(64,1966,0);
   }
   if (bitest(evar(1138),15)) {
   say(64,1967,0);
   }
   if ((587<=value[1138] && value[1138]<=627)) {
   say(64,1968,0);
   }
   if (((547<=value[1138] && value[1138]<=553)) ||
   (439<=value[1138] && value[1138]<=442)) {
   say(0,1971,0);
   if (bitest(evar(1210),0)) {
   say(64,1259,0);
   } else {
   bitmod('s',evar(1210),0);
   say(64,1972,0);
   }}
   if ((value[HERE]==554)) {
   say(64,1973,0);
   }
   if ((value[HERE]==635||value[HERE]==636)) {
   say(72,2544,1);
   }
   if ((value[HERE]==632||value[HERE]==631)) {
   say(72,2544,0);
   }
   if ((value[HERE]==630||value[HERE]==633)) {
   say(72,2545,0);
   }
   if ((value[HERE]==629||value[HERE]==634)) {
   say(72,2545,1);
   }
   if ((value[HERE]==572||value[HERE]==573||value[HERE]==568)) {
   say(64,2543,0);
   }
   if ((value[HERE]==574||value[HERE]==575)) {
   say(64,2542,0);
   }
   if ((value[HERE]==586)) {
   say(64,2541,0);
   }
   if ((value[HERE]==638)) {
   say(72,2540,0);
   }
   if ((value[HERE]==637)) {
   say(72,2540,1);
   }
   if ((value[HERE]==386)) {
   say(64,2005,0);
   }
   if ((value[HERE]==313)) {
   say(72,2918,0);
   }
   if (((value[HERE]==324)) &&
   value[26]<2) {
   say(72,2918,2);
   }
   if ((value[HERE]==314||value[HERE]==354||value[HERE]==324)) {
   say(72,2918,1);
   }
   if ((value[HERE]==318)) {
   say(76,3194,318);
   }
   if ((value[HERE]==334)) {
   say(64,3130,0);
   }
   if ((value[HERE]==671)) {
   say(64,2884,0);
   }
   if ((value[HERE]==453)) {
   say(0,3244,0);
   say(64,1259,0);
   }
   if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   say(64,1970,0);
   }
   say(64,1961,0);
return done;
}
#ifdef __STDC__
int p784(void)
#else
int p784()
#endif
{
int done=0;
   say(64,2002,0);
return done;
}
#ifdef __STDC__
int p897(void)
#else
int p897()
#endif
{
int done=0;
   if ((value[1170]>1) &&
   !KEY(1003)) {
   if (bitest(evar(1137),3)) {
   if (!(isnear(value[1137],-1,-1))) {
   p39();
   }
   if (KEY(136)) {
   if (value[136]==1) {
   if ((value[HERE]==200)) {
   say(64,2250,0);
   }
   if ((439<=value[1138] && value[1138]<=442)) {
   say(64,3327,0);
   }
   if ((bitest(evar(1138),17)) ||
   (547<=value[1138] && value[1138]<=554)) {
   set('E',136,'c',2,NULL,NULL);
   say(64,2254,0);
   }
   } else {
   say(64,2252,0);
   }}
   if (bitest(evar(1138),17)) {
   if (((value[HERE]==511||value[HERE]==510)) &&
   bitest(94,14)) {
   say(64,2150,0);
   }
   if ((KEY(132)) &&
   value[132]==2) {
   say(64,2149,0);
   }
   if (KEY(63)) {
   if (bitest(63,5)) {
   say(72,2565,1);
   } else {
   say(72,2564,0);
   }}
   if (KEY(111)) {
   say(64,3366,0);
   }
   say(64,2148,0);
   }
   say(72,2143,1);
   }
   p39();
   }
   if (((value[HERE]==510||value[HERE]==511)) &&
   bitest(94,14)) {
   bitmod('c',94,14);
   bitmod('s',evar(1209),7);
   bitmod('c',evar(1209),6);
   bitmod('s',510,8);
   bitmod('s',511,8);
   set('E',511,'c',0,NULL,NULL);
   if (isnear(132,-1,-1)) {
   set('E',132,'c',1,NULL,NULL);
   }
   say(64,2139,0);
   }
   if ((502<=value[1138] && value[1138]<=509)) {
   say(64,2140,0);
   }
   if (bitest(evar(1138),17)) {
   say(64,2141,0);
   }
   p321(0,0);
   if (value[1243]!=0) {
   say(64,2142,0);
   }
   if (((547<=value[1138] && value[1138]<=554)) ||
   (439<=value[1138] && value[1138]<=442)) {
   say(64,1358,0);
   }
   say(72,2143,0);
return done;
}
#ifdef __STDC__
int p818(void)
#else
int p818()
#endif
{
int done=0;
   say(64,2156,0);
return done;
}
#ifdef __STDC__
int p332(void)
#else
int p332()
#endif
{
int done=0;
   if ((519<=value[1138] && value[1138]<=544)) {
   say(64,1418,0);
   }
   if ((bitest(evar(1138),7)) &&
   !(547<=value[1138] && value[1138]<=702)) {
   say(76,2158,1136);
   }
   say(76,2159,1136);
return done;
}
#ifdef __STDC__
int p213(void)
#else
int p213()
#endif
{
int done=0;
   if (bitest(evar(1138),7)) {
   say(64,2163,0);
   }
   if (bitest(evar(1209),5)) {
   say(64,2166,0);
   }
   set('V',1172,'c',24,NULL,NULL);
   say(64,2164,0);
return done;
}
#ifdef __STDC__
int p728(void)
#else
int p728()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (((value[1170]==1) ||
   KEY(63)) &&
   isnear(63,-1,-1)) {
   if (value[63]==0) {
   say(72,2168,0);
   }
   set('L',0,'e',63,lval, lbts);
   set('E',63,'c',0,NULL,NULL);
   if (lval[0]==1) {
   say(64,2171,0);
   }
   say(72,2169,0);
   }
return done;
}
#ifdef __STDC__
int p871(void)
#else
int p871()
#endif
{
int done=0;
   if (((value[1170]==1) ||
   KEY(63)) &&
   isnear(63,-1,-1)) {
   if (value[63]>0) {
   say(72,2168,2);
   }
   if (have(63,-1,-1)) {
   say(64,2172,0);
   }
   if ((value[HERE]==571)) {
   say(72,2647,0);
   }
   if ((572<=value[1138] && value[1138]<=575)) {
   say(72,2647,1);
   }
   if (bitest(evar(1138),14)) {
   say(64,2170,0);
   }
   if (((value[HERE]==593)) &&
   bitest(evar(1210),1)) {
   say(64,2228,0);
   }
   if (bitest(63,13)) {
   set('E',63,'c',3,NULL,NULL);
   } else {
   set('E',63,'c',2,NULL,NULL);
   }
   if ((value[HERE]==593)) {
   say(64,2227,0);
   }
   if ((value[HERE]==618)) {
   apport(63,619);
   say(64,2229,0);
   }
   say(8,2169,2);
   if (((value[HERE]==432)) &&
   !(bitest(433,4))) {
glue_text();
   say(0,3360,0);
   longjmp(loop_back,1);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p124(void)
#else
int p124()
#endif
{
int done=0;
   if ((362<=value[1138] && value[1138]<=373)) {
   say(64,2193,0);
   }
   if (value[252]==0) {
   if ((227<=value[1138] && value[1138]<=252)) {
   say(8,2187,10);
   set('V',1172,'c',31,NULL,NULL);
   say(64,2188,0);
   }
   if (bitest(evar(1138),10)) {
   say(64,2194,0);
   }
   say(64,2190,0);
   }
   if ((((227<=value[1138] && value[1138]<=252)) &&
   !(bitest(251,4))) &&
   !(bitest(evar(1209),8))) {
   if (bitest(252,4)) {
   say(64,2195,0);
   bitmod('s',evar(1209),8);
   } else {
   say(64,2196,0);
   }}
   if (bitest(evar(1138),10)) {
   say(64,2194,0);
   }
   say(64,2191,0);
return done;
}
#ifdef __STDC__
int p471(void)
#else
int p471()
#endif
{
int done=0;
   say(64,3230,0);
return done;
}
#ifdef __STDC__
int p385(void)
#else
int p385(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(138)) return 0;
   if ((have(138,-1,-1)) &&
   isnear(109,-1,-1)) {
   p305();
   }
return done;
}
#ifdef __STDC__
int p386(void)
#else
int p386(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(118)) return 0;
   if ((isnear(85,-1,-1)) &&
   have(118,-1,-1)) {
   p306();
   }
return done;
}
#ifdef __STDC__
int p387(void)
#else
int p387(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(87)) return 0;
   if (have(136,0,6)) {
   if ((value[HERE]==443)) {
   p304();
   }
   say(64,2344,0);
   }
   p625(-1,87);
return done;
}
#ifdef __STDC__
int p388(void)
#else
int p388()
#endif
{
int done=0;
   if (KEY(753)) {
   (*procs[823])();
   }
   if (KEY(1040)) {
   if (isnear(5,-1,-1)) {
   say(72,3462,1);
   } else {
   say(72,3462,0);
   }}
   set('V',1243,'c',0,NULL,NULL);
   if (((KEY(136)) &&
   (value[HERE]==199)) &&
   ishere(194,-1,-1)) {
   bitmod('s',194,15);
   p383(0,1);
   longjmp(loop_back,1);
   }
   if (KEY(790)) {
   if (((((have(136,0,5)) ||
   have(136,0,3)) ||
   have(136,0,7)) ||
   have(136,0,8)) ||
   have(136,0,9)) {
   value[1137]=136;*bitword(1137)=-1;
   } else    if ((have(119,0,5)) ||
   have(119,0,3)) {
   value[1137]=119;*bitword(1137)=-1;
   } else    if ((have(123,0,5)) ||
   have(123,0,3)) {
   value[1137]=123;*bitword(1137)=-1;
   } else {
   say(72,1506,790);
   }
   } else    if (KEY(122)) {
   if (have(136,0,5)) {
   value[1137]=136;*bitword(1137)=-1;
   } else    if (have(119,0,5)) {
   value[1137]=119;*bitword(1137)=-1;
   } else    if (have(123,0,5)) {
   value[1137]=123;*bitword(1137)=-1;
   } else {
   say(76,1506,122);
   }
   } else    if (KEY(120)) {
   if (isnear(5,-1,-1)) {
   p880();
   }
   p321(0,0);
   if (value[1243]!=0) {
   set('V',1137,'v',1243,NULL,NULL);
   } else {
   say(76,1506,120);
   }}
   set('V',1145,'c',0,NULL,NULL);
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (ishere(value[1146],1,8)) {
   if ((value[1146]==5)) {
   p880();
   } else    set('V',1145,'v',1146,NULL,NULL);
   }}
   if (value[1145]==0) {
   say(64,2344,0);
   }
   if (value[1170]==1) {
   return 0;
   }
   if (!(have(value[1137],-1,-1))) {
   say(76,1506,1137);
   }
   if ((value[1145]==23||value[1145]==193||value[1145]==25||value[1145]==130)) {
   say(72,2332,1);
   }
   if ((value[1145]==18||value[1145]==39||value[1145]==90||value[1145]==94)) {
   say(72,2332,0);
   }
   if ((value[1145]==9)) {
   if ((value[1137]==109)) {
   p941();
   say(64,1390,0);
   }
   say(76,1391,9);
   }
   if ((value[1145]==21||value[1145]==114||value[1145]==115||value[1145]==109||value[1145]==28||value[1145]==29||value[1145]==85||value[1145]==194)) {
   say(12,2028,1145);
   say(76,2345,1137);
   }
return done;
}
#ifdef __STDC__
int p128(void)
#else
int p128()
#endif
{
int done=0;
   if ((value[1170]==1) &&
   isnear(153,-1,-1)) {
   bitmod('s',evar(1170),5);
   say(64,2600,0);
   }
   if (((value[HERE]==262||value[HERE]==263)) &&
   KEY(78)) {
   say(64,1702,0);
   }
   if (KEY(139)) {
   if (((isnear(139,-1,-1)) ||
   isnear(13,-1,-1)) ||
   (value[HERE]==444||value[HERE]==446)) {
   say(64,2316,0);
   }
   if ((isnear(14,-1,-1)) ||
   isnear(140,-1,-1)) {
   say(72,2152,0);
   }}
   if ((have(145,-1,-1)) &&
   value[145]>1) {
   if ((KEY(131)) &&
   (519<=value[1138] && value[1138]<=544)) {
   say(64,2317,0);
   }
   if ((KEY(154)) &&
   (547<=value[1138] && value[1138]<=553)) {
   say(64,2317,0);
   }
   if ((KEY(153)) &&
   isnear(153,0,0)) {
   set('E',153,'c',1,NULL,NULL);
   set('E',559,'c',1,NULL,NULL);
   bitmod('s',153,6);
   bitmod('c',145,12);
   bitmod('c',evar(1138),8);
   set('E',145,'c',1,NULL,NULL);
   say(64,2322,0);
   }
   if ((bitest(evar(1137),8)) &&
   isnear(value[1137],-1,-1)) {
   say(64,2318,0);
   }
   say(64,1396,0);
   } else {
   if ((KEY(153)) &&
   isnear(153,-1,-1)) {
   say(64,2513,0);
   }}
   if (KEY(789)) {
   (*procs[788])();
   }
return done;
}
#ifdef __STDC__
int p58(void)
#else
int p58()
#endif
{
int done=0;
   if ((519<=value[1138] && value[1138]<=544)) {
   say(64,2366,0);
   }
   p39();
return done;
}
#ifdef __STDC__
int p159(void)
#else
int p159()
#endif
{
int done=0;
   if ((value[HERE]==632||value[HERE]==631)) {
   say(64,2379,0);
   }
   say(64,2376,0);
return done;
}
#ifdef __STDC__
int p249(void)
#else
int p249()
#endif
{
int done=0;
   if (value[1254]==0) {
   say(0,2447,0);
   set('V',1254,'c',1,NULL,NULL);
   longjmp(loop_back,1);
   } else {
   say(72,2449,1);
   }
return done;
}
#ifdef __STDC__
int p270(void)
#else
int p270()
#endif
{
int done=0;
   if (value[1254]==0) {
   say(72,2449,0);
   } else {
   set('V',1254,'c',0,NULL,NULL);
   say(64,2448,0);
   }
return done;
}
#ifdef __STDC__
int p691(void)
#else
int p691()
#endif
{
int done=0;
   if ((KEY(109)) &&
   isnear(108,-1,-1)) {
   (*procs[764])();
   }
   if ((KEY(51)) &&
   isnear(35,-1,-1)) {
   (*procs[765])();
   }
   if ((anyof(119,123,136,120,-1)) &&
   bitest(evar(1138),17)) {
   if (KEY(120)) {
   if (have(119,-1,-1)) {
   say(76,3313,119);
   }
   if (have(136,-1,-1)) {
   say(76,3313,136);
   }
   if (have(123,-1,-1)) {
   say(76,3313,123);
   }}
   say(76,3313,1137);
   }
   say(76,2405,1136);
return done;
}
#ifdef __STDC__
int p34(void)
#else
int p34()
#endif
{
int done=0;
   say(76,2440,1136);
return done;
}
#ifdef __STDC__
int p509(void)
#else
int p509()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (KEY(778)) {
   set('L',0,'c',0,lval, lbts);
   } else    if (KEY(777)) {
   set('L',0,'c',1,lval, lbts);
   } else    if (value[1170]==1) {
   set('L',0,'c',2,lval, lbts);
   } else {
   say(64,1396,0);
   }
   special(19,&lval[0]);
   set('L',1,'l',0,lval, lbts);
   say(72,3224,lval[1]);
return done;
}
#ifdef __STDC__
int p527(void)
#else
int p527()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   say(76,3227,1136);
   }
   special(20,&lval[0]);
   if (lval[0]>0) {
   say(12,3225,1136);
   say(72,3226,lval[0]);
   }
   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p548(void)
#else
int p548()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   say(76,3227,1136);
   }
   special(21,&lval[0]);
   say(12,3225,1136);
   say(72,3226,lval[0]);
return done;
}
#ifdef __STDC__
int p750(void)
#else
int p750()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   say(64,3228,0);
   }
   special(22,&lval[0]);
   if (lval[0]>0) {
   say(72,3229,lval[0]);
   }
   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p390(void)
#else
int p390()
#endif
{
int done=0;
   say(64,1798,0);
return done;
}
#ifdef __STDC__
int p831(void)
#else
int p831()
#endif
{
int done=0;
   say(64,2535,0);
return done;
}
#ifdef __STDC__
int p484(void)
#else
int p484()
#endif
{
int done=0;
   p220();
return done;
}
#ifdef __STDC__
int p684(void)
#else
int p684()
#endif
{
int done=0;
   if (value[1170]==1) {
   say(72,2479,0);
   }
   if (!(have(value[1137],-1,-1))) {
   p625(*bitword(1137),value[1137]);
   }
   if (anyof(110,-1))   say(64,2480,0);
   say(72,2479,1);
return done;
}
#ifdef __STDC__
int p689(void)
#else
int p689()
#endif
{
int done=0;
   if ((KEY(125)) &&
   value[125]==0) {
   p381();
   }
   default_to(0,value[HERE],9);
   if (KEY(162)) {
   if (value[162]==0) {
   if ((value[HERE]==475)) {
   (*procs[767])();
   }
   say(76,2497,162);
   }
   say(76,2484,162);
   }
   if ((KEY(98)) &&
   isnear(98,-1,-1)) {
   (*procs[767])();
   }
   if ((KEY(6)) &&
   isnear(6,-1,-1)) {
   if (value[6]==1) {
   say(76,1598,6);
   }
   if ((value[HERE]==203)) {
   (*procs[767])();
   }
   say(76,2497,6);
   }
   if ((KEY(19)) &&
   isnear(19,-1,-1)) {
   if (value[575]==1) {
   say(76,1598,8);
   }
   if ((value[HERE]==577)) {
   (*procs[767])();
   }
   say(76,2497,8);
   }
   if ((KEY(161)) &&
   isnear(161,-1,-1)) {
   if ((value[HERE]==473)) {
   if (value[161]==0) {
   say(64,1887,0);
   }
   if (value[161]==2) {
   set('E',161,'c',1,NULL,NULL);
   set('E',472,'c',1,NULL,NULL);
   }
   say(76,1598,8);
   } else {
   if (value[161]==0) {
   say(64,1887,0);
   }
   p145();
   }}
   if ((KEY(164)) &&
   isnear(164,-1,-1)) {
   if (value[1190]==5) {
   say(64,2496,0);
   }
   if ((value[HERE]==479)) {
   if (value[164]==1) {
   say(76,1598,8);
   }
   set('E',164,'c',1,NULL,NULL);
   set('E',479,'c',1,NULL,NULL);
   set('E',478,'c',1,NULL,NULL);
   say(72,2603,1);
   }
   if (value[164]==0) {
   say(76,2497,8);
   }
   set('E',164,'c',0,NULL,NULL);
   set('E',479,'c',0,NULL,NULL);
   set('E',478,'c',0,NULL,NULL);
   say(72,2603,0);
   }
   if ((value[1170]==2) &&
   isnear(value[1137],-1,-1)) {
   if (bitest(evar(1137),3)) {
   if ((KEY(125)) &&
   ishere(125,0,0)) {
   say(64,1572,0);
   }
   say(76,2486,1137);
   }
   if (bitest(evar(1137),8)) {
   say(64,1396,0);
   }
   if (anyof(13,139,-1))   say(76,1401,1137);
   if ((KEY(4)) &&
   value[4]>0) {
   say(64,2327,0);
   }
   say(76,2484,1137);
   }
return done;
}
#ifdef __STDC__
int p690(void)
#else
int p690()
#endif
{
int done=0;
   default_to(0,value[HERE],9);
   if (KEY(162)) {
   if ((value[HERE]==474)) {
   (*procs[767])();
   }
   if ((value[HERE]==475)) {
   if (value[162]==1) {
   say(76,2485,162);
   }
   say(76,2497,162);
   }}
   if ((KEY(98)) &&
   isnear(98,-1,-1)) {
   (*procs[767])();
   }
   if ((KEY(6)) &&
   isnear(6,-1,-1)) {
   if (value[6]==1) {
   say(76,1598,6);
   }
   if ((value[HERE]==204)) {
   (*procs[767])();
   }
   say(76,2497,6);
   }
   if ((KEY(19)) &&
   isnear(19,-1,-1)) {
   if (value[575]==1) {
   say(76,1598,8);
   }
   if ((value[HERE]==575)) {
   (*procs[767])();
   }
   say(76,2497,8);
   }
   if ((KEY(161)) &&
   isnear(161,-1,-1)) {
   if ((value[HERE]==473)) {
   if (value[161]==2) {
   p145();
   }
   if (value[161]==1) {
   say(76,2485,8);
   }
   say(76,2497,8);
   } else {
   if (value[161]==2) {
   set('E',161,'c',1,NULL,NULL);
   set('E',472,'c',1,NULL,NULL);
   say(64,2505,0);
   }
   if (value[161]==1) {
   say(76,1598,8);
   }
   say(64,1887,0);
   }}
   if ((KEY(164)) &&
   isnear(164,-1,-1)) {
   if (value[1190]==5) {
   say(64,2496,0);
   }
   if ((value[HERE]==478)) {
   if (value[164]==1) {
   say(76,1598,8);
   }
   set('E',164,'c',1,NULL,NULL);
   set('E',479,'c',1,NULL,NULL);
   set('E',478,'c',1,NULL,NULL);
   say(72,2603,1);
   }
   if (value[164]==0) {
   say(76,2497,8);
   }
   set('E',164,'c',0,NULL,NULL);
   set('E',479,'c',0,NULL,NULL);
   set('E',478,'c',0,NULL,NULL);
   say(72,2603,0);
   }
   if ((value[1170]==2) &&
   isnear(value[1137],-1,-1)) {
   if ((bitest(evar(1137),8)) &&
   !anyof(115,114,-1)) {
   say(64,1396,0);
   }
   if ((KEY(4)) &&
   value[4]>0) {
   say(64,2327,0);
   }
   say(76,2485,1137);
   }
return done;
}
#ifdef __STDC__
int p883(void)
#else
int p883()
#endif
{
int done=0;
   say(64,1935,0);
return done;
}
#ifdef __STDC__
int p627(void)
#else
int p627()
#endif
{
int done=0;
   p773();
return done;
}
#ifdef __STDC__
int p687(void)
#else
int p687()
#endif
{
int done=0;
   if ((isnear(19,-1,-1)) &&
   value[575]==0) {
   set('E',575,'c',1,NULL,NULL);
   set('E',577,'c',1,NULL,NULL);
   say(8,2493,873);
   say(64,2494,0);
   }
   say(72,1343,873);
return done;
}
#ifdef __STDC__
int p520(void)
#else
int p520()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   KEY(160)) {
   if (isnear(160,-1,-1)) {
   p529();
   }}
   if ((value[1170]==1) ||
   anyof(8,19,161,164,-1)) {
   if ((((isnear(8,0,0)) ||
   isnear(19,0,0)) ||
   isnear(161,0,0)) ||
   isnear(164,0,0)) {
   if (((value[HERE]==472)) &&
   value[163]<=1) {
   if (value[2502]==2) {
   say(0,2503,0);
   if (value[2503]==1) {
   longjmp(loop_back,1);
   } else {
   set('T',2502,'c',0,NULL,NULL);
   say(0,2094,0);
   p153();
   }}}
   say(64,2502,0);
   }
   if ((((isnear(8,-1,-1)) ||
   isnear(19,-1,-1)) ||
   isnear(161,-1,-1)) ||
   isnear(164,-1,-1)) {
   say(64,2279,0);
   }
   p39();
   }
return done;
}
#ifdef __STDC__
int p630(void)
#else
int p630()
#endif
{
int done=0;
   (*procs[764])();
return done;
}
#ifdef __STDC__
int p215(void)
#else
int p215()
#endif
{
int done=0;
   say(64,2456,0);
return done;
}
#ifdef __STDC__
int p273(void)
#else
int p273()
#endif
{
int done=0;
   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p712(void)
#else
int p712()
#endif
{
int done=0;
   if (value[1170]==1) {
   say(76,2571,1136);
   }
   if (value[1190]<3) {
   say(64,2310,0);
   }
   (*procs[726])();
return done;
}
#ifdef __STDC__
int p680(void)
#else
int p680()
#endif
{
int done=0;
   flush_command();
   say(64,1345,0);
return done;
}
#ifdef __STDC__
int p682(void)
#else
int p682()
#endif
{
int done=0;
   if (value[1190]<3) {
   say(64,1345,0);
   }
   say(64,2575,0);
return done;
}
#ifdef __STDC__
int p155(void)
#else
int p155()
#endif
{
int done=0;
   say(64,2578,0);
return done;
}
#ifdef __STDC__
int p635(void)
#else
int p635()
#endif
{
int done=0;
   say(64,2591,0);
return done;
}
#ifdef __STDC__
int p608(void)
#else
int p608()
#endif
{
int done=0;
   (*procs[730])();
return done;
}
#ifdef __STDC__
int p927(void)
#else
int p927()
#endif
{
int done=0;
   say(64,1751,0);
return done;
}
#ifdef __STDC__
int p924(void)
#else
int p924()
#endif
{
int done=0;
   if (value[1170]==1) {
   say(64,1708,0);
   }
   if ((bitest(evar(1137),1)) &&
   (value[HERE]==value[1137])) {
   say(64,1418,0);
   }
   if ((bitest(evar(1137),0)) &&
   isnear(value[1137],-1,-1)) {
   if (have(value[1137],-1,-1)) {
   say(76,1307,1137);
   }
   say(64,1708,0);
   }
   say(64,1751,0);
return done;
}
#ifdef __STDC__
int p60(void)
#else
int p60()
#endif
{
int done=0;
   if (((value[HERE]==575||value[HERE]==576)) &&
   value[575]==1) {
   p146();
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p160(void)
#else
int p160()
#endif
{
int done=0;
   say(64,1873,0);
return done;
}
#ifdef __STDC__
int p830(void)
#else
int p830()
#endif
{
int done=0;
   say(8,1875,0);
   say(8,1875,1);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p659(void)
#else
int p659()
#endif
{
int done=0;
   if (((KEY(138)) ||
   value[1170]==1) &&
   bitest(138,13)) {
   say(72,1336,0);
   }
   if (isnear(151,-1,-1)) {
   say(76,1336,1170);
   }
   if ((isnear(87,-1,-1)) ||
   isnear(136,0,6)) {
   say(72,3332,0);
   }
   say(72,3332,1);
return done;
}
#ifdef __STDC__
int p826(void)
#else
int p826()
#endif
{
int done=0;
   if ((KEY(151)) &&
   have(151,-1,-1)) {
   (*procs[767])();
   }
   if ((value[1170]==2) &&
   isnear(value[1137],-1,-1)) {
   say(64,2456,0);
   }
return done;
}
#ifdef __STDC__
int p795(void)
#else
int p795()
#endif
{
int done=0;
   if (KEY(138)) {
   (*procs[793])();
   }
   if (KEY(151)) {
   (*procs[767])();
   }
   if (anyof(120,121,122,87,119,123,136,-1)) {
   (*procs[787])();
   }
return done;
}
#ifdef __STDC__
int p292(void)
#else
int p292()
#endif
{
int done=0;
   if ((value[HERE]==302)) {
   say(64,2009,0);
   }
   say(64,2008,0);
return done;
}
#ifdef __STDC__
int p132(void)
#else
int p132()
#endif
{
int done=0;
   if ((anyof(63,45,-1)) &&
   isnear(value[1137],-1,-1)) {
   if (anyof(45,-1))   say(64,2818,0);
   if (anyof(63,-1))   say(64,1294,0);
   }
   (*procs[792])();
return done;
}
#ifdef __STDC__
int p898(void)
#else
int p898(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(138)) return 0;
   if (((ishere(137,-1,-1)) ||
   have(138,-1,-1)) ||
   bitest(138,13)) {
   say(64,2731,0);
   }
return done;
}
#ifdef __STDC__
int p675(void)
#else
int p675()
#endif
{
int done=0;
   if (KEY(126)) {
   (*procs[793])();
   }
   if (KEY(138)) {
   (*procs[120])();
   }
   if (value[1170]>1) {
   say(64,2732,0);
   }
return done;
}
#ifdef __STDC__
int p878(void)
#else
int p878()
#endif
{
int done=0;
   if (!((value[1170]>1) &&
   have(value[1137],-1,-1))) {
   return 0;
   }
   if ((value[HERE]==584)) {
   say(64,2794,0);
   }
   if ((bitest(evar(1138),7)) ||
   (547<=value[1138] && value[1138]<=702)) {
   say(72,2793,0);
   } else    if ((value[HERE]==277)) {
   say(72,2793,3);
   } else    if ((269<=value[1138] && value[1138]<=278)) {
   say(72,2793,2);
   } else {
   say(72,2793,1);
   }
return done;
}
#ifdef __STDC__
int p239(void)
#else
int p239()
#endif
{
int done=0;
   (*procs[765])();
return done;
}
#ifdef __STDC__
int p525(void)
#else
int p525()
#endif
{
int done=0;
   say(64,3212,0);
return done;
}
#ifdef __STDC__
int p212(void)
#else
int p212()
#endif
{
int done=0;
   if ((KEY(1003)) ||
   value[1170]==1) {
   say(72,2857,0);
   }
   say(72,2857,1);
return done;
}
#ifdef __STDC__
int p214(void)
#else
int p214()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   anyof(1133,1133,991,1133,-1)) {
   say(64,1349,0);
   }
   if (((anyof(131,972,973,974,972,1076,1075,971,-1)) ||
   anyof(970,157,921,1044,-1)) &&
   bitest(evar(1172),1)) {
   say(64,1349,0);
   }
   if ((anyof(153,101,129,-1)) &&
   isnear(value[1137],-1,-1)) {
   say(64,1349,0);
   }
return done;
}
#ifdef __STDC__
int p894(void)
#else
int p894()
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
int p846(void)
#else
int p846()
#endif
{
int done=0;
   say(64,3356,0);
return done;
}
#ifdef __STDC__
int p293(void)
#else
int p293()
#endif
{
int done=0;
   say(64,3204,0);
return done;
}
#ifdef __STDC__
int p163(void)
#else
int p163()
#endif
{
int done=0;
   if ((value[1170]>1) &&
   !KEY(757)) {
   say(64,2057,0);
   }
   say(64,2058,0);
return done;
}
#ifdef __STDC__
int p78(void)
#else
int p78()
#endif
{
int done=0;
   if (anyof(107,100,-1)) {
   if (isnear(value[1137],-1,-1)) {
   if (KEY(107)) {
   (*procs[779])();
   }
   if (bitest(100,13)) {
   say(64,3355,0);
   }
   say(64,3354,0);
   }
   say(76,1312,1137);
   }
   say(64,3353,0);
return done;
}
#ifdef __STDC__
int p868(void)
#else
int p868()
#endif
{
int done=0;
   int lval [7];
   short lbts [7];
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
   lval[5] = 0;
   lbts [5] = 0;
   lval[6] = 0;
   lbts [6] = 0;
   if (bitest(evar(1256),5)) {
   say(64,3408,0);
   }
   if (KEY(777)) {
   if (bitest(evar(1256),3)) {
   say(8,3413,1);
   } else {
   say(8,3412,1);
   }
   bitmod('c',evar(1256),3);
   longjmp(loop_back,1);
   } else    if (KEY(778)) {
   if (bitest(evar(1256),3)) {
   say(8,3412,0);
   } else {
   say(8,3413,0);
   }
   bitmod('s',evar(1256),3);
   longjmp(loop_back,1);
   }
   if (((value[1136]==738)) &&
   (value[1137]==738)) {
   value[1136]=739;*bitword(1136)=-1;
   value[1137]=3;*bitword(1137)=-1;
   }
   if (bitest(evar(1256),3)) {
   if (bitest(evar(1256),4)) {
   say(64,3414,0);
   }
   set('V',1172,'c',49,NULL,NULL);
   say(0,3405,0);
   say(0,3407,0);
   say(64,3410,0);
   }
   if (!(bitest(evar(1256),4))) {
   bitmod('c',evar(1256),3);
   bitmod('s',evar(1256),4);
   say(0,3409,0);
   }
   if (bitest(evar(1170),8)) {
   set('L',6,'c',1,lval, lbts);
   }
   set('L',1,'v',1138,lval, lbts);
   set('L',2,'v',1185,lval, lbts);
   set('L',3,'v',1256,lval, lbts);
   if (bitest(evar(1256),4)) {
   lbitmod(7,'s',3,4,lval,lbts);
   }
   set('L',4,'v',1181,lval, lbts);
   if (KEY(738)) {
   undo();
   if (value[1256]>0) {
   if (bitest(evar(1256),6)) {
   say(8,3397,0);
   say(12,3398,1256);
   } else {
   say(12,3401,1256);
   }}
   } else {
   redo();
   if (value[1256]>0) {
   if (bitest(evar(1256),6)) {
   say(8,3397,1);
   say(12,3398,1256);
   } else {
   say(12,3402,1256);
   }}}
   if (bitest(evar(1256),8)) {
   say(64,1345,0);
   }
   if (value[1256]>0) {
   set('V',1181,'l',4,lval, lbts);
   set('V',1185,'l',2,lval, lbts);
   set('V',1256,'l',3,lval, lbts);
   if (lbitest(3,4,lval,lbts)) {
   bitmod('s',evar(1256),4);
   }
   set('V',1245,'c',0,NULL,NULL);
   if (value[1138]!=lval[1]) {
   set('V',1245,'c',1,NULL,NULL);
   }
   if (bitest(evar(1256),7)) {
   value[1245] += 2;
   }
   p487();
   if (value[1245]==0) {
   if ((lval[6]==1) &&
   !(bitest(evar(1170),8))) {
   say(0,2511,0);
   } else    if ((lval[6]==0) &&
   bitest(evar(1170),8)) {
   say(0,3404,0);
   }
   } else {
   say(12,3403,1245);
   if (value[1245]!=2) {
   if (bitest(evar(1170),8)) {
   if (!(bitest(evar(1170),2))) {
   set('L',5,'c',1,lval, lbts);
   bitmod('s',evar(1170),2);
   }
   say(2,1138,0);
   if (lval[5]==1) {
   bitmod('c',evar(1170),2);
   }
   } else    if (value[1245]==1) {
   say(0,2511,0);
   }
   } else {
   if ((lval[6]==1) &&
   !(bitest(evar(1170),8))) {
   say(0,2511,0);
   } else    if ((lval[6]==0) &&
   bitest(evar(1170),8)) {
   say(0,3404,0);
   }}
   if (value[1245]!=1) {
   set('V',1170,'c',1,NULL,NULL);
   (*procs[844])();
   }}
   longjmp(loop_back,1);
   } else    if (value[1256]==0) {
   say(76,3393,1136);
   } else    if (value[1256]==-2) {
   say(76,3394,1136);
   } else    if (value[1170]==-1) {
   if (KEY(738)) {
   say(64,3395,0);
   } else {
   say(64,3396,0);
   }}
return done;
}
#ifdef __STDC__
int p703(void)
#else
int p703()
#endif
{
int done=0;
   (*procs[738])();
return done;
}
#ifdef __STDC__
int p592(void)
#else
int p592()
#endif
{
int done=0;
   if (value[1170]==2) {
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p23(void)
#else
int p23()
#endif
{
int done=0;
   if (value[1170]==2) {
   p221();
   if ((typed("r")) &&
   bitest(evar(1137),0)) {
if (value[ARG1] == 724) {value[ARG1]=765; (void)fake(1,765);}
if (value[ARG2] == 724) {value[ARG2]=765; (void)fake(2,765);}
   } else {
   say(76,1506,1137);
   }}
return done;
}
#ifdef __STDC__
int p1(void)
#else
int p1()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (value[1190]>0) {
   return 0;
   }
   bitmod('s',106,3);
   bitmod('s',107,3);
   bitmod('s',108,3);
   bitmod('s',110,3);
   bitmod('s',112,3);
   bitmod('s',109,3);
   bitmod('s',113,3);
   bitmod('s',114,3);
   bitmod('s',115,3);
   bitmod('s',116,3);
   bitmod('s',117,3);
   bitmod('s',118,3);
   bitmod('s',119,3);
   bitmod('s',124,3);
   bitmod('s',39,3);
   bitmod('s',40,3);
   bitmod('s',47,3);
   bitmod('s',48,3);
   bitmod('s',49,3);
   bitmod('s',50,3);
   bitmod('s',51,3);
   bitmod('s',52,3);
   bitmod('s',53,3);
   bitmod('s',54,3);
   bitmod('s',56,3);
   bitmod('s',57,3);
   bitmod('s',58,3);
   bitmod('s',61,3);
   bitmod('s',62,3);
   bitmod('s',63,3);
   bitmod('s',64,3);
   bitmod('s',66,3);
   bitmod('s',67,3);
   bitmod('s',68,3);
   bitmod('s',43,3);
   bitmod('s',55,3);
   bitmod('s',126,3);
   bitmod('s',127,3);
   bitmod('s',128,3);
   bitmod('s',69,3);
   bitmod('s',70,3);
   bitmod('s',71,3);
   bitmod('s',125,3);
   bitmod('s',46,3);
   bitmod('s',59,3);
   bitmod('s',60,3);
   bitmod('s',123,3);
   bitmod('s',111,3);
   bitmod('s',65,3);
   bitmod('s',81,3);
   bitmod('s',96,3);
   bitmod('s',92,3);
   bitmod('s',83,3);
   bitmod('s',88,3);
   bitmod('s',84,3);
   bitmod('s',91,3);
   bitmod('s',93,3);
   bitmod('s',86,3);
   bitmod('s',87,3);
   bitmod('s',100,3);
   bitmod('s',102,3);
   bitmod('s',143,3);
   bitmod('s',144,3);
   bitmod('s',145,3);
   bitmod('s',146,3);
   bitmod('s',147,3);
   bitmod('s',149,3);
   bitmod('s',148,3);
   bitmod('s',150,3);
   bitmod('s',151,3);
   bitmod('s',152,3);
   bitmod('s',104,3);
   bitmod('s',105,3);
   bitmod('s',132,3);
   bitmod('s',136,3);
   bitmod('s',158,3);
   bitmod('s',141,3);
   bitmod('s',95,3);
   bitmod('s',138,3);
   bitmod('s',45,3);
   bitmod('s',109,12);
   bitmod('s',39,12);
   bitmod('s',104,12);
   bitmod('s',105,12);
   bitmod('s',67,12);
   bitmod('s',62,12);
   bitmod('s',95,12);
   bitmod('s',145,12);
   bitmod('s',138,12);
   bitmod('s',152,12);
   bitmod('s',106,12);
   bitmod('s',151,12);
   bitmod('s',128,12);
   bitmod('s',40,12);
   bitmod('s',86,12);
   bitmod('s',92,12);
   bitmod('s',149,12);
   bitmod('s',65,12);
   bitmod('s',114,17);
   bitmod('s',115,17);
   bitmod('s',52,17);
   bitmod('s',53,17);
   bitmod('s',54,17);
   bitmod('s',61,17);
   bitmod('s',63,17);
   bitmod('s',43,17);
   bitmod('s',55,17);
   bitmod('s',125,17);
   bitmod('s',46,17);
   bitmod('s',71,17);
   bitmod('s',60,17);
   bitmod('s',59,17);
   bitmod('s',81,17);
   bitmod('s',83,17);
   bitmod('s',144,17);
   bitmod('s',146,17);
   bitmod('s',148,17);
   *bitword(1147)= -1; value[1147]=194; while (++value[1147]<=205) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=437; while (++value[1147]<=446) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=517; while (++value[1147]<=546) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=466; while (++value[1147]<=487) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=334; while (++value[1147]<=350) {
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=628; while (++value[1147]<=638) {
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=641; while (++value[1147]<=650) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),5);
   }
   bitmod('c',473,3);
   bitmod('c',476,3);
   bitmod('c',474,3);
   bitmod('s',302,3);
   bitmod('s',302,7);
   bitmod('s',302,5);
   bitmod('s',302,18);
   bitmod('s',200,18);
   bitmod('s',546,18);
   bitmod('s',565,18);
   *bitword(1147)= -1; value[1147]=466; while (++value[1147]<=479) {
   bitmod('s',evar(1147),8);
   bitmod('s',evar(1147),18);
   }
   bitmod('c',475,18);
   bitmod('s',489,3);
   bitmod('s',489,7);
   bitmod('s',489,5);
   *bitword(1147)= -1; value[1147]=586; while (++value[1147]<=628) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   *bitword(1147)= -1; value[1147]=546; while (++value[1147]<=575) {
   bitmod('s',evar(1147),3);
   bitmod('s',evar(1147),7);
   bitmod('s',evar(1147),5);
   }
   bitmod('s',586,3);
   bitmod('s',586,7);
   bitmod('s',586,5);
   bitmod('s',318,3);
   bitmod('s',318,7);
   bitmod('s',318,5);
   bitmod('s',452,3);
   bitmod('s',453,3);
   bitmod('s',287,3);
   bitmod('s',311,3);
   bitmod('s',386,3);
   bitmod('s',426,3);
   bitmod('s',315,3);
   bitmod('s',316,3);
   bitmod('s',312,3);
   bitmod('s',313,3);
   bitmod('s',352,3);
   bitmod('s',353,3);
   bitmod('s',357,3);
   bitmod('s',451,3);
   bitmod('s',301,3);
   bitmod('s',502,3);
   bitmod('s',277,3);
   bitmod('s',584,3);
   bitmod('s',447,3);
   bitmod('s',449,3);
   bitmod('s',448,3);
   bitmod('s',671,3);
   bitmod('s',582,3);
   bitmod('s',672,3);
   bitmod('s',479,3);
   bitmod('s',479,18);
   bitmod('s',205,5);
   bitmod('s',286,5);
   bitmod('s',303,5);
   bitmod('s',304,5);
   bitmod('s',308,5);
   bitmod('s',287,5);
   bitmod('s',288,5);
   bitmod('s',309,5);
   bitmod('s',310,5);
   bitmod('s',311,5);
   bitmod('s',358,5);
   bitmod('s',359,5);
   bitmod('s',360,5);
   bitmod('s',361,5);
   bitmod('s',251,5);
   bitmod('s',217,5);
   bitmod('s',218,5);
   bitmod('s',259,5);
   bitmod('s',312,5);
   bitmod('s',313,5);
   bitmod('s',314,5);
   bitmod('s',315,5);
   bitmod('s',316,5);
   bitmod('s',323,5);
   bitmod('s',322,5);
   bitmod('s',321,5);
   bitmod('s',319,5);
   bitmod('s',320,5);
   bitmod('s',324,5);
   bitmod('s',325,5);
   bitmod('s',326,5);
   bitmod('s',377,5);
   bitmod('s',327,5);
   bitmod('s',328,5);
   bitmod('s',329,5);
   bitmod('s',330,5);
   bitmod('s',331,5);
   *bitword(1147)= -1; value[1147]=331; while (++value[1147]<=350) {
   bitmod('s',evar(1147),5);
   }
   bitmod('s',352,5);
   bitmod('s',353,5);
   bitmod('s',354,5);
   bitmod('s',355,5);
   bitmod('s',356,5);
   bitmod('s',357,5);
   bitmod('s',299,5);
   bitmod('s',300,5);
   bitmod('s',301,5);
   bitmod('s',583,5);
   bitmod('s',385,5);
   bitmod('s',462,5);
   bitmod('s',457,5);
   bitmod('s',516,5);
   bitmod('s',452,5);
   bitmod('s',453,5);
   bitmod('s',488,5);
   bitmod('s',515,5);
   bitmod('s',503,5);
   bitmod('s',504,5);
   bitmod('s',502,5);
   bitmod('s',505,5);
   bitmod('s',506,5);
   bitmod('s',507,5);
   bitmod('s',508,5);
   bitmod('s',509,5);
   bitmod('s',501,5);
   bitmod('s',500,5);
   bitmod('s',499,5);
   bitmod('s',498,5);
   bitmod('s',264,5);
   bitmod('s',517,5);
   bitmod('s',701,5);
   bitmod('s',702,5);
   bitmod('s',206,5);
   bitmod('s',207,5);
   bitmod('s',208,5);
   bitmod('s',209,5);
   bitmod('s',494,5);
   bitmod('s',351,5);
   bitmod('s',263,5);
   bitmod('s',451,5);
   bitmod('s',510,5);
   bitmod('s',511,5);
   bitmod('s',490,5);
   bitmod('s',671,5);
   bitmod('s',584,5);
   bitmod('s',431,5);
   bitmod('s',473,5);
   bitmod('s',700,5);
   bitmod('s',213,11);
   bitmod('s',463,11);
   bitmod('s',224,11);
   bitmod('s',225,11);
   bitmod('s',241,11);
   bitmod('s',244,11);
   bitmod('s',248,11);
   bitmod('s',231,11);
   bitmod('s',242,11);
   bitmod('s',249,11);
   bitmod('s',245,11);
   bitmod('s',256,11);
   bitmod('s',273,11);
   bitmod('s',278,11);
   bitmod('s',243,11);
   bitmod('s',250,11);
   bitmod('s',246,11);
   bitmod('s',247,11);
   bitmod('s',293,11);
   bitmod('s',301,11);
   bitmod('s',373,11);
   bitmod('s',583,11);
   bitmod('s',380,11);
   bitmod('s',383,11);
   bitmod('s',392,11);
   bitmod('s',396,11);
   bitmod('s',400,11);
   bitmod('s',401,11);
   bitmod('s',407,11);
   bitmod('s',408,11);
   bitmod('s',426,11);
   bitmod('s',431,11);
   bitmod('s',494,11);
   bitmod('s',351,11);
   bitmod('s',490,11);
   bitmod('s',264,11);
   bitmod('s',516,11);
   bitmod('s',584,11);
   bitmod('s',578,11);
   bitmod('s',581,11);
   *bitword(1147)= -1; value[1147]=226; while (++value[1147]<=252) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),8);
   if (!(bitest(evar(1147),11))) {
   bitmod('s',evar(1147),6);
   }}
   bitmod('c',227,6);
   *bitword(1147)= -1; value[1147]=361; while (++value[1147]<=373) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),6);
   bitmod('s',evar(1147),8);
   }
   bitmod('c',362,6);
   *bitword(1147)= -1; value[1147]=453; while (++value[1147]<=459) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),5);
   if (!(bitest(evar(1147),11))) {
   bitmod('s',evar(1147),6);
   }}
   *bitword(1147)= -1; value[1147]=390; while (++value[1147]<=426) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),8);
   bitmod('s',evar(1147),5);
   if (!(bitest(evar(1147),11))) {
   bitmod('s',evar(1147),6);
   }}
   *bitword(1147)= -1; value[1147]=333; while (++value[1147]<=350) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),8);
   bitmod('s',evar(1147),5);
   if (!(bitest(evar(1147),11))) {
   bitmod('s',evar(1147),6);
   }}
   *bitword(1147)= -1; value[1147]=593; while (++value[1147]<=617) {
   bitmod('s',evar(1147),10);
   bitmod('s',evar(1147),15);
   bitmod('s',evar(1147),8);
   if (!(bitest(evar(1147),11))) {
   bitmod('s',evar(1147),6);
   }}
   *bitword(1147)= -1; value[1147]=575; while (++value[1147]<=582) {
   bitmod('s',evar(1147),5);
   }
   bitmod('c',605,15);
   set('E',605,'c',0,NULL,NULL);
   bitmod('s',252,6);
   bitmod('s',291,6);
   bitmod('s',432,6);
   bitmod('s',433,6);
   bitmod('s',299,6);
   bitmod('s',280,6);
   bitmod('s',297,6);
   bitmod('s',303,6);
   bitmod('s',304,6);
   bitmod('s',295,6);
   bitmod('s',286,6);
   bitmod('s',287,6);
   bitmod('s',275,6);
   bitmod('s',390,6);
   bitmod('s',389,6);
   bitmod('s',312,6);
   bitmod('s',315,6);
   bitmod('s',302,6);
   bitmod('s',451,6);
   bitmod('s',511,6);
   bitmod('s',462,6);
   bitmod('s',515,6);
   bitmod('s',223,6);
   bitmod('s',331,6);
   bitmod('s',544,6);
   bitmod('s',586,6);
   bitmod('s',200,14);
   bitmod('s',204,14);
   bitmod('s',217,14);
   bitmod('s',218,14);
   bitmod('s',259,14);
   bitmod('s',495,14);
   bitmod('s',286,14);
   bitmod('s',301,14);
   bitmod('s',328,14);
   bitmod('s',333,14);
   bitmod('s',358,14);
   bitmod('s',374,14);
   bitmod('s',426,14);
   bitmod('s',431,14);
   bitmod('s',463,14);
   bitmod('s',489,14);
   bitmod('s',451,14);
   bitmod('s',318,14);
   bitmod('s',627,14);
   bitmod('s',321,14);
   bitmod('s',324,14);
   bitmod('s',428,14);
   bitmod('s',430,14);
   bitmod('s',591,14);
   bitmod('s',592,14);
   bitmod('s',569,14);
   bitmod('s',333,14);
   bitmod('s',6,9);
   bitmod('s',8,9);
   bitmod('s',19,9);
   bitmod('s',161,9);
   bitmod('s',164,9);
   bitmod('s',169,9);
   bitmod('s',114,9);
   bitmod('s',115,9);
   bitmod('s',123,9);
   bitmod('s',66,9);
   bitmod('s',36,9);
   bitmod('s',127,9);
   bitmod('s',52,9);
   bitmod('s',76,9);
   bitmod('s',98,9);
   bitmod('s',4,9);
   bitmod('s',162,9);
   bitmod('s',167,10);
   bitmod('s',163,10);
   bitmod('s',121,10);
   bitmod('s',120,10);
   bitmod('s',122,10);
   bitmod('s',7,10);
   bitmod('s',76,10);
   bitmod('s',10,10);
   bitmod('s',12,10);
   bitmod('s',17,10);
   bitmod('s',15,10);
   bitmod('s',20,10);
   bitmod('s',31,10);
   bitmod('s',33,10);
   bitmod('s',37,10);
   bitmod('s',41,10);
   bitmod('s',193,10);
   bitmod('s',32,10);
   bitmod('s',117,10);
   bitmod('s',14,10);
   bitmod('s',140,10);
   bitmod('s',194,10);
   bitmod('s',78,10);
   bitmod('s',73,10);
   bitmod('s',88,10);
   bitmod('s',94,10);
   bitmod('s',131,10);
   bitmod('s',18,10);
   bitmod('s',11,10);
   bitmod('s',98,10);
   bitmod('s',135,10);
   bitmod('s',162,10);
   bitmod('s',8,10);
   bitmod('s',19,10);
   bitmod('s',161,10);
   bitmod('s',164,10);
   bitmod('s',169,10);
   bitmod('s',97,10);
   bitmod('s',44,10);
   bitmod('s',16,10);
   bitmod('s',133,10);
   bitmod('s',134,10);
   bitmod('s',72,10);
   bitmod('s',77,10);
   bitmod('s',79,10);
   bitmod('s',99,10);
   bitmod('s',117,10);
   bitmod('s',155,10);
   bitmod('s',172,10);
   bitmod('s',173,10);
   bitmod('s',208,8);
   bitmod('s',203,8);
   bitmod('s',214,8);
   bitmod('s',224,8);
   bitmod('s',225,8);
   bitmod('s',295,8);
   bitmod('s',287,8);
   bitmod('s',286,8);
   bitmod('s',288,8);
   bitmod('s',390,8);
   bitmod('s',315,8);
   bitmod('s',298,8);
   bitmod('s',517,8);
   bitmod('s',311,8);
   bitmod('s',313,8);
   bitmod('s',385,8);
   bitmod('s',322,8);
   bitmod('s',376,8);
   bitmod('s',377,8);
   bitmod('s',325,8);
   bitmod('s',500,8);
   bitmod('s',510,8);
   bitmod('s',511,8);
   bitmod('s',443,8);
   bitmod('s',318,8);
   bitmod('s',453,8);
   bitmod('s',631,8);
   bitmod('s',443,8);
   bitmod('s',444,8);
   bitmod('s',559,8);
   bitmod('s',571,8);
   bitmod('s',641,8);
   bitmod('s',302,8);
   bitmod('s',593,8);
   bitmod('s',482,8);
   bitmod('s',575,8);
   bitmod('s',432,8);
   bitmod('s',200,17);
   bitmod('s',195,17);
   bitmod('s',201,17);
   bitmod('s',202,17);
   bitmod('s',259,17);
   bitmod('s',283,17);
   bitmod('s',298,17);
   bitmod('s',299,17);
   bitmod('s',495,17);
   bitmod('s',510,17);
   bitmod('s',511,17);
   bitmod('s',333,17);
   bitmod('s',632,17);
   bitmod('s',631,17);
   bitmod('s',637,17);
   bitmod('s',638,17);
   bitmod('s',635,17);
   bitmod('s',636,17);
   bitmod('s',554,17);
   bitmod('s',566,17);
   bitmod('s',567,17);
   bitmod('s',568,17);
   bitmod('s',574,17);
   bitmod('s',575,17);
   bitmod('s',487,17);
   bitmod('s',671,17);
   bitmod('s',106,11);
   bitmod('s',51,11);
   bitmod('s',116,11);
   bitmod('s',40,11);
   bitmod('s',48,11);
   bitmod('s',64,11);
   bitmod('s',65,11);
   bitmod('s',91,11);
   bitmod('s',132,11);
   bitmod('s',126,11);
   bitmod('s',145,11);
   bitmod('s',45,11);
   bitmod('s',43,5);
   bitmod('s',46,5);
   bitmod('s',47,5);
   bitmod('s',48,5);
   bitmod('s',49,5);
   bitmod('s',50,5);
   bitmod('s',51,5);
   bitmod('s',52,5);
   bitmod('s',53,5);
   bitmod('s',54,5);
   bitmod('s',55,5);
   bitmod('s',56,5);
   bitmod('s',58,5);
   bitmod('s',59,5);
   bitmod('s',60,5);
   bitmod('s',61,5);
   bitmod('s',62,5);
   bitmod('c',63,5);
   bitmod('s',64,5);
   bitmod('s',65,5);
   bitmod('s',66,5);
   bitmod('s',67,5);
   bitmod('s',68,5);
   bitmod('s',69,5);
   bitmod('s',70,5);
   bitmod('s',71,5);
   bitmod('s',81,5);
   bitmod('c',83,5);
   bitmod('s',84,5);
   bitmod('s',86,5);
   bitmod('s',96,5);
   bitmod('s',100,5);
   bitmod('s',102,5);
   bitmod('s',143,5);
   bitmod('s',144,5);
   bitmod('s',145,5);
   bitmod('s',146,5);
   bitmod('s',147,5);
   bitmod('s',148,5);
   bitmod('s',149,5);
   bitmod('s',150,5);
   bitmod('s',50,7);
   bitmod('s',52,7);
   bitmod('s',69,7);
   bitmod('s',108,7);
   bitmod('s',71,7);
   bitmod('s',128,7);
   bitmod('s',43,7);
   bitmod('s',46,7);
   bitmod('s',113,7);
   bitmod('s',60,7);
   bitmod('s',111,7);
   bitmod('s',65,7);
   bitmod('s',96,7);
   bitmod('s',119,7);
   bitmod('s',100,7);
   bitmod('s',40,7);
   bitmod('s',132,7);
   bitmod('s',104,7);
   bitmod('s',158,7);
   bitmod('s',141,7);
   bitmod('s',95,7);
   bitmod('s',143,7);
   bitmod('s',144,7);
   bitmod('s',151,7);
   bitmod('s',45,7);
   bitmod('s',148,7);
   bitmod('s',149,7);
   bitmod('s',147,7);
   bitmod('s',150,7);
   bitmod('s',146,7);
   bitmod('s',55,7);
   bitmod('s',23,8);
   bitmod('s',193,8);
   bitmod('s',21,8);
   bitmod('s',9,8);
   bitmod('s',18,8);
   bitmod('s',39,8);
   bitmod('s',114,8);
   bitmod('s',115,8);
   bitmod('s',25,8);
   bitmod('s',109,8);
   bitmod('s',28,8);
   bitmod('s',29,8);
   bitmod('s',130,8);
   bitmod('s',26,8);
   bitmod('s',194,8);
   bitmod('s',85,8);
   bitmod('s',90,8);
   bitmod('s',94,8);
   bitmod('s',5,8);
   bitmod('s',159,8);
   bitmod('s',165,8);
   bitmod('s',46,16);
   bitmod('s',65,16);
   bitmod('s',70,16);
   bitmod('s',67,16);
   bitmod('s',50,16);
   bitmod('s',55,16);
   bitmod('s',95,16);
   bitmod('s',145,16);
   bitmod('s',45,16);
   bitmod('s',39,15);
   bitmod('s',88,15);
   bitmod('s',87,15);
   bitmod('s',91,15);
   bitmod('s',109,15);
   bitmod('s',45,15);
   bitmod('s',146,15);
   bitmod('s',144,15);
   bitmod('s',114,15);
   bitmod('s',115,15);
   bitmod('s',108,15);
   bitmod('s',113,15);
   bitmod('s',52,15);
   bitmod('s',53,15);
   bitmod('s',54,15);
   bitmod('s',56,15);
   bitmod('s',63,15);
   bitmod('s',55,15);
   bitmod('s',71,15);
   bitmod('s',125,15);
   bitmod('s',46,15);
   bitmod('s',59,15);
   bitmod('s',60,15);
   bitmod('s',111,15);
   bitmod('s',81,15);
   bitmod('s',84,15);
   bitmod('s',83,15);
   bitmod('s',136,15);
   bitmod('s',148,15);
   bitmod('s',544,4);
   bitmod('s',302,4);
   bitmod('s',593,16);
   bitmod('s',445,4);
   bitmod('s',503,12);
   bitmod('s',504,12);
   bitmod('s',505,12);
   bitmod('s',506,12);
   bitmod('s',507,12);
   bitmod('s',508,12);
   bitmod('s',509,12);
   bitmod('s',489,13);
   value[1138]=701;*bitword(1138)=-1;
   set('V',1239,'c',1,NULL,NULL);
   value[1155]=262;*bitword(1155)=-1;
   value[1235] = irand(300-150+1)+150;
   value[1240] = irand(30-15+1)+15;
   value[1238] = irand(900-700+1)+700;
   value[1242] = irand(160-120+1)+120;
   set('V',1241,'c',-1,NULL,NULL);
   set('V',1244,'c',0,NULL,NULL);
   value[318] = irand(4 - 0) + 0;
   set('E',319,'e',318,NULL,NULL);
   if (value[319]>0) {
   bitmod('s',319,3);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   apport(value[1146],701);
   lval[0] = irand(100);
   }
   apport(106,200);
   apport(107,200);
   apport(6,203);
   apport(108,205);
   apport(110,206);
   apport(7,209);
   apport(109,208);
   apport(8,282);
   apport(19,575);
   apport(113,284);
   apport(9,214);
   apport(10,211);
   apport(114,291);
   apport(116,294);
   apport(118,701);
   apport(119,199);
   apport(13,218);
   apport(14,215);
   apport(15,297);
   apport(17,224);
   apport(21,306);
   apport(22,303);
   apport(24,303);
   apport(39,361);
   apport(31,311);
   apport(35,373);
   apport(41,284);
   apport(47,213);
   apport(48,212);
   apport(49,219);
   apport(50,351);
   apport(51,221);
   apport(53,281);
   apport(54,283);
   apport(56,285);
   apport(58,287);
   apport(61,288);
   apport(133,288);
   apport(64,358);
   apport(66,361);
   apport(68,436);
   apport(43,439);
   apport(42,439);
   apport(55,375);
   apport(127,383);
   apport(128,516);
   apport(69,408);
   apport(71,431);
   apport(36,376);
   apport(33,432);
   apport(34,429);
   apport(125,517);
   apport(74,517);
   apport(25,385);
   apport(37,353);
   apport(38,353);
   apport(59,353);
   apport(46,583);
   apport(32,313);
   apport(60,298);
   apport(70,357);
   apport(123,356);
   apport(26,324);
   apport(111,329);
   apport(65,301);
   apport(27,299);
   apport(81,462);
   apport(82,463);
   apport(89,457);
   apport(90,457);
   apport(96,264);
   apport(92,502);
   apport(94,504);
   apport(194,452);
   apport(83,499);
   apport(88,264);
   apport(84,263);
   apport(78,262);
   apport(79,502);
   apport(80,462);
   apport(73,374);
   apport(129,199);
   apport(93,473);
   apport(100,317);
   apport(102,593);
   apport(101,593);
   apport(75,462);
   apport(129,199);
   apport(98,481);
   apport(132,380);
   apport(130,701);
   apport(121,217);
   apport(139,443);
   apport(140,199);
   apport(157,445);
   apport(158,445);
   apport(95,351);
   apport(143,605);
   apport(144,634);
   apport(148,476);
   apport(149,494);
   apport(150,581);
   apport(4,490);
   apport(137,540);
   apport(151,546);
   apport(146,483);
   apport(160,479);
   apport(153,559);
   apport(156,584);
   apport(97,473);
   apport(161,472);
   apport(164,478);
   apport(169,545);
   apport(162,474);
   apport(44,572);
   apport(159,638);
   apport(16,315);
   apport(167,200);
   apport(170,670);
   apport(12,296);
   bitmod('s',6,6);
   bitmod('s',7,6);
   bitmod('s',10,6);
   bitmod('s',14,6);
   bitmod('s',17,6);
   bitmod('s',21,6);
   bitmod('s',22,6);
   bitmod('s',23,6);
   bitmod('s',24,6);
   bitmod('s',33,6);
   bitmod('s',36,6);
   bitmod('s',31,6);
   bitmod('s',26,6);
   bitmod('s',78,6);
   bitmod('s',100,6);
   bitmod('s',75,6);
   bitmod('s',19,6);
   bitmod('s',161,6);
   bitmod('s',164,6);
   bitmod('s',169,6);
   bitmod('s',98,6);
   bitmod('s',97,6);
   bitmod('s',162,6);
   set('E',123,'c',1,NULL,NULL);
   set('E',136,'c',2,NULL,NULL);
   set('V',1201,'c',35,NULL,NULL);
   set('V',1202,'c',25,NULL,NULL);
   bitmod('s',evar(1170),1);
   bitmod('s',evar(1170),10);
   set('V',1199,'c',0,NULL,NULL);
   value[1192]=1260;*bitword(1192)=-1;
   value[1189] = irand(25-15+1)+15;
   value[1173] = irand(460-440+1)+440;
   value[1188] = irand(8-4+1)+4;
   if (irand(100)<90) {
   apport(165,702);
   }
   if (irand(100)<75) {
   bitmod('s',evar(1171),1);
   }
   if (irand(100)<50) {
   bitmod('s',evar(1210),4);
   }
   set('E',66,'c',0,NULL,NULL);
   set('V',1179,'c',0,NULL,NULL);
   set('V',1194,'c',8,NULL,NULL);
   set('V',1190,'c',1,NULL,NULL);
   set('E',542,'c',1,NULL,NULL);
   set('E',543,'c',2,NULL,NULL);
   set('L',1,'c',0,lval, lbts);
   value[1147]=547-1; while(++value[1147]<=554) {
value[value[1147]]=lbts[1*VARSIZE]==-1?value[lval[1]]:lval[1];
   lval[1] += 1;
   }
   set('L',1,'c',0,lval, lbts);
   value[1147]=362-1; while(++value[1147]<=373) {
value[value[1147]]=lbts[1*VARSIZE]==-1?value[lval[1]]:lval[1];
   lval[1] += 1;
   }
   set('V',1159,'c',-1,NULL,NULL);
   set('E',621,'c',1,NULL,NULL);
   set('E',622,'c',2,NULL,NULL);
   set('E',635,'c',1,NULL,NULL);
   if (irand(100)<10) {
   bitmod('s',evar(1210),7);
   }
   set('E',588,'c',1,NULL,NULL);
   set('E',589,'c',2,NULL,NULL);
   set('E',590,'c',3,NULL,NULL);
   bitmod('s',3,4);
   bitmod('s',8,4);
   bitmod('s',11,4);
   bitmod('s',120,4);
   bitmod('s',121,4);
   bitmod('s',118,4);
   bitmod('s',119,4);
   bitmod('s',78,4);
   bitmod('s',129,4);
   bitmod('s',131,4);
   bitmod('s',153,4);
   bitmod('s',170,4);
   p695();
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (bitest(evar(1146),5)) {
   apport(value[1146],200);
   }}
   apport(119,200);
   *bitword(1147)= -1; value[1147]=FLOC-1; while (++value[1147]<=LLOC) {
   bitmod('c',evar(1147),4);
   }
   set('V',1186,'c',980,NULL,NULL);
   say(0,1267,0);
return done;
}
