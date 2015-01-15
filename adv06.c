/* adv06.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p555(void)
#else
int p555()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(227,0,-750);
   move(229,0,-748);
   move(230,0,-746);
   }
return done;
}
#ifdef __STDC__
int p556(void)
#else
int p556()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(228,0,-746);
   move(248,0,-754);
   move(232,0,-748);
   move(250,0,-744);
   }
return done;
}
#ifdef __STDC__
int p557(void)
#else
int p557()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(227,0,-750);
   move(228,0,-744);
   move(241,0,-746);
   move(244,0,-748);
   move(240,0,753,-754);
   move(240,0,-754);
   }
return done;
}
#ifdef __STDC__
int p558(void)
#else
int p558()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(230,0,757,-750);
   }
return done;
}
#ifdef __STDC__
int p559(void)
#else
int p559()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(230,0,757,-746);
   }
return done;
}
#ifdef __STDC__
int p560(void)
#else
int p560()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(229,0,757,-753);
   }
return done;
}
#ifdef __STDC__
int p561(void)
#else
int p561()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(232,0,-746);
   move(233,0,-750);
   }
return done;
}
#ifdef __STDC__
int p562(void)
#else
int p562()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(229,0,-746);
   move(231,0,-750);
   move(233,0,-754);
   move(234,0,-748);
   }
return done;
}
#ifdef __STDC__
int p563(void)
#else
int p563()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(231,0,-750);
   move(232,0,-753);
   move(234,0,-746);
   move(235,0,-748);
   }
return done;
}
#ifdef __STDC__
int p564(void)
#else
int p564()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(232,0,-750);
   move(233,0,-746);
   move(234,0,-748);
   move(235,0,-753);
   move(236,0,-744);
   move(247,0,-754);
   }
return done;
}
#ifdef __STDC__
int p565(void)
#else
int p565()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(233,0,-750);
   move(234,0,-744);
   move(242,0,-748);
   }
return done;
}
#ifdef __STDC__
int p566(void)
#else
int p566()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(235,0,757,-750);
   }
return done;
}
#ifdef __STDC__
int p567(void)
#else
int p567()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(234,0,-750);
   move(236,0,-744);
   move(249,0,-754);
   move(252,0,-746);
   }
return done;
}
#ifdef __STDC__
int p568(void)
#else
int p568()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(236,0,757,-753);
   }
return done;
}
#ifdef __STDC__
int p578(void)
#else
int p578()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,209,-1))   say(72,2470,0);
   if (anyof(959,15,935,-1))   say(64,3120,0);
   if (anyof(258,-1))   say(64,3121,0);
   return 0;
   }
   if ((((anyof(848,754,-1)) &&
   anyof(959,15,-1)) ||
   KEY(758)) ||
   value[1170]==1) {
   move(208,0,754,-848);
   move(236,0,-750);
   move(245,0,-748);
   move(238,0,-744);
   move(239,0,-746);
   }
   if (anyof(959,-1))   say(64,1396,0);
   if (anyof(959,15,935,258,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=208;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p569(void)
#else
int p569()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(252,0,757,-746);
   }
return done;
}
#ifdef __STDC__
int p537(void)
#else
int p537()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(899,892,-1))   say(76,2895,1137);
   return 0;
   }
   if (keyword(899,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(226,0,746,753,-899);
   move(254,0,750,-900);
   move(255,0,744,754,-892);
   }
   if (anyof(900,899,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p538(void)
#else
int p538()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(64,2900,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(253,0,746,-900);
   move(255,0,-744);
   move(362,0,-748);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p162(void)
#else
int p162()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(253,0,-750);
   move(256,0,-744);
   move(221,0,-746);
   move(254,0,-748);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p179(void)
#else
int p179()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,-1))   say(72,2895,899);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(255,0,757,899,-748);
   }
   if (KEY(899)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p150(void)
#else
int p150()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,-1))   say(72,2895,899);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(753,-1))   say(64,2471,0);
   return 0;
   }
   if (keyword(848,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(260,0,753,-848);
   move(266,0,750,-266);
   move(291,0,744,-291);
   move(294,0,746,-899);
   if (anyof(897,896,308,-1)) {
   p329(-1,266,-1,750,-1,291,-1,744);
   }}
   if (anyof(899,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p56(void)
#else
int p56()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (KEY(266)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(892,-1))   say(72,2926,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(753,892,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(261,0,-746);
   move(267,0,-750);
   move(268,0,-268);
   if (anyof(266,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1)) {
   p329(-1,267,-1,750,-1,261,-1,746);
   }
   if (KEY(751)) {
   if (irand(100)<50) {
   say(64,1338,0);
   }
   move(285,-2);
   }
   if (KEY(892)) {
   lval[0] = irand(3-0+1)+0;
   if (lval[0]==0) {
   value[1136]=744;*bitword(1136)=-1;
   } else    if (lval[0]==1) {
   value[1136]=748;*bitword(1136)=-1;
   } else    if (lval[0]==2) {
   value[1136]=753;*bitword(1136)=-1;
   } else {
   value[1136]=754;*bitword(1136)=-1;
   }}
   if (anyof(744,748,753,754,-1)) {
   if (irand(100)<65) {
   say(64,1410,0);
   }
   move(294,0,-754);
   if (irand(100)<75) {
   move(272,0,-744);
   move(260,0,-753);
   move(268,0,-748);
   } else {
   move(271,0,-744);
   move(270,0,-753);
   move(277,0,-748);
   }}}
   if (anyof(266,896,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p821(void)
#else
int p821()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (anyof(1129,-1))   say(64,2576,0);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(935,892,-1))   say(72,2926,1);
   return 0;
   }
   if (keyword(848,892,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(892)) {
   lval[0] = irand(4-0+1)+0;
   if (lval[0]==0) {
   value[1136]=207;*bitword(1136)=-1;
   } else    if (lval[0]==1) {
   value[1136]=748;*bitword(1136)=-1;
   } else {
   say(64,1338,0);
   }}
   if (anyof(896,897,308,757,-1))   say(72,2896,896);
   move(266,0,-745);
   move(216,0,-750);
   move(277,0,-207);
   move(284,0,746,-284);
   move(285,0,751,-285);
   if (KEY(748)) {
   if (irand(100)<33) {
   move(277,0,-748);
   } else {
   say(64,1338,0);
   }}}
   if (anyof(1129,896,935,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p256(void)
#else
int p256()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(754,209,-1))   say(72,2838,0);
   if (anyof(538,-1))   say(64,3103,0);
   if (anyof(901,892,-1))   say(64,3104,0);
   if (anyof(268,1133,-1))   say(64,3105,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(267,0,-746);
   move(215,0,750,762,-538);
   move(217,0,754,-209);
   if (anyof(901,892,-1))   say(64,2630,0);
   if (anyof(897,896,308,-1)) {
   p329(-1,267,-1,746,-1,215,-1,750);
   }}
   if (anyof(538,896,209,901,892,268,538,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=217;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p775(void)
#else
int p775()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(268,-1))   say(64,2130,0);
   if (anyof(376,753,-1))   say(72,2011,3);
   if (anyof(892,-1))   say(64,2471,0);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(935,-1))   say(64,2967,0);
   if (anyof(1128,-1))   say(64,2966,0);
   return 0;
   }
   if (((anyof(848,753,-1)) &&
   anyof(892,935,-1)) ||
   keyword(848,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(215,0,-748);
   move(269,0,753,-848);
   move(266,0,744,-266);
   move(266,0,-266);
   if (anyof(746,750,1128,-1))   say(64,2966,0);
   if (anyof(268,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1)) {
   p329(-1,266,-1,744,-1,215,-1,748);
   }}
   if (anyof(896,897,308,376,892,1128,1127,935,268,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p758(void)
#else
int p758()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(754,-1))   say(72,2470,0);
   }
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(268,0,754,-268);
   move(296,0,744,-12);
   move(298,0,-298);
   move(306,0,-748);
   if (KEY(207)) {
   p329(-1,296,-1,744,-1,306,-1,748);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=268;*bitword(1142)=-1;
   value[1143]=1667;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p759(void)
#else
int p759()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(754,896,-1))   say(72,2470,0);
   }
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(271,0,-744);
   move(266,0,754,-896);
   move(297,0,-748);
   if (KEY(207)) {
   p329(-1,271,-1,744,-1,297,-1,748);
   }}
   if (anyof(207,896,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=266;*bitword(1142)=-1;
   value[1143]=1667;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p508(void)
#else
int p508()
#endif
{
int done=0;
   bitmod('c',225,5);
   if (KEY(822)) {
   if (KEY(271)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(207,-1))   say(76,2894,207);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(266,0,-747);
   move(270,0,-748);
   move(225,0,-744);
   if (anyof(207,-1))   say(76,2896,207);
   if (anyof(271,-1))   say(64,1418,0);
   }
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p543(void)
#else
int p543()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,-1))   say(72,2894,899);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(266,0,-266);
   move(305,0,-749);
   move(273,0,-744);
   move(285,0,747,-285);
   if (anyof(899,-1))   say(72,2896,899);
   }
   if (KEY(899)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p180(void)
#else
int p180()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(272,0,748,757,-899);
   }
return done;
}
#ifdef __STDC__
int p755(void)
#else
int p755()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,-746);
   move(275,0,-754);
   if (KEY(750)) {
   if (value[21]==0) {
   move(307,-2);
   }
   move(306,-2);
   }
   if (KEY(207)) {
   if (value[21]==0) {
   lval[0]=307;lbts[0*VARSIZE]=-1;
   } else {
   lval[0]=306;lbts[0*VARSIZE]=-1;
   }
   p329(-1,lval[0],-1,750,-1,214,-1,746);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=275;*bitword(1142)=-1;
   value[1143]=1668;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p930(void)
#else
int p930()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(276,0,-748);
   move(277,0,-744);
   if (KEY(207)) {
   p329(-1,276,-1,748,-1,277,-1,744);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p848(void)
#else
int p848()
#endif
{
int done=0;
   if (keyword(822,207,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(275,0,757,744,-207);
   }
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p824(void)
#else
int p824()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(899,-1))   say(72,2895,899);
   if (anyof(756,1051,779,894,-1))   say(64,1376,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(275,0,-746);
   move(278,0,-750);
   move(267,0,744,-899);
   move(584,0,748,756,-1051);
   if (keyword(758,779,-1)) {
   move(584,-2);
   }
   if (KEY(207)) {
   p329(-1,278,-1,750,-1,275,-1,746);
   }}
   if (anyof(207,899,894,1051,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p879(void)
#else
int p879()
#endif
{
int done=0;
   p184(-1,1077);
   if (anyof(134,129,30,1077,1015,74,-1)) {
   if (anyof(822,798,-1))   say(64,2106,0);
   if (anyof(764,-1))   say(76,1877,134);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(67)) &&
   value[1170]==1) {
   set('V',1170,'c',2,NULL,NULL);
   value[1137]=135;*bitword(1137)=-1;
   }
   if ((KEY(135)) &&
   !isnear(135,-1,-1)) {
   apport(135,value[1138]);
   value[2061] += 1;
   say(0,2796,0);
   }
   if (KEY(822)) {
   if (anyof(156,-1))   say(64,2060,0);
   if (anyof(991,-1))   say(64,2993,0);
   if (anyof(1051,-1))   say(64,2994,0);
   return 0;
   }
   if (KEY(756)) {
   if ((KEY(156)) ||
   value[1170]==1) {
   say(64,2059,0);
   }}
   if ((KEY(765)) &&
   value[1170]==2) {
   if (!(have(value[1137],-1,-1))) {
   say(76,1506,1137);
   }
   if (KEY(63)) {
   apport(135,value[1138]);
   say(64,2061,0);
   }
   set('T',2055,'c',0,NULL,NULL);
   if (KEY(83)) {
   say(0,2049,0);
   } else {
   if ((KEY(108)) &&
   have(109,-1,-1)) {
   say(0,2050,0);
   set('T',2055,'c',1,NULL,NULL);
   } else {
   if (KEY(109)) {
   apport(109,HERE);
   set('E',109,'c',0,NULL,NULL);
   say(64,2051,0);
   }
   if (KEY(100)) {
   if (value[100]==1) {
   say(0,2053,0);
   } else {
   say(0,2054,0);
   }
   } else {
   if (KEY(56)) {
   say(0,2052,0);
   } else {
   say(12,2048,1137);
   }}}}
   if ((KEY(108)) &&
   have(109,-1,-1)) {
   apport(109,208);
   set('E',109,'c',0,NULL,NULL);
   }
   if (KEY(83)) {
   bitmod('s',83,5);
   }
   if (anyof(104,105,116,-1)) {
   set('T',2043,'c',2,NULL,NULL);
   } else {
   if (anyof(56,57,-1)) {
   set('T',2043,'c',0,NULL,NULL);
   } else {
   if (bitest(evar(1137),5)) {
   if ((anyof(46,53,54,63,67,81,84,-1)) ||
   anyof(100,102,145,147,148,-1)) {
   set('T',2043,'c',4,NULL,NULL);
   } else {
   set('T',2043,'c',1,NULL,NULL);
   }
   } else {
   if (anyof(114,92,152,-1)) {
   set('T',2043,'c',5,NULL,NULL);
   } else {
   set('T',2043,'c',3,NULL,NULL);
   }}}}
   apport(value[1137],702);
   if (anyof(119,123,136,-1)) {
value[value[1137]]=2;
   }
   say(0,2056,0);
   say(64,2043,0);
   }
   if (anyof(67,807,-1)) {
   if (((value[1170]==1) ||
   KEY(135)) ||
   (value[1137]==807)) {
   if (!(ishere(135,-1,-1))) {
   say(76,1312,135);
   }
   if (isnear(63,-1,-1)) {
   if (bitest(63,5)) {
   say(64,2211,0);
   }
   if (bitest(142,4)) {
   say(8,2209,1);
   } else {
   bitmod('s',142,4);
   say(8,2209,0);
   }
   if (isnear(141,-1,-1)) {
   apport(141,702);
   bitmod('s',63,5);
   set('T',3216,'c',1,NULL,NULL);
   set('T',3223,'c',1,NULL,NULL);
   if (bitest(63,13)) {
   say(72,2210,1);
   } else {
   say(72,2210,0);
   }}
   say(64,2212,0);
   } else {
   say(72,2208,1);
   }}}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(277,0,744,-757);
   }
   if (anyof(134,129,30,1077,1015,74,156,135,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p181(void)
#else
int p181()
#endif
{
int done=0;
   p184(-1,1015);
   if (anyof(1015,74,134,30,129,-1)) {
   if (anyof(822,798,-1))   say(64,3114,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(1128,-1))   say(64,3115,0);
   return 0;
   }
   if (anyof(848,-1))   say(64,2456,0);
   if ((KEY(758)) ||
   value[1170]==1) {
   move(277,0,748,-757);
   }
   if (anyof(1128,1127,1015,74,134,30,129,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p570(void)
#else
int p570()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(227,0,-744);
   move(237,0,750,-748);
   move(243,0,-746);
   }
return done;
}
#ifdef __STDC__
int p571(void)
#else
int p571()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(237,0,750,-757);
   }
return done;
}
#ifdef __STDC__
int p572(void)
#else
int p572()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(229,0,757,-748);
   }
return done;
}
#ifdef __STDC__
int p573(void)
#else
int p573()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(252,0,-748);
   move(239,0,-746);
   move(246,0,-750);
   }
return done;
}
#ifdef __STDC__
int p574(void)
#else
int p574()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(252,0,-744);
   move(238,0,-750);
   move(251,0,-751);
   }
return done;
}
#ifdef __STDC__
int p575(void)
#else
int p575()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(238,0,757,-746);
   }
return done;
}
#ifdef __STDC__
int p576(void)
#else
int p576()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(234,0,757,-753);
   }
return done;
}
#ifdef __STDC__
int p577(void)
#else
int p577()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(230,0,753,-754);
   }
return done;
}
#ifdef __STDC__
int p610(void)
#else
int p610()
#endif
{
int done=0;
   set('T',2839,'c',1,NULL,NULL);
   if (KEY(822)) {
   if (anyof(13,921,892,-1))   say(64,2909,0);
   if (anyof(897,896,308,-1))   say(76,2895,308);
   return 0;
   }
   if (KEY(761)) {
   move(218,-1);
   p800();
   }
   if (((keyword(848,754,-1)) ||
   KEY(758)) ||
   value[1170]==1) {
   move(218,0,746,13,754,848,-892);
   move(281,0,750,-308);
   }
   if (anyof(897,896,308,13,921,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p480(void)
#else
int p480()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,-1))   say(72,2470,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(280,-1))   say(64,2907,0);
   return 0;
   }
   if (((keyword(848,754,-1)) ||
   KEY(758)) ||
   value[1170]==1) {
   move(283,0,744,283,-896);
   move(272,1582,754,848,-280);
   }
   if (anyof(896,897,308,280,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=272;*bitword(1142)=-1;
   value[1143]=1667;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p382(void)
#else
int p382()
#endif
{
int done=0;
   p184(-1,74);
   if (anyof(74,134,129,30,1015,-1)) {
   if (anyof(798,822,-1))   say(64,2908,0);
   }
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,4);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(279,0,748,-308);
   move(384,0,-746);
   move(282,0,-744);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(376,134,129,30,74,1015,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p470(void)
#else
int p470()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   set('V',1243,'c',0,NULL,NULL);
   if (KEY(8)) {
   if (KEY(121)) {
   p634();
   }
   if (KEY(120)) {
   p901();
   }}
   if (KEY(787)) {
   if (KEY(121)) {
   p634();
   }
   if (value[1170]==1) {
   set('V',1243,'c',0,NULL,NULL);
   p321(0,0);
   if (value[1243]>0) {
   p634();
   }
   p320(0,0);
   if (value[1243]>0) {
   p901();
   }}}
   if (KEY(804)) {
   if (anyof(123,119,136,-1)) {
   set('V',1243,'v',1137,NULL,NULL);
   value[1248]=value[value[1243]];*bitword(1248)=0;
   if (value[1248]==4) {
   p634();
   }
   if (value[1248]==3) {
   p901();
   }
   if (value[1248]==5) {
   p217();
   say(64,2241,0);
   }
   if (value[1248]==6) {
   p268();
   }}}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(281,0,748,-896);
   if (anyof(744,756,283,8,-1)) {
   if (value[8]==0) {
   say(64,1397,0);
   }
   move(283,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p118(void)
#else
int p118()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(575,-1))   say(72,2633,1);
   if (anyof(898,-1))   say(72,2633,0);
   if (anyof(961,-1))   say(72,2633,2);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(892,-1))   say(64,2931,0);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=1669;*bitword(1143)=-1;
   if ((anyof(761,758,756,-1)) &&
   anyof(754,961,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(761)) &&
   anyof(754,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(282,0,748,-757);
   move(280,0,750,-280);
   if (anyof(897,896,308,-1)) {
   p329(-1,282,-1,748,-1,280,-1,750);
   }
   if (anyof(761,754,961,892,-1)) {
   if (bitest(299,4)) {
   set('V',1170,'c',0,NULL,NULL);
   p926();
   }
   value[1148]=1637;*bitword(1148)=-1;
   special(23, &value[1148]);
   set('V',1172,'c',7,NULL,NULL);
   say(66,1148,0);
   }}
   if (KEY(575)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(896,892,898,961,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p783(void)
#else
int p783()
#endif
{
int done=0;
   if ((KEY(63)) &&
   !isnear(63,-1,-1)) {
if (value[ARG1] == 63) value[ARG1]=41;
if (value[ARG2] == 63) value[ARG2]=41;
   }
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,5);
   if (anyof(935,-1))   say(64,2085,0);
   if (anyof(41,-1))   say(76,2029,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(512,0,-746);
   move(461,0,-747);
   move(267,0,750,757,-267);
   if (anyof(744,748,749,751,745,-1))   say(64,1712,0);
   }
   if (anyof(41,63,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p653(void)
#else
int p653()
#endif
{
int done=0;
   if (anyof(935,928,-1))   say(64,1275,0);
   if (KEY(822)) {
   if (anyof(899,896,-1))   say(76,2895,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(267,0,-747);
   move(272,0,750,-899);
   move(289,0,744,896,753,-283);
   }
   if (anyof(896,897,308,899,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p605(void)
#else
int p605()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,-1))   say(72,2470,1);
   if (anyof(376,753,-1))   say(72,2011,6);
   if (anyof(10,-1))   say(64,2471,0);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(538,-1))   say(64,2965,0);
   if (KEY(283)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((keyword(848,10,-1)) ||
   anyof(761,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(761)) {
   move(283,-1);
   p800();
   }
   move(285,0,748,-285);
   move(286,0,-750);
   if (anyof(283,-1))   say(64,1418,0);
   if (anyof(10,-1))   say(64,2964,0);
   if (KEY(538)) {
   p329(-1,286,-1,750,-1,285,-1,746);
   }}
   value[1143]=1670;*bitword(1143)=-1;
   value[1142]=283;*bitword(1142)=-1;
   if (anyof(376,936,10,538,283,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p25(void)
#else
int p25()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (KEY(286)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,779,-1))   say(72,2913,897);
   if (anyof(538,-1))   say(64,2914,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(289,0,751,538,-283);
   if (anyof(286,-1))   say(64,1418,0);
   if (anyof(746,897,896,287,-1)) {
   set('L',0,'v',1179,lval, lbts);
   if (have(58,-1,-1)) {
   lval[0] -= 1;
   }
   if (have(61,-1,-1)) {
   lval[0] -= 1;
   }
   if (lval[0]==0) {
   move(287,-2);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if ((have(value[1146],-1,-1)) &&
   !(bitest(evar(1146),12))) {
   say(64,1403,0);
   }}
   move(287,-2);
   }}
   if (anyof(897,896,308,538,286,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p679(void)
#else
int p679()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(76,2895,1137);
   if (anyof(779,-1))   say(64,2912,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(288,0,745,288,-756);
   if (KEY(287)) {
   if (have(58,-1,-1)) {
   apport(58,HERE);
   say(0,2065,0);
   }
   move(222,-2);
   }
   if (anyof(750,757,896,286,-1)) {
   set('L',0,'v',1179,lval, lbts);
   if (have(58,-1,-1)) {
   lval[0] -= 1;
   }
   if (have(61,-1,-1)) {
   lval[0] -= 1;
   }
   if (lval[0]==0) {
   move(286,-2);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if ((have(value[1146],-1,-1)) &&
   !(bitest(evar(1146),12))) {
   say(64,1403,0);
   }}
   move(286,-2);
   }}
   if (anyof(300,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p173(void)
#else
int p173()
#endif
{
int done=0;
   p184(-1,133);
   if (anyof(1127,133,134,129,30,74,1015,-1)) {
   if (anyof(807,764,772,-1))   say(76,1877,133);
   if (anyof(798,822,-1))   say(64,1487,0);
   say(76,2029,133);
   }
   if (KEY(822)) {
   if (anyof(779,308,-1))   say(76,2913,308);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(287,0,748,757,308,-287);
   if (keyword(758,779,-1)) {
   move(287,-2);
   }}
   if ((anyof(897,896,308,1127,133,134,129,1015,-1)) ||
   anyof(30,74,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p29(void)
#else
int p29()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(900,290,1051,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(996,-1))   say(64,2742,0);
   return 0;
   }
   if (keyword(764,996,-1)) {
   say(64,2752,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(291,0,754,747,-291);
   move(432,0,746,-753);
   if (anyof(897,896,308,-1)) {
   p329(-1,291,-1,747,-1,432,-1,746);
   }
   if (anyof(290,900,-1))   say(64,1418,0);
   }
   if (anyof(896,897,308,290,900,1051,996,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p770(void)
#else
int p770()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(1127,1126,935,1133,-1))   say(64,2936,0);
   if (anyof(291,291,-1))   say(64,2937,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(290,0,753,750,-900);
   move(292,0,754,-308);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   if (anyof(748,261,-1)) {
   if (have(114,-1,-1)) {
   say(76,1404,114);
   }
   if (have(115,-1,-1)) {
   say(76,1404,115);
   }
   move(261,-2);
   }}
   if (anyof(896,897,308,1127,291,1126,935,1133,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p694(void)
#else
int p694()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(935,-1))   say(64,2903,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(291,0,753,-291);
   move(293,0,-754);
   if (anyof(897,896,308,-1)) {
   p329(-1,291,-1,753,-1,293,-1,754);
   }}
   if (anyof(935,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p166(void)
#else
int p166()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(292,0,753,757,-308);
   move(291,0,-291);
   }
   if (anyof(897,308,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p27(void)
#else
int p27()
#endif
{
int done=0;
   p184(-1,1077);
   p297(-1,1862,-1,1077);
   if (KEY(822)) {
   if (KEY(294)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(1022,-1))   say(64,2953,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(496,0,-745);
   move(262,0,-748);
   move(261,0,-753);
   move(266,0,-750);
   move(295,0,-746);
   if (anyof(294,-1))   say(64,1418,0);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,294,1022,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p579(void)
#else
int p579()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(364,0,-748);
   move(365,0,-749);
   move(366,0,-745);
   move(367,0,-747);
   move(368,0,-753);
   move(369,0,-751);
   move(370,0,-746);
   move(371,0,-750);
   move(372,0,-744);
   move(254,0,-754);
   if (anyof(897,896,308,-1))   say(72,2896,896);
   }
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p934(void)
#else
int p934()
#endif
{
int done=0;
   if (value[1150]<=0) {
   set('V',1150,'c',65,NULL,NULL);
   }
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,897,308,-1))   say(72,2896,896);
   if (KEY(750)) {
   move(295,-2);
   }
   if (anyof(744,748,746,753,754,745,751,747,749,-1)) {
   if (irand(100)<value[1150]) {
   value[1150] -= 5;
   move(295,-2);
   }
   move(294,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p601(void)
#else
int p601()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(12,-1))   say(64,2932,0);
   if (anyof(919,-1))   say(64,2584,0);
   if (anyof(936,-1))   say(64,1352,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(269,0,-748);
   move(298,0,744,936,-298);
   if (KEY(207)) {
   p329(-1,298,-1,744,-1,269,-1,748);
   }}
   if (anyof(12,919,-1))   say(76,1430,12);
   if (anyof(207,936,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p923(void)
#else
int p923()
#endif
{
int done=0;
   p298();
   if (KEY(822)) {
   if (anyof(1003,-1))   say(64,3308,0);
   if (anyof(209,-1))   say(64,1761,0);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(1055,991,-1))   say(64,3067,0);
   if (anyof(1133,-1))   say(64,3068,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(754,209,-1)) {
   say(64,2034,0);
   }
   if ((anyof(758,761,-1)) &&
   anyof(209,919,-1)) {
   say(0,1491,0);
   move(296,-1);
   p153();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(271,0,750,896,897,-308);
   }
   if (anyof(209,936,1055,991,896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=296;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p853(void)
#else
int p853()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,-1))   say(72,2944,1133);
   if (anyof(376,475,-1))   say(64,3119,0);
   if (anyof(15,-1))   say(64,3118,0);
   return 0;
   }
   if (anyof(761,848,-1)) {
   if ((anyof(754,15,-1)) ||
   value[1170]==1) {
   move(232,-2);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(270,0,-744);
   if (anyof(754,15,-1)) {
   if (irand(100)<67) {
   if (irand(100)<50) {
   move(235,-2);
   }
   move(230,-2);
   } else {
   move(232,-2);
   }}}
   if (KEY(15)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1667;*bitword(1143)=-1;
   value[1142]=235;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p580(void)
#else
int p580()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(364,0,-749);
   move(365,0,-744);
   move(366,0,-746);
   move(367,0,-751);
   move(368,0,-747);
   move(369,0,-745);
   move(370,0,-750);
   move(371,0,-754);
   move(372,0,-753);
   move(373,0,-748);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p708(void)
#else
int p708()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(892,898,-1))   say(64,2939,0);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(298,-1))   say(64,2940,0);
   if (anyof(896,897,308,-1))   say(72,2938,0);
   if (anyof(466,-1))   say(76,2943,466);
   return 0;
   }
   if ((anyof(756,837,762,-1)) &&
   anyof(120,298,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(762,120,298,898,892,744,837,-1))   say(64,1633,0);
   move(296,0,748,12,-896);
   move(466,0,750,-466);
   }
   if (anyof(892,898,936,466,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(298,896,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1678;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p709(void)
#else
int p709()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(892,898,-1))   say(64,2939,0);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(298,-1))   say(64,2940,0);
   if (anyof(896,897,308,-1))   say(72,2938,1);
   if (anyof(480,1133,-1))   say(64,2941,0);
   return 0;
   }
   if (KEY(27)) {
   if (anyof(764,-1))   say(76,2592,27);
   if (KEY(67)) {
   (*procs[784])();
   }}
   if ((KEY(798)) &&
   isnear(29,-1,-1)) {
   if (anyof(30,74,760,29,-1))   say(64,3466,0);
   }
   if ((anyof(756,837,762,-1)) &&
   anyof(120,298,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(300,0,744,-896);
   move(301,0,-301);
   if (anyof(837,480,-1))   say(64,1633,0);
   if (anyof(120,298,748,762,-1)) {
   if (isnear(29,-1,-1)) {
   apport(29,701);
   move(298,-1634);
   }
   say(64,1633,0);
   }}
   if (anyof(892,898,298,936,480,896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1678;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p730(void)
#else
int p730()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(935,-1))   say(64,2906,0);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(299,0,748,-298);
   move(301,0,745,-301);
   if (anyof(300,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1)) {
   p329(-1,301,-1,745,-1,299,-1,748);
   }}
   if (anyof(936,935,896,300,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p40(void)
#else
int p40()
#endif
{
int done=0;
   p184(-1,73);
   if (anyof(73,1015,74,30,134,129,-1)) {
   if (anyof(822,798,-1))   say(64,2515,0);
   if (anyof(764,807,772,-1))   say(76,1877,73);
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,73);
   }
   say(76,1877,73);
   }
   if (anyof(961,202,898,202,-1)) {
   if (anyof(822,-1))   say(76,2585,1137);
   say(64,2630,0);
   }
   if (KEY(761)) {
   if ((anyof(754,756,-1)) ||
   value[1170]==1) {
   move(702,-1);
   p800();
   }}
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(301,-1))   say(64,3151,0);
   if (anyof(1043,-1))   say(64,3152,0);
   if (anyof(1013,935,-1))   say(64,3153,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(300,0,750,757,897,896,-300);
   move(299,0,-298);
   if (anyof(301,-1))   say(64,1418,0);
   }
   if (anyof(202,898,961,301,1013,935,1043,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(73,1015,74,30,134,129,300,897,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1667;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p553(void)
#else
int p553()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(239,0,747,-757);
   }
return done;
}
#ifdef __STDC__
int p815(void)
#else
int p815()
#endif
{
int done=0;
   if (KEY(11)) {
   apport(11,value[1138]);
   }
   value[1143]=1671;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
   if (value[22]==0) {
   p184(-1,1077);
   } else {
   p184(-1,129);
   }
   p297(-1,1862,*bitword(1137),value[1137]);
   if (KEY(822)) {
   if (anyof(538,308,-1))   say(76,2895,308);
   return 0;
   }
   if (value[22]==0) {
   if (KEY(793)) {
   if ((value[1170]==1) ||
   isnear(24,-1,-1)) {
   return 0;
   }
   if (anyof(124,125,-1)) {
   if (have(value[1137],-1,-1)) {
   apport(value[1137],HERE);
   say(76,1449,1137);
   }
   return 0;
   }
   if (bitest(evar(1137),0)) {
   if (bitest(evar(1137),5)) {
   if (have(value[1137],-1,-1)) {
   if (KEY(53)) {
   if (bitest(23,13)) {
   set('E',23,'c',0,NULL,NULL);
   apport(53,702);
   bitmod('s',53,14);
   say(64,1915,0);
   }
   bitmod('s',53,13);
   }
   p127();
   set('E',23,'c',1,NULL,NULL);
   apport(23,701);
   apport(24,303);
   apport(value[1137],702);
   say(76,1450,1137);
   }}}}}
   if (KEY(761)) {
   if (((KEY(762)) ||
   value[1170]==1) &&
   value[22]==0) {
   say(64,1386,0);
   }
   move(702,-1);
   p800();
   }
   if (keyword(762,11,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(305,0,749,754,305,-308);
   if (anyof(762,11,745,-1)) {
   if (value[22]>0) {
   say(64,1452,0);
   }
   if (have(95,0,2)) {
   if (value[23]<3) {
   say(0,3367,0);
   }
   move(304,-2);
   }
   if (value[23]==0) {
   if (isnear(24,-1,-1)) {
   apport(24,701);
   apport(23,value[1138]);
   say(64,1913,0);
   }
   say(64,1451,0);
   }
   if (value[23]==2) {
   set('E',23,'c',0,NULL,NULL);
   apport(23,303);
   bitmod('s',23,6);
   apport(24,701);
   say(64,1913,0);
   }
   if (value[23]==1) {
   set('E',23,'c',2,NULL,NULL);
   }
   move(304,-2);
   }}
   if ((keyword(129,134,74,30,1015,1077,-1)) ||
   anyof(897,896,308,538,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p779(void)
#else
int p779()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(272,0,754,749,757,-272);
   if (anyof(753,745,22,-1)) {
   if ((location[23]==303)) {
   apport(23,701);
   apport(24,303);
   }
   move(303,-2);
   }
   if (anyof(897,896,308,-1)) {
   p329(-1,303,-1,745,-1,272,-1,749);
   }}
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p756(void)
#else
int p756()
#endif
{
int done=0;
   if (((KEY(956)) &&
   isnear(21,-1,-1)) &&
   value[21]>0) {
if (value[ARG1] == 956) value[ARG1]=21;
if (value[ARG2] == 956) value[ARG2]=21;
   }
   if ((KEY(63)) &&
   value[21]==0) {
   if (anyof(822,-1))   say(64,1512,0);
   if (anyof(764,807,863,861,806,-1))   say(64,1511,0);
   }
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(269,0,744,-757);
   if (anyof(759,746,-1)) {
   if (value[21]==0) {
   p781();
   say(64,1436,0);
   }
   move(274,-2);
   }
   if (KEY(207)) {
   if (value[21]==0) {
   move(value[1139],-2);
   }
   p329(-1,269,-1,744,-1,274,-1,746);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p757(void)
#else
int p757()
#endif
{
int done=0;
   if ((KEY(63)) &&
   value[21]==0) {
   if (anyof(822,-1))   say(64,1512,0);
   if (anyof(764,807,863,861,806,-1))   say(64,1511,0);
   }
   if (KEY(822)) {
   if (KEY(207)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(274,0,746,-757);
   if (anyof(759,744,-1)) {
   if (value[21]==0) {
   p781();
   say(64,1436,0);
   }
   move(269,-2);
   }
   if (KEY(207)) {
   if (value[21]==0) {
   move(value[1139],-2);
   }
   p329(-1,269,-1,744,-1,274,-1,746);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p611(void)
#else
int p611()
#endif
{
int done=0;
   if (KEY(11)) {
   apport(11,value[1138]);
   }
   if (value[22]==0) {
   p184(-1,1077);
   } else {
   p184(-1,129);
   }
   p297(-1,1925,*bitword(1137),value[1137]);
   if (KEY(822)) {
   if (anyof(538,-1))   say(76,2025,538);
   return 0;
   }
   value[1143]=1671;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
   if ((anyof(765,793,765,-1)) &&
   KEY(39)) {
   if ((have(39,-1,-1)) &&
   isnear(23,-1,-1)) {
   set('E',23,'c',3,NULL,NULL);
   apport(23,702);
   apport(24,303);
   apport(39,HERE);
   say(0,2179,0);
   say(64,1454,0);
   }}
   if ((KEY(793)) &&
   value[22]==0) {
   if ((value[1170]==1) ||
   isnear(24,-1,-1)) {
   return 0;
   }
   if (anyof(124,125,-1)) {
   if (have(value[1137],-1,-1)) {
   apport(value[1137],HERE);
   say(76,1449,1137);
   }
   return 0;
   }
   if (bitest(evar(1137),0)) {
   if (bitest(evar(1137),5)) {
   if (have(value[1137],-1,-1)) {
   if (KEY(53)) {
   if (bitest(23,13)) {
   set('E',23,'c',0,NULL,NULL);
   apport(53,702);
   bitmod('s',53,14);
   say(64,1915,0);
   }
   bitmod('s',53,13);
   }
   set('E',23,'c',1,NULL,NULL);
   apport(23,701);
   apport(24,303);
   apport(value[1137],702);
   say(76,1450,1137);
   }}}}
   if (KEY(761)) {
   if (((KEY(762)) ||
   value[1170]==1) &&
   value[22]==0) {
   say(64,1386,0);
   }
   move(702,-1);
   p800();
   }
   if (keyword(762,11,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(308,0,745,538,-308);
   move(309,0,-309);
   move(311,0,-890);
   move(360,0,-360);
   if (anyof(762,11,749,-1)) {
   if (value[22]>0) {
   say(64,1452,0);
   }
   if (have(95,0,2)) {
   if (value[23]<3) {
   say(0,3367,0);
   }
   move(303,-2);
   }
   if (value[23]==0) {
   if (isnear(24,-1,-1)) {
   apport(23,303);
   apport(24,701);
   say(64,1913,0);
   }
   say(64,1451,0);
   }
   if (value[23]==2) {
   if (ishere(39,-1,-1)) {
   set('E',23,'c',3,NULL,NULL);
   apport(23,702);
   say(64,1442,0);
   }
   set('E',23,'c',0,NULL,NULL);
   apport(23,303);
   bitmod('s',23,6);
   apport(24,701);
   say(64,1913,0);
   }
   if (value[23]==1) {
   set('E',23,'c',2,NULL,NULL);
   }
   if (have(39,-1,-1)) {
   say(0,1453,0);
   set('E',22,'c',1,NULL,NULL);
   apport(24,701);
   move(702,-1);
   p153();
   }
   if ((value[23]==3) &&
   bitest(23,13)) {
   if (isnear(39,-1,-1)) {
   apport(39,INHAND);
   set('E',22,'c',1,NULL,NULL);
   say(8,1575,0);
   } else {
   set('E',22,'c',2,NULL,NULL);
   say(8,1575,1);
   }
   apport(24,701);
   move(702,-1);
   p153();
   }
   move(303,-2);
   }}
   if (KEY(538)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(129,134,74,30,1015,1077,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p154(void)
#else
int p154()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(750,22,-1)) {
   if ((location[23]==303)) {
   apport(23,701);
   apport(24,303);
   }
   move(304,-2);
   }
   move(309,0,746,-309);
   move(311,0,-890);
   move(360,0,-360);
   if (anyof(897,896,308,-1)) {
   p329(-1,304,-1,750,-1,309,-1,746);
   }}
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p352(void)
#else
int p352()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(309,-1))   say(76,2894,308);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(304,0,-22);
   move(308,0,750,-308);
   move(310,0,-745);
   move(359,0,747,-754);
   move(311,0,-890);
   move(360,0,-360);
   if (anyof(897,896,308,309,-1))   say(76,2896,308);
   }
   if (anyof(897,896,308,309,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p896(void)
#else
int p896()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(271)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,899,-1))   say(76,2895,1137);
   if (anyof(935,-1))   say(64,2906,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(309,0,748,309,-896);
   move(311,0,744,-890);
   move(358,0,746,-899);
   }
   if (anyof(271,896,899,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p74(void)
#else
int p74()
#endif
{
int done=0;
   if ((anyof(11,1051,-1)) &&
   value[31]==2) {
   apport(11,value[1138]);
   }
   if (KEY(822)) {
   if (anyof(475,376,1021,1029,-1))   say(64,3187,0);
   if (anyof(1031,935,1031,-1))   say(64,3186,0);
   if (anyof(31,172,-1))   say(64,2038,0);
   if (anyof(910,898,-1))   say(64,2039,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(894,201,-1))   say(76,2944,201);
   if (anyof(16,1019,635,914,-1))   say(64,2040,0);
   if (anyof(547,298,1030,-1))   say(64,3450,0);
   if (anyof(914,-1))   say(64,3451,0);
   return 0;
   }
   if (KEY(31)) {
   if (anyof(773,-1))   say(64,1439,0);
   bitmod('s',evar(1172),2);
   return 0;
   }
   if (keyword(761,753,-1)) {
   say(64,2579,0);
   }
   if (((KEY(762)) &&
   anyof(11,1051,172,-1)) ||
   KEY(761)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(310,0,748,757,-896);
   move(309,0,-309);
   if (KEY(761)) {
   move(702,-1);
   p800();
   }
   if (anyof(201,762,11,744,1051,-1)) {
   if (value[31]==0) {
   say(64,1590,0);
   }
   say(0,1591,0);
   if (have(67,0,2)) {
   if (have(39,-1,-1)) {
   say(0,1595,0);
   apport(39,702);
   } else {
   if (!(bitest(312,4))) {
   bitmod('c',311,8);
   }
   say(0,1593,0);
   }
   move(312,-2);
   }
   if (have(39,-1,-1)) {
   say(0,1594,0);
   } else {
   say(0,1592,0);
   }
   if (have(67,-1,-1)) {
   say(0,1891,0);
   }
   move(702,-1);
   p153();
   }}
   if (anyof(31,896,172,635,914,1031,475,376,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(1029,1021,935,894,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1030,298,547,914,201,910,-1)) {
   bitmod('s',evar(1172),2);
   }
   value[1143]=1672;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
