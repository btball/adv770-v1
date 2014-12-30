/* adv10.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p620(void)
#else
int p620()
#endif
{
int done=0;
   p80();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (KEY(893)) {
   value[1216]=744;*bitword(1216)=-1;
   } else    if (anyof(200,195,-1)) {
   value[1216]=749;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   if (value[1190]==8) {
   move(544,2154,-195);
   }
   move(523,0,744,-893);
   move(524,0,-745);
   move(525,0,-746);
   move(540,0,-747);
   move(195,0,749,-195);
   move(521,0,-750);
   move(522,0,-751);
   if (KEY(748)) {
   if (irand(100)<50) {
   move(540,-2);
   }
   move(195,-2);
   }}
return done;
}
#ifdef __STDC__
int p252(void)
#else
int p252()
#endif
{
int done=0;
   bitmod('s',138,4);
   if (value[1190]<8) {
   if (((KEY(138)) ||
   value[1170]==1) ||
   KEY(3)) {
   if (KEY(764)) {
   if (have(138,-1,-1)) {
   say(64,2352,0);
   }
   apport(138,INHAND);
   say(64,2349,0);
   }}
   if (KEY(138)) {
   if (KEY(822)) {
   say(32,138,0);
   longjmp(loop_back,1);
   }
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   }
   if (!(have(138,-1,-1))) {
   bitmod('s',evar(1172),1);
   }}
   } else    if (KEY(138)) {
   say(64,3339,0);
   }
   p80();
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (anyof(200,195,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   } else    if (KEY(893)) {
   value[1216]=746;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(525,0,-744);
   move(526,0,-745);
   move(527,0,746,-893);
   move(529,0,-747);
   move(528,0,-748);
   move(541,0,-749);
   move(539,0,-751);
   if (value[1190]==8) {
   move(527,2154,-195);
   }
   move(195,0,200,-195);
   if (KEY(750)) {
   if (irand(100)<50) {
   move(539,-2);
   }
   move(541,-2);
   }}
return done;
}
#ifdef __STDC__
int p787(void)
#else
int p787()
#endif
{
int done=0;
   p80();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (KEY(201)) {
   value[1216]=750;*bitword(1216)=-1;
   } else    if (KEY(893)) {
   value[1216]=748;*bitword(1216)=-1;
   } else    if (anyof(200,195,-1)) {
   value[1216]=751;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(540,0,-745);
   move(528,0,-746);
   move(530,0,-747);
   move(535,0,748,-893);
   move(202,0,-749);
   if (value[1190]==8) {
   move(530,2154,-195);
   }
   move(201,0,750,754,-201);
   move(195,0,751,-195);
   if (KEY(744)) {
   if (irand(100)<50) {
   move(540,-2);
   }
   move(195,-2);
   }}
return done;
}
#ifdef __STDC__
int p269(void)
#else
int p269()
#endif
{
int done=0;
   if (KEY(848)) {
   if ((value[1170]==1) ||
   anyof(753,757,223,1126,935,998,-1)) {
   say(64,1688,0);
   }}
   p479();
   if (KEY(822)) {
   if (anyof(989,988,-1))   say(76,2715,1137);
   if (anyof(1126,223,-1))   say(64,2716,0);
   return 0;
   }
   if (KEY(788)) {
   if (anyof(989,-1))   say(64,2717,0);
   if (anyof(988,-1))   say(64,2718,0);
   }
   if (anyof(989,988,1126,223,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (anyof(203,202,201,200,-1)) {
   value[1216]=744;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   if (value[1190]==8) {
   move(518,2154,200,202,-201);
   }
   move(203,0,744,-203);
   move(195,0,200,-195);
   move(202,0,-202);
   move(201,0,-201);
   move(536,0,-745);
   move(537,0,-746);
   move(534,0,750,-893);
   move(533,0,-751);
   }
   if (anyof(935,998,974,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p333(void)
#else
int p333()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(538,197,-1))   say(76,2585,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (anyof(538,197,-1)) {
   value[1216]=749;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(544,0,744,745,750,-751);
   move(522,0,-746);
   move(521,0,-747);
   move(538,0,748,749,538,-197);
   }
   if (anyof(538,197,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p344(void)
#else
int p344()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(538,197,-1))   say(76,2585,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (KEY(480)) {
   value[1216]=748;*bitword(1216)=-1;
   } else    if (anyof(538,197,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(480,0,748,-480);
   move(538,0,745,746,538,-197);
   move(196,0,-747);
   move(544,0,749,750,-751);
   }
   if (anyof(538,197,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p346(void)
#else
int p346()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(195,-1))   say(76,2585,195);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (value[1190]==8) {
   move(522,2154,-200);
   }
   if (have(102,-1,-1)) {
   if (anyof(195,200,-1)) {
   value[1216]=748;*bitword(1216)=-1;
   } else    if (KEY(538)) {
   value[1216]=750;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(522,0,-744);
   move(523,0,-745);
   move(539,0,-746);
   move(195,0,747,748,749,200,-195);
   move(538,0,-750);
   move(519,0,-751);
   }
   if (KEY(195)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p347(void)
#else
int p347()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(544,0,744,745,-751);
   move(523,0,-746);
   move(539,0,-747);
   move(521,0,-748);
   move(538,0,-749);
   move(519,0,-750);
   }
return done;
}
#ifdef __STDC__
int p348(void)
#else
int p348()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(544,0,744,745,-751);
   move(524,0,-746);
   move(525,0,-747);
   move(539,0,-748);
   move(521,0,-749);
   move(522,0,-750);
   }
return done;
}
#ifdef __STDC__
int p349(void)
#else
int p349()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(544,0,744,745,746,-751);
   move(526,0,-747);
   move(525,0,-748);
   move(539,0,-749);
   move(523,0,-750);
   }
return done;
}
#ifdef __STDC__
int p350(void)
#else
int p350()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(524,0,-744);
   move(544,0,-745);
   move(526,0,-746);
   move(527,0,-747);
   move(540,0,-748);
   move(539,0,-750);
   move(523,0,-751);
   if (KEY(749)) {
   if (irand(100)<50) {
   move(539,-2);
   }
   move(540,-2);
   }}
return done;
}
#ifdef __STDC__
int p351(void)
#else
int p351()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(544,0,744,745,746,-747);
   move(527,0,-748);
   move(540,0,-749);
   move(525,0,-750);
   move(524,0,-751);
   }
return done;
}
#ifdef __STDC__
int p334(void)
#else
int p334()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(526,0,-744);
   move(544,0,745,746,-747);
   move(529,0,-748);
   move(528,0,-749);
   move(540,0,-750);
   move(525,0,-751);
   }
return done;
}
#ifdef __STDC__
int p335(void)
#else
int p335()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(540,0,-744);
   move(527,0,-745);
   move(529,0,-746);
   move(544,0,-747);
   move(530,0,-748);
   move(535,0,-749);
   move(541,0,-750);
   if (KEY(751)) {
   if (irand(100)<50) {
   move(540,-2);
   }
   move(541,-2);
   }}
return done;
}
#ifdef __STDC__
int p336(void)
#else
int p336()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(527,0,-744);
   if (KEY(747)) {
   if ((bitest(545,4)) ||
   value[529]>0) {
   move(542,-2);
   } else {
   move(544,-2);
   }}
   move(544,0,745,746,-748);
   move(530,0,-749);
   move(528,0,-750);
   move(540,0,-751);
   if (KEY(538)) {
   if (value[529]==1) {
   move(542,-2);
   }
   say(76,1312,538);
   }}
return done;
}
#ifdef __STDC__
int p337(void)
#else
int p337()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(528,0,-744);
   move(529,0,-745);
   move(544,0,746,747,-748);
   move(536,0,-749);
   move(535,0,-750);
   move(541,0,-751);
   }
return done;
}
#ifdef __STDC__
int p338(void)
#else
int p338()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(195,0,744,-745);
   move(201,0,754,746,-201);
   move(202,0,-747);
   move(532,0,-748);
   move(544,0,749,750,-751);
   }
return done;
}
#ifdef __STDC__
int p339(void)
#else
int p339()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(531,0,-744);
   move(201,0,-745);
   move(202,0,746,754,-201);
   move(203,0,-747);
   move(533,0,-748);
   move(544,0,749,750,-751);
   }
return done;
}
#ifdef __STDC__
int p340(void)
#else
int p340()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(532,0,-744);
   move(202,0,-745);
   move(203,0,746,754,-201);
   move(518,0,-747);
   move(534,0,-748);
   move(544,0,749,750,-751);
   }
return done;
}
#ifdef __STDC__
int p341(void)
#else
int p341()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(533,0,-744);
   move(203,0,-745);
   move(518,0,746,754,-201);
   move(537,0,-747);
   move(544,0,748,749,750,-751);
   }
return done;
}
#ifdef __STDC__
int p342(void)
#else
int p342()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(541,0,-744);
   move(528,0,-745);
   move(530,0,-746);
   move(544,0,-747);
   move(536,0,-748);
   move(203,0,-749);
   move(202,0,750,754,-201);
   move(201,0,-751);
   }
return done;
}
#ifdef __STDC__
int p343(void)
#else
int p343()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(535,0,-744);
   move(530,0,-745);
   move(544,0,746,-747);
   move(537,0,-748);
   move(518,0,-749);
   move(203,0,750,754,-201);
   move(202,0,-751);
   }
return done;
}
#ifdef __STDC__
int p345(void)
#else
int p345()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   anyof(754,201,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(536,0,-744);
   move(544,0,745,746,747,-748);
   move(518,0,750,754,-201);
   move(534,0,-749);
   move(203,0,-751);
   }
return done;
}
#ifdef __STDC__
int p177(void)
#else
int p177()
#endif
{
int done=0;
   p474();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(538)) {
   p329(-1,543,-1,747,-1,529,-1,751);
   }
   move(529,0,-751);
   move(543,0,-747);
   move(544,0,744,745,746,748,749,-750);
   }
return done;
}
#ifdef __STDC__
int p178(void)
#else
int p178()
#endif
{
int done=0;
   p474();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(538)) {
   p329(-1,545,-1,747,-1,542,-1,751);
   }
   move(542,0,-751);
   move(545,0,-747);
   move(544,0,744,745,746,748,749,-750);
   }
return done;
}
#ifdef __STDC__
int p174(void)
#else
int p174()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   p474();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   lval[1]=746;lbts[1*VARSIZE]=-1;
   set('L',0,'v',1136,lval, lbts);
   if (value[1170]>1) {
   set('L',0,'v',1137,lval, lbts);
   }
   lval[0] -= lval[1];
   if ((value[1241]<0) &&
   irand(100)<20) {
   set('V',1241,'l',0,lval, lbts);
   }
   if (value[1241]==lval[0]) {
   say(64,2035,0);
   }
   p401();
   set('V',1241,'c',-1,NULL,NULL);
   set('L',0,'v',1242,lval, lbts);
   if (irand(100)<lval[0]) {
   value[1242] -= 10;
   if (value[1242]<1) {
   set('V',1242,'c',1,NULL,NULL);
   }
   move(544,-2);
   }
   value[1242] = irand(160-120+1)+120;
   value[1147] = irand(537-519+1)+519;
   p240(-1,518);
   move(value[1147],-2);
   }}
return done;
}
#ifdef __STDC__
int p133(void)
#else
int p133()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(974,-1))   say(72,2668,974);
   if (anyof(545,-1))   say(72,2688,0);
   if (anyof(893,-1))   say(72,2687,0);
   if (anyof(131,973,-1))   say(72,2687,1);
   if (KEY(916)) {
   if (value[1190]==3) {
   say(72,2384,0);
   }
   say(72,2385,0);
   }
   if (anyof(980,979,754,-1))   say(72,2384,1);
   if (anyof(546,-1))   say(64,2381,0);
   if (anyof(538,-1))   say(72,2666,0);
   if (anyof(480,-1))   say(72,2666,1);
   if (anyof(1133,-1))   say(72,2688,1);
   if (anyof(1127,982,-1))   say(64,2689,0);
   if (anyof(981,-1))   say(72,2690,1);
   if (anyof(8,-1))   say(72,2721,4);
   if (anyof(919,-1))   say(72,2726,0);
   if (anyof(475,-1))   say(64,2383,0);
   if (anyof(935,-1))   say(72,2721,0);
   if (anyof(992,-1))   say(64,2382,0);
   return 0;
   }
   if (KEY(8)) {
   if (anyof(767,-1))   say(72,2725,0);
   if (anyof(769,-1))   say(76,2498,8);
if (value[ARG1] == 8) value[ARG1]=169;
if (value[ARG2] == 8) value[ARG2]=169;
   }
   if (KEY(919)) {
   if (anyof(792,815,991,-1))   say(72,2727,0);
   if (anyof(800,-1))   say(64,2456,0);
   if (anyof(767,769,-1))   say(72,2728,767);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(761)) &&
   anyof(756,916,-1)) {
   if (value[1190]==8) {
   p223(0,1);
   } else {
   move(489,-3476);
   }}
   if (((keyword(756,546,-1)) ||
   keyword(848,754,-1)) ||
   keyword(754,916,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((KEY(751)) ||
   KEY(538)) {
   set('E',529,'c',1,NULL,NULL);
   move(543,-2);
   }
   if (anyof(756,749,546,-1)) {
   say(8,2724,0);
   move(546,-2);
   }
   if (anyof(848,754,916,-1)) {
   if (value[1190]==8) {
   move(672,-2873);
   } else {
   move(489,-2);
   }}
   move(544,0,744,745,746,747,748,-750);
   }
   if (anyof(974,545,893,131,973,916,980,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(546,538,480,1133,1127,981,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(919,475,935,992,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=489;*bitword(1142)=-1;
   value[1143]=2386;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p769(void)
#else
int p769()
#endif
{
int done=0;
   if (KEY(991)) {
   if (anyof(822,-1))   say(64,2722,0);
   if (anyof(775,785,764,-1))   say(64,2456,0);
   if (anyof(8,935,1133,-1))   say(64,2456,0);
   if (anyof(919,-1))   say(72,2727,1);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(8)) {
   if (anyof(767,-1))   say(72,2725,1);
   if (anyof(769,-1))   say(76,2498,8);
if (value[ARG1] == 8) value[ARG1]=169;
if (value[ARG2] == 8) value[ARG2]=169;
   }
   if (KEY(546)) {
   if (anyof(822,-1))   say(64,2381,0);
   if (anyof(758,756,-1))   say(76,2612,546);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(935,-1))   say(72,2721,0);
   if (anyof(1133,-1))   say(72,2721,1);
   if (anyof(376,475,-1))   say(72,2721,2);
   if (anyof(169,-1))   say(72,2721,3);
   if (anyof(757,545,919,-1))   say(72,2726,1);
   if (anyof(992,-1))   say(64,2382,0);
   return 0;
   }
   if (KEY(919)) {
   if (anyof(792,815,-1))   say(64,2727,0);
   if (anyof(800,-1))   say(64,2456,0);
   if (anyof(767,769,-1))   say(72,2728,767);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(756,-1))   say(76,2612,546);
   if (anyof(757,745,545,-1)) {
   say(8,2724,1);
   move(545,-2);
   }}
   if (anyof(475,919,935,169,1133,992,546,991,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (KEY(545)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p43(void)
#else
int p43()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((value[318]==1) ||
   value[318]==2) {
   bitmod('s',593,4);
   }
   if (KEY(593)) {
   if ((KEY(822)) &&
   value[318]==3) {
   say(64,2683,0);
   }}
   if (value[318]==0) {
   if (anyof(593,936,1027,781,-1)) {
   return 0;
   }
   } else    if (value[318]==1) {
   if (anyof(1026,781,1028,978,-1)) {
   return 0;
   }
   } else    if (value[318]==2) {
   if (anyof(936,1027,1026,978,-1)) {
   return 0;
   }
   } else {
   if (anyof(936,1027,1026,593,-1)) {
   return 0;
   }}
   if (KEY(822)) {
   if (anyof(1070,890,-1))   say(64,2685,0);
   if (anyof(901,319,892,-1))   say(72,2895,901);
   if (anyof(800,912,-1))   say(72,2614,0);
   if (anyof(439,1019,-1))   say(72,2614,1);
   if (anyof(593,-1))   say(76,2585,593);
   if (anyof(949,-1))   say(76,2613,318);
   if (anyof(978,-1))   say(76,2684,318);
   if (anyof(1026,-1))   say(64,2686,0);
   if (anyof(1028,-1))   say(76,2681,318);
   if (anyof(936,-1))   say(64,2679,0);
   if (anyof(1027,-1))   say(72,2678,1);
   if (anyof(781,-1))   say(64,2680,0);
   return 0;
   }
   if (anyof(762,-1))   say(72,2614,2);
   if (KEY(793)) {
   if ((KEY(102)) &&
   have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((6<=lval[0] && lval[0]<=8)) {
   say(64,2292,0);
   }}
   value[1143]=1677;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(439,1019,-1))   say(64,1417,0);
   if ((have(102,-1,-1)) &&
   anyof(319,756,892,901,746,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(319,0,746,901,892,319,-756);
   if (anyof(593,439,-1))   say(64,2630,0);
   if (KEY(761)) {
   set('L',0,'e',102,lval, lbts);
   if ((have(102,-1,-1)) &&
   (6<=lval[0] && lval[0]<=8)) {
   say(64,2290,0);
   }
   move(702,-1);
   p800();
   }}
   if (anyof(978,901,892,439,800,912,949,593,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1019,1070,890,936,1026,1028,976,1027,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p919(void)
#else
int p919()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(939,-1))   say(64,2968,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(614,0,-744);
   move(616,0,-751);
   move(617,0,-750);
   move(615,0,-748);
   move(587,0,-745);
   move(589,0,-747);
   if (anyof(746,-1))   say(72,2556,746);
   if (anyof(939,-1))   say(64,2630,0);
   }
   if (KEY(939)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p621(void)
#else
int p621()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(939,-1))   say(64,2969,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(614,0,-744);
   move(609,0,-745);
   move(610,0,-746);
   move(617,0,-750);
   move(616,0,-751);
   move(588,0,-747);
   move(590,0,-749);
   if (anyof(748,-1))   say(72,2556,748);
   }
   if (KEY(939)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p254(void)
#else
int p254()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(939,-1))   say(64,2969,0);
   if (anyof(976,-1))   say(64,3150,0);
   if (anyof(1011,17,-1))   say(76,3147,593);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(614,0,-744);
   move(615,0,-748);
   move(611,0,-747);
   move(610,0,-746);
   move(609,0,-745);
   move(587,0,-751);
   move(589,0,-749);
   if (anyof(750,-1))   say(72,2556,750);
   }
return done;
}
#ifdef __STDC__
int p788(void)
#else
int p788()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (KEY(939)) {
   say(0,3266,0);
   say(64,1259,0);
   }
   return 0;
   }
   if ((anyof(753,848,-1)) &&
   anyof(593,939,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(753,848,939,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((6<=lval[0] && lval[0]<=8)) {
   say(8,2557,753);
   say(72,2287,750);
   } else    if (value[102]==1) {
   say(8,2557,753);
   say(72,2299,751);
   } else    if (value[102]==2) {
   say(8,2557,753);
   say(72,2299,744);
   }}
   move(591,-2);
   }
   move(610,0,-746);
   move(611,0,-747);
   move(615,0,-748);
   move(617,0,-750);
   move(588,0,-745);
   move(590,0,-751);
   if (anyof(744,-1))   say(72,2556,744);
   if (irand(100)<50) {
   move(615,0,-749);
   } else {
   move(617,0,-749);
   }}
   if (KEY(939)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p799(void)
#else
int p799()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (anyof(997,-1))   say(64,3014,0);
   if (anyof(939,-1))   say(64,3008,0);
   if (anyof(754,-1))   say(64,3009,0);
   if (anyof(1069,1069,-1))   say(72,2999,0);
   if (anyof(753,-1))   say(64,3012,0);
   return 0;
   }
   if (KEY(1069)) {
   if ((KEY(758)) ||
   value[1170]==1) {
if (value[ARG1] == 1069) value[ARG1]=761;
if (value[ARG2] == 1069) value[ARG2]=761;
   }}
   if (KEY(761)) {
   if ((anyof(754,778,979,953,1069,1069,-1)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((6<=lval[0] && lval[0]<=8)) {
   say(72,2291,750);
   }}
   value[102] = irand(8-1+1)+1;
   say(8,2296,0);
   move(590,-2);
   }}
   if (KEY(765)) {
   p797();
   }
   if (anyof(848,753,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (((KEY(939)) &&
   (value[1139]==592)) ||
   anyof(754,748,1069,953,979,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((4<=lval[0] && lval[0]<=6)) {
   say(8,2557,754);
   say(72,2287,748);
   } else    if (value[102]==3) {
   say(8,2557,754);
   say(72,2299,747);
   } else    if (value[102]==2) {
   move(589,-2569);
   }}
   move(589,-2);
   }
   if (((KEY(939)) &&
   (value[1139]==589)) ||
   anyof(753,745,848,1068,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((1<=lval[0] && lval[0]<=3)) {
   say(8,2557,753);
   say(72,2287,745);
   } else    if (value[102]==4) {
   say(8,2557,753);
   say(72,2299,746);
   }}
   move(592,-2);
   }}
   if (anyof(997,939,1068,979,1069,953,1069,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1679;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p798(void)
#else
int p798()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(822)) {
   if (anyof(997,-1))   say(72,3014,0);
   if (anyof(939,-1))   say(64,3007,0);
   if (anyof(753,1068,-1))   say(64,3011,0);
   if (anyof(1069,1069,-1))   say(72,2999,0);
   if (anyof(754,979,-1))   say(64,3010,0);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(778,754,953,1069,1069,979,-1)) ||
   value[1170]==1) {
   if (have(102,-1,-1)) {
   if (((value[102]==1) ||
   value[102]==2) ||
   value[102]==8) {
   say(72,2291,744);
   }}}
   value[102] = irand(8-1+1)+1;
   say(8,2296,1);
   bitmod('s',102,14);
   move(587,-2);
   }
   if (KEY(765)) {
   p797();
   }
   if (anyof(848,753,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (((KEY(939)) &&
   (value[1139]==593)) ||
   anyof(754,750,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((6<=lval[0] && lval[0]<=8)) {
   say(8,2557,754);
   say(72,2287,750);
   } else    if (value[102]==5) {
   say(8,2557,754);
   say(72,2299,749);
   }}
   move(591,-2);
   }
   if ((KEY(760)) &&
   (value[1139]==593)) {
if (value[ARG1] == 760) value[ARG1]=753;
if (value[ARG2] == 760) value[ARG2]=753;
   }
   if (((KEY(939)) &&
   (value[1139]==591)) ||
   anyof(753,747,1068,848,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((3<=lval[0] && lval[0]<=5)) {
   say(8,2557,753);
   say(72,2287,747);
   } else    if (value[102]==6) {
   say(8,2557,753);
   say(72,2299,748);
   }}
   if (bitest(593,16)) {
   bitmod('c',593,16);
   bitmod('c',593,4);
   }
   move(593,-2);
   }
   if (anyof(920,-1))   say(64,2630,0);
   if (anyof(979,1069,953,1069,-1))   say(64,3015,0);
   }
   if (anyof(997,939,1068,979,920,1069,953,1069,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1679;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p796(void)
#else
int p796()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(173)) {
if (value[ARG1] == 173) value[ARG1]=101;
if (value[ARG2] == 173) value[ARG2]=101;
   apport(173,value[1138]);
   }
   if (keyword(848,101,-1)) {
   say(64,2456,0);
   }
   if (KEY(822)) {
   if (anyof(593,451,-1))   say(64,3004,0);
   if (anyof(939,-1))   say(64,3006,0);
   if (anyof(754,-1))   say(64,3013,0);
   if (anyof(1069,1069,-1))   say(72,2999,1);
   return 0;
   }
   if (KEY(765)) {
   if (value[1170]==1) {
   default_to(0,703,-1);
   }
   if ((KEY(143)) &&
   have(143,0,1)) {
   set('E',143,'c',2,NULL,NULL);
   set('E',101,'c',1,NULL,NULL);
   say(64,2620,0);
   }}
   if (KEY(761)) {
   if ((anyof(754,778,-1)) ||
   value[1170]==1) {
   say(8,2296,2);
   move(702,-1);
   p800();
   }}
   if (keyword(764,102,-1)) {
   if (value[102]==0) {
   set('E',102,'c',2,NULL,NULL);
   }}
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,939,760,-1)) {
   if (have(102,-1,-1)) {
   set('L',0,'e',102,lval, lbts);
   if ((2<=lval[0] && lval[0]<=4)) {
   say(64,2300,0);
   }
   if ((value[102]==1) ||
   value[102]==8) {
   say(8,2557,754);
   say(72,2287,744);
   } else    if (value[102]==7) {
   say(8,2557,754);
   say(72,2299,751);
   }
   bitmod('c',593,8);
   bitmod('s',592,8);
   }
   move(592,-2);
   }
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   set('V',1149,'v',1136,NULL,NULL);
   if (value[1170]>1) {
   set('V',1149,'v',1137,NULL,NULL);
   }
   set('V',1216,'v',1149,NULL,NULL);
   p151(*bitword(1216),value[1216]);
   say(12,2288,1149);
   longjmp(loop_back,1);
   }
   if (anyof(920,-1))   say(64,2630,0);
   if (anyof(1069,1069,953,-1))   say(64,3015,0);
   if (anyof(593,451,1068,-1))   say(64,1418,0);
   }
   if (anyof(997,1069,1069,1068,593,451,939,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1679;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p44(void)
#else
int p44()
#endif
{
int done=0;
   bitmod('s',593,4);
   if (KEY(822)) {
   if (anyof(620,1126,953,953,998,-1))   say(64,2970,0);
   if (anyof(912,-1))   say(64,3191,0);
   if (anyof(319,901,892,-1))   say(64,3192,0);
   if (anyof(1019,1126,-1))   say(64,2701,0);
   if (anyof(1070,1070,890,-1))   say(64,1963,0);
   if (anyof(1069,-1))   say(72,2999,2);
   return 0;
   }
   if (anyof(439,949,-1))   say(76,1312,1137);
   if ((KEY(848)) &&
   anyof(620,998,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((have(102,-1,-1)) &&
   KEY(754)) {
   value[1216]=750;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(621,0,750,754,-620);
   move(620,0,-751);
   move(622,0,-749);
   }
   if (anyof(998,620,1019,1126,319,901,892,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1126,953,953,1070,1070,890,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p747(void)
#else
int p747()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(620,998,-1))   say(64,2970,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(620,998,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(623,0,-744);
   move(594,0,-751);
   move(595,0,-750);
   move(596,0,-749);
   move(621,0,-748);
   if (anyof(753,747,-1)) {
   p151(-1,747);
   }
   move(627,0,753,747,-620);
   }
   if (anyof(998,620,1069,953,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p748(void)
#else
int p748()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(620,998,-1))   say(64,2970,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(620,998,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(620,0,-744);
   move(622,0,-748);
   move(597,0,-749);
   move(596,0,-750);
   move(595,0,-751);
   if (anyof(753,746,-1)) {
   p151(-1,746);
   }
   move(627,0,746,753,-620);
   }
   if (anyof(998,620,1069,953,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p749(void)
#else
int p749()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(620,998,-1))   say(64,2970,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(620,998,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(621,0,-744);
   move(596,0,-751);
   move(597,0,-750);
   move(598,0,-749);
   move(624,0,-748);
   if (anyof(753,745,-1)) {
   p151(-1,745);
   }
   move(627,0,753,745,-620);
   }
   if (anyof(998,620,1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p134(void)
#else
int p134()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(594,0,-750);
   move(595,0,-749);
   move(620,0,-748);
   }
   if (anyof(1069,953,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p135(void)
#else
int p135()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(622,0,-744);
   move(597,0,-751);
   move(598,0,-750);
   move(599,0,-749);
   move(625,0,-748);
   }
   if (anyof(1069,953,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p136(void)
#else
int p136()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(918,918,-1))   say(72,3419,2);
   if (anyof(635,-1))   say(64,3049,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(624,0,-744);
   move(598,0,-751);
   move(599,0,-750);
   move(619,0,-749);
   move(618,0,754,-748);
   }
   if (anyof(1069,953,918,918,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p720(void)
#else
int p720()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(888,892,901,-1))   say(64,3051,0);
   if (anyof(635,-1))   say(64,3049,0);
   if (anyof(918,-1))   say(72,3419,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(625,0,-744);
   move(599,0,-751);
   move(619,0,-750);
   move(626,0,-748);
   if (KEY(753)) {
   if (irand(100)<50) {
   move(626,-2);
   } else {
   move(625,-2);
   }}
   if (anyof(746,756,892,901,888,-1)) {
   p151(-1,746);
   if (value[102]>5) {
   say(72,2309,1);
   } else {
   say(72,2309,0);
   }}
   if (anyof(918,-1))   say(64,1418,0);
   }
   if (anyof(1069,953,892,888,918,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p137(void)
#else
int p137()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(888,892,897,901,-1))   say(72,2895,897);
   if (anyof(918,918,-1))   say(72,3419,3);
   if (anyof(635,-1))   say(64,3049,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(618,0,744,-754);
   move(619,0,-751);
   if (anyof(746,756,892,901,888,-1)) {
   p151(-1,746);
   }
   move(628,2353,746,756,892,901,-888);
   if (anyof(748,749,750,-1))   say(64,2404,0);
   }
   if (anyof(1069,953,918,892,901,888,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p188(void)
#else
int p188()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(600,0,-749);
   move(595,0,-748);
   move(620,0,-747);
   move(623,0,-746);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p199(void)
#else
int p199()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(594,0,-744);
   move(600,0,-750);
   move(601,0,-749);
   move(596,0,-748);
   move(621,0,-747);
   move(620,0,-746);
   move(623,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p203(void)
#else
int p203()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(595,0,-744);
   move(600,0,-751);
   move(601,0,-750);
   move(602,0,-749);
   move(597,0,-748);
   move(622,0,-747);
   move(621,0,-746);
   move(620,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p204(void)
#else
int p204()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(596,0,-744);
   move(601,0,-751);
   move(602,0,-750);
   move(603,0,-749);
   move(598,0,-748);
   move(624,0,-747);
   move(622,0,-746);
   move(621,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p205(void)
#else
int p205()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(597,0,-744);
   move(602,0,-751);
   move(603,0,-750);
   move(599,0,-748);
   move(625,0,-747);
   move(624,0,-746);
   move(622,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p206(void)
#else
int p206()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(598,0,-744);
   move(603,0,-751);
   move(619,0,754,-748);
   move(618,0,-747);
   move(625,0,-746);
   move(624,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p721(void)
#else
int p721()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(635,-1))   say(64,3049,0);
   if (anyof(1128,-1))   say(64,3050,0);
   if (anyof(918,-1))   say(72,3419,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(599,0,744,-753);
   move(626,0,-747);
   move(618,0,-746);
   move(625,0,-745);
   if (anyof(918,-1))   say(64,1418,0);
   }
   if (anyof(918,1128,1127,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p207(void)
#else
int p207()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(604,0,-751);
   move(606,0,-750);
   move(607,0,-749);
   move(601,0,-748);
   move(596,0,-747);
   move(595,0,-746);
   move(594,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p208(void)
#else
int p208()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(600,0,-744);
   move(606,0,-751);
   move(607,0,-750);
   move(608,0,-749);
   move(602,0,-748);
   move(597,0,-747);
   move(596,0,-746);
   move(595,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p209(void)
#else
int p209()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(601,0,-744);
   move(607,0,-751);
   move(608,0,-750);
   move(603,0,-748);
   move(598,0,-747);
   move(597,0,-746);
   move(596,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p189(void)
#else
int p189()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(602,0,-744);
   move(608,0,-751);
   move(599,0,-747);
   move(598,0,-746);
   move(597,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p190(void)
#else
int p190()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1000,-1))   say(64,3016,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(605,0,751,-1000);
   move(609,0,-749);
   move(606,0,-748);
   move(600,0,-747);
   }
   if (anyof(1069,953,1132,976,920,1000,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p726(void)
#else
int p726()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1000,-1))   say(64,3017,0);
   if (anyof(1128,-1))   say(64,3018,0);
   if (anyof(949,1069,1069,-1))   say(64,3019,0);
   if (anyof(997,-1))   say(64,3014,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(604,0,747,1000,-1069);
   }
   if (anyof(997,920,1132,976,953,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1069,1069,1000,1128,1127,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p191(void)
#else
int p191()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(604,0,-744);
   move(609,0,-750);
   move(610,0,-749);
   move(607,0,-748);
   move(601,0,-747);
   move(600,0,-746);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p192(void)
#else
int p192()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(606,0,-744);
   move(609,0,-751);
   move(610,0,-750);
   move(611,0,-749);
   move(608,0,-748);
   move(602,0,-747);
   move(601,0,-746);
   move(600,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p193(void)
#else
int p193()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(607,0,-744);
   move(610,0,-751);
   move(611,0,-750);
   move(612,0,-749);
   move(603,0,-747);
   move(602,0,-746);
   move(601,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p194(void)
#else
int p194()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(613,0,-751);
   move(614,0,-750);
   move(588,0,-749);
   move(610,0,-748);
   move(607,0,-747);
   move(606,0,-746);
   move(604,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p195(void)
#else
int p195()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(609,0,-744);
   move(614,0,-751);
   move(588,0,-750);
   move(615,0,-749);
   move(611,0,-748);
   move(608,0,-747);
   move(607,0,-746);
   move(606,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p196(void)
#else
int p196()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(610,0,-744);
   move(588,0,-751);
   move(615,0,-750);
   move(612,0,-748);
   move(608,0,-746);
   move(607,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p197(void)
#else
int p197()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(611,0,-744);
   move(615,0,-751);
   move(608,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p198(void)
#else
int p198()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(616,0,-749);
   move(614,0,-748);
   move(609,0,-747);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p200(void)
#else
int p200()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(613,0,-744);
   move(616,0,-750);
   move(617,0,-749);
   move(587,0,-748);
   move(610,0,-747);
   move(609,0,-746);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p201(void)
#else
int p201()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(589,0,-744);
   move(617,0,-751);
   move(612,0,-747);
   move(611,0,-746);
   move(610,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p202(void)
#else
int p202()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(617,0,-748);
   move(590,0,-747);
   move(614,0,-746);
   move(613,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p210(void)
#else
int p210()
#endif
{
int done=0;
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(1069,-1))   say(64,1290,0);
   move(616,0,-744);
   move(615,0,-747);
   move(590,0,-746);
   move(614,0,-745);
   }
   if (anyof(1069,953,1132,976,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p109(void)
#else
int p109()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(308,896,897,-1))   say(76,2895,308);
   if (anyof(439,949,-1))   say(64,3024,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(626,2354,750,439,-949);
   move(629,0,-746);
   move(629,0,308,896,-897);
   }
   if (anyof(308,896,897,439,949,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p110(void)
#else
int p110()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(779,-1))   say(64,3023,0);
   if (anyof(308,896,897,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(628,0,-750);
   move(630,0,-746);
   if ((KEY(758)) &&
   anyof(308,896,897,-1)) {
   p329(-1,628,-1,750,-1,630,-1,746);
   }}
   if (anyof(308,896,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p111(void)
#else
int p111()
#endif
{
int done=0;
   if (have(136,-1,-1)) {
   if ((value[136]==3) ||
   value[136]>=7) {
   bitmod('s',evar(1210),10);
   }}
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(308,896,897,1014,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(629,0,-750);
   move(632,0,-745);
   if (anyof(308,896,897,-1)) {
   p329(-1,629,-1,750,-1,632,-1,745);
   }
   if (anyof(1014,-1))   say(64,1418,0);
   }
   if (anyof(308,896,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p112(void)
#else
int p112()
#endif
{
int done=0;
   if (KEY(11)) {
   apport(11,value[1138]);
   }
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(901,-1))   say(72,2585,901);
   if (anyof(1060,-1))   say(64,3048,0);
   if (KEY(888)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(761)) {
   p722(0,1);
   }
   if ((KEY(760)) &&
   (value[1139]==631)) {
if (value[ARG1] == 760) {value[ARG1]=744; (void)fake(1,744);}
if (value[ARG2] == 760) {value[ARG2]=744; (void)fake(2,744);}
   }
   if (anyof(744,762,793,-1)) {
   p75();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(630,0,749,308,896,-897);
   move(635,0,746,635,898,912,-849);
   if (KEY(11)) {
   p75();
   }
   if (anyof(888,-1))   say(64,1418,0);
   }
   if (anyof(1060,901,896,897,308,888,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p113(void)
#else
int p113()
#endif
{
int done=0;
   if (KEY(11)) {
   apport(11,value[1138]);
   }
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(896,308,897,-1))   say(72,2895,896);
   if (anyof(1060,-1))   say(64,3048,0);
   return 0;
   }
   if (KEY(761)) {
   p722(0,1);
   }
   if ((KEY(760)) &&
   (value[1139]==632)) {
if (value[ARG1] == 760) {value[ARG1]=748; (void)fake(1,748);}
if (value[ARG2] == 760) {value[ARG2]=748; (void)fake(2,748);}
   }
   if (anyof(748,762,793,-1)) {
   p75();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(11)) {
   p75();
   }
   move(633,0,753,744,308,897,-896);
   if (anyof(746,635,898,912,849,-1)) {
   bitmod('s',636,16);
   move(636,-2);
   }}
   if (anyof(1060,308,896,897,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p114(void)
#else
int p114()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(308,998,896,897,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(631,0,748,-754);
   move(634,0,744,-753);
   if (anyof(998,308,896,897,-1)) {
   p329(-1,634,-1,744,-1,631,-1,748);
   }}
   if (anyof(998,896,308,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p115(void)
#else
int p115()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(896,308,897,757,-1))   say(76,2895,308);
   if (KEY(156)) {
   if (value[144]==0) {
   say(64,144,0);
   }
   say(64,3328,0);
   }
   if (KEY(888)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(633,0,757,308,896,897,-748);
   if (anyof(888,-1))   say(64,1418,0);
   }
   if (anyof(757,308,896,897,156,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p116(void)
#else
int p116()
#endif
{
int done=0;
   p184(-1,74);
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   if (anyof(74,-1))   say(72,2616,798);
   if ((KEY(159)) &&
   value[2616]==0) {
   set('T',2616,'c',1,NULL,NULL);
   }
   if (anyof(575,111,-1)) {
   say(0,3275,0);
   say(64,1259,0);
   }
   return 0;
   }
   if (KEY(811)) {
   if ((value[1170]==1) ||
   KEY(159)) {
   say(64,2539,0);
   }}
   if (KEY(159)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(761)) {
   p722(0,0);
   }
   if (KEY(793)) {
   p75();
   }
   if (anyof(798,774,-1)) {
   if ((KEY(74)) ||
   value[1170]==1) {
   say(76,2616,1136);
   }}
   if (KEY(74)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((anyof(635,898,912,-1)) ||
   anyof(850,750,760,-1)) {
   if (!(bitest(638,16))) {
   say(0,2538,0);
   bitmod('s',638,16);
   }
   move(637,-2);
   }}
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
