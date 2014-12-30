/* adv08.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p866(void)
#else
int p866()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(319,-1))   say(64,2933,0);
   if (anyof(321,-1))   say(72,2930,1);
   if (anyof(1019,-1))   say(64,2935,0);
   return 0;
   }
   if ((KEY(321)) &&
   anyof(754,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(321,0,754,848,-321);
   move(320,0,748,390,-319);
   move(318,0,-751);
   if ((keyword(758,779,-1)) &&
   value[319]>1) {
   move(318,-2);
   }
   if (KEY(319)) {
   p329(-1,318,-1,751,-1,320,-1,748);
   }}
   if (anyof(319,1019,321,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1673;*bitword(1143)=-1;
   value[1142]=321;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p867(void)
#else
int p867()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(390,-1))   say(64,2934,0);
   if (anyof(319,-1))   say(64,2933,0);
   if (anyof(1019,-1))   say(64,2935,0);
   return 0;
   }
   if (keyword(754,390,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(314,1582,748,754,-390);
   move(319,0,744,321,-319);
   }
   if (anyof(390,319,1019,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1674;*bitword(1143)=-1;
   value[1142]=314;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p619(void)
#else
int p619()
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
   if (anyof(897,896,308,-1)) {
   if ((value[1139]==325)) {
   value[1136]=748;*bitword(1136)=-1;
   } else {
   value[1136]=744;*bitword(1136)=-1;
   }}
   move(313,0,-748);
   if (KEY(744)) {
   if ((value[26]==0) ||
   value[26]==2) {
   value[26] += 1;
   }
   if (value[26]==1) {
   say(0,1613,0);
   }
   move(325,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p46(void)
#else
int p46()
#endif
{
int done=0;
   if ((KEY(760)) &&
   (value[1139]==324)) {
if (value[ARG1] == 760) {value[ARG1]=748; (void)fake(1,748);}
if (value[ARG2] == 760) {value[ARG2]=748; (void)fake(2,748);}
   }
   if (KEY(822)) {
   if (anyof(494,203,-1))   say(64,2919,0);
   if ((KEY(1039)) &&
   value[26]==2) {
   say(72,3157,1039);
   }
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(897,896,308,-1)) {
   if ((value[1139]==326)) {
   value[1136]=744;*bitword(1136)=-1;
   } else {
   value[1136]=748;*bitword(1136)=-1;
   }}
   move(326,0,-744);
   if (KEY(748)) {
   if ((value[26]==1) ||
   value[26]==3) {
   value[26] -= 1;
   }
   if (value[26]==0) {
   p781();
   if (have(111,0,2)) {
   say(0,1614,0);
   set('E',26,'c',2,NULL,NULL);
   bitmod('c',325,8);
   } else {
   say(0,1615,0);
   p153();
   }}
   move(324,-2);
   }}
   if (anyof(494,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p786(void)
#else
int p786()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((value[26]==0) ||
   value[26]==2) {
   value[26] += 1;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(377,0,744,-377);
   move(325,0,-748);
   move(327,0,754,-7);
   if (anyof(897,896,308,-1)) {
   p329(-1,325,-1,748,-1,377,-1,744);
   }}
   if (anyof(7,896,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1675;*bitword(1143)=-1;
   value[1142]=327;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p663(void)
#else
int p663()
#endif
{
int done=0;
if (value[ARG1] == 8) {value[ARG1]=36; (void)fake(1,36);}
if (value[ARG2] == 8) {value[ARG2]=36; (void)fake(2,36);}
   if (keyword(756,36,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(756)) {
   if (value[36]==1) {
   set('V',1151,'v',1138,NULL,NULL);
   move(583,-2);
   }
   say(64,1631,0);
   }
   if (anyof(748,757,309,-1)) {
   if (value[36]==1) {
   say(64,1606,0);
   }
   move(326,-2);
   }}
return done;
}
#ifdef __STDC__
int p637(void)
#else
int p637()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(754,733,-1))   say(72,2838,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(326,0,-753);
   move(328,0,754,733,-7);
   }
   if (anyof(7,733,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1675;*bitword(1143)=-1;
   value[1142]=328;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p803(void)
#else
int p803()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (KEY(470)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(327,0,-753);
   move(329,0,754,-7);
   move(330,0,744,757,896,308,-897);
   if (anyof(470,-1))   say(64,1418,0);
   }
   if (anyof(7,896,308,897,470,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1675;*bitword(1143)=-1;
   value[1142]=329;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p807(void)
#else
int p807()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(328,0,753,-7);
   }
   if (KEY(7)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p299(void)
#else
int p299()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(935,223,-1))   say(64,2899,0);
   if (anyof(1126,222,-1))   say(64,2920,0);
   return 0;
   }
   if (anyof(710,287,-1)) {
   if ((KEY(730)) ||
   value[1170]==1) {
   if (bitest(evar(1171),2)) {
   say(64,1322,0);
   }
   set('T',2502,'c',0,NULL,NULL);
   move(451,-value[1157]);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(328,0,-748);
   move(332,0,-750);
   move(331,0,746,-935);
   if (anyof(897,896,308,-1)) {
   p329(-1,328,-1,748,-1,332,-1,750);
   }}
   if (anyof(896,897,308,222,1126,935,223,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p103(void)
#else
int p103()
#endif
{
int done=0;
   p184(-1,73);
   if (anyof(73,1077,30,134,129,74,-1)) {
   if (anyof(798,822,-1)) {
   say(72,2275,0);
   }
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,73);
   }
   say(76,1877,73);
   }
   if (KEY(822)) {
   if (anyof(1015,30,134,129,-1))   say(64,3127,0);
   if (anyof(1051,1051,-1))   say(64,3128,0);
   if (anyof(757,-1))   say(72,2895,757);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(330,0,746,-757);
   if (anyof(748,1051,1051,756,-1)) {
   if (value[1213]>0) {
   say(0,3206,0);
   }
   move(335,-2);
   }}
   if (anyof(73,1077,30,134,129,74,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p296(void)
#else
int p296()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(223)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(887,-1))   say(64,2897,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(330,0,750,-754);
   if (anyof(744,745,746,747,748,749,751,-1))   say(64,2898,0);
   }
   if (anyof(887,223,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p36(void)
#else
int p36()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,268,1041,-1))   say(64,3159,0);
   if (anyof(1008,935,-1))   say(64,3158,0);
   if (anyof(959,1039,-1))   say(64,3156,0);
   if (anyof(965,904,-1))   say(72,2895,965);
   if (anyof(376,753,-1))   say(72,2011,7);
   if (anyof(16,779,-1))   say(64,3155,0);
   if (anyof(300,900,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(353,0,-746);
   move(334,0,750,757,-965);
   if (anyof(300,900,-1))   say(64,1418,0);
   }
   if (anyof(965,376,300,900,959,1039,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(268,1008,1041,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p37(void)
#else
int p37()
#endif
{
int done=0;
   if ((KEY(110)) &&
   !isnear(110,-1,-1)) {
if (value[ARG1] == 110) value[ARG1]=1130;
if (value[ARG2] == 110) value[ARG2]=1130;
   }
   if ((KEY(49)) &&
   !isnear(49,-1,-1)) {
if (value[ARG1] == 49) value[ARG1]=1130;
if (value[ARG2] == 49) value[ARG2]=1130;
   }
   if (KEY(822)) {
   if (anyof(1038,-1))   say(64,3161,0);
   if (anyof(1091,49,1130,-1))   say(64,3163,0);
   if ((KEY(1064)) &&
   ishere(38,-1,-1)) {
   say(64,3162,0);
   }
   if (anyof(1133,268,1041,-1))   say(64,3159,0);
   if (anyof(1008,935,-1))   say(64,3158,0);
   if (anyof(959,1039,-1))   say(64,3156,0);
   if (anyof(376,753,-1))   say(72,2011,7);
   if (anyof(16,779,-1))   say(64,3155,0);
   if (anyof(300,900,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (anyof(38,1064,-1)) {
   say(64,1722,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(352,0,-750);
   if (anyof(1038,-1))   say(64,3160,0);
   if (anyof(300,900,-1))   say(64,1418,0);
   }
   if (anyof(376,300,900,959,1039,268,1008,1041,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1038,1091,1130,49,1064,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p540(void)
#else
int p540()
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
   move(313,0,-751);
   move(355,0,-744);
   if ((anyof(897,896,308,-1)) ||
   keyword(758,777,-1)) {
   p329(-1,313,-1,751,-1,355,-1,744);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p393(void)
#else
int p393()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,8);
   if (anyof(1080,935,-1))   say(64,2989,0);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(764,1080,-1)) {
   say(64,3420,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(356,0,745,-356);
   move(357,0,751,-357);
   move(354,0,-748);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (KEY(300)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p28(void)
#else
int p28()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(356,173,17,17,935,-1))   say(64,3169,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(355,0,748,-757);
   }
   if (anyof(356,173,17,17,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p864(void)
#else
int p864()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(16,-1))   say(64,2946,0);
   if (anyof(935,1020,-1))   say(64,2947,0);
   return 0;
   }
   if (KEY(791)) {
   if (anyof(935,1020,-1))   say(64,2948,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(757,746,896,760,-1)) {
   if ((location[130]==701)) {
   apport(130,value[1138]);
   set('E',130,'c',0,NULL,NULL);
   }
   move(355,-2);
   }}
   if (anyof(896,897,308,16,935,1020,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p678(void)
#else
int p678()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(31,-1))   say(64,2038,0);
   if (anyof(910,898,-1))   say(64,2039,0);
   if (anyof(16,1019,635,-1))   say(64,2040,0);
   if (KEY(451)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(31)) {
   if (anyof(773,-1))   say(64,1439,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(730)) &&
   anyof(710,287,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(330,value[1157],710,-287);
   if ((KEY(750)) &&
   bitest(650,4)) {
   if (have(102,-1,-1)) {
   say(64,2301,0);
   }
   move(650,-2438);
   }
   if ((anyof(754,848,744,748,746,750,745,-1)) ||
   anyof(751,747,749,761,-1)) {
   say(0,1607,0);
   move(702,-1);
   p153();
   }
   if (anyof(451,-1))   say(64,1418,0);
   }
   if (anyof(1019,451,16,635,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1672;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p628(void)
#else
int p628()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(302,0,744,745,746,747,748,749,750,751,753,-754);
   }
   if (((value[1170]==1) ||
   anyof(758,764,-1)) &&
   KEY(757)) {
   say(64,1986,0);
   }
   if (anyof(935,-1))   say(64,2088,0);
   if (value[1190]==2) {
   if (anyof(832,-1))   say(64,1271,0);
   if (anyof(827,829,830,726,836,821,-1))   say(64,2310,0);
   if (KEY(728)) {
   set('V',1193,'c',0,NULL,NULL);
   say(0,1273,0);
   set('V',1245,'c',1,NULL,NULL);
   special(15,&value[1245]);
   set('T',1725,'c',1,NULL,NULL);
   move(195,-1);
   bitmod('c',evar(1138),4);
   bitmod('s',evar(1170),0);
   bitmod('s',evar(1170),3);
   p187();
   bitmod('c',evar(1170),3);
   bitmod('s',evar(1172),0);
   say(0,1265,0);
   set('V',1172,'c',21,NULL,NULL);
   say(64,1266,0);
   }
   if (anyof(871,-1))   say(64,2548,0);
   if (anyof(727,-1))   say(64,1272,0);
   return 0;
   }
   if (anyof(728,-1))   say(64,1725,0);
   if ((anyof(705,706,707,708,709,710,711,712,-1)) ||
   anyof(713,714,715,716,717,718,719,720,721,-1)) {
   if (KEY(730)) {
   set('V',1136,'v',1137,NULL,NULL);
   set('V',1170,'c',1,NULL,NULL);
   }
   set('L',1,'v',1136,lval, lbts);
   lval[0]=704;lbts[0*VARSIZE]=-1;
   lval[0] += 1;
   lval[1] -= lval[0];
   if ((lval[1]==value[1199]) ||
   value[1199]==-1) {
   lval[0]=722;lbts[0*VARSIZE]=-1;
   lval[0] -= 1;
   if (value[1136]==lval[0]) {
   p528();
   } else {
   say(0,1260,0);
   value[1199] += 1;
   }
   } else {
   lval[1] -= 1;
   if (lval[1]==value[1199]) {
   say(0,2042,0);
   } else {
   if (value[1199]>2) {
   if ((irand(100)<20) ||
   !(bitest(evar(1209),4))) {
   say(0,1916,0);
   bitmod('s',evar(1209),4);
   } else {
   say(0,1293,0);
   }
   } else {
   say(0,1322,0);
   }}
   set('V',1199,'c',0,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   if (KEY(936)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p101(void)
#else
int p101()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p93(void)
#else
int p93()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p94(void)
#else
int p94()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p95(void)
#else
int p95()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p96(void)
#else
int p96()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p97(void)
#else
int p97()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p98(void)
#else
int p98()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p99(void)
#else
int p99()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p100(void)
#else
int p100()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p87(void)
#else
int p87()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p88(void)
#else
int p88()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p89(void)
#else
int p89()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p90(void)
#else
int p90()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p104(void)
#else
int p104()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(965,965,1048,894,-1))   say(64,3129,0);
   if (anyof(897,896,308,308,-1))   say(72,2895,897);
   if (anyof(894,-1))   say(72,2895,894);
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(756)) &&
   anyof(965,965,894,1048,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(351,0,750,-894);
   move(352,0,756,746,965,965,-1048);
   move(347,0,904,897,896,308,-744);
   }
   if (anyof(904,965,308,896,897,1048,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(965,894,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p612(void)
#else
int p612()
#endif
{
int done=0;
   if ((KEY(1024)) &&
   value[50]==0) {
if (value[ARG1] == 1024) value[ARG1]=50;
if (value[ARG2] == 1024) value[ARG2]=50;
   }
   p184(-1,134);
   if (anyof(1025,74,134,129,1015,30,-1)) {
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
   if (KEY(912)) {
   if (value[50]==0) {
   say(64,50,0);
   } else {
   say(72,2961,912);
   }}
   if (KEY(494)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(935)) &&
   value[95]==0) {
   say(64,95,0);
   }
   if (anyof(757,965,-1))   say(72,2895,965);
   if (anyof(494,-1))   say(64,1418,0);
   return 0;
   }
   if (anyof(912,-1))   say(72,2029,912);
   if ((KEY(758)) ||
   value[1170]==1) {
   move(334,0,746,757,965,-965);
   }
   if ((anyof(1025,74,134,129,1015,30,-1)) ||
   anyof(935,912,757,494,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p91(void)
#else
int p91()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p92(void)
#else
int p92()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p102(void)
#else
int p102()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(904)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,-1)) {
   p105();
   }
   if (anyof(904,-1))   say(64,1418,0);
   if (anyof(897,896,308,-1))   say(72,2896,897);
   }
   if (anyof(904,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p711(void)
#else
int p711()
#endif
{
int done=0;
   if (KEY(790)) {
   if ((anyof(120,910,-1)) ||
   value[1170]==1) {
   return 0;
   }}
   if (KEY(822)) {
   if (anyof(910,-1))   say(64,2276,0);
   if (anyof(757,896,897,-1))   say(72,2895,896);
   if (anyof(904,-1))   say(72,1312,904);
   return 0;
   }
   if ((KEY(727)) &&
   value[1170]==1) {
   say(72,2041,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(335,0,757,896,897,-904);
   if (((value[1170]==2) &&
   value[1137]==value[1214]) ||
   value[1136]==value[1214]) {
   move(335,-2);
   }}
   if (anyof(910,757,896,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p395(void)
#else
int p395()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,171,-1)) {
   say(0,3234,0);
   say(64,1259,0);
   }
   if (anyof(1035,1126,1080,935,-1))   say(64,3171,0);
   if (anyof(1020,-1))   say(64,3170,0);
   if (KEY(980)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(764,1080,-1)) {
   say(64,3171,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   bitmod('s',81,4);
   move(220,0,-753);
   move(463,0,-754);
   if (KEY(7)) {
   p329(-1,220,-1,753,-1,463,-1,754);
   }
   if (anyof(980,-1))   say(64,1418,0);
   }
   if (anyof(7,171,1020,935,1080,1126,1035,980,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=463;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p121(void)
#else
int p121()
#endif
{
int done=0;
   if (KEY(848)) {
   if ((anyof(7,171,753,-1)) ||
   value[1170]==1) {
   move(464,-2);
   }
   say(64,2153,0);
   }
   if ((KEY(81)) &&
   (location[81]==462)) {
   if (anyof(822,-1))   say(64,3190,0);
   say(64,1691,0);
   }
   if (KEY(75)) {
   if (!(anyof(121,822,-1))) {
   say(64,1690,0);
   }}
   if (KEY(822)) {
   if (anyof(7,171,-1)) {
   say(0,3234,0);
   say(64,1259,0);
   }
   if (anyof(462,-1))   say(64,3073,0);
   if (anyof(80,-1))   say(76,2944,80);
   if (anyof(969,-1))   say(64,3078,0);
   if (anyof(268,-1))   say(76,2943,268);
   return 0;
   }
   if (anyof(80,-1))   say(64,2151,0);
   if ((KEY(793)) &&
   !isnear(193,-1,-1)) {
   p843();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(464,0,753,7,-171);
   if (anyof(462,756,80,-1))   say(64,2905,0);
   }
   if (anyof(7,171,75,462,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p123(void)
#else
int p123()
#endif
{
int done=0;
if (value[ARG1] == 7) value[ARG1]=171;
if (value[ARG2] == 7) value[ARG2]=171;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,1);
   if (anyof(263,-1))   say(72,2911,0);
   if (anyof(171,1017,959,268,892,-1))   say(72,2925,0);
   return 0;
   }
   if (KEY(78)) {
   if (anyof(764,807,-1))   say(72,2389,0);
   if (anyof(781,808,-1))   say(72,2389,1);
   }
   set('E',263,'c',0,NULL,NULL);
   if ((KEY(78)) &&
   anyof(753,758,-1)) {
   value[1136]=848;*bitword(1136)=-1;
   }
   if ((KEY(848)) &&
   anyof(753,78,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(263,0,-848);
   move(294,0,-744);
   move(264,0,-750);
   move(491,0,-753);
   move(490,0,754,-892);
   if (KEY(171)) {
   p329(-1,491,-1,753,-1,490,-1,754);
   }}
   if (anyof(892,171,7,268,1017,959,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(376,263,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p886(void)
#else
int p886()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(376,753,376,-1))   say(72,2011,2);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(262,0,746,757,-262);
   }
   if (anyof(376,376,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p692(void)
#else
int p692()
#endif
{
int done=0;
   if (KEY(913)) {
   if (anyof(822,-1))   say(64,3107,0);
   if (anyof(808,807,797,-1))   say(64,3108,0);
   say(72,2029,913);
   }
   if (KEY(822)) {
   if ((KEY(53)) &&
   value[194]==2) {
   say(64,3432,0);
   }
   if (anyof(779,-1))   say(64,3109,0);
   if (anyof(901,-1))   say(72,2894,901);
   if (anyof(757,495,-1))   say(76,3106,495);
   if (anyof(452,300,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (value[1190]==4) {
   p148();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(452,300,-1))   say(64,1418,0);
   move(453,0,744,-453);
   move(454,0,748,-673);
   move(495,0,746,-495);
   }
   if (KEY(901)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p51(void)
#else
int p51()
#endif
{
int done=0;
   set('E',263,'c',1,NULL,NULL);
   if (KEY(78)) {
   if (KEY(822)) {
   say(40,78,1);
   longjmp(loop_back,1);
   }
   if (anyof(764,765,-1))   say(72,2389,2);
   if (anyof(807,-1))   say(72,2389,3);
   if (anyof(781,-1))   say(72,2389,1);
   }
   if (KEY(822)) {
   if (KEY(1102)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(376,-1))   say(72,2011,1);
   if (anyof(263,-1))   say(72,2911,1);
   if (anyof(992,-1))   say(64,3438,0);
   return 0;
   }
   if (anyof(1102,-1))   say(64,1418,0);
   if ((KEY(758)) ||
   value[1170]==1) {
   move(262,0,757,848,-754);
   }
   if (anyof(263,376,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(263,992,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1140]=262;*bitword(1140)=-1;
   value[1142]=262;*bitword(1142)=-1;
   set('V',1144,'c',1,NULL,NULL);
   value[1141]=1559;*bitword(1141)=-1;
   value[1143]=1559;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p241(void)
#else
int p241()
#endif
{
int done=0;
   if (anyof(790,787,-1)) {
   return 0;
   }
   if (anyof(120,-1))   say(64,3164,0);
   if (KEY(1127)) {
if (value[ARG1] == 1127) {value[ARG1]=77; (void)fake(1,77);}
if (value[ARG2] == 1127) {value[ARG2]=77; (void)fake(2,77);}
   }
   if (keyword(822,77,-1)) {
   if (!(bitest(evar(1170),8))) {
   say(64,2380,0);
   }}
   if (KEY(822)) {
   if (anyof(1042,-1))   say(72,2527,1042);
   if (anyof(376,753,-1))   say(72,2011,14);
   if (anyof(1126,-1))   say(64,2691,0);
   if (anyof(896,897,308,-1))   say(64,3154,0);
   if (anyof(1133,77,754,-1))   say(76,2107,453);
   if ((keyword(892,901,-1)) &&
   value[453]==1) {
   say(72,3106,892);
   }
   if (KEY(453)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(77)) {
   if (anyof(797,807,808,-1)) {
   say(12,1699,453);
   if (!(value[453]==2)) {
   set('E',453,'c',1,NULL,NULL);
   set('V',1237,'c',-1,NULL,NULL);
   }
   longjmp(loop_back,1);
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (((anyof(756,848,-1)) &&
   anyof(892,754,-1)) ||
   keyword(848,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(452,0,757,748,-896);
   if ((anyof(754,756,892,901,-1)) &&
   value[453]==1) {
   move(488,-2);
   }
   if (anyof(453,-1))   say(64,1418,0);
   }
   if (anyof(453,896,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (value[453]==1) {
   if (anyof(892,901,-1)) {
   bitmod('s',evar(1172),1);
   }}
   if (anyof(1042,896,453,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p909(void)
#else
int p909()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(495,0,-495);
   move(455,0,-746);
   move(458,0,-750);
   move(459,0,-753);
   move(456,0,-754);
   move(452,0,-744);
   if (anyof(673,-1))   say(64,1418,0);
   }
   if (anyof(896,897,308,673,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p910(void)
#else
int p910()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(454,0,-744);
   move(455,0,746,-754);
   move(458,0,-750);
   move(456,0,-748);
   move(457,0,-753);
   }
   if (anyof(896,897,308,673,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p911(void)
#else
int p911()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(455,0,-744);
   move(456,0,746,-754);
   move(454,0,-750);
   move(457,0,-748);
   move(458,0,-753);
   }
   if (anyof(896,897,308,673,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p912(void)
#else
int p912()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(1095)) {
   if (isnear(90,-1,-1)) {
   say(64,3429,0);
   }
   say(64,3429,0);
   }
   if ((anyof(892,901,-1)) &&
   value[89]!=2) {
   if (((value[1136]==892)) ||
   (value[1136]==901)) {
   say(76,1312,1136);
   } else {
   say(76,1312,1137);
   }}
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if ((anyof(901,892,-1)) &&
   value[89]==2) {
   say(76,2746,1137);
   }
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (((keyword(793,124,-1)) &&
   have(124,-1,-1)) &&
   isnear(90,-1,-1)) {
   set('E',124,'c',2,NULL,NULL);
   apport(124,HERE);
   say(64,1796,0);
   }
   if (KEY(764)) {
   if (value[1170]==1) {
   default_to(0,value[HERE],3);
   }
   if ((KEY(124)) &&
   value[124]==2) {
   say(64,1777,0);
   }}
   if ((KEY(91)) &&
   value[89]==1) {
   if (anyof(822,798,764,807,808,-1))   say(64,1804,0);
   say(64,1396,0);
   }
   if ((KEY(756)) &&
   anyof(892,901,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(455,0,-744);
   move(459,0,-750);
   move(456,0,-746);
   move(458,0,-753);
   if (anyof(748,756,892,901,-1)) {
   p781();
   if (value[89]==0) {
   say(64,1777,0);
   }
   if (value[89]==1) {
   say(64,1803,0);
   }
   move(516,-2);
   }}
   if (anyof(89,1095,-1)) {
   if (anyof(764,807,-1))   say(64,3431,0);
   }
   if (anyof(1095,-1))   say(64,1396,0);
   if (anyof(896,897,308,673,892,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p913(void)
#else
int p913()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(459,0,-744);
   move(454,0,-746);
   move(458,0,750,-753);
   move(457,0,-748);
   move(456,0,-754);
   }
   if (anyof(896,897,308,673,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p914(void)
#else
int p914()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(673)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(458,0,750,-744);
   move(454,0,-746);
   move(457,0,-748);
   move(458,0,-753);
   move(455,0,-754);
   }
   if (anyof(896,897,308,673,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p45(void)
#else
int p45()
#endif
{
int done=0;
   p184(-1,134);
   p297(-1,1925,-1,134);
   if (KEY(1033)) {
   if (anyof(822,-1))   say(64,3179,0);
   if (anyof(800,808,807,-1))   say(64,3178,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(268)) {
   if (anyof(822,-1))   say(64,3176,0);
   if (anyof(807,808,769,-1))   say(76,3177,1136);
   if (anyof(800,-1))   say(76,1877,268);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,15);
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(901,892,-1))   say(72,2895,901);
   if (KEY(460)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(461,0,753,-7);
   move(462,1697,756,748,901,-892);
   if (anyof(460,-1))   say(64,1418,0);
   }
   if (anyof(7,460,901,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p120(void)
#else
int p120()
#endif
{
int done=0;
   if (KEY(75)) {
   if (!(anyof(121,822,-1))) {
   say(64,1690,0);
   }}
   if (KEY(822)) {
   if (anyof(7,171,-1))   say(64,3074,0);
   if (anyof(300,-1))   say(64,3075,0);
   if (anyof(935,376,-1))   say(64,3076,0);
   if (anyof(1133,-1))   say(64,3077,0);
   if (anyof(969,-1))   say(64,3078,0);
   if (anyof(268,-1))   say(64,3079,0);
   if (KEY(462)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(80)) &&
   anyof(754,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(268)) {
   if (anyof(808,-1))   say(76,2485,268);
   if (anyof(807,-1))   say(76,2484,268);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(7,757,300,-1))   say(64,2905,0);
   if (anyof(80,756,754,-1))   say(64,1830,0);
   if (anyof(462,-1))   say(64,1418,0);
   }
   if (!(((value[1170]>1) &&
   bitest(evar(1137),0)) &&
   bitest(evar(1137),15))) {
   value[1142]=502;*bitword(1142)=-1;
   value[1143]=2091;*bitword(1143)=-1;
   set('V',1144,'c',1,NULL,NULL);
   set('V',1140,'v',1142,NULL,NULL);
   set('V',1141,'v',1143,NULL,NULL);
   }
   if (anyof(7,75,462,80,969,300,268,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p169(void)
#else
int p169()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(894,-1))   say(72,3089,894);
   if (anyof(76,-1))   say(64,3088,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(460,0,-754);
   move(495,0,-753);
   move(284,0,751,756,284,894,-76);
   }
   if (anyof(7,894,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p107(void)
#else
int p107()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,979,918,918,-1))   say(64,2033,0);
   if (anyof(466,-1))   say(64,2942,0);
   if (anyof(202,898,-1))   say(64,2945,0);
   if (anyof(936,-1))   say(64,1352,0);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(754,898,918,979,-1)) ||
   value[1170]==1) {
   say(0,1711,0);
   move(702,-1);
   p153();
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(466,0,746,762,-466);
   move(515,0,750,744,748,751,-749);
   if (anyof(754,918,979,202,-1)) {
   set('V',1172,'c',48,NULL,NULL);
   say(64,3217,0);
   }}
   if (anyof(936,466,202,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(979,918,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p106(void)
#else
int p106()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,979,918,-1))   say(64,2033,0);
   if (anyof(202,898,-1))   say(64,2945,0);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(466,-1))   say(64,2942,0);
   return 0;
   }
   if (KEY(761)) {
   if ((value[1170]==1) ||
   anyof(754,979,898,918,-1)) {
   say(0,1711,0);
   move(702,-1);
   p153();
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(465,0,750,762,-466);
   move(298,0,748,747,746,-298);
   if (anyof(754,918,979,202,-1)) {
   set('V',1172,'c',48,NULL,NULL);
   say(64,3217,0);
   }}
   if (anyof(936,466,202,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(979,918,-1)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p854(void)
#else
int p854()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(1051,965,-1))   say(64,3083,0);
   if (anyof(779,1049,-1))   say(64,3126,0);
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   KEY(753)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(491,0,744,757,965,-1051);
   if (anyof(753,848,7,1049,-1)) {
   if (have(102,-1,-1)) {
   say(64,2640,0);
   }
   move(468,-2);
   }}
   if (anyof(7,1051,965,1049,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p857(void)
#else
int p857()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   anyof(753,754,7,-1)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(467,0,-754);
   move(469,0,753,-848);
   if (KEY(7)) {
   p329(-1,467,-1,754,-1,469,-1,753);
   }}
   if (KEY(7)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   set('V',1142,'v',1138,NULL,NULL);
   value[1142] -= 1;
return done;
}
#ifdef __STDC__
int p856(void)
#else
int p856()
#endif
{
int done=0;
   p298();
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(757,890,298,1047,957,1046,-1))   say(72,3134,0);
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   anyof(753,754,-1)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(468,0,-754);
   move(470,0,753,-848);
   if (KEY(7)) {
   p329(-1,468,-1,754,-1,470,-1,753);
   }
   if (anyof(1047,957,298,1046,-1))   say(64,2630,0);
   }
   if (anyof(7,890,1047,957,298,1046,-1)) {
   if (KEY(7)) {
   bitmod('s',evar(1172),1);
   } else {
   bitmod('s',evar(1172),2);
   }}
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=467;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p523(void)
#else
int p523()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (KEY(470)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   anyof(753,754,-1)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(469,0,-754);
   move(471,0,753,-848);
   if (KEY(7)) {
   p329(-1,471,-1,753,-1,469,-1,754);
   }
   if (anyof(470,-1))   say(64,1418,0);
   }
   if (anyof(7,470,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=467;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p861(void)
#else
int p861()
#endif
{
int done=0;
   p298();
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(757,890,197,898,-1))   say(72,3134,1);
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   anyof(753,754,-1)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(470,0,-754);
   move(472,0,753,-848);
   if (KEY(7)) {
   p329(-1,472,-1,753,-1,470,-1,754);
   }
   if (anyof(197,898,-1))   say(64,2630,0);
   }
   if (anyof(7,890,197,898,-1)) {
   if (KEY(7)) {
   bitmod('s',evar(1172),1);
   } else {
   bitmod('s',evar(1172),2);
   }}
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=470;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p860(void)
#else
int p860()
#endif
{
int done=0;
   p184(-1,129);
   p297(-1,2095,-1,129);
if (value[ARG1] == 8) value[ARG1]=161;
if (value[ARG2] == 8) value[ARG2]=161;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (KEY(470)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(161)) {
   if (KEY(874)) {
   return 0;
   }
   if (value[161]==0) {
   if (anyof(767,800,-1)) {
   say(76,1887,1137);
   }
   if (anyof(769,-1))   say(76,2498,1137);
   }
   if (anyof(768,-1))   say(64,2500,0);
   if (!(anyof(808,807,767,769,756,-1))) {
   say(64,1396,0);
   }}
   if ((((anyof(848,7,-1)) &&
   anyof(753,754,-1)) ||
   keyword(848,7,-1)) ||
   keyword(756,8,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(756,746,-1)) {
   if (value[161]==0) {
   say(72,2495,746);
   }
   if (value[161]==2) {
   say(0,2637,0);
   }
   set('E',161,'c',1,NULL,NULL);
   set('E',472,'c',1,NULL,NULL);
   move(473,-2);
   }
   move(477,0,753,-848);
   move(471,0,-754);
   if (KEY(7)) {
   p329(-1,471,-1,754,-1,477,-1,753);
   }
   if (anyof(470,-1))   say(64,1418,0);
   }
   if ((anyof(129,74,1077,1015,30,134,-1)) ||
   anyof(7,470,8,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=470;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p859(void)
#else
int p859()
#endif
{
int done=0;
   p298();
   if (value[163]>1) {
   set('T',2619,'c',2,NULL,NULL);
   } else    if (value[1713]<1) {
   set('T',2619,'c',0,NULL,NULL);
   } else {
   set('T',2619,'c',1,NULL,NULL);
   }
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(757,949,920,890,-1))   say(72,3134,2);
   if (anyof(7,-1))   say(64,2740,0);
   return 0;
   }
   if (((anyof(848,7,-1)) &&
   anyof(753,754,-1)) ||
   keyword(848,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((KEY(7)) &&
   !anyof(753,754,848,-1)) {
   if ((value[1139]==472)) {
   value[1136]=753;*bitword(1136)=-1;
   } else {
   value[1136]=754;*bitword(1136)=-1;
   }}
   move(472,0,-754);
   if (anyof(753,848,7,-1)) {
   if (value[163]>1) {
   move(478,-2);
   }
   if (value[1713]==2) {
   special(23, &value[1148]);
   set('V',1172,'c',30,NULL,NULL);
   say(64,1714,0);
   }
   p760();
   }
   if (anyof(920,949,-1))   say(64,2630,0);
   }
   if (anyof(7,920,949,890,-1)) {
   if (KEY(7)) {
   bitmod('s',evar(1172),1);
   } else {
   bitmod('s',evar(1172),2);
   }}
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=472;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p858(void)
#else
int p858()
#endif
{
int done=0;
   p184(-1,129);
   if ((anyof(1015,134,74,74,30,129,-1)) &&
   anyof(798,822,-1)) {
   say(64,2095,0);
   }
if (value[ARG1] == 8) value[ARG1]=164;
if (value[ARG2] == 8) value[ARG2]=164;
   if (KEY(954)) {
   if (anyof(822,764,807,808,797,-1))   say(64,2608,0);
   if (value[1170]==2) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(7,-1))   say(64,2740,0);
   if (KEY(164)) {
   if (value[1190]==5) {
   set('T',3293,'c',1,NULL,NULL);
   } else {
   set('T',3293,'c',0,NULL,NULL);
   }}
   if (KEY(470)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(137,952,-1)) {
   if (value[164]==0) {
   say(76,1312,1137);
   }
   say(64,3116,0);
   }
   return 0;
   }
   if (keyword(756,8,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(746,756,-1)) {
   if (value[164]==0) {
   say(72,2495,746);
   }
   move(479,-2);
   }
   move(477,0,754,-7);
   if (anyof(470,-1))   say(64,1418,0);
   }
   if ((value[164]==1) &&
   anyof(137,952,-1)) {
   bitmod('s',evar(1172),2);
   } else    if (KEY(7)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1662;*bitword(1143)=-1;
   value[1142]=472;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p248(void)
#else
int p248()
#endif
{
int done=0;
if (value[ARG1] == 8) value[ARG1]=164;
if (value[ARG2] == 8) value[ARG2]=164;
   if (anyof(952,-1))   say(64,2602,0);
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,17);
   if (anyof(263,992,992,-1))   say(64,3065,0);
   if (anyof(67,-1))   say(64,2627,0);
   if (anyof(954,-1))   say(64,2610,0);
   if (anyof(137,-1))   say(64,2609,0);
   if (anyof(935,-1))   say(64,3299,0);
   if (anyof(919,893,-1))   say(64,2607,0);
   if (KEY(470)) {
   if (value[164]==0) {
   say(72,3091,0);
   }
   say(72,3091,1);
   }
   if (KEY(164)) {
   set('T',3293,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(764)) {
   if (anyof(160,-1))   say(64,3297,0);
   if ((KEY(67)) &&
   !ishere(67,-1,-1)) {
   say(64,3298,0);
   }}
   if ((anyof(807,808,-1)) &&
   anyof(67,160,-1)) {
   say(64,2795,0);
   }
   if (KEY(67)) {
   if (KEY(852)) {
   value[1136]=874;*bitword(1136)=-1;
   set('V',1170,'c',1,NULL,NULL);
   return 0;
   }
   if (!isnear(67,-1,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (anyof(137,-1))   say(76,1877,137);
   if (anyof(954,-1))   say(72,1877,954);
   if (keyword(757,8,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(757,750,470,-1)) {
   if (value[164]==0) {
   say(72,2495,750);
   }
   move(478,-2);
   }}
   if ((value[164]==1) &&
   anyof(470,954,-1)) {
   bitmod('s',evar(1172),2);
   } else    if (anyof(137,919,893,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
