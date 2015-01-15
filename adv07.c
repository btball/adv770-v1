/* adv07.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p71(void)
#else
int p71()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,-1))   say(72,2895,899);
   if (anyof(935,-1))   say(64,3122,0);
   if (anyof(1128,-1))   say(64,3123,0);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(899,757,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(310,0,750,757,-899);
   move(309,0,-309);
   move(311,0,-890);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(1128,1127,300,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p533(void)
#else
int p533()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,359,1021,-1))   say(64,2950,0);
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(309,0,744,753,-309);
   move(360,0,748,754,-360);
   move(311,0,-890);
   if (anyof(897,896,308,-1)) {
   p329(-1,360,-1,748,-1,309,-1,744);
   }}
   if (anyof(896,897,308,359,1021,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p42(void)
#else
int p42()
#endif
{
int done=0;
   bitmod('s',39,4);
   p184(-1,1077);
   p297(-1,1862,-1,1077);
   if (KEY(822)) {
   if (anyof(756,894,746,-1))   say(72,1705,756);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(359,-1))   say(76,2951,359);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(359,0,750,753,896,-359);
   move(309,0,-309);
   move(361,0,746,756,360,-39);
   move(311,0,-890);
   }
   if (anyof(894,359,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p55(void)
#else
int p55()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1055,991,-1))   say(64,3067,0);
   if (anyof(757,-1))   say(72,1705,757);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(360,0,750,-757);
   move(309,0,-309);
   move(311,0,-890);
   }
   if (KEY(764)) {
   if (value[1170]==1) {
   default_to(0,value[HERE],3);
   }
   if ((KEY(124)) &&
   ishere(124,-1,-1)) {
   say(76,1510,1137);
   }}
   if (anyof(1055,991,757,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p581(void)
#else
int p581()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-750);
   move(365,0,-747);
   move(366,0,-751);
   move(367,0,-749);
   move(368,0,-745);
   move(369,0,-753);
   move(370,0,-754);
   move(371,0,-744);
   move(372,0,-748);
   move(363,0,-746);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p582(void)
#else
int p582()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-751);
   move(364,0,-753);
   move(366,0,-744);
   move(367,0,-748);
   move(368,0,-750);
   move(369,0,-749);
   move(370,0,-745);
   move(371,0,-746);
   move(372,0,-754);
   move(363,0,-747);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p583(void)
#else
int p583()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-753);
   move(364,0,-754);
   move(365,0,-750);
   move(367,0,-745);
   move(368,0,-749);
   move(369,0,-746);
   move(370,0,-744);
   move(371,0,-751);
   move(372,0,-747);
   move(363,0,-748);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p584(void)
#else
int p584()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-745);
   move(364,0,-744);
   move(365,0,-751);
   move(366,0,-747);
   move(368,0,-746);
   move(369,0,-754);
   move(370,0,-748);
   move(371,0,-753);
   move(372,0,-750);
   move(363,0,-749);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p585(void)
#else
int p585()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-744);
   move(364,0,-747);
   move(365,0,-754);
   move(366,0,-748);
   move(367,0,-746);
   move(369,0,-750);
   move(370,0,-749);
   move(371,0,-745);
   move(372,0,-751);
   move(363,0,-753);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p586(void)
#else
int p586()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-746);
   move(364,0,-750);
   move(365,0,-753);
   move(366,0,-749);
   move(367,0,-754);
   move(368,0,-748);
   move(370,0,-751);
   move(371,0,-747);
   move(372,0,-745);
   move(363,0,-744);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p587(void)
#else
int p587()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-747);
   move(364,0,-745);
   move(365,0,-748);
   move(366,0,-754);
   move(367,0,-753);
   move(368,0,-751);
   move(369,0,-744);
   move(371,0,-749);
   move(372,0,-746);
   move(363,0,-750);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p588(void)
#else
int p588()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-754);
   move(364,0,-746);
   move(365,0,-745);
   move(366,0,-753);
   move(367,0,-750);
   move(368,0,-744);
   move(369,0,-748);
   move(370,0,-747);
   move(372,0,-749);
   move(363,0,-751);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p589(void)
#else
int p589()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(64,2954,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(362,0,-749);
   move(364,0,-751);
   move(365,0,-746);
   move(366,0,-750);
   move(367,0,-744);
   move(368,0,-754);
   move(369,0,-747);
   move(370,0,-753);
   move(371,0,-748);
   move(363,0,-745);
   if (anyof(896,897,308,-1))   say(72,2896,896);
   }
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p590(void)
#else
int p590()
#endif
{
int done=0;
   p184(-1,821);
   if ((anyof(821,134,74,129,1015,30,-1)) &&
   anyof(798,822,-1)) {
   say(0,3287,0);
   say(64,3323,0);
   }
   if (KEY(822)) {
   if (anyof(1100,-1))   say(64,3443,0);
   if (anyof(1101,-1))   say(64,3444,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if (((KEY(765)) &&
   anyof(51,104,105,43,-1)) &&
   have(value[1137],-1,-1)) {
   apport(value[1137],HERE);
   if (anyof(105,104,-1))   say(76,1849,1137);
   if (anyof(43,-1))   say(64,3474,0);
   apport(51,702);
   apport(40,value[1138]);
   bitmod('s',40,4);
   set('E',35,'c',1,NULL,NULL);
   say(64,1983,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(363,0,744,757,896,897,-308);
   }
   if ((anyof(821,134,74,129,1015,30,-1)) ||
   anyof(896,897,308,1100,1101,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p532(void)
#else
int p532()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(200,0,-757);
   }
return done;
}
#ifdef __STDC__
int p738(void)
#else
int p738()
#endif
{
int done=0;
   p184(-1,73);
   if ((anyof(73,134,129,30,1015,74,-1)) &&
   anyof(798,822,-1)) {
   say(64,1815,0);
   }
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(374,935,-1))   say(64,2741,0);
   if (anyof(1126,-1))   say(72,2029,1126);
   if (anyof(901,-1))   say(64,2952,0);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(382,0,754,-7);
   move(210,0,750,757,900,901,-210);
   }
   if ((anyof(73,134,129,30,1015,74,-1)) ||
   anyof(300,7,1126,935,374,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p606(void)
#else
int p606()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1082,935,-1))   say(64,3097,0);
   if (anyof(896,308,897,-1))   say(72,2895,896);
   if ((KEY(126)) &&
   !isnear(126,-1,-1)) {
   say(64,3098,0);
   }
   if ((anyof(144,1053,-1)) &&
   !isnear(144,-1,-1)) {
   say(64,3098,0);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,744,757,896,308,897,-900);
   }
   if (anyof(896,308,897,1053,1082,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p119(void)
#else
int p119()
#endif
{
int done=0;
if (value[ARG1] == 8) {value[ARG1]=36; (void)fake(1,36);}
if (value[ARG2] == 8) {value[ARG2]=36; (void)fake(2,36);}
   if (KEY(822)) {
   if (anyof(376,376,753,-1))   say(72,2011,9);
   if (anyof(757,896,897,-1))   say(72,2895,897);
   return 0;
   }
   if ((anyof(756,757,-1)) &&
   KEY(36)) {
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
   if (anyof(753,757,897,896,744,-1)) {
   if (value[36]==1) {
   say(64,1606,0);
   }
   move(214,-2);
   }}
   if (anyof(376,897,896,757,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p482(void)
#else
int p482()
#endif
{
int done=0;
if (value[ARG1] == 8) {value[ARG1]=36; (void)fake(1,36);}
if (value[ARG2] == 8) {value[ARG2]=36; (void)fake(2,36);}
   if ((KEY(769)) &&
   value[1170]==1) {
   set('V',1170,'c',2,NULL,NULL);
   value[1137]=36;*bitword(1137)=-1;
   }
   if (KEY(36)) {
   if (KEY(757)) {
   set('V',1170,'c',1,NULL,NULL);
   } else {
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,36);
   }
   if (anyof(769,-1))   say(64,1632,0);
   if (anyof(767,-1))   say(76,1598,1137);
   if (anyof(822,-1))   say(64,2093,0);
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(value[1151],0,-757);
   }
return done;
}
#ifdef __STDC__
int p931(void)
#else
int p931()
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
   move(214,0,-748);
   move(379,0,-744);
   if (anyof(897,896,308,-1)) {
   p329(-1,214,-1,748,-1,379,-1,744);
   }}
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p929(void)
#else
int p929()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(1014)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,896,308,-1))   say(76,2894,308);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(378,0,748,749,-750);
   move(380,0,744,745,-746);
   if (anyof(897,896,308,-1)) {
   p329(-1,380,-1,746,-1,378,-1,750);
   }}
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p850(void)
#else
int p850()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,10);
   if (anyof(897,896,308,-1))   say(76,2895,308);
   if (anyof(935,1015,134,129,-1))   say(64,2902,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(379,0,757,748,-308);
   }
   if (anyof(897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p218(void)
#else
int p218()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,308,897,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,-748);
   move(383,0,-744);
   move(382,0,-746);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
   if (anyof(308,896,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p165(void)
#else
int p165()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2740,0);
   if (anyof(935,374,-1))   say(64,2741,0);
   if (anyof(965,-1))   say(72,2588,965);
   if (anyof(897,896,308,-1))   say(72,2895,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(374,0,753,7,746,-965);
   move(381,0,748,896,308,-757);
   }
   if (anyof(7,374,965,896,308,897,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p794(void)
#else
int p794()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(935,-1))   say(64,2960,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(381,0,757,748,896,897,-308);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(896,897,308,300,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p486(void)
#else
int p486()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,11);
   if (anyof(1023,-1))   say(64,2955,0);
   if (anyof(897,896,308,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(281,0,-748);
   move(385,0,744,-1023);
   if (anyof(897,896,308,-1)) {
   p329(-1,385,-1,744,-1,281,-1,748);
   }}
   if (anyof(376,897,1023,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p389(void)
#else
int p389()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,2960,0);
   if (anyof(896,308,897,-1))   say(72,2894,896);
   return 0;
   }
   if (keyword(756,386,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(384,0,-748);
   if (anyof(896,308,897,-1))   say(72,2896,896);
   if (anyof(744,386,-1)) {
   if (isnear(25,-1,-1)) {
   p781();
   say(64,1584,0);
   }
   move(386,-2);
   }}
   if (anyof(896,308,897,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p521(void)
#else
int p521()
#endif
{
int done=0;
   p184(-1,1032);
   if (KEY(1032)) {
   if (anyof(822,798,774,-1))   say(64,3184,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(15,779,-1))   say(64,3182,0);
   if (anyof(935,17,1031,-1))   say(64,3183,0);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (KEY(386)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(848,15,-1)) {
   say(64,1843,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(387,0,-746);
   move(385,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,385,-1,750,-1,387,-1,746);
   }
   if (anyof(386,-1))   say(64,1418,0);
   }
   if (KEY(15)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(896,897,308,386,935,17,1031,1032,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p68(void)
#else
int p68()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(209,754,-1))   say(64,2956,0);
   if (anyof(1007,258,-1))   say(64,2957,0);
   if (anyof(445,-1))   say(72,2959,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(754,209,-1)) ||
   value[1170]==1) {
   p683();
   }}
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,848,-1))   say(64,3434,0);
   move(386,0,744,896,-386);
   move(388,0,-750);
   move(427,0,-746);
   if (KEY(445)) {
   p329(-1,388,-1,750,-1,427,-1,746);
   }}
   if (anyof(258,1007,209,445,896,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1664;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p70(void)
#else
int p70()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(445,-1))   say(72,2959,1);
   if (anyof(390,1126,390,-1))   say(64,2958,0);
   if (anyof(209,754,209,-1))   say(64,2956,0);
   if (anyof(258,1007,-1))   say(64,2957,0);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(754,209,-1)) ||
   value[1170]==1) {
   p683();
   }}
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,848,-1))   say(64,3434,0);
   move(387,0,744,-445);
   move(389,0,747,897,896,-308);
   }
   if (anyof(445,897,896,308,258,1007,209,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1664;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p411(void)
#else
int p411()
#endif
{
int done=0;
   p448();
   if (KEY(822)) {
   if (anyof(390,998,-1))   say(64,3072,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(388,0,-751);
   move(390,1582,754,746,390,-673);
   }
   if (anyof(390,998,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1676;*bitword(1143)=-1;
   value[1142]=390;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p777(void)
#else
int p777()
#endif
{
int done=0;
   p448();
   if (KEY(822)) {
   if (anyof(390,998,-1))   say(64,3072,0);
   return 0;
   }
   if (KEY(848)) {
   if (anyof(390,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(394,0,-748);
   move(397,0,-751);
   if (anyof(390,757,753,744,848,-1))   say(64,1583,0);
   if (anyof(897,896,308,-1)) {
   p329(-1,394,-1,748,-1,397,-1,751);
   }}
   if (anyof(390,998,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p412(void)
#else
int p412()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(393,0,-750);
   move(392,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,392,-1,744,-1,393,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p425(void)
#else
int p425()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(391,0,748,897,896,308,-757);
   }
return done;
}
#ifdef __STDC__
int p426(void)
#else
int p426()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(391,0,-746);
   move(395,0,-750);
   move(394,0,-744);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p438(void)
#else
int p438()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(390,0,-744);
   move(393,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,390,-1,744,-1,393,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p439(void)
#else
int p439()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(393,0,-746);
   move(396,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,393,-1,746,-1,396,-1,744);
   }}
return done;
}
#ifdef __STDC__
int p441(void)
#else
int p441()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(395,0,748,757,896,897,-308);
   }
return done;
}
#ifdef __STDC__
int p442(void)
#else
int p442()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(390,0,-746);
   move(398,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,390,-1,746,-1,398,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p443(void)
#else
int p443()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(397,0,-745);
   move(399,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,397,-1,745,-1,399,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p444(void)
#else
int p444()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(398,0,-744);
   move(400,0,-748);
   move(402,0,-750);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p445(void)
#else
int p445()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(399,0,744,757,896,897,-308);
   }
return done;
}
#ifdef __STDC__
int p446(void)
#else
int p446()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(402,0,744,757,896,897,-308);
   }
return done;
}
#ifdef __STDC__
int p447(void)
#else
int p447()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(399,0,-746);
   move(401,0,-748);
   move(403,0,-744);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p413(void)
#else
int p413()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(402,0,-748);
   move(404,0,-751);
   if (anyof(896,897,308,-1)) {
   p329(-1,402,-1,748,-1,404,-1,751);
   }}
return done;
}
#ifdef __STDC__
int p414(void)
#else
int p414()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(403,0,-746);
   move(405,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,403,-1,746,-1,405,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p415(void)
#else
int p415()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(404,0,-745);
   move(406,0,-748);
   move(409,0,-750);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p416(void)
#else
int p416()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(405,0,-744);
   move(407,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,405,-1,744,-1,407,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p417(void)
#else
int p417()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(406,0,744,757,896,897,-308);
   }
return done;
}
#ifdef __STDC__
int p418(void)
#else
int p418()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(410,0,744,757,896,897,-308);
   }
return done;
}
#ifdef __STDC__
int p419(void)
#else
int p419()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(405,0,-746);
   move(410,0,-748);
   move(411,0,-751);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p420(void)
#else
int p420()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(408,0,-748);
   move(409,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,408,-1,748,-1,409,-1,744);
   }}
return done;
}
#ifdef __STDC__
int p421(void)
#else
int p421()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(409,0,-746);
   move(412,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,409,-1,746,-1,412,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p422(void)
#else
int p422()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(411,0,-745);
   move(413,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,411,-1,745,-1,413,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p423(void)
#else
int p423()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(412,0,-744);
   move(414,0,-748);
   move(416,0,-750);
   move(417,0,-751);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p424(void)
#else
int p424()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(413,0,-744);
   move(415,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,413,-1,744,-1,415,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p427(void)
#else
int p427()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(414,0,-746);
   move(416,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,414,-1,746,-1,416,-1,744);
   }}
return done;
}
#ifdef __STDC__
int p428(void)
#else
int p428()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(413,0,-746);
   move(415,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,413,-1,746,-1,415,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p429(void)
#else
int p429()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(413,0,-747);
   move(418,0,-751);
   if (anyof(896,897,308,-1)) {
   p329(-1,413,-1,747,-1,418,-1,751);
   }}
return done;
}
#ifdef __STDC__
int p430(void)
#else
int p430()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(417,0,-746);
   move(419,0,-750);
   if (anyof(896,897,308,-1)) {
   p329(-1,417,-1,746,-1,419,-1,750);
   }}
return done;
}
#ifdef __STDC__
int p431(void)
#else
int p431()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(418,0,-745);
   move(420,0,-748);
   move(425,0,-750);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p432(void)
#else
int p432()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(419,0,-744);
   move(421,0,-748);
   move(423,0,-750);
   move(424,0,-751);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p433(void)
#else
int p433()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(420,0,-744);
   move(422,0,-751);
   if (anyof(896,897,308,-1)) {
   p329(-1,420,-1,744,-1,422,-1,751);
   }}
return done;
}
#ifdef __STDC__
int p434(void)
#else
int p434()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(421,0,-747);
   move(423,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,421,-1,747,-1,423,-1,744);
   }}
return done;
}
#ifdef __STDC__
int p435(void)
#else
int p435()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(420,0,-746);
   move(422,0,-748);
   if (anyof(896,897,308,-1)) {
   p329(-1,420,-1,746,-1,422,-1,748);
   }}
return done;
}
#ifdef __STDC__
int p436(void)
#else
int p436()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(420,0,-747);
   move(425,0,-744);
   if (anyof(896,897,308,-1)) {
   p329(-1,420,-1,747,-1,425,-1,744);
   }}
return done;
}
#ifdef __STDC__
int p437(void)
#else
int p437()
#endif
{
int done=0;
   p448();
   if ((KEY(758)) ||
   value[1170]==1) {
   move(419,0,-746);
   move(424,0,-748);
   move(426,0,-751);
   if (anyof(896,897,308,-1))   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p440(void)
#else
int p440()
#endif
{
int done=0;
   p448();
   p184(-1,1015);
   if (anyof(134,1015,74,129,30,-1)) {
   if (anyof(822,798,-1)) {
   say(76,2135,1137);
   }
   if (anyof(764,785,808,807,800,-1)) {
   say(64,2044,0);
   }}
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(425,0,746,757,897,896,-308);
   move(389,value[1157],-707);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(300,897,896,308,134,129,30,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p69(void)
#else
int p69()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(209,754,209,-1))   say(64,2956,0);
   if (anyof(258,1007,-1))   say(64,2957,0);
   if (anyof(445,-1))   say(72,2959,2);
   if (anyof(896,897,779,308,-1))   say(72,2944,896);
   if (anyof(887,-1))   say(72,2895,887);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(754,209,-1)) ||
   value[1170]==1) {
   p683();
   }}
   if (keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (keyword(758,779,-1)) {
   move(387,-2);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,848,-1))   say(64,3434,0);
   move(387,0,744,445,896,308,-897);
   move(428,0,756,745,-887);
   }
   if (anyof(209,258,445,896,897,308,887,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1664;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p156(void)
#else
int p156()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(887)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(427,0,749,258,-757);
   move(429,0,747,-756);
   if (KEY(887)) {
   p329(-1,429,-1,747,-1,427,-1,749);
   }}
   if (KEY(887)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p157(void)
#else
int p157()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,887,-1))   say(76,2895,1137);
   return 0;
   }
   if (isnear(34,-1,-1)) {
   if (((keyword(795,34,-1)) ||
   keyword(793,118,-1)) ||
   keyword(805,118,-1)) {
   if (isnear(118,-1,-1)) {
   apport(118,701);
   say(64,2006,0);
   } else {
   say(64,1747,0);
   }}}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(428,0,750,887,-757);
   if (anyof(748,756,896,-1)) {
   if (isnear(34,-1,-1)) {
   say(0,1566,0);
   p153();
   }
   move(430,-2);
   }}
   if (anyof(887,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p158(void)
#else
int p158()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,896,-1))   say(76,2895,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(429,0,744,757,-896);
   move(431,0,748,756,-899);
   }
   if (anyof(899,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p780(void)
#else
int p780()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(912,-1))   say(64,3433,0);
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(899,-1))   say(72,2895,899);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(430,0,744,757,-899);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(899,300,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p30(void)
#else
int p30()
#endif
{
int done=0;
   if (value[1190]==4) {
   p148();
   }
   if (KEY(822)) {
   if (anyof(290,1051,896,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(996,-1))   say(64,2742,0);
   if (anyof(974,953,33,-1))   say(64,2927,0);
   if (anyof(206,309,-1))   say(64,2928,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,996,-1)) {
   if ((value[1139]==290)) {
   value[1136]=746;*bitword(1136)=-1;
   } else {
   value[1136]=750;*bitword(1136)=-1;
   }}
   move(290,0,-750);
   if (anyof(746,762,-1)) {
   if ((((value[33]==0) ||
   have(114,-1,-1)) ||
   have(115,-1,-1)) ||
   value[1190]>4) {
   set('E',33,'c',0,NULL,NULL);
   say(0,1565,0);
   move(702,-1);
   p153();
   }
   set('E',33,'c',0,NULL,NULL);
   move(433,-2);
   }
   if (anyof(309,-1))   say(64,2928,0);
   }
   if (KEY(764)) {
   if (anyof(953,996,-1))   say(64,2752,0);
   if (anyof(206,-1))   say(76,1841,206);
   }
   if (anyof(309,206,1051,290,896,996,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p31(void)
#else
int p31()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,1051,290,1014,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(996,-1))   say(64,2742,0);
   if (anyof(974,953,33,-1))   say(64,2927,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,996,-1)) {
   if ((value[1139]==434)) {
   value[1136]=750;*bitword(1136)=-1;
   } else {
   value[1136]=744;*bitword(1136)=-1;
   }}
   move(434,0,-744);
   if (anyof(750,762,-1)) {
   if (value[33]==0) {
   say(0,1565,0);
   move(702,-1);
   p153();
   }
   set('E',33,'c',0,NULL,NULL);
   move(432,-2);
   }}
   if (KEY(764)) {
   if (anyof(953,996,-1))   say(64,2752,0);
   }
   if (anyof(996,896,1014,974,953,33,1051,290,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p32(void)
#else
int p32()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(309,1051,290,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(996,-1))   say(64,2742,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(433,0,-748);
   move(437,0,744,-437);
   move(435,0,746,-435);
   if (anyof(896,897,308,996,-1))   say(72,2896,896);
   if (anyof(309,1051,290,-1))   say(64,1418,0);
   }
   if (keyword(764,996,-1)) {
   say(64,2752,0);
   }
   if (anyof(896,897,308,309,1051,290,996,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p353(void)
#else
int p353()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(437,896,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(996,-1))   say(64,2742,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(434,0,-751);
   move(438,0,-749);
   if (anyof(437,-1))   say(64,1418,0);
   if (anyof(896,996,-1)) {
   p329(-1,434,-1,751,-1,438,-1,749);
   }}
   if (keyword(764,996,-1)) {
   if (anyof(996,-1))   say(64,2752,0);
   }
   if (anyof(896,897,308,437,996,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p725(void)
#else
int p725()
#endif
{
int done=0;
   if (anyof(983,-1))   say(72,1841,983);
   if (KEY(822)) {
   if (anyof(7,-1))   say(64,2744,0);
   if (anyof(996,-1))   say(64,2742,0);
   if (anyof(896,897,308,-1))   say(72,2746,896);
   if (anyof(439,-1))   say(64,2747,0);
   if (anyof(120,997,-1))   say(64,2745,0);
   if (anyof(912,-1))   say(72,2025,912);
   if (anyof(753,-1))   say(72,2749,0);
   return 0;
   }
   if (anyof(754,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   } else    if (KEY(848)) {
   say(64,2836,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(754,7,848,439,750,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   p151(*bitword(1216),value[1216]);
   }
   move(437,0,746,756,896,-996);
   move(439,0,754,750,7,-439);
   }
   value[1143]=1677;*bitword(1143)=-1;
   value[1142]=439;*bitword(1142)=-1;
   if (keyword(764,996,-1)) {
   say(64,2752,0);
   }
   if (anyof(439,949,997,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(7,996,912,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p48(void)
#else
int p48()
#endif
{
int done=0;
   set('E',42,'c',1,NULL,NULL);
   if (anyof(992,992,801,-1))   say(64,2651,0);
   if (anyof(206,-1))   say(76,1841,206);
   if (KEY(822)) {
   if (anyof(912,-1))   say(64,2753,0);
   if (anyof(7,-1))   say(64,2744,0);
   if (anyof(1000,-1))   say(64,2757,0);
   }
   if (anyof(912,7,1000,1001,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (keyword(848,920,-1)) {
   say(72,3473,1);
   }
   p50();
   if (keyword(753,7,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(439)) {
   p329(-1,440,-1,744,0,0,0,0);
   }
   move(440,0,-744);
   if (anyof(753,7,848,746,-1)) {
   p865(-1,746,-1,438);
   }}
   if (anyof(912,7,1000,920,983,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p739(void)
#else
int p739()
#endif
{
int done=0;
if (value[ARG1] == 983) {value[ARG1]=920; (void)fake(1,920);}
if (value[ARG2] == 983) {value[ARG2]=920; (void)fake(2,920);}
   if (anyof(848,-1))   say(64,2836,0);
   p50();
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(439)) {
   p329(-1,441,-1,744,-1,439,-1,748);
   }
   move(441,0,-744);
   move(439,0,-748);
   move(443,0,-745);
   }
return done;
}
#ifdef __STDC__
int p928(void)
#else
int p928()
#endif
{
int done=0;
if (value[ARG1] == 983) {value[ARG1]=920; (void)fake(1,920);}
if (value[ARG2] == 983) {value[ARG2]=920; (void)fake(2,920);}
   p50();
   if (anyof(848,-1))   say(72,3473,0);
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(439)) {
   p329(-1,440,-1,748,-1,442,-1,744);
   }
   move(442,0,-744);
   move(440,0,-748);
   move(443,0,-746);
   }
return done;
}
#ifdef __STDC__
int p49(void)
#else
int p49()
#endif
{
int done=0;
   if (anyof(223,-1))   say(64,2750,0);
   p50();
   if (anyof(848,-1))   say(64,2836,0);
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(439)) {
   p329(-1,441,-1,748,0,0,0,0);
   }
   move(441,0,-748);
   move(443,0,-747);
   }
return done;
}
#ifdef __STDC__
int p52(void)
#else
int p52()
#endif
{
int done=0;
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
   set('V',1243,'c',0,NULL,NULL);
   if (anyof(787,814,-1)) {
   set('V',1243,'c',0,NULL,NULL);
   if (value[1170]==1) {
   p321(0,0);
   if (value[1243]>0) {
   p900();
   }}
   if (KEY(120)) {
   p900();
   }}
   if (keyword(120,139,-1)) {
   p900();
   }
   if (KEY(804)) {
   if ((KEY(136)) &&
   isnear(136,0,6)) {
   p304();
   }
   if ((anyof(136,119,123,-1)) &&
   isnear(value[1137],-1,-1)) {
   set('V',1243,'v',1137,NULL,NULL);
   value[1248]=value[value[1243]];*bitword(1248)=0;
   if (value[1248]==3) {
   p900();
   }}}
   if (KEY(848)) {
   if (anyof(920,-1))   say(64,2836,0);
   if (KEY(753)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if (KEY(139)) {
   if (anyof(795,151,-1)) {
   p304();
   }
   if (anyof(764,807,-1))   say(76,1401,139);
   if (anyof(848,753,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if (anyof(974,-1))   say(76,3314,139);
   if (((anyof(767,804,813,814,803,-1)) &&
   KEY(151)) &&
   isnear(151,-1,-1)) {
   p304();
   }
   if ((value[1170]==1) &&
   anyof(151,795,-1)) {
   p304();
   }
   if ((KEY(832)) &&
   value[139]<2) {
   bitmod('s',evar(1138),8);
   }
   if (KEY(983)) {
   if (anyof(764,822,-1))   say(72,1841,983);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(920,-1))   say(64,2368,0);
   if (anyof(974,-1))   say(76,2840,139);
   if (anyof(120,-1))   say(64,2841,0);
   if (anyof(753,-1))   say(76,2749,139);
   if (anyof(921,-1))   say(64,3213,0);
   if (value[139]>0) {
   if (anyof(1001,-1))   say(64,2758,0);
   if (anyof(921,-1))   say(72,2372,0);
   }
   return 0;
   }
   if (value[139]>0) {
   if ((KEY(789)) &&
   anyof(1001,139,-1)) {
   p129();
   }
   if (anyof(1001,921,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(920,-1))   say(64,3365,0);
   if (anyof(753,848,-1)) {
   if (value[139]==2) {
   set('E',444,'c',1,NULL,NULL);
   move(444,-2199);
   }
   if (value[139]==1) {
   say(64,2200,0);
   }
   say(76,2082,139);
   }
   move(442,0,-744);
   move(442,0,-751);
   move(441,0,-750);
   if (anyof(749,439,-1)) {
   p865(-1,749,-1,440);
   }
   if (anyof(748,-1))   say(64,2198,0);
   }
return done;
}
#ifdef __STDC__
int p53(void)
#else
int p53()
#endif
{
int done=0;
   set('E',444,'c',0,NULL,NULL);
   if (KEY(157)) {
   if (anyof(822,-1))   say(64,1762,0);
   say(64,2201,0);
   }
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
   if (KEY(822)) {
   if (anyof(920,-1))   say(64,2367,0);
   if (anyof(445,-1))   say(72,2751,744);
   if (anyof(753,-1))   say(72,2749,1);
   if (anyof(754,-1))   say(64,2756,0);
   if (anyof(921,-1))   say(72,2372,0);
   if (anyof(1001,-1))   say(64,2758,0);
   if (anyof(949,997,-1))   say(64,2745,0);
   if (anyof(887,-1))   say(64,2764,0);
   return 0;
   }
   if ((KEY(764)) &&
   anyof(920,1126,1127,-1)) {
   if (((have(102,-1,-1)) &&
   value[102]>=6) &&
   value[102]<=8) {
   say(72,3303,1);
   } else {
   say(72,3303,0);
   }}
   if ((KEY(789)) &&
   anyof(1001,139,-1)) {
   p129();
   }
   if (anyof(1001,921,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(139)) &&
   anyof(753,754,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(446,0,753,-848);
   move(443,0,-754);
   if (anyof(744,445,157,762,-1)) {
   if (have(102,-1,-1)) {
   if (((value[102]==6) ||
   value[102]==7) ||
   value[102]==8) {
   if (bitest(158,4)) {
   if (value[102]==8) {
   say(72,2286,744);
   }
   move(445,-2);
   } else {
   set('V',1172,'c',32,NULL,NULL);
   say(64,2204,0);
   }}}
   set('V',1172,'c',33,NULL,NULL);
   say(64,2204,0);
   }}
   if (anyof(445,1001,921,139,920,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(949,997,-1)) {
   bitmod('s',evar(1172),2);
   }
   value[1140]=443;*bitword(1140)=-1;
   value[1141]=2239;*bitword(1141)=-1;
   set('V',1144,'c',1,NULL,NULL);
   set('V',1142,'v',1140,NULL,NULL);
   set('V',1143,'v',1141,NULL,NULL);
return done;
}
#ifdef __STDC__
int p526(void)
#else
int p526()
#endif
{
int done=0;
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
   if (KEY(822)) {
   if (anyof(445,-1))   say(72,2751,748);
   if (anyof(920,-1))   say(64,2367,0);
   if (anyof(139,921,-1))   say(64,2761,0);
   if (anyof(754,-1))   say(64,2762,0);
   if (anyof(753,-1))   say(72,2749,1);
   if (anyof(949,997,-1))   say(64,2745,0);
   if (anyof(887,-1))   say(64,2764,0);
   if (anyof(547,-1))   say(64,2580,0);
   if (anyof(957,-1))   say(72,2585,957);
   return 0;
   }
   if ((KEY(764)) &&
   anyof(920,1126,1127,-1)) {
   say(72,3303,1);
   }
   if (anyof(139,921,-1)) {
   if (anyof(764,-1))   say(64,2760,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(102)) &&
   anyof(765,793,-1)) {
   say(0,2554,0);
   move(443,-1);
   p800();
   }
   if (KEY(157)) {
   if (KEY(776)) {
   say(0,1801,0);
   if (!((have(124,-1,-1)) ||
   have(125,-1,-1))) {
glue_text();
   say(8,1799,1);
   }
   longjmp(loop_back,1);
   }
   if (KEY(789)) {
   if (have(145,0,2)) {
   say(64,2456,0);
   }
   say(64,1396,0);
   }}
   if (KEY(761)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(444,2206,748,445,-139);
   if (anyof(744,-1))   say(64,2230,0);
   if (anyof(761,749,750,751,-1))   say(64,2203,0);
   }
   if (anyof(445,887,139,920,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(949,997,547,-1)) {
   bitmod('s',evar(1172),2);
   }
   value[1140]=443;*bitword(1140)=-1;
   value[1141]=2240;*bitword(1141)=-1;
   set('V',1144,'c',1,NULL,NULL);
   set('V',1142,'v',1140,NULL,NULL);
   set('V',1143,'v',1141,NULL,NULL);
return done;
}
#ifdef __STDC__
int p54(void)
#else
int p54()
#endif
{
int done=0;
   if (KEY(194)) {
   if (anyof(822,-1))   say(64,2621,0);
   if (value[1170]==1) {
   say(76,1764,194);
   }
   say(64,2456,0);
   }
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
   if (anyof(983,-1))   say(72,1841,983);
   if (KEY(822)) {
   if (anyof(974,-1))   say(72,2668,974);
   if (anyof(993,-1))   say(64,2737,0);
   if (anyof(754,920,-1))   say(64,2756,0);
   if (anyof(921,-1))   say(72,2372,0);
   if (anyof(753,-1))   say(64,2845,0);
   if (anyof(1001,-1))   say(64,2758,0);
   if (anyof(949,997,-1))   say(64,2745,0);
   if (anyof(547,-1))   say(64,2580,0);
   if (anyof(957,-1))   say(72,2585,957);
   return 0;
   }
   if ((KEY(789)) &&
   anyof(1001,139,-1)) {
   p129();
   }
   if (anyof(974,1001,921,920,139,-1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(949,997,547,993,-1)) {
   bitmod('s',evar(1172),2);
   }
   if (KEY(848)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(848,754,-1)) {
   set('E',444,'c',2,NULL,NULL);
   move(444,-2);
   }
   if (anyof(753,-1))   say(64,2232,0);
   if (KEY(746)) {
   if ((value[194]==5) &&
   !have(95,0,2)) {
   say(64,2233,0);
   }
   move(199,0,-746);
   }}
   value[1140]=443;*bitword(1140)=-1;
   value[1141]=2239;*bitword(1141)=-1;
   set('V',1144,'c',1,NULL,NULL);
   set('V',1142,'v',1140,NULL,NULL);
   set('V',1143,'v',1141,NULL,NULL);
return done;
}
#ifdef __STDC__
int p505(void)
#else
int p505()
#endif
{
int done=0;
   if ((KEY(108)) &&
   isnear(108,-1,-1)) {
   return 0;
   }
if (value[ARG1] == 108) {value[ARG1]=935; (void)fake(1,935);}
if (value[ARG2] == 108) {value[ARG2]=935; (void)fake(2,935);}
   if (KEY(822)) {
   if (anyof(900,435,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(996,-1))   say(64,2742,0);
   if (anyof(935,1018,-1))   say(64,2929,0);
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(436,0,748,756,435,-900);
   move(434,0,750,757,896,996,-309);
   }
   if (anyof(896,897,308,996,900,435,1018,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p477(void)
#else
int p477()
#endif
{
int done=0;
   bitmod('s',15,4);
   if ((KEY(126)) &&
   isnear(126,-1,-1)) {
   return 0;
   }
if (value[ARG1] == 126) {value[ARG1]=15; (void)fake(1,15);}
if (value[ARG2] == 126) {value[ARG2]=15; (void)fake(2,15);}
   if (KEY(822)) {
   if (anyof(935,1018,-1))   say(64,2929,0);
   if (anyof(288,-1))   say(64,3133,0);
   if (anyof(15,1021,-1))   say(64,3132,0);
   return 0;
   }
   if (anyof(15,1021,-1))   say(64,1932,0);
   if ((KEY(758)) ||
   value[1170]==1) {
   move(435,0,744,-757);
   }
   if (KEY(288)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p295(void)
#else
int p295()
#endif
{
int done=0;
   if ((anyof(11,1051,-1)) &&
   value[31]==2) {
   apport(11,value[1138]);
   }
   if (KEY(822)) {
   if (anyof(935,312,-1))   say(72,3117,0);
   if (anyof(31,172,-1))   say(64,2038,0);
   if (anyof(1050,17,-1))   say(76,2944,17);
   if (KEY(201)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(31)) {
   if (anyof(773,-1))   say(64,1439,0);
   bitmod('s',evar(1172),2);
   return 0;
   }
   if (KEY(762)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(313,0,744,1050,201,-17);
   if (anyof(762,11,1051,172,748,-1)) {
   if (value[31]==0) {
   say(64,1590,0);
   }
   if (have(67,-1,-1)) {
   if (have(59,-1,-1)) {
   say(0,1596,0);
   move(702,-1);
   set('E',31,'c',0,NULL,NULL);
   p153();
   }
   move(311,-2);
   }
   say(0,1592,0);
   move(702,-1);
   p153();
   }}
   if (KEY(312)) {
   bitmod('s',evar(1172),2);
   }
   if (anyof(201,1050,17,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1143]=1672;*bitword(1143)=-1;
   value[1142]=702;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p79(void)
#else
int p79()
#endif
{
int done=0;
   if ((value[26]==1) ||
   value[26]==3) {
   value[26] -= 1;
   }
   if (KEY(822)) {
   if (anyof(1037,-1))   say(64,3166,0);
   if (anyof(935,-1))   say(64,3165,0);
   if (anyof(312,-1))   say(72,3117,1);
   if (KEY(201)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(848,935,-1)) {
   say(64,3165,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (value[32]==1) {
   move(314,0,-751);
   move(324,0,-744);
   move(354,0,-745);
   }
   move(312,0,-748);
   if (anyof(201,-1))   say(64,1418,0);
   }
   if (anyof(201,935,1037,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (KEY(312)) {
   bitmod('s',evar(1172),2);
   }
return done;
}
#ifdef __STDC__
int p672(void)
#else
int p672()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if (keyword(758,777,-1)) {
   move(315,-2);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(313,0,748,757,-896);
   if (anyof(744,745,751,756,-1)) {
   p665();
   move(315,-2);
   }}
   if (anyof(896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p673(void)
#else
int p673()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,746,748,750,745,751,747,749,-1)) {
   p401();
   lval[0]=744;lbts[0*VARSIZE]=-1;
   lval[0] += value[16];
   lval[0] -= 1;
   if (((value[1170]==2) &&
   lval[0]==value[1137]) ||
   lval[0]==value[1136]) {
   value[318] = irand(4 - 0) + 0;
   set('E',319,'e',318,NULL,NULL);
   if (value[319]>0) {
   bitmod('s',319,3);
   } else {
   bitmod('c',319,3);
   }
   p240(-1,316);
   move(316,-2);
   }
   p665();
   say(2,1138,0);
   if (value[16]!=0) {
   say(0,16,0);
   }
   longjmp(loop_back,1);
   }}
return done;
}
#ifdef __STDC__
int p674(void)
#else
int p674()
#endif
{
int done=0;
   p665();
   if (KEY(822)) {
   if (anyof(896,897,308,901,-1))   say(72,2895,896);
   if (anyof(1016,1126,-1))   say(64,2916,0);
   return 0;
   }
   if (KEY(1126)) {
   if (anyof(764,-1))   say(72,2917,1);
   if (anyof(808,808,807,-1))   say(72,2917,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(323,0,754,896,901,-756);
   if (anyof(744,746,748,750,745,751,747,749,-1)) {
   move(315,-1);
   p665();
   longjmp(loop_back,1);
   }}
   if (anyof(901,896,1016,1126,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p615(void)
#else
int p615()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,899,-1))   say(76,2895,1137);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(322,0,744,899,-322);
   move(316,0,753,896,-748);
   }
   if (anyof(300,899,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p664(void)
#else
int p664()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,887,-1))   say(76,2895,1137);
   if (anyof(1133,322,-1))   say(64,1994,0);
   return 0;
   }
   if (anyof(767,769,-1)) {
   return 0;
   }
   if ((keyword(765,123,-1)) &&
   have(123,0,1)) {
   apport(123,HERE);
   set('E',123,'c',0,NULL,NULL);
   say(64,1659,0);
   }
   if (((anyof(756,322,-1)) &&
   value[1170]==1) ||
   keyword(756,322,-1)) {
   say(64,2915,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(323,0,750,757,-323);
   move(321,0,744,887,-321);
   if (anyof(322,-1))   say(64,2915,0);
   }
   if (anyof(1133,322,899,887,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p130(void)
#else
int p130()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(321,-1))   say(72,2930,0);
   if (anyof(887,-1))   say(72,2895,887);
   if (KEY(979)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(321)) &&
   anyof(753,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(319,0,753,848,321,-319);
   move(322,0,748,887,-322);
   if (anyof(979,-1))   say(64,1418,0);
   }
   if (anyof(887,321,979,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
