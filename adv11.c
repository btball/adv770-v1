/* adv11.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p117(void)
#else
int p117()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   return 0;
   }
   if (KEY(761)) {
   p722(0,0);
   }
   if (KEY(793)) {
   p75();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(638,0,746,-849);
   move(636,0,750,-850);
   if (anyof(635,898,912,-1)) {
   p329(-1,638,-1,746,-1,636,-1,750);
   }}
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p719(void)
#else
int p719()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   return 0;
   }
   if (KEY(761)) {
   p722(0,0);
   }
   if (KEY(793)) {
   p75();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(632,0,750,635,898,912,-850);
   }
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p723(void)
#else
int p723()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,935,376,-1))   say(76,3022,1137);
   return 0;
   }
   if (KEY(761)) {
   p722(0,0);
   }
   if (KEY(793)) {
   p75();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (((anyof(635,898,912,-1)) &&
   (value[1139]==631)) ||
   anyof(746,849,-1)) {
   bitmod('s',637,16);
   move(637,-2);
   }
   if ((anyof(635,898,912,-1)) ||
   anyof(750,850,-1)) {
   move(631,-2);
   }}
   if (anyof(635,898,912,898,1061,1061,993,999,1007,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p488(void)
#else
int p488()
#endif
{
int done=0;
if (value[ARG1] == 131) value[ARG1]=154;
if (value[ARG2] == 131) value[ARG2]=154;
   bitmod('s',155,4);
   apport(154,value[1138]);
   p50();
   p677(0,0);
   if (KEY(822)) {
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(200,565,1002,-1))   say(76,2585,1137);
   if (anyof(1000,-1))   say(72,2585,1002);
   if (anyof(921,-1))   say(64,2411,0);
   if (anyof(1011,17,-1))   say(64,2858,0);
   return 0;
   }
   if ((keyword(756,727,-1)) &&
   anyof(1011,17,-1)) {
   say(64,2859,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(548,0,-748);
   move(554,0,-744);
   if (anyof(439,999,-1)) {
   p329(-1,554,-1,744,-1,548,-1,748);
   }
   if (anyof(957,-1))   say(64,2622,0);
   if (anyof(1011,-1))   say(64,2859,0);
   if ((KEY(760)) &&
   (value[1139]==586)) {
   say(72,1380,2);
   }}
   if (anyof(200,1000,565,1002,957,921,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(17,1011,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p502(void)
#else
int p502()
#endif
{
int done=0;
if (value[ARG1] == 131) value[ARG1]=154;
if (value[ARG2] == 131) value[ARG2]=154;
   apport(154,value[1138]);
   p50();
   p677(0,1);
   if (KEY(822)) {
   if (anyof(998,571,-1))   say(72,2846,0);
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(1011,17,-1))   say(64,2858,0);
   return 0;
   }
   if ((keyword(756,727,-1)) &&
   anyof(1011,17,-1)) {
   say(64,2859,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(547,0,-745);
   move(549,0,-749);
   move(571,0,751,571,753,-998);
   if (anyof(439,999,-1)) {
   p329(-1,547,-1,745,-1,549,-1,749);
   }
   if (anyof(957,-1))   say(64,2622,0);
   if (anyof(1011,-1))   say(64,2859,0);
   }
   if (anyof(998,957,571,1011,17,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p501(void)
#else
int p501()
#endif
{
int done=0;
   p50();
   p677(0,1);
   if (KEY(822)) {
   if (anyof(1133,998,-1))   say(72,2846,2);
   if (anyof(957,-1))   say(72,1759,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(548,0,-746);
   move(550,0,-750);
   move(558,0,744,957,998,753,-848);
   if (anyof(439,999,-1)) {
   p329(-1,548,-1,746,-1,550,-1,750);
   }}
   if (anyof(998,957,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p503(void)
#else
int p503()
#endif
{
int done=0;
   p50();
   p677(0,0);
   if (KEY(822)) {
   if (anyof(998,-1))   say(72,2847,1);
   if (anyof(957,-1))   say(72,1759,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(549,0,-747);
   move(551,0,-751);
   if (anyof(439,999,-1)) {
   p329(-1,549,-1,747,-1,551,-1,751);
   }
   if (anyof(998,753,957,-1))   say(72,2847,1);
   }
   if (anyof(998,957,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p504(void)
#else
int p504()
#endif
{
int done=0;
   p50();
   p677(0,1);
   if (KEY(822)) {
   if (anyof(998,-1))   say(72,2846,1);
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(1000,-1))   say(72,2765,1000);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(550,0,-748);
   move(552,0,-744);
   move(555,0,746,753,848,998,957,-1000);
   if (anyof(439,999,-1)) {
   p329(-1,552,-1,744,-1,550,-1,748);
   }}
   if (anyof(998,1000,957,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p500(void)
#else
int p500()
#endif
{
int done=0;
   p50();
   p677(0,0);
   if (KEY(822)) {
   if (anyof(1133,998,-1))   say(72,2847,0);
   if (anyof(957,-1))   say(72,1759,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(998,753,957,-1))   say(72,2847,0);
   move(551,0,-749);
   move(553,0,-745);
   if (anyof(439,999,-1)) {
   p329(-1,553,-1,745,-1,551,-1,749);
   }}
   if (anyof(998,957,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p498(void)
#else
int p498()
#endif
{
int done=0;
   p50();
   p677(0,1);
   if (KEY(822)) {
   if (anyof(998,-1))   say(72,2846,2);
   if (anyof(999,-1))   say(64,2755,0);
   if (anyof(1000,-1))   say(72,2585,1000);
   if (anyof(957,-1))   say(72,1759,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(554,0,-746);
   move(552,0,-750);
   move(562,0,748,753,998,957,-848);
   if (anyof(439,999,-1)) {
   p329(-1,554,-1,746,-1,552,-1,750);
   }}
   if (anyof(998,1000,957,974,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p499(void)
#else
int p499()
#endif
{
int done=0;
   if (!((anyof(790,796,-1)) ||
   keyword(764,120,-1))) {
   p50();
   }
   if (KEY(822)) {
   if (anyof(120,-1))   say(64,2851,0);
   }
   if (KEY(822)) {
   if (anyof(1133,1126,223,-1))   say(64,2849,0);
   if (anyof(1000,-1))   say(64,2850,0);
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(898,-1))   say(64,2409,0);
   if (anyof(974,-1))   say(64,2862,0);
   return 0;
   }
   if (keyword(848,1000,-1)) {
   if (anyof(1000,-1))   say(64,2850,0);
   }
   if (keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(898)) ||
   value[1170]==1) {
   if (anyof(762,-1))   say(64,1960,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(547,0,-747);
   move(553,0,-751);
   move(566,0,749,849,-898);
   if (anyof(439,999,-1)) {
   p329(-1,553,-1,751,-1,547,-1,747);
   }
   if (anyof(850,-1))   say(72,1706,3);
   }
   if (anyof(223,1126,1000,898,957,974,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p718(void)
#else
int p718()
#endif
{
int done=0;
   p677(0,1);
   if (KEY(822)) {
   if (anyof(754,1007,933,573,-1))   say(64,2519,0);
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(998,-1))   say(72,2846,0);
   if (anyof(439,-1))   say(76,2943,439);
   if (anyof(998,-1))   say(64,2991,0);
   if (anyof(575,-1))   say(64,2990,0);
   if (KEY(571)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(548,0,747,998,-439);
   if (anyof(957,-1))   say(64,2622,0);
   if (anyof(571,-1))   say(64,1418,0);
   if (anyof(754,933,573,1007,-1)) {
   if (have(45,-1,-1)) {
   if (!(bitest(569,16))) {
   say(64,2428,0);
   }
   move(572,-2435);
   } else {
   say(64,2430,0);
   }}}
   if (anyof(439,1007,571,998,957,573,933,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(575,998,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p57(void)
#else
int p57()
#endif
{
int done=0;
   p677(0,3);
   if ((KEY(790)) &&
   value[1170]==1) {
   p321(0,0);
   if (value[1243]!=0) {
   return 0;
   }}
   if (anyof(120,790,-1))   say(64,3038,0);
   if (KEY(822)) {
   if (anyof(573,933,-1))   say(72,2766,0);
   if (anyof(957,-1))   say(72,1759,0);
   if (anyof(974,974,-1))   say(64,3037,0);
   if (anyof(1007,-1))   say(72,3039,0);
   if (anyof(993,-1))   say(64,3040,0);
   return 0;
   }
   if (KEY(761)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((anyof(762,756,-1)) &&
   KEY(933)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((anyof(753,760,-1)) &&
   (value[1139]==571)) {
   say(64,2431,0);
   }
   if (anyof(957,-1))   say(64,2622,0);
   if (anyof(760,762,744,933,573,751,-1)) {
   if (have(45,0,2)) {
   move(573,-2429);
   }
   say(64,2432,0);
   }}
   if (anyof(573,933,957,921,1131,974,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1007,993,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p85(void)
#else
int p85()
#endif
{
int done=0;
   p677(0,3);
   if ((KEY(790)) &&
   value[1170]==1) {
   p321(0,0);
   if (value[1243]!=0) {
   return 0;
   }}
   if (anyof(120,790,-1))   say(64,3041,0);
   if (KEY(822)) {
   if (anyof(933,573,-1))   say(72,2766,1);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(935,753,920,-1))   say(72,2983,1);
   if (anyof(1007,-1))   say(72,3039,1);
   if (anyof(575,-1))   say(64,2990,0);
   return 0;
   }
   if ((anyof(920,1126,753,935,-1)) ||
   value[1170]==1) {
   if (anyof(848,-1))   say(72,1818,1);
   }
   if ((anyof(756,762,-1)) &&
   KEY(933)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(745,1007,575,-1)) {
   if (have(45,0,2)) {
   say(76,2096,45);
   }
   move(574,-2);
   }
   if (((KEY(760)) &&
   (value[1139]==572)) ||
   anyof(762,748,933,573,747,-1)) {
   if (have(45,0,2)) {
   move(572,-2429);
   }
   say(64,2432,0);
   }
   if (anyof(957,-1))   say(72,1818,1);
   }
   if (anyof(933,573,935,920,1007,575,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p84(void)
#else
int p84()
#endif
{
int done=0;
   p677(0,3);
   if (anyof(848,-1))   say(72,1818,2);
   if (KEY(822)) {
   if (anyof(120,575,-1))   say(72,2482,0);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(753,935,920,-1))   say(72,2983,0);
   if (anyof(1126,-1))   say(64,2980,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(573,0,-749);
   if (anyof(848,957,-1))   say(72,1818,2);
   if (anyof(756,745,575,-1)) {
   if (bitest(575,4)) {
   move(575,-2481);
   }
   set('V',1172,'c',46,NULL,NULL);
   say(64,1314,0);
   }}
   if (anyof(957,1126,575,1126,920,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p902(void)
#else
int p902()
#endif
{
int done=0;
   p184(-1,8);
   if ((KEY(798)) &&
   anyof(8,74,134,129,1015,30,-1)) {
   say(64,1872,0);
   }
if (value[ARG1] == 8) value[ARG1]=19;
if (value[ARG2] == 8) value[ARG2]=19;
   set('E',19,'c',0,NULL,NULL);
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3370,0);
   if (anyof(74,-1))   say(64,1872,0);
   if (anyof(120,1071,936,575,-1))   say(72,2482,1);
   if (anyof(206,-1))   say(76,1841,206);
   if (anyof(1072,376,-1))   say(64,2988,0);
   if (value[575]>0) {
   if (anyof(896,897,308,-1))   say(64,2973,0);
   }
   return 0;
   }
   if (keyword(764,206,-1)) {
   say(76,1841,206);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(574,0,747,-757);
   if (value[575]==1) {
   if (value[1254]==0) {
   p146();
   longjmp(loop_back,1);
   }
   set('E',576,'c',1,NULL,NULL);
   bitmod('c',575,8);
   move(576,0,756,576,308,896,897,-751);
   }
   if (anyof(751,756,-1))   say(72,2495,751);
   }
   if ((anyof(8,74,134,129,1015,30,-1)) ||
   anyof(206,575,1072,376,74,1071,936,-1)) {
   bitmod('s',evar(1172),1);
   }
   if ((anyof(896,897,308,576,-1)) &&
   value[575]>0) {
   bitmod('s',evar(1172),1);
   return 0;
   }
return done;
}
#ifdef __STDC__
int p594(void)
#else
int p594()
#endif
{
int done=0;
   if (value[576]==0) {
   set('E',19,'c',1,NULL,NULL);
   } else {
   set('E',19,'c',0,NULL,NULL);
   }
   p184(-1,19);
if (value[ARG1] == 8) value[ARG1]=19;
if (value[ARG2] == 8) value[ARG2]=19;
   if (value[576]==1) {
   if (anyof(8,74,1015,134,129,30,-1)) {
   if ((anyof(798,822,-1)) ||
   keyword(798,8,-1)) {
   say(64,1872,0);
   }
   bitmod('s',evar(1172),1);
   }
   if (value[1254]==0) {
   p146();
   longjmp(loop_back,1);
   }}
   if (anyof(74,1015,134,129,30,-1))   say(76,1312,1137);
   if (KEY(798)) {
   if (anyof(19,-1))   say(76,1553,8);
   }
   if (KEY(822)) {
   if (anyof(897,896,308,576,-1))   say(72,2895,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(747,757,-1)) {
   if (value[576]==1) {
   move(575,0,747,-757);
   } else {
   say(72,2495,751);
   }}
   move(577,0,751,753,897,896,-576);
   }
   if (anyof(897,896,308,576,757,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p595(void)
#else
int p595()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(309)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,308,896,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(578,0,-744);
   move(576,0,754,-747);
   move(579,0,753,-750);
   if (anyof(897,896,308,-1)) {
   p329(-1,576,-1,747,-1,579,-1,750);
   }
   if (anyof(309,-1))   say(64,1418,0);
   }
   if (anyof(897,308,896,309,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p598(void)
#else
int p598()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(1023,-1))   say(64,3042,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(577,0,757,749,308,897,-896);
   }
   if (anyof(897,896,308,1023,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p596(void)
#else
int p596()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(309)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(308,897,896,-1))   say(72,2894,897);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(577,0,-746);
   move(580,0,749,-753);
   if (anyof(754,744,-1)) {
   set('E',639,'c',0,NULL,NULL);
   move(639,-2);
   if (anyof(897,308,896,-1))   say(72,2896,897);
   }
   if (anyof(309,-1))   say(64,1418,0);
   }
   if (anyof(309,897,896,308,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p804(void)
#else
int p804()
#endif
{
int done=0;
   p184(-1,74);
   if (anyof(129,74,935,1015,30,134,-1)) {
   if (anyof(798,822,-1)) {
   say(64,2645,0);
   }
   if (anyof(792,-1))   say(64,1322,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(980,901,892,-1))   say(72,2470,0);
   if (anyof(308,897,896,-1))   say(76,2895,308);
   if (anyof(1064,935,-1))   say(72,3043,1064);
   return 0;
   }
   if (keyword(852,1064,-1)) {
if (value[ARG1] == 852) value[ARG1]=848;
if (value[ARG2] == 852) value[ARG2]=848;
   }
   if (((anyof(980,892,901,-1)) &&
   anyof(848,754,-1)) ||
   keyword(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(640,2529,754,848,892,980,-901);
   move(579,0,749,896,897,-308);
   }
   if ((anyof(129,74,935,1015,30,134,-1)) ||
   anyof(1064,980,896,897,308,892,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p801(void)
#else
int p801()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(753,892,901,980,-1))   say(64,2471,0);
   if (anyof(1064,-1))   say(76,3043,1137);
   if (anyof(935,-1))   say(72,3043,1064);
   return 0;
   }
   if (keyword(852,1064,-1)) {
if (value[ARG1] == 852) value[ARG1]=848;
if (value[ARG2] == 852) value[ARG2]=848;
   }
   if (((KEY(848)) &&
   anyof(980,753,-1)) ||
   keyword(753,980,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(753,848,980,892,901,-1)) {
   set('E',639,'c',1,NULL,NULL);
   move(639,-2529);
   }
   move(641,0,746,897,896,-308);
   }
   if (anyof(1064,980,935,897,896,308,892,901,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p19(void)
#else
int p19()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,20);
   if (anyof(935,-1))   say(64,3421,0);
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(1007,-1))   say(64,3045,0);
   if (anyof(451,-1))   say(64,3046,0);
   return 0;
   }
   if ((KEY(761)) &&
   anyof(754,756,641,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(746,641,1007,-1)) {
   if (bitest(642,4)) {
   move(642,-2418);
   }
   set('V',1172,'c',19,NULL,NULL);
   say(64,2546,0);
   }
   move(640,0,750,897,896,-308);
   if (KEY(761)) {
   say(8,2439,0);
   move(702,-1);
   p153();
   }}
   if (anyof(1007,376,897,896,308,451,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=2419;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p9(void)
#else
int p9()
#endif
{
int done=0;
   if (value[642]==0) {
   set('E',642,'c',1,NULL,NULL);
   }
   if (KEY(822)) {
   if (anyof(935,-1))   say(64,3421,0);
   p22(0,0);
   return 0;
   }
   p21(0,0);
return done;
}
#ifdef __STDC__
int p10(void)
#else
int p10()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   p21(0,1);
return done;
}
#ifdef __STDC__
int p11(void)
#else
int p11()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   p21(0,1);
return done;
}
#ifdef __STDC__
int p12(void)
#else
int p12()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   p21(0,2);
return done;
}
#ifdef __STDC__
int p13(void)
#else
int p13()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   p21(0,2);
return done;
}
#ifdef __STDC__
int p14(void)
#else
int p14()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(651,0,-749);
   }
   p21(0,1);
return done;
}
#ifdef __STDC__
int p15(void)
#else
int p15()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   p21(0,1);
return done;
}
#ifdef __STDC__
int p16(void)
#else
int p16()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(76,2585,376);
   if (anyof(16,-1))   say(64,3033,0);
   return 0;
   }
   p21(0,3);
   if (KEY(16)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p18(void)
#else
int p18()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,21);
   if (anyof(31,-1))   say(64,2038,0);
   if (anyof(910,898,-1))   say(64,2039,0);
   if (anyof(16,1019,-1))   say(64,2040,0);
   return 0;
   }
   if (KEY(31)) {
   if (anyof(773,-1))   say(64,1439,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(761)) &&
   anyof(754,641,31,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(451,0,-746);
   move(649,0,-750);
   if (KEY(761)) {
   say(8,2439,3);
   move(702,-1);
   p153();
   }}
   if (anyof(376,31,910,16,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1140]=702;*bitword(1140)=-1;
   value[1143]=2419;*bitword(1143)=-1;
   value[1141]=2420;*bitword(1141)=-1;
return done;
}
#ifdef __STDC__
int p597(void)
#else
int p597()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(309)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,308,896,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(581,0,744,-308);
   move(582,0,753,-749);
   move(579,0,754,-745);
   if (anyof(897,896,308,-1)) {
   p329(-1,582,-1,749,-1,579,-1,745);
   }
   if (anyof(896,897,308,-1))   say(72,2896,896);
   if (anyof(309,-1))   say(64,1418,0);
   }
   if (anyof(308,897,309,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p599(void)
#else
int p599()
#endif
{
int done=0;
   if (anyof(268,137,-1)) {
   if (KEY(822)) {
   say(64,2530,0);
   } else    if (anyof(848,-1))   say(64,1534,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(897,308,896,-1))   say(72,2895,897);
   if (anyof(1063,1012,-1))   say(64,3044,0);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(580,0,757,897,896,308,-747);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(1012,1063,896,897,308,300,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p600(void)
#else
int p600()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(897,896,308,-1))   say(72,2895,897);
   if (anyof(921,901,-1))   say(64,3034,0);
   if (anyof(899,-1))   say(64,3035,0);
   if (anyof(957,998,538,480,-1))   say(64,3036,0);
   if (KEY(576)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(899,757,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(556,2531,757,754,748,901,-998);
   move(556,2531,921,899,538,-480);
   move(580,0,745,897,896,308,756,-576);
   }
   if (anyof(576,897,896,308,899,901,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(921,957,998,538,480,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=556;*bitword(1142)=-1;
   value[1143]=2558;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p489(void)
#else
int p489()
#endif
{
int done=0;
   p677(0,4);
   if (KEY(822)) {
   if (anyof(998,-1))   say(72,2846,2);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(120,997,-1))   say(64,2745,0);
   if (anyof(439,-1))   say(72,2735,1);
   if (anyof(1000,-1))   say(72,2765,1000);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(551,0,750,-754);
   move(556,0,-747);
   move(557,0,746,753,998,-957);
   if (anyof(439,-1))   say(72,2152,0);
   if (anyof(1000,-1))   say(64,1418,0);
   }
   if (anyof(439,1000,957,998,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p490(void)
#else
int p490()
#endif
{
int done=0;
   p677(0,4);
   if (KEY(822)) {
   if ((anyof(927,931,1126,45,-1)) ||
   value[1170]==1) {
   if ((((value[556]==1) ||
   value[1170]==1) ||
   KEY(931)) &&
   !(bitest(45,4))) {
   bitmod('s',571,8);
   set('E',556,'c',2,NULL,NULL);
   apport(45,value[1138]);
   bitmod('s',45,4);
   say(64,2489,0);
   }
   if (!((KEY(45)) ||
   value[1170]==1)) {
   if (KEY(927)) {
   if ((value[556]==1) &&
   !(bitest(45,4))) {
if (value[ARG1] == 927) {value[ARG1]=45; (void)fake(1,45);}
if (value[ARG2] == 927) {value[ARG2]=45; (void)fake(2,45);}
   return 0;
   }
   say(64,1999,0);
   }
   if (!(KEY(1126))) {
   say(76,2025,1137);
   }}}
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(998,-1))   say(64,2848,0);
   if (anyof(131,972,1012,-1))   say(64,2868,0);
   if (anyof(1126,-1))   say(64,2870,0);
   return 0;
   }
   if (KEY(848)) {
   if (anyof(131,-1))   say(64,2869,0);
   if (anyof(753,754,957,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(848,957,998,753,-1))   say(64,2848,0);
   if (anyof(751,754,760,-1)) {
   if (value[556]==0) {
   set('E',556,'c',1,NULL,NULL);
   say(64,2490,0);
   }
   move(555,-2);
   }}
   if (anyof(957,998,1012,131,972,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p491(void)
#else
int p491()
#endif
{
int done=0;
   p677(0,4);
if (value[ARG1] == 131) value[ARG1]=153;
if (value[ARG2] == 131) value[ARG2]=153;
   if (anyof(153,-1))   say(76,1438,153);
   if (KEY(822)) {
   if (anyof(439,-1))   say(72,2735,1);
   if (anyof(998,-1))   say(72,2846,2);
   if (anyof(957,-1))   say(72,1759,1);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(555,0,750,754,-998);
   move(564,0,745,753,-957);
   move(558,0,-748);
   if (anyof(439,-1))   say(72,2152,0);
   }
   if (anyof(439,998,957,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p492(void)
#else
int p492()
#endif
{
int done=0;
   p677(0,4);
   if (KEY(822)) {
   if (anyof(439,-1))   say(72,2735,1);
   if (anyof(997,-1))   say(64,2745,0);
   if (anyof(933,573,754,31,765,-1))   say(64,2519,0);
   if (anyof(998,-1))   say(72,2846,1);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(898,575,-1))   say(76,2585,1137);
   return 0;
   }
   if (KEY(761)) {
   if ((anyof(754,933,573,-1)) ||
   value[1170]==1) {
   move(702,-1);
   say(0,2829,0);
   p153();
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(557,0,751,753,998,848,-957);
   move(549,0,747,-754);
   if (anyof(933,573,-1))   say(64,1765,0);
   if (anyof(439,-1))   say(72,2152,0);
   if (anyof(575,898,-1))   say(64,2622,0);
   }
   if (anyof(439,949,997,933,573,998,957,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(898,575,31,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=2559;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p493(void)
#else
int p493()
#endif
{
int done=0;
if (value[ARG1] == 131) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 131) {value[ARG2]=153; (void)fake(2,153);}
   p677(0,4);
if (value[ARG1] == 202) {value[ARG1]=197; (void)fake(1,197);}
if (value[ARG2] == 202) {value[ARG2]=197; (void)fake(2,197);}
   if (value[153]==1) {
   set('E',559,'c',1,NULL,NULL);
   }
   if (KEY(822)) {
   if (KEY(1010)) {
   if (value[153]==1) {
   say(72,2856,1);
   } else {
   say(72,2856,0);
   }}
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(445,872,-1))   say(76,2971,445);
   if (anyof(197,754,-1))   say(64,1756,0);
   if (anyof(11,-1))   say(76,1757,153);
   if (anyof(998,-1))   say(64,2848,0);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(754,197,-1)) {
   say(64,1756,0);
   }
   if (value[153]==1) {
if (value[ARG1] == 11) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 11) {value[ARG2]=153; (void)fake(2,153);}
   }
   if (((anyof(748,762,-1)) &&
   value[153]==0) ||
   KEY(761)) {
   say(64,2426,0);
   }
   if (KEY(848)) {
   if ((value[1170]==1) ||
   anyof(753,957,998,-1)) {
   say(64,2828,0);
   }
   if (((value[1170]==1) ||
   KEY(153)) &&
   value[153]!=1) {
   say(64,2424,0);
   }}
   if ((KEY(762)) &&
   KEY(197)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(153)) {
   if (anyof(762,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(120)) {
   say(64,2827,0);
   }
   if (KEY(756)) {
   if (value[153]==1) {
   set('T',3221,'c',1,NULL,NULL);
   move(560,-2425);
   } else {
   bitmod('s',evar(1172),1);
   return 0;
   }}}
   if ((KEY(758)) ||
   value[1170]==1) {
   move(563,0,746,-1010);
   if (anyof(748,762,848,-1)) {
   set('T',3221,'c',1,NULL,NULL);
   move(560,-2425);
   }}
   if (anyof(998,957,197,1010,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=2560;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p494(void)
#else
int p494()
#endif
{
int done=0;
if (value[ARG1] == 131) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 131) {value[ARG2]=153; (void)fake(2,153);}
   p677(0,4);
if (value[ARG1] == 202) {value[ARG1]=197; (void)fake(1,197);}
if (value[ARG2] == 202) {value[ARG2]=197; (void)fake(2,197);}
   if (KEY(822)) {
   if (anyof(974,-1))   say(64,3427,0);
   if (anyof(197,754,-1))   say(64,1756,0);
   if (anyof(11,-1))   say(76,1757,153);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(1010,-1))   say(72,2856,2);
   return 0;
   }
   if (anyof(974,-1))   say(76,3314,153);
   if ((KEY(848)) &&
   anyof(754,197,-1)) {
   say(64,1756,0);
   }
   if (anyof(761,-1))   say(64,2426,0);
   if (KEY(11)) {
if (value[ARG1] == 11) {value[ARG1]=153; (void)fake(1,153);}
if (value[ARG2] == 11) {value[ARG2]=153; (void)fake(2,153);}
   }
   if ((KEY(762)) &&
   anyof(197,153,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(153)) {
   if (KEY(848)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(756)) {
   if (value[153]==1) {
   set('T',3221,'c',0,NULL,NULL);
   move(559,-2425);
   } else {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (KEY(120)) {
   say(64,2827,0);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,848,762,-1)) {
   set('T',3221,'c',0,NULL,NULL);
   move(559,-2425);
   }
   move(561,0,746,1010,-565);
   }
   if (anyof(197,957,11,1010,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=2560;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p495(void)
#else
int p495()
#endif
{
int done=0;
   p677(0,2);
   if (KEY(822)) {
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(998,-1))   say(72,2846,1);
   if (anyof(1133,974,-1))   say(64,2862,0);
   if (anyof(921,-1))   say(72,2852,921);
   if (anyof(949,-1))   say(64,2587,0);
   if (anyof(920,-1))   say(72,2586,920);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(949,439,920,-1))   say(64,2630,0);
   move(553,0,751,-754);
   move(563,0,747,-753);
   }
   if (anyof(957,998,974,921,949,920,974,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p496(void)
#else
int p496()
#endif
{
int done=0;
   p677(0,2);
if (value[ARG1] == 131) value[ARG1]=973;
if (value[ARG2] == 131) value[ARG2]=973;
   if (KEY(822)) {
   if (anyof(1010,-1))   say(72,2886,1);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(998,-1))   say(72,2846,1);
   if (anyof(949,-1))   say(64,2587,0);
   if (anyof(921,-1))   say(72,2852,921);
   if (anyof(197,-1))   say(76,2944,197);
   return 0;
   }
   if (KEY(973)) {
   if (anyof(848,-1))   say(72,2661,1);
   say(72,2423,973);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if ((KEY(760)) &&
   (value[1139]==570)) {
   say(64,2517,0);
   }
   if (anyof(748,753,197,-1)) {
   set('T',3221,'c',0,NULL,NULL);
   move(559,-2);
   }
   move(562,0,744,-754);
   move(564,0,-751);
   move(566,2478,-746);
   if (KEY(1010)) {
   set('T',3221,'c',0,NULL,NULL);
   p329(-1,564,-1,751,-1,559,-1,748);
   }}
   if (KEY(773)) {
   if ((KEY(898)) ||
   value[1170]==1) {
   say(64,2863,0);
   }}
   if (anyof(1010,957,197,998,949,921,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=566;*bitword(1142)=-1;
   value[1143]=2561;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p497(void)
#else
int p497()
#endif
{
int done=0;
   if (ishere(165,-1,-1)) {
   value[165] += 1;
   }
   p677(0,4);
if (value[ARG1] == 131) {value[ARG1]=973; (void)fake(1,973);}
if (value[ARG2] == 131) {value[ARG2]=973; (void)fake(2,973);}
   if (KEY(822)) {
   if (anyof(1010,-1))   say(72,2886,0);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(973,-1))   say(76,2662,1137);
   if (anyof(972,-1))   say(64,2017,0);
   if (anyof(998,-1))   say(64,2887,0);
   return 0;
   }
   if (KEY(973)) {
   if (anyof(848,-1))   say(72,2661,0);
   say(72,1438,973);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(753,754,744,745,747,748,750,751,998,-1))   say(64,2887,0);
   if (anyof(749,754,746,1010,760,-1)) {
   if (ishere(165,-1,-1)) {
   set('E',165,'c',3,NULL,NULL);
   say(0,165,0);
   apport(165,702);
   }
   move(557,0,749,-754);
   move(563,0,-746);
   if (KEY(1010)) {
   p329(-1,557,-1,749,-1,563,-1,746);
   }}}
   if (anyof(1010,957,973,972,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p83(void)
#else
int p83()
#endif
{
int done=0;
   p677(0,4);
   p184(-1,74);
   if (anyof(74,1015,134,129,30,-1)) {
   if (anyof(798,822,-1)) {
   set('T',2635,'c',2,NULL,NULL);
   bitmod('s',evar(1210),5);
   say(64,2475,0);
   }
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   }
   say(76,1877,74);
   }
   if (KEY(822)) {
   if (anyof(172,898,754,-1))   say(64,2767,0);
   if (anyof(565,-1))   say(64,1375,0);
   if (anyof(756,750,965,-1))   say(64,1376,0);
   if (anyof(439,-1))   say(72,2735,1);
   if (anyof(998,-1))   say(64,2848,0);
   if (anyof(1008,-1))   say(72,2843,1);
   if (anyof(475,-1))   say(64,2974,0);
   if (anyof(935,-1))   say(64,2975,0);
   if (anyof(1007,933,573,-1))   say(64,1739,0);
   if (anyof(920,-1))   say(64,2977,0);
   if (anyof(890,1070,-1))   say(64,2978,0);
   return 0;
   }
   if (KEY(848)) {
   if (anyof(998,753,-1))   say(64,2848,0);
   if (anyof(565,935,475,-1))   say(64,2976,0);
   }
   value[1142]=702;*bitword(1142)=-1;
   value[1143]=2562;*bitword(1143)=-1;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(565,0,756,750,-565);
   if (KEY(744)) {
   set('T',3221,'c',1,NULL,NULL);
   move(560,-2);
   }
   if (anyof(439,-1))   say(72,2152,0);
   if (anyof(573,933,-1))   say(64,1765,0);
   }
   if ((anyof(74,1015,134,129,30,-1)) ||
   anyof(565,1070,965,439,573,933,998,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p827(void)
#else
int p827()
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
   if (KEY(822)) {
   if (anyof(376,753,-1))   say(72,2011,19);
   }
   if ((value[565]<3) &&
   have(67,-1,-1)) {
   value[565] += 1;
   }
   if (((anyof(757,746,-1)) &&
   value[565]<4) &&
   isnear(67,-1,-1)) {
   p828(0,0);
   longjmp(loop_back,1);
   }
   if (value[565]==4) {
   if (anyof(757,746,-1))   say(64,2415,0);
   if (KEY(822)) {
   if (anyof(892,-1))   say(72,1378,3);
   if (anyof(754,756,7,-1))   say(64,2520,0);
   }
   if (anyof(754,756,7,758,892,-1)) {
   if ((KEY(758)) ||
   value[1170]==1) {
   apport(67,565);
   set('E',565,'c',5,NULL,NULL);
   apport(147,572);
   if (have(107,-1,-1)) {
   apport(107,547);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (have(value[1146],-1,-1)) {
   set('L',2,'c',1,lval, lbts);
   if (bitest(evar(1146),16)) {
   lval[0]=value[value[1146]];lbts[0*VARSIZE]=0;
   if (lval[0]==2) {
   set('L',2,'c',0,lval, lbts);
   }}
   if (lval[2]==1) {
   lval[1] = irand(5);
   if (lval[1]==4) {
   apport(value[1146],548);
   } else    if (lval[1]==3) {
   apport(value[1146],566);
   } else    if (lval[1]==2) {
   apport(value[1146],547);
   } else    if (lval[1]==1) {
   apport(value[1146],561);
   } else {
   apport(value[1146],565);
   }
   if ((value[1146]==119)) {
   set('E',119,'c',2,NULL,NULL);
   }}}}
   move(547,-1);
   bitmod('c',evar(1170),0);
   say(0,2414,0);
   p400();
   longjmp(loop_back,1);
   }
   say(64,1396,0);
   }}
   if (KEY(822)) {
   if (KEY(565)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(959,-1))   say(72,1378,0);
   if (anyof(475,376,-1))   say(72,1378,1);
   if (anyof(919,-1))   say(72,1378,2);
   if (anyof(1133,-1))   say(72,1378,4);
   if (anyof(935,-1))   say(72,1378,5);
   if (anyof(757,965,-1))   say(64,2769,0);
   if (anyof(1008,-1))   say(72,2843,0);
   if (anyof(1009,-1))   say(64,2844,0);
   return 0;
   }
   if (anyof(935,1133,959,1008,-1)) {
   if (anyof(808,-1))   say(76,2485,1137);
   if (KEY(1008)) {
   if (anyof(792,-1))   say(64,1322,0);
   }
   if (anyof(792,-1))   say(76,2842,1137);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(561,0,757,760,-746);
   if (keyword(758,565,-1)) {
   say(76,2612,565);
   }
   if (KEY(756)) {
   if ((KEY(565)) ||
   value[1170]==1) {
   say(76,2612,565);
   }}}
   if ((value[565]==4) &&
   KEY(7)) {
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(959,475,376,935,919,1133,965,1008,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (KEY(1009)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p81(void)
#else
int p81()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (KEY(790)) {
   (*procs[790])();
   }
   p677(0,0);
   if (KEY(822)) {
   if (anyof(1127,-1))   say(64,2864,0);
   if (anyof(921,-1))   say(64,2411,0);
   if (anyof(1126,920,-1))   say(72,2632,0);
   if (anyof(998,746,-1))   say(72,2847,1);
   if (anyof(538,-1))   say(64,2866,0);
   if (anyof(898,120,-1))   say(64,2867,0);
   if (anyof(172,-1))   say(64,2865,0);
   if (anyof(949,-1))   say(72,2944,949);
   if (anyof(993,-1))   say(64,3264,0);
   return 0;
   }
   if (keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(848)) &&
   anyof(753,750,1126,920,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(554,0,744,754,-850);
   move(567,0,753,748,-849);
   if (anyof(898,1127,-1)) {
   p329(-1,554,-1,744,-1,567,-1,748);
   }
   if (anyof(753,848,750,-1)) {
   set('L',0,'v',1194,lval, lbts);
   lval[0] += 2;
   if (lval[0]>9) {
   set('L',0,'c',9,lval, lbts);
   }
   lval[0] *= 10;
   if (irand(100)<lval[0]) {
   move(563,-2476);
   }
   say(64,2477,0);
   }
   if (anyof(538,-1))   say(64,2866,0);
   }
   if (KEY(762)) {
   if (value[1136]<LPROC && value[1136]>= 0) (*procs[value[1136]])(); else pcall(value[1136]);
   }
   if (anyof(898,921,1127,1126,920,998,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p82(void)
#else
int p82()
#endif
{
int done=0;
   if (KEY(790)) {
   (*procs[790])();
   }
   if (KEY(822)) {
   if (anyof(898,120,-1))   say(64,2867,0);
   if (anyof(172,-1))   say(64,2865,0);
   if (anyof(920,-1))   say(72,2632,1);
   if (anyof(993,-1))   say(64,2631,0);
   if (anyof(1014,-1))   say(64,2972,0);
   return 0;
   }
   if (keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(898,1127,-1)) {
   p329(-1,566,-1,745,-1,568,-1,751);
   }
   move(566,0,745,754,-850);
   move(568,0,751,753,172,-849);
   }
   if (KEY(762)) {
   if (value[1136]<LPROC && value[1136]>= 0) (*procs[value[1136]])(); else pcall(value[1136]);
   }
   if (anyof(898,172,993,920,1014,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p66(void)
#else
int p66()
#endif
{
int done=0;
   p677(0,3);
   if (KEY(822)) {
   if (anyof(1127,-1))   say(64,2864,0);
   if (anyof(172,747,-1))   say(64,2865,0);
   if (anyof(898,120,-1))   say(64,2867,0);
   if (anyof(920,-1))   say(72,2632,2);
   if (anyof(750,749,748,933,-1))   say(64,2519,0);
   if (anyof(1126,1126,-1))   say(64,2980,0);
   if (anyof(753,887,-1))   say(64,2979,0);
   if (KEY(1007)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((anyof(848,753,-1)) &&
   anyof(753,887,920,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(567,0,898,754,850,1127,172,-747);
   move(569,0,753,-848);
   if (anyof(750,849,749,751,933,-1)) {
   if (have(45,-1,-1)) {
   if (bitest(569,16)) {
   say(72,2622,2);
   }
   say(72,2622,1);
   }
   say(72,2622,0);
   }
   if (anyof(1007,-1))   say(64,1418,0);
   }
   if (anyof(1127,1128,1126,1007,1126,920,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(933,898,172,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p887(void)
#else
int p887()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(571,-1))   say(64,2860,0);
   if (anyof(912,-1))   say(64,2861,0);
   if (anyof(933,573,754,-1)) {
   bitmod('s',569,16);
   set('T',1870,'c',0,NULL,NULL);
   say(64,2518,0);
   }
   return 0;
   }
   if ((KEY(848)) &&
   anyof(753,754,571,762,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(570,0,753,746,571,-762);
   move(568,0,754,-848);
   if (anyof(933,573,-1))   say(64,1765,0);
   if (KEY(761)) {
   move(702,-1);
   say(0,1760,0);
   p153();
   }}
   if (irand(100)<50) {
   value[1142]=568;*bitword(1142)=-1;
   } else {
   value[1142]=702;*bitword(1142)=-1;
   }
   value[1143]=2559;*bitword(1143)=-1;
   if (anyof(933,573,571,912,1126,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p888(void)
#else
int p888()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(439,-1))   say(72,2735,1);
   if (anyof(949,120,997,-1))   say(64,2745,0);
   if (anyof(957,-1))   say(72,1759,1);
   if (anyof(920,-1))   say(64,2977,0);
   if (anyof(754,1007,480,1010,-1))   say(64,2982,0);
   if (anyof(571,-1))   say(64,2984,0);
   if (anyof(1070,-1))   say(76,2985,1137);
   if (anyof(998,-1))   say(64,2986,0);
   if (anyof(451,-1))   say(64,2987,0);
   return 0;
   }
   if (KEY(848)) {
   if (anyof(753,920,957,-1))   say(64,2981,0);
   if (value[1170]==1) {
   value[1137]=571;*bitword(1137)=-1;
   } else    if (anyof(754,480,1010,1007,571,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if (keyword(761,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(569,0,750,-571);
   move(563,3459,-761);
   move(563,0,754,746,1007,1010,-480);
   if (anyof(957,-1))   say(64,2981,0);
   if (anyof(439,-1))   say(72,2152,0);
   if (anyof(451,-1))   say(64,1418,0);
   }
   value[1142]=563;*bitword(1142)=-1;
   value[1143]=2563;*bitword(1143)=-1;
   if (value[1170]==1) {
   if (anyof(949,120,997,-1))   say(64,2745,0);
   if (anyof(1070,890,-1))   say(76,2985,1137);
   }
   if (anyof(439,949,571,480,1010,997,957,920,-1)) {
   bitmod('s',evar(1172),1);
   }
   if (anyof(1007,1070,998,451,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p483(void)
#else
int p483()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,916,-1))   say(72,2385,1);
   if (anyof(753,-1))   say(64,2874,0);
   return 0;
   }
   if (anyof(781,-1))   say(64,2885,0);
   if ((anyof(765,761,-1)) &&
   anyof(754,756,778,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(545,2872,753,760,-757);
   if (anyof(761,765,765,765,-1)) {
   p223(0,0);
   }}
return done;
}
#ifdef __STDC__
int p937(void)
#else
int p937()
#endif
{
int done=0;
   bitmod('s',674,4);
   if (value[671]<3) {
   value[671] += 1;
   }
   if (KEY(822)) {
   if (anyof(935,-1))   say(72,2025,935);
   if (anyof(120,-1))   say(64,2877,0);
   if (anyof(1013,-1))   say(64,2881,0);
   if (anyof(202,898,-1))   say(64,2880,0);
   if (anyof(753,376,-1))   say(72,2011,13);
   return 0;
   }
   if (anyof(730,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(200,2878,706,-710);
   if (anyof(744,745,746,747,748,749,750,751,935,-1))   say(64,2876,0);
   if (anyof(760,849,202,898,-1))   say(64,2879,0);
   if (anyof(837,120,-1))   say(72,1706,0);
   if (anyof(850,-1))   say(64,3380,0);
   }
   if (anyof(1013,-1))   say(64,2883,0);
   if (anyof(898,202,376,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p707(void)
#else
int p707()
#endif
{
int done=0;
   p184(-1,1077);
   p297(-1,1925,-1,1077);
   if (KEY(117)) {
   if (anyof(764,822,-1))   say(64,3426,0);
   }
   if (KEY(822)) {
   if (anyof(1013,-1))   say(64,2882,0);
   if (anyof(376,753,-1))   say(72,2011,13);
   if (KEY(447)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(764)) {
   if (anyof(13,139,-1))   say(76,1401,1137);
   if (anyof(1013,-1))   say(64,2883,0);
   }
   if (keyword(775,193,-1)) {
   say(0,1837,0);
   p153();
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(448,0,-749);
   if (anyof(447,-1))   say(64,1418,0);
   }
   if (anyof(447,1013,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p62(void)
#else
int p62()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(1133,1036,206,-1))   say(64,3167,0);
   if (anyof(892,901,-1))   say(72,2895,892);
   if (anyof(935,-1))   say(64,3168,0);
   if (KEY(447)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(448,0,-749);
   move(450,0,745,892,-901);
   if (anyof(447,-1))   say(64,1418,0);
   }
   if (anyof(447,1036,1133,206,892,901,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p816(void)
#else
int p816()
#endif
{
int done=0;
   if (KEY(822)) {
   if ((KEY(112)) &&
   !(bitest(112,18))) {
if (value[ARG1] == 112) value[ARG1]=1130;
if (value[ARG2] == 112) value[ARG2]=1130;
   }
   if (anyof(376,753,-1))   say(72,2011,13);
   if (anyof(209,-1))   say(64,3180,0);
   if (anyof(1013,-1))   say(64,2882,0);
   if (KEY(447)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (keyword(764,1013,-1)) {
   say(64,2883,0);
   }
   if ((KEY(209)) &&
   anyof(848,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(745)) {
   if (bitest(450,4)) {
   move(449,-2);
   }
   move(447,-2);
   }
   if (anyof(447,-1))   say(64,1418,0);
   if (anyof(209,-1))   say(64,3181,0);
   }
   if (anyof(447,209,1013,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p175(void)
#else
int p175()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(449,0,-749);
   move(585,0,745,753,748,750,-744);
   if (anyof(746,747,754,751,-1)) {
   p869();
   }}
return done;
}
#ifdef __STDC__
int p176(void)
#else
int p176()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(744,745,746,747,748,749,750,751,753,754,-1)) {
   if (irand(100)<25) {
   move(450,-2);
   }
   if (irand(100)<40) {
   move(585,-2);
   }
   p869();
   }}
return done;
}
#ifdef __STDC__
int p449(void)
#else
int p449()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(652,0,-751);
   move(653,0,-745);
   move(647,0,-747);
   }
   p467(0,2);
return done;
}
#ifdef __STDC__
int p450(void)
#else
int p450()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(651,0,-747);
   }
   p467(0,2);
return done;
}
#ifdef __STDC__
int p451(void)
#else
int p451()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(651,0,-749);
   move(654,0,-745);
   move(656,0,-751);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p452(void)
#else
int p452()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(655,0,-745);
   move(653,0,-749);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p453(void)
#else
int p453()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(654,0,-749);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p454(void)
#else
int p454()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(653,0,-747);
   move(657,0,-751);
   move(658,0,-750);
   }
   p467(0,2);
return done;
}
#ifdef __STDC__
int p455(void)
#else
int p455()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(656,0,-747);
   move(655,0,-746);
   }
   p467(0,2);
return done;
}
#ifdef __STDC__
int p456(void)
#else
int p456()
#endif
{
int done=0;
   if (anyof(1065,-1))   say(64,3025,0);
   if (keyword(764,1066,-1)) {
   say(64,3027,0);
   }
   if (KEY(822)) {
   p22(0,2);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   if (!(bitest(670,4))) {
   move(652,0,-748);
   }
   move(661,0,-749);
   move(659,0,-750);
   move(657,0,-744);
   }
   p467(0,2);
return done;
}
#ifdef __STDC__
int p457(void)
#else
int p457()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(658,0,-746);
   move(660,0,-750);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p458(void)
#else
int p458()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(659,0,-746);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p459(void)
#else
int p459()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(658,0,-745);
   move(662,0,-749);
   move(663,0,-750);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p460(void)
#else
int p460()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(661,0,-751);
   if (!(bitest(670,4))) {
   move(651,0,-746);
   }}
   p467(0,1);
return done;
}
#ifdef __STDC__
int p461(void)
#else
int p461()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(661,0,-746);
   move(664,0,-750);
   move(665,0,-751);
   }
   p467(0,1);
return done;
}
#ifdef __STDC__
int p462(void)
#else
int p462()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(663,0,-746);
   move(662,0,-749);
   }
   p467(0,0);
return done;
}
#ifdef __STDC__
int p463(void)
#else
int p463()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,0);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(666,0,-745);
   move(663,0,-747);
   move(668,0,-749);
   move(669,0,-751);
   }
   p467(0,0);
return done;
}
#ifdef __STDC__
int p464(void)
#else
int p464()
#endif
{
int done=0;
   if (KEY(822)) {
   p22(0,1);
   return 0;
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   if ((value[1139]==665)) {
   move(657,0,-746);
   }
   move(665,0,-749);
   move(667,0,-751);
   }
   p467(0,1);
return done;
}
