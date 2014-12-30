/* adv05.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p396(void)
#else
int p396()
#endif
{
int done=0;
   if (anyof(822,-1))   say(64,2713,0);
   if (anyof(764,-1))   say(64,2456,0);
   if (KEY(834)) {
   return 0;
   }
   bitmod('s',evar(1172),1);
   p39();
return done;
}
#ifdef __STDC__
int p329(int typ0,int par0,int typ1,int par1,int typ2,int par2,int typ3,int par3)
#else
int p329(typ0,par0,typ1,par1,typ2,par2,typ3,par3)
int typ0;int par0;
int typ1;int par1;
int typ2;int par2;
int typ3;int par3;
#endif
{
int done=0;
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = par2;
   lbts [2] = typ2;
   lval[3] = par3;
   lbts [3] = typ3;
   if (lval[2]==0) {
   if (bitest(evar(1138),7)) {
   p151(-1,lval[1]);
   }
   move(lval[0],-2);
   }
   if (bitest(evar(1138),7)) {
   if (value[1139]==lval[0]) {
   p151(-1,lval[3]);
   } else    if (value[1139]==lval[2]) {
   p151(-1,lval[1]);
   }}
   if (value[1139]==lval[0]) {
   move(lval[2],-2);
   } else    if (value[1139]==lval[2]) {
   move(lval[0],-2);
   } else {
   say(64,1290,0);
   }
return done;
}
#ifdef __STDC__
int p129(void)
#else
int p129()
#endif
{
int done=0;
   if (have(145,0,2)) {
   say(64,2759,0);
   }
   say(64,1353,0);
return done;
}
#ifdef __STDC__
int p811(void)
#else
int p811()
#endif
{
int done=0;
   if (anyof(822,-1))   say(72,2157,898);
   if (anyof(762,-1))   say(64,1959,0);
   if (anyof(756,837,-1))   say(64,2702,0);
   if (KEY(790)) {
   (*procs[790])();
   }
return done;
}
#ifdef __STDC__
int p126(int typ0,int par0)
#else
int p126(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if ((isnear(87,-1,-1)) ||
   isnear(136,0,6)) {
   return 0;
   }
   if ((lval[0]==1) &&
   isnear(136,0,1)) {
   return 0;
   }
   if ((value[1170]==2) &&
   (value[1137]==87)) {
   say(76,1312,1137);
   } else {
   say(76,1312,87);
   }
return done;
}
#ifdef __STDC__
int p676(void)
#else
int p676()
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
   set('L',0,'c',1,lval, lbts);
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (!isat(value[1146],-1,-1,700)) continue;
   lval[0] += 2;
   }
   lval[1] = irand(lval[0]);
   set('L',2,'c',0,lval, lbts);
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (!isat(value[1146],-1,-1,700)) continue;
   if (lval[1]==0) {
   set('L',2,'v',1146,lval, lbts);
   }
   lval[1] -= 1;
   }
   if (lval[2]>0) {
   apport(lval[2],value[1138]);
   if (((lval[2]==108||lval[2]==109)) &&
   value[109]==1) {
   if ((location[108]==700)) {
   apport(108,value[1138]);
   } else {
   apport(109,value[1138]);
   }}}
return done;
}
#ifdef __STDC__
int p722(int typ0,int par0)
#else
int p722(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if ((value[1170]==1) ||
   KEY(762)) {
   say(72,2831,lval[0]);
   }
   if (anyof(756,635,754,-1)) {
   say(0,2830,0);
   move(702,-1);
   if (have(144,-1,-1)) {
   set('E',144,'c',2,NULL,NULL);
   apport(144,619);
   }
   p153();
   }
return done;
}
#ifdef __STDC__
int p677(int typ0,int par0)
#else
int p677(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (!(anyof(921,1131,13,-1))) {
   return 0;
   }
   if (KEY(822)) {
   if (lval[0]==0) {
   say(64,2411,0);
   } else    if (lval[0]==1) {
   say(64,2412,0);
   } else    if (lval[0]==2) {
   say(72,2852,921);
   } else    if (lval[0]==3) {
   say(64,2853,0);
   } else    if (lval[0]==4) {
   say(72,2854,921);
   }
   return 0;
   }
   if (anyof(764,-1))   say(64,2456,0);
   if (anyof(788,789,-1))   say(64,2855,0);
   bitmod('s',evar(1172),1);
   p39();
return done;
}
#ifdef __STDC__
int p22(int typ0,int par0)
#else
int p22(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (anyof(641,-1))   say(64,3026,0);
   if (lval[0]==0) {
   if (anyof(935,-1))   say(64,3030,0);
   if (anyof(203,1067,-1))   say(64,3031,0);
   if (anyof(1062,-1))   say(64,3047,0);
   } else    if (lval[0]==1) {
   if (anyof(779,-1))   say(64,3029,0);
   if (anyof(977,-1))   say(64,2819,0);
   if (anyof(754,1062,-1))   say(64,2819,0);
   } else    if (lval[0]==2) {
   if (anyof(1066,960,-1))   say(64,3028,0);
   if (anyof(754,1062,-1))   say(64,3032,0);
   if (anyof(977,-1))   say(64,2819,0);
   }
return done;
}
#ifdef __STDC__
int p448(void)
#else
int p448()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(389,-1))   say(64,3069,0);
   if (anyof(376,475,753,-1))   say(72,2011,12);
   if (anyof(1133,-1))   say(64,3071,0);
   if (anyof(935,-1))   say(64,3070,0);
   if (anyof(896,308,897,-1)) {
   if ((value[HERE]==389)) {
   say(72,2895,896);
   }
   if (bitest(evar(1138),11)) {
   say(72,2895,897);
   }
   say(72,2894,897);
   }
   return 0;
   }
   if (KEY(389)) {
   if (anyof(764,-1))   say(64,1396,0);
   if (anyof(783,784,785,-1))   say(76,3447,389);
   if (anyof(776,808,807,-1))   say(64,2456,0);
   if (anyof(819,-1))   say(64,3470,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (!((value[HERE]==389))) {
   if (anyof(673,-1))   say(64,1418,0);
   }
   return 0;
   }
   if (anyof(389,897,896,308,673,-1)) {
   bitmod('s',evar(1172),1);
   p39();
   }
return done;
}
#ifdef __STDC__
int p362(void)
#else
int p362()
#endif
{
int done=0;
   if (KEY(484)) {
   if (KEY(822)) {
   set('V',1170,'c',1,NULL,NULL);
   return 0;
   } else    if ((KEY(758)) ||
   value[1170]==1) {
   say(64,1418,0);
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
   if ((KEY(150)) &&
   !isnear(150,-1,-1)) {
   if (anyof(822,-1))   say(64,3138,0);
   if (anyof(764,776,-1))   say(64,3139,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(1076)) {
   if (anyof(822,-1))   say(64,3138,0);
   if (anyof(764,776,-1))   say(64,3139,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(972,921,-1)) {
   if (anyof(822,-1))   say(64,3136,0);
   if (anyof(776,-1))   say(64,3140,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(1045)) {
   if (anyof(822,-1))   say(64,3135,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(974,975,-1)) {
   if (anyof(822,-1))   say(72,2668,974);
   if (anyof(764,-1))   say(64,3142,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(538)) {
   if (KEY(822)) {
   if ((value[HERE]==482||value[HERE]==485||value[HERE]==487)) {
   say(72,3141,1);
   } else {
   say(72,3141,0);
   }}
   if (KEY(834)) {
   (*procs[834])();
   }}
   if (KEY(1044)) {
   if (anyof(822,-1))   say(72,2668,1044);
   if (anyof(764,-1))   say(64,2752,0);
   if (KEY(834)) {
   (*procs[834])();
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
return done;
}
#ifdef __STDC__
int p233(int typ0,int par0)
#else
int p233(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lbts[1*VARSIZE]=-1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
   if (!isat(lval[1],-1,-1,703)) continue;
   if ((lval[0]==0) ||
   lbitest(1,5,lval,lbts)) {
   if (lbitest(1,16,lval,lbts)) {
   lval[3]=value[lval[1]];lbts[3*VARSIZE]=0;
   if (lval[3]==2) {
   lval[2] += 1;
   } else {
   return 0;
   }
   } else {
   return 0;
   }}}
   if (lval[2]==0) {
   if (KEY(168)) {
   say(72,2671,1);
   }
   say(72,2674,1);
   }
   say(64,3208,0);
return done;
}
#ifdef __STDC__
int p291(void)
#else
int p291()
#endif
{
int done=0;
   int lval [8];
   short lbts [8];
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
   lval[7] = 0;
   lbts [7] = 0;
   if (KEY(168)) {
   set('L',3,'c',1,lval, lbts);
   }
   lval[2]=703;lbts[2*VARSIZE]=-1;
   if (KEY(764)) {
   set('L',2,'v',1138,lval, lbts);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   set('L',1,'l',0,lval, lbts);
   special(32,&lval[1]);
   if (lval[1]==1) {
   if (anyof(765,754,-1)) {
   if (!(have(lval[0],-1,-1))) {
   say(0,3209,0);
   if (!(lbitest(0,3,lval,lbts))) {
   say(72,3329,lval[0]);
   }
   if (irand(100)<50) {
   say(72,1311,lval[0]);
   }
   p625(-1,lval[0]);
   }
   } else {
   if (have(lval[0],-1,-1)) {
   say(72,1307,lval[0]);
   }
   if (!(isnear(lval[0],-1,-1))) {
   say(72,1312,lval[0]);
   }}}
   if ((location[lval[0]]==lval[2])) {
   if (((lval[3]==0) ||
   lbitest(0,5,lval,lbts)) &&
   lbitest(0,3,lval,lbts)) {
   if (lval[1]==1) {
   lval[5] += 1;
   } else {
   set('L',7,'c',0,lval, lbts);
   if ((KEY(765)) &&
   lbitest(0,16,lval,lbts)) {
   lval[7]=value[lval[0]];lbts[7*VARSIZE]=0;
   }
   if (lval[7]==2) {
   lval[6] += 1;
   } else {
   lval[4] += 1;
   }}}}}
   if (lval[4]>0) {
   return 0;
   }
   if (lval[6]>0) {
   say(64,3208,0);
   }
   if (lval[2]==value[1138]) {
   if (lval[5]==0) {
   if (lval[3]==1) {
   say(72,2671,0);
   }
   say(72,2674,0);
   }
   if (lval[3]==1) {
   say(72,2672,0);
   }
   say(72,2673,0);
   }
   if (lval[5]==0) {
   if (lval[3]==1) {
   say(72,2671,1);
   }
   say(72,2674,1);
   }
   if (lval[3]==1) {
   say(72,2672,1);
   }
   say(72,2673,1);
return done;
}
#ifdef __STDC__
int p223(int typ0,int par0)
#else
int p223(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   set('V',1190,'c',9,NULL,NULL);
   p378();
   say(8,2875,lval[0]);
   set('V',1172,'c',38,NULL,NULL);
   say(64,1855,0);
return done;
}
#ifdef __STDC__
int p828(int typ0,int par0)
#else
int p828(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   set('E',565,'c',4,NULL,NULL);
   apport(67,701);
   set('E',67,'c',1,NULL,NULL);
   bitmod('s',147,4);
   say(8,2413,lval[0]);
return done;
}
#ifdef __STDC__
int p847(void)
#else
int p847()
#endif
{
int done=0;
   tie (1498, 45);
   tie (3247, 161);
   tie (3246, 161);
   tie (3055, 161);
   tie (3248, 162);
   tie (3249, 162);
   tie (3250, 162);
   tie (3251, 162);
   tie (2504, 162);
   tie (2524, 162);
   tie (3238, 315);
   tie (1379, 556);
   tie (1703, 149);
   tie (2004, 18);
   tie (2709, 202);
   tie (2774, 1164);
   tie (2782, 2781);
   tie (2783, 2781);
   tie (2784, 586);
   tie (2785, 586);
   tie (1985, 94);
   tie (2827, 153);
   tie (2836, 139);
   tie (2840, 139);
   tie (3233, 210);
   tie (1762, 158);
   tie (3433, 71);
return done;
}
#ifdef __STDC__
int p602(void)
#else
int p602()
#endif
{
int done=0;
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (have(value[1146],-1,-1)) {
   apport(value[1146],702);
   }}
   set('V',1190,'c',7,NULL,NULL);
   bitmod('s',302,4);
   move(302,-1844);
return done;
}
#ifdef __STDC__
int p528(void)
#else
int p528()
#endif
{
int done=0;
   set('V',1190,'c',8,NULL,NULL);
   if ((location[100]==199)) {
   apport(100,302);
   } else {
   apport(100,702);
   }
   bitmod('c',100,3);
   if ((location[116]==295)) {
   bitmod('c',116,3);
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (bitest(evar(1146),3)) {
   if ((location[value[1146]]==200)) {
   apport(value[1146],302);
   } else {
   apport(value[1146],702);
   }}}
   apport(194,702);
   set('E',139,'c',0,NULL,NULL);
   set('E',140,'c',0,NULL,NULL);
   set('E',199,'c',0,NULL,NULL);
   set('E',137,'c',1,NULL,NULL);
   bitmod('c',203,8);
   move(195,-1860);
return done;
}
#ifdef __STDC__
int p536(void)
#else
int p536()
#endif
{
int done=0;
   if ((((((((value[3296]==0) ||
   bitest(evar(1210),12)) ||
   !(bitest(evar(1138),7))) ||
   (547<=value[1138] && value[1138]<=702)) ||
   isnear(152,-1,-1)) ||
   (location[152]==701||location[152]==702||location[152]==200)) ||
   !(bitest(evar(1170),8))) ||
   value[1190]!=3) {
   return 0;
   }
   if ((location[152]==700)) {
   apport(152,702);
   bitmod('s',evar(1210),12);
   value[1181] += 5;
   } else {
   if (irand(100)<80) {
   return 0;
   }
   apport(152,700);
   }
   say(0,3296,0);
return done;
}
#ifdef __STDC__
int p184(int typ0,int par0)
#else
int p184(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if ((KEY(798)) &&
   value[1170]==1) {
   set('V',1137,'l',0,lval, lbts);
   set('V',1170,'c',2,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p701(void)
#else
int p701()
#endif
{
int done=0;
   if (isnear(63,-1,-1)) {
   if ((value[63]==0) ||
   value[63]==2) {
   if (KEY(822)) {
   return 0;
   }
   say(76,3335,63);
   }
   if ((KEY(822)) &&
   bitest(63,14)) {
   return 0;
   }
   if (anyof(63,173,-1)) {
   bitmod('s',63,14);
   say(64,2213,0);
   }}
return done;
}
#ifdef __STDC__
int p814(int typ0,int par0,int typ1,int par1)
#else
int p814(typ0,par0,typ1,par1)
int typ0;int par0;
int typ1;int par1;
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
   if (have(102,-1,-1)) {
   set('L',2,'e',102,lval, lbts);
   if ((6<=lval[2] && lval[2]<=8)) {
   say(72,lval[0],lval[1]);
   }}
return done;
}
#ifdef __STDC__
int p925(void)
#else
int p925()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('L',0,'c',0,lval, lbts);
   special(34,&lval[0]);
   if ((lval[0]==1) &&
   value[1172]==0) {
   say(12,3197,1137);
   return 0;
   }
   if ((lval[0]==0) &&
   test("cgi")) {
   say(64,3475,0);
   }
   say(8,3372,lval[0]);
   if ((lval[0]>0) &&
   !test("cgi")) {
   special(34,&lval[0]);
   }
   if (value[1172]==0) {
   set('V',1172,'c',44,NULL,NULL);
   set('V',1170,'c',98,NULL,NULL);
   say(72,1545,lval[0]);
   }
   say(0,1259,0);
return done;
}
#ifdef __STDC__
int p221(void)
#else
int p221()
#endif
{
int done=0;
   p550(-1,47,-1,1080);
   p550(-1,96,-1,1080);
   p550(-1,49,-1,1081);
   p550(-1,149,-1,1082);
   p550(-1,27,-1,1083);
   p550(-1,46,-1,1084);
   p550(-1,61,-1,1085);
   p550(-1,65,-1,1086);
   p550(-1,67,-1,1087);
   p550(-1,70,-1,1088);
   p550(-1,83,-1,1089);
   p550(-1,96,-1,1090);
   p550(-1,150,-1,1091);
   p550(-1,152,-1,1092);
   p550(-1,151,-1,1092);
   p550(-1,160,-1,1093);
   p550(-1,8,-1,1079);
   p550(-1,960,-1,1079);
   if (((((isnear(52,-1,-1)) ||
   isnear(161,-1,-1)) &&
   !isnear(98,-1,-1)) &&
   !isnear(8,-1,-1)) &&
   anyof(1079,960,1099,-1)) {
   if (anyof(822,-1))   say(64,3440,0);
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p550(int typ0,int par0,int typ1,int par1)
#else
int p550(typ0,par0,typ1,par1)
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
   if ((KEY(lval[1])) &&
   isnear(lval[0],-1,-1)) {
if (value[ARG1] == lval[1]) {value[ARG1]=lval[0]; (void)fake(1,lval[0]);}
if (value[ARG2] == lval[1]) {value[ARG2]=lval[0]; (void)fake(2,lval[0]);}
   }
return done;
}
#ifdef __STDC__
int p865(int typ0,int par0,int typ1,int par1)
#else
int p865(typ0,par0,typ1,par1)
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
   p151(-1,lval[0]);
   move(lval[1],-2);
return done;
}
#ifdef __STDC__
int p724(void)
#else
int p724()
#endif
{
int done=0;
   if (value[1190]<3) {
   set('V',1190,'c',3,NULL,NULL);
   }
   p80();
   if (anyof(974,-1))   say(72,2668,974);
   if (((value[1170]==1) ||
   KEY(8)) &&
   anyof(769,768,769,767,-1)) {
   say(64,3304,0);
   }
   if (KEY(790)) {
   return 0;
   }
   if (anyof(8,965,-1)) {
   if (anyof(756,758,-1)) {
   set('V',1136,'e',200,NULL,NULL);
   set('V',1170,'c',1,NULL,NULL);
   } else {
   if (anyof(8,965,-1))   say(72,1924,756);
   }}
   if (KEY(987)) {
   p396();
   }
   if (KEY(822)) {
   if (anyof(1058,-1))   say(64,1504,0);
   if (anyof(538,-1))   say(64,2016,0);
   if (anyof(195,480,-1))   say(64,2582,0);
   if (anyof(196,-1))   say(64,2583,0);
   if (anyof(926,918,-1))   say(64,2472,0);
   if (anyof(898,-1))   say(72,2703,748);
   return 0;
   }
   if (anyof(153,131,973,-1))   say(76,2423,131);
   if (KEY(926)) {
   if (value[1170]==1) {
   say(64,2472,0);
   }
   say(64,1999,0);
   }
   if (KEY(762)) {
   if (anyof(195,480,-1))   say(64,2696,0);
   (*procs[762])();
   }
   if (KEY(756)) {
   if (anyof(756,200,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   } else    if (value[1170]>1) {
   if (anyof(898,120,-1))   say(64,2702,0);
   say(64,1486,0);
   }}
   if ((KEY(758)) ||
   value[1170]==1) {
   if (value[1190]==8) {
   move(521,2154,-201);
   move(544,2154,203,-6);
   move(544,2154,-202);
   move(200,2154,-196);
   move(544,2154,-197);
   move(544,2154,-890);
   }
   if (have(102,-1,-1)) {
   if (KEY(890)) {
   if (value[102]==6) {
   say(8,2286,750);
   move(197,-2);
   }
   value[1216]=751;*bitword(1216)=-1;
   }
   if (anyof(195,753,480,196,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   } else    if (anyof(756,200,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   } else    if (anyof(850,926,898,754,201,203,-1)) {
   value[1216]=748;*bitword(1216)=-1;
   } else    if (KEY(538)) {
   value[1216]=751;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(200,0,756,746,-200);
   move(196,0,195,480,750,753,-196);
   move(201,0,850,898,926,748,754,-201);
   move(203,0,203,-6);
   move(202,0,-202);
   move(197,0,-197);
   move(199,0,-890);
   move(521,0,-744);
   move(539,0,-745);
   move(541,0,-747);
   move(531,0,-749);
   move(538,0,751,-538);
   if (anyof(1058,849,-1))   say(72,1503,1);
   }
   if (anyof(1058,935,918,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p403(void)
#else
int p403()
#endif
{
int done=0;
   p476();
   if (anyof(974,-1))   say(72,2668,974);
   if (anyof(950,957,984,985,-1)) {
   if (KEY(822)) {
   if (anyof(950,-1))   say(72,2585,950);
   if (anyof(957,-1))   say(64,2667,0);
   if (anyof(984,-1))   say(64,2699,0);
   if (anyof(985,-1))   say(64,2700,0);
   }
   if (anyof(984,950,-1)) {
   if ((value[1170]>1) &&
   !KEY(758)) {
   say(64,1486,0);
   }
   } else {
   say(64,1999,0);
   }}
   if (KEY(987)) {
   p396();
   }
   if (KEY(987)) {
   p396();
   }
   if (KEY(822)) {
   if (anyof(480,195,-1)) {
   say(76,2588,480);
   }
   if (anyof(196,-1))   say(64,2583,0);
   if (anyof(200,-1))   say(76,2585,200);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(480,195,-1)) {
   p329(-1,480,-1,750,-1,195,-1,746);
   } else    if (KEY(893)) {
   if (irand(100)<50) {
   value[1216]=745;*bitword(1216)=-1;
   } else {
   value[1216]=748;*bitword(1216)=-1;
   }
   set('V',1136,'v',1216,NULL,NULL);
   }
   if (value[1190]==8) {
   move(480,2154,200,-195);
   move(520,2154,-201);
   move(539,2154,-950);
   }
   if (have(102,-1,-1)) {
   if (KEY(950)) {
   if ((value[102]==4) ||
   value[102]==5) {
   say(8,2286,749);
   move(480,-2);
   }}}
   if (anyof(195,754,200,-1)) {
   value[1216]=746;*bitword(1216)=-1;
   } else    if (anyof(480,950,-1)) {
   value[1216]=750;*bitword(1216)=-1;
   } else    if (KEY(538)) {
   value[1216]=744;*bitword(1216)=-1;
   } else    if (KEY(201)) {
   value[1216]=747;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(195,0,200,754,-746);
   move(538,0,744,-538);
   move(521,0,745,-893);
   move(201,0,747,-201);
   move(531,0,-748);
   move(544,0,-749);
   move(520,0,-751);
   move(480,0,750,-480);
   move(544,0,-984);
   if (KEY(950)) {
   if (have(148,-1,-1)) {
   move(486,-2);
   } else {
   move(481,-2);
   }}
return done;
}
#ifdef __STDC__
int p77(void)
#else
int p77()
#endif
{
int done=0;
   p410(0,0);
   if (!(KEY(758))) {
   if (anyof(8,965,-1))   say(72,1924,757);
   }
   if (KEY(917)) {
   if (KEY(790)) {
   (*procs[790])();
   }
   say(64,2070,0);
   }
   if (anyof(916,-1))   say(64,2069,0);
   if (((value[1170]==1) ||
   KEY(8)) &&
   anyof(769,768,769,767,-1)) {
   say(64,3304,0);
   }
   p184(-1,167);
   if (anyof(167,134,129,1015,30,1015,-1)) {
   if (anyof(798,822,-1)) {
   (*procs[822])();
   }
   if (value[1170]>1) {
   say(64,2422,0);
   }}
   if (KEY(475)) {
if (value[ARG1] == 475) {value[ARG1]=376; (void)fake(1,376);}
if (value[ARG2] == 475) {value[ARG2]=376; (void)fake(2,376);}
   }
   if (anyof(969,935,376,-1)) {
   if (KEY(822)) {
   if (anyof(969,-1))   say(64,2013,0);
   if (anyof(935,-1))   say(64,2014,0);
   return 0;
   }
   if (anyof(969,935,-1))   say(64,2013,0);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   if (anyof(475,-1))   say(64,2046,0);
   if (anyof(966,-1))   say(72,3376,1);
   if (anyof(1058,-1))   say(64,1504,0);
   if (anyof(898,-1))   say(64,2598,0);
   if (anyof(200,-1))   say(64,2129,0);
   if (anyof(757,965,-1))   say(64,2769,0);
   return 0;
   }
   if (anyof(765,793,-1)) {
   if (value[1170]==1) {
   default_to(0,703,-1);
   }
   if ((KEY(83)) &&
   !(bitest(83,5))) {
   apport(83,HERE);
   bitmod('s',83,5);
   set('E',83,'c',1,NULL,NULL);
   say(76,1734,1137);
   }
   if (((KEY(63)) &&
   have(63,-1,-1)) &&
   !(bitest(63,5))) {
   apport(63,HERE);
   say(76,2207,1137);
   }}
   if (value[1190]==8) {
   if (anyof(757,746,195,-1))   say(64,2697,0);
   }
   if (anyof(195,757,750,-1)) {
   p865(-1,750,-1,195);
   }
   if (keyword(758,200,-1)) {
   say(76,2612,200);
   }
   if (KEY(756)) {
   if ((KEY(200)) ||
   value[1170]==1) {
   say(76,2612,200);
   }}
   if ((anyof(706,710,-1)) &&
   value[1190]<5) {
   set('V',1160,'c',1,NULL,NULL);
   move(206,value[1157],-706);
   move(222,value[1157],-710);
   }
   if (keyword(898,790,-1)) {
   (*procs[790])();
   }
   if (anyof(1058,898,850,-1))   say(72,1503,0);
   if (anyof(134,129,30,1015,966,918,935,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p877(void)
#else
int p877()
#endif
{
int done=0;
   p479();
   if (KEY(822)) {
   if (anyof(898,-1))   say(72,2157,898);
   if (KEY(201)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(790)) {
   (*procs[790])();
   }
   if (((anyof(756,758,-1)) &&
   KEY(120)) ||
   keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(898)) {
   p329(-1,195,-1,744,-1,202,-1,748);
   } else    if (anyof(753,893,-1)) {
   if (irand(100)<50) {
   value[1136]=750;*bitword(1136)=-1;
   } else {
   value[1136]=746;*bitword(1136)=-1;
   }
   if (have(102,-1,-1)) {
   set('V',1216,'v',1136,NULL,NULL);
   }}
   if (value[1190]==8) {
   move(202,2154,195,-200);
   move(195,2154,-202);
   move(521,2154,-203);
   }
   if (have(102,-1,-1)) {
   if (anyof(849,195,200,-1)) {
   value[1216]=744;*bitword(1216)=-1;
   } else    if (anyof(754,850,202,203,-1)) {
   value[1216]=748;*bitword(1216)=-1;
   }
   if (KEY(893)) {
   value[1216]=750;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(195,0,849,744,195,-200);
   move(203,0,-203);
   move(196,0,-751);
   move(541,0,-746);
   move(535,0,-747);
   move(532,0,-749);
   move(531,0,-750);
   move(202,0,748,754,-850);
   if (KEY(745)) {
   if (irand(100)<50) {
   move(195,-2);
   }
   move(541,-2);
   }}
   if (KEY(918)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p778(void)
#else
int p778()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(918,-1))   say(64,3416,0);
   if (anyof(898,-1))   say(72,2157,898);
   if (anyof(202,-1))   say(64,2709,0);
   if (anyof(201,-1))   say(72,2710,0);
   return 0;
   }
   if (((anyof(756,758,-1)) &&
   KEY(120)) ||
   keyword(756,898,-1)) {
   say(64,2702,0);
   }
   if ((KEY(202)) &&
   anyof(754,756,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(753)) {
   if (irand(100)<50) {
   value[1136]=750;*bitword(1136)=-1;
   } else {
   value[1136]=746;*bitword(1136)=-1;
   }
   if (have(102,-1,-1)) {
   set('V',1216,'v',1136,NULL,NULL);
   }
   } else    if ((KEY(898)) &&
   value[1190]==3) {
   value[1136]=744;*bitword(1136)=-1;
   if (have(102,-1,-1)) {
   set('V',1216,'v',1136,NULL,NULL);
   }
   } else    if (KEY(1126)) {
   value[1136]=748;*bitword(1136)=-1;
   if (have(102,-1,-1)) {
   set('V',1216,'v',1136,NULL,NULL);
   }}
   if (value[1190]==8) {
   move(518,2154,-195);
   move(201,2154,-203);
   move(203,2154,-201);
   }
   if (have(102,-1,-1)) {
   if (anyof(850,918,203,-1)) {
   value[1216]=748;*bitword(1216)=-1;
   } else    if (anyof(201,849,200,-1)) {
   value[1216]=744;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(195,0,200,-195);
   move(201,0,849,744,-201);
   move(203,0,850,918,748,-203);
   move(541,0,-745);
   move(535,0,-746);
   move(536,0,-747);
   move(533,0,-749);
   move(532,0,750,-893);
   move(531,0,-751);
   if (anyof(202,898,754,756,-1)) {
   if (value[202]==0) {
   say(64,1385,0);
   }
   say(0,1854,0);
   move(671,-1);
   bitmod('c',evar(1170),0);
   longjmp(loop_back,1);
   }}
   if (KEY(918)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p186(void)
#else
int p186()
#endif
{
int done=0;
   if (anyof(974,-1))   say(72,2668,974);
   if (KEY(822)) {
   if (anyof(918,-1))   say(64,3417,0);
   if (anyof(987,1133,-1))   say(64,2713,0);
   if (anyof(203,-1))   say(64,2714,0);
   if (anyof(986,-1))   say(64,2711,0);
   if (anyof(1126,918,-1))   say(64,2701,0);
   if (anyof(754,756,-1))   say(72,1705,754);
   return 0;
   }
   if (KEY(986)) {
   if (anyof(800,-1))   say(64,2712,0);
   if (anyof(834,112,-1)) {
   return 0;
   }
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (anyof(918,1126,-1)) {
   if (KEY(834)) {
   return 0;
   }
   if (!((KEY(918)) &&
   value[1170]==1)) {
   say(64,1486,0);
   }}
   if (KEY(987)) {
   p396();
   }
   if ((KEY(6)) &&
   anyof(758,756,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
if (value[ARG1] == 758) value[ARG1]=756;
if (value[ARG2] == 758) value[ARG2]=756;
   }
   if (anyof(898,850,-1))   say(72,1312,898);
   if ((KEY(758)) ||
   value[1170]==1) {
   if (KEY(753)) {
   if (irand(100)<50) {
   value[1136]=746;*bitword(1136)=-1;
   } else {
   value[1136]=750;*bitword(1136)=-1;
   }}
   if (value[1190]==8) {
   move(518,2154,-195);
   move(518,2154,-201);
   move(518,2154,-202);
   }
   if (have(102,-1,-1)) {
   if (anyof(918,898,849,202,201,200,-1)) {
   value[1216]=744;*bitword(1216)=-1;
   }
   p151(*bitword(1216),value[1216]);
   }
   move(535,0,-745);
   move(536,0,-746);
   move(537,0,-747);
   move(518,0,-748);
   move(534,0,-749);
   move(533,0,750,-893);
   move(532,0,-751);
   move(202,0,744,898,849,-202);
   move(201,0,-201);
   move(195,0,195,-200);
   if (anyof(756,754,-1)) {
   if (value[6]==1) {
   set('V',1160,'c',1,NULL,NULL);
   move(204,-2);
   }
   say(64,1383,0);
   }}
   if (KEY(918)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p473(void)
#else
int p473()
#endif
{
int done=0;
   if (keyword(758,6,-1)) {
if (value[ARG1] == 758) value[ARG1]=757;
if (value[ARG2] == 758) value[ARG2]=757;
   }
   if ((KEY(899)) &&
   anyof(756,757,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (keyword(757,6,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(822)) {
   if (anyof(899,-1))   say(64,2889,0);
   if (anyof(205,-1))   say(76,2888,205);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(753,757,757,891,-1)) {
   if (value[6]==1) {
   move(203,-2);
   }
   say(64,1383,0);
   }
   move(205,0,899,205,756,-750);
   move(209,0,-209);
   move(206,0,757,-206);
   }
   if (anyof(899,205,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p149(void)
#else
int p149()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(205,-1))   say(76,2888,205);
   if (anyof(779,-1))   say(64,2890,0);
   if (anyof(896,897,308,-1))   say(72,2891,0);
   return 0;
   }
   if (keyword(758,779,-1)) {
   move(204,-2);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(896,899,-1)) {
   p329(-1,204,-1,746,-1,206,-1,750);
   }
   move(204,0,757,891,894,-746);
   move(206,0,756,288,750,-206);
   move(209,0,-209);
   }
   if (anyof(205,899,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p182(void)
#else
int p182()
#endif
{
int done=0;
   p184(-1,134);
   if (anyof(134,129,1015,74,30,-1)) {
   if (anyof(764,807,-1))   say(76,1877,134);
   if (anyof(822,798,-1))   say(64,2104,0);
   }
   if (KEY(822)) {
   if (anyof(206,44,-1))   say(76,1841,1137);
   if (anyof(896,897,308,-1))   say(72,2891,0);
   if (anyof(207,-1))   say(72,2892,0);
   return 0;
   }
   if (keyword(730,706,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(204,0,-894);
   move(205,0,757,205,896,272,-746);
   move(207,0,207,756,753,-750);
   move(209,0,-209);
   if (value[6]==1) {
   move(203,0,-203);
   } else {
   move(204,1383,-203);
   }
   if (KEY(706)) {
   if ((value[1190]>4) ||
   bitest(evar(1171),2)) {
   bitmod('s',evar(1171),3);
   say(64,1414,0);
   }
   move(200,-value[1157]);
   }}
   if (anyof(134,129,1015,30,74,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p86(void)
#else
int p86()
#endif
{
int done=0;
   if (keyword(822,207,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(204,0,-894);
   move(206,0,754,757,746,-206);
   move(208,0,756,753,-750);
   move(209,0,-209);
   if (KEY(207)) {
   p329(-1,206,-1,746,-1,208,-1,750);
   }
   if (value[6]==1) {
   move(203,0,-203);
   } else {
   move(204,1383,-203);
   }}
   if (KEY(207)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p59(void)
#else
int p59()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(207,-1))   say(72,2892,1);
   if (anyof(896,897,308,-1))   say(72,2891,1);
   if (anyof(935,1127,635,-1))   say(64,2893,0);
   if (anyof(1021,898,-1))   say(64,3449,0);
   return 0;
   }
   if (ishere(109,-1,-1)) {
   bitmod('s',evar(1138),8);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(204,0,-894);
   move(206,0,-206);
   move(207,0,757,207,-746);
   move(209,0,756,896,209,-750);
   if (value[6]==1) {
   move(203,0,-203);
   } else {
   move(204,1383,-203);
   }}
   if (anyof(300,207,896,935,1127,635,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p670(void)
#else
int p670()
#endif
{
int done=0;
   if ((value[213]==0) &&
   !have(47,-1,-1)) {
   apport(7,209);
   } else {
   apport(7,701);
   }
   if (KEY(822)) {
   if (anyof(750,887,-1))   say(64,1502,0);
   if (anyof(935,-1))   say(72,1576,750);
   if (anyof(754,209,-1))   say(72,2470,1);
   if ((KEY(7)) &&
   ishere(7,-1,-1)) {
   say(64,3207,0);
   }
   return 0;
   }
   if (keyword(758,777,-1)) {
   say(64,1501,0);
   }
   if (((KEY(754)) &&
   anyof(7,209,848,-1)) ||
   keyword(756,887,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((anyof(758,761,-1)) ||
   value[1170]==1) {
   move(204,0,-894);
   move(206,0,-206);
   move(208,0,896,-746);
   if (value[6]==1) {
   move(203,0,-203);
   } else {
   move(204,1383,-203);
   }
   if (anyof(750,887,-1))   say(64,1501,0);
   if (anyof(754,209,7,-1)) {
   if (ishere(7,-1,-1)) {
   move(210,-2);
   }
   say(0,1491,0);
   move(210,-1);
   p153();
   }
   if (KEY(761)) {
   move(210,-1);
   p800();
   }}
   if (anyof(887,209,7,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=210;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p604(void)
#else
int p604()
#endif
{
int done=0;
   if (value[1190]==4) {
   p148();
   }
   apport(7,701);
   if (KEY(822)) {
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (KEY(889)) {
   say(0,3233,0);
   say(64,1259,0);
   }
   if ((KEY(7)) &&
   value[210]==0) {
   say(64,3207,0);
   }
   if (anyof(887,896,-1))   say(76,2895,1137);
   if (anyof(171,-1))   say(64,2904,0);
   if (anyof(935,-1))   say(72,1576,746);
   return 0;
   }
   if ((anyof(848,753,-1)) &&
   anyof(209,889,896,7,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(213,0,748,-896);
   move(374,0,746,-887);
   move(211,0,759,900,-750);
   move(214,0,754,171,-744);
   move(223,0,-222);
   if (anyof(848,753,209,889,7,-1)) {
   if (value[210]==0) {
   move(209,-2);
   }
   say(64,1492,0);
   }}
   if (anyof(896,897,308,887,171,7,-1)) {
   bitmod('s',evar(1172),1);
   }
   set('V',1144,'c',1,NULL,NULL);
   value[1143]=2161;*bitword(1143)=-1;
   value[1142]=209;*bitword(1142)=-1;
return done;
}
#ifdef __STDC__
int p253(void)
#else
int p253()
#endif
{
int done=0;
   if (anyof(11,1051,-1)) {
   if (value[10]==1) {
   apport(11,value[1138]);
   } else {
   say(76,1312,11);
   }}
   if (KEY(822)) {
   if (anyof(754,993,-1))   say(72,2470,1);
   if (anyof(11,1051,-1)) {
   p539();
   }
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(761)) {
   if ((value[1170]==1) ||
   anyof(762,10,754,-1)) {
   if (value[10]==1) {
   say(64,1386,0);
   }
   move(283,-1);
   p800();
   }
   return 0;
   }
   value[1142]=283;*bitword(1142)=-1;
   value[1143]=1665;*bitword(1143)=-1;
   if ((KEY(762)) &&
   anyof(11,1051,10,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(210,0,746,-900);
   if (anyof(759,762,11,1051,750,-1)) {
   if (value[10]==0) {
   say(64,1387,0);
   }
   move(212,-1978);
   }
   if (anyof(993,-1))   say(64,1418,0);
   }
   if (anyof(10,936,900,993,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p629(void)
#else
int p629()
#endif
{
int done=0;
   p184(-1,134);
   if (anyof(134,129,1015,74,30,-1)) {
   if (anyof(822,798,-1))   say(76,2105,213);
   bitmod('s',evar(1172),1);
   return 0;
   }
   if (KEY(822)) {
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(210,0,744,757,-900);
   }
   if (anyof(134,129,1015,74,30,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p607(void)
#else
int p607()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   set('V',1147,'c',0,NULL,NULL);
   if ((KEY(7)) &&
   anyof(753,848,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   if (anyof(7,753,746,-1)) {
   value[1147]=210;*bitword(1147)=-1;
   }
   if (anyof(896,897,308,-1))   say(72,2896,896);
   if (KEY(744)) {
   value[1147]=219;*bitword(1147)=-1;
   } else    if (KEY(749)) {
   if (irand(100)<66) {
   value[1147]=274;*bitword(1147)=-1;
   } else {
   if (isnear(9,0,0)) {
   say(72,1496,749);
   }
   if (isnear(9,0,1)) {
   if ((value[1152]==274)) {
   set('V',1147,'v',1152,NULL,NULL);
   } else {
   say(64,1493,0);
   }
   } else {
   bitmod('s',evar(1170),0);
   say(64,1338,0);
   }}
   } else    if (KEY(895)) {
   value[1147]=274;*bitword(1147)=-1;
   } else    if (KEY(748)) {
   value[1147]=220;*bitword(1147)=-1;
   } else    if (KEY(750)) {
   value[1147]=221;*bitword(1147)=-1;
   } else    if (KEY(754)) {
   value[1147]=376;*bitword(1147)=-1;
   } else    if (KEY(747)) {
   value[1147]=375;*bitword(1147)=-1;
   } else    if (KEY(751)) {
   value[1147]=381;*bitword(1147)=-1;
   } else    if (KEY(745)) {
   value[1147]=378;*bitword(1147)=-1;
   }
   if (value[1147]==0) {
   return 0;
   }
   if ((isnear(9,-1,-1)) &&
   value[1147]!=value[1152]) {
   p781();
   if (value[9]==0) {
   if (anyof(745,747,748,751,-1)) {
   if ((743<=value[1136] && value[1136]<=755)) {
   say(76,1496,1136);
   } else {
   say(76,1496,1137);
   }
   } else {
   set('E',9,'c',1,NULL,NULL);
   say(12,1893,9);
   }
   } else {
   say(64,1493,0);
   }}
   move(value[1147],-2);
   }
   if (anyof(896,897,308,7,900,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p921(void)
#else
int p921()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(754,209,-1))   say(76,2838,13);
   if (anyof(892,-1))   say(64,2839,0);
   if (value[13]>1) {
   if (anyof(13,-1))   say(76,2073,13);
   }
   return 0;
   }
   if (KEY(892)) {
   if (anyof(758,756,848,-1)) {
   if (value[13]==2) {
   value[1136]=848;*bitword(1136)=-1;
   } else {
   say(72,1430,892);
   }
   } else {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if (KEY(848)) {
   if ((value[1170]==1) ||
   anyof(753,892,-1)) {
   if (value[13]==2) {
   set('T',2502,'c',0,NULL,NULL);
   move(279,-1509);
   }
   say(72,1430,892);
   } else    if (KEY(13)) {
   if (value[13]==0) {
   if (anyof(13,-1))   say(76,1312,1137);
   } else    if (value[13]==1) {
   move(218,-2837);
   } else {
   set('T',2502,'c',0,NULL,NULL);
   move(279,-1509);
   }}
   if (anyof(935,-1))   say(72,1430,892);
   }
   if (keyword(754,209,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(216,0,746,-762);
   move(268,0,750,-268);
   move(218,0,754,-209);
   }
   if ((KEY(13)) &&
   value[13]>1) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=218;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p255(void)
#else
int p255()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(961,121,966,-1))   say(64,1917,0);
   if (KEY(209)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(848)) {
   if (anyof(753,757,935,209,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }}
   if ((anyof(758,209,-1)) ||
   value[1170]==1) {
   if (anyof(209,-1))   say(64,1418,0);
   move(216,0,848,753,-757);
   }
return done;
}
#ifdef __STDC__
int p920(void)
#else
int p920()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(892,-1))   say(64,2839,0);
   return 0;
   }
   if (KEY(892)) {
   if (anyof(753,758,756,-1)) {
   value[1136]=848;*bitword(1136)=-1;
   } else    if (!((KEY(848)) ||
   value[1170]==1)) {
   bitmod('s',evar(1172),1);
   return 0;
   }}
   if ((anyof(758,209,-1)) ||
   value[1170]==1) {
   move(215,0,753,-757);
   }
   if (KEY(848)) {
   if ((KEY(892)) ||
   value[1170]==1) {
   if (value[13]<2) {
   say(72,1430,892);
   }
   value[1137]=13;*bitword(1137)=-1;
   }
   move(215,0,935,209,-757);
   if (KEY(13)) {
   if (value[13]==0) {
   say(64,1507,0);
   }
   if (value[13]==1) {
   move(215,-1508);
   }
   set('T',2502,'c',0,NULL,NULL);
   move(279,-1509);
   } else {
   say(64,1396,0);
   }}
   set('V',1243,'c',0,NULL,NULL);
   if (anyof(787,814,-1)) {
   if (value[1170]==1) {
   set('V',1243,'c',0,NULL,NULL);
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
   if (anyof(804,787,-1)) {
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
   if (KEY(13)) {
   if (KEY(120)) {
   p900();
   }
   if (anyof(795,151,-1))   say(64,2081,0);
   if (anyof(764,807,-1))   say(76,1401,13);
   }
   if ((KEY(151)) &&
   anyof(767,813,814,803,-1)) {
   if (isnear(151,-1,-1)) {
   say(64,2081,0);
   }
   p39();
   }
   if (KEY(921)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p918(void)
#else
int p918()
#endif
{
int done=0;
   if (anyof(11,1051,-1)) {
   if (value[10]==1) {
   apport(11,value[1138]);
   } else {
   say(76,1312,11);
   }}
   if (KEY(822)) {
   if (anyof(754,993,-1))   say(72,2470,1);
   if (anyof(936,-1))   say(64,1352,0);
   if (anyof(11,1051,-1)) {
   p539();
   }
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (KEY(761)) {
   if ((value[1170]==1) ||
   anyof(762,10,754,-1)) {
   if (value[10]==1) {
   say(64,1386,0);
   }
   move(283,-1);
   p800();
   }
   return 0;
   }
   value[1142]=283;*bitword(1142)=-1;
   value[1143]=1665;*bitword(1143)=-1;
   if ((KEY(762)) &&
   anyof(11,10,1051,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(226,0,-750);
   if (KEY(761)) {
   if (value[10]==1) {
   say(64,1386,0);
   }
   move(283,-1);
   p800();
   }
   if (KEY(744)) {
   move(226,-1494);
   }
   if (KEY(900)) {
   if ((value[1139]==211)) {
   value[1137]=746;*bitword(1137)=-1;
   } else {
   value[1137]=750;*bitword(1137)=-1;
   }}
   if (anyof(762,11,1051,746,-1)) {
   if (value[10]==0) {
   say(64,1387,0);
   }
   move(211,-1978);
   }
   if (anyof(993,-1))   say(64,1418,0);
   }
   if (anyof(10,936,900,993,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p544(void)
#else
int p544()
#endif
{
int done=0;
   if (value[1190]==4) {
   p148();
   }
   if (KEY(822)) {
   if (anyof(892,-1))   say(72,2470,0);
   if (anyof(896,897,308,-1))   say(72,2894,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,748,757,-900);
   move(222,0,744,-222);
   move(257,0,754,-892);
   move(257,0,-892);
   if (anyof(897,896,308,-1)) {
   p329(-1,222,-1,744,-1,214,-1,748);
   }}
   value[1142]=257;*bitword(1142)=-1;
   value[1143]=1666;*bitword(1143)=-1;
   if (anyof(896,897,308,892,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p789(void)
#else
int p789()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(980,-1))   say(72,2746,980);
   if (anyof(7,171,-1)) {
   say(0,3234,0);
   say(64,1259,0);
   }
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   return 0;
   }
   if (anyof(754,7,171,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,744,757,-900);
   move(464,0,754,7,171,-980);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(7,171,300,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p922(void)
#else
int p922()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(300)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(896,897,308,-1))   say(72,2895,896);
   return 0;
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(214,0,746,757,-900);
   move(255,0,750,753,-896);
   if (anyof(300,-1))   say(64,1418,0);
   }
   if (anyof(300,896,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p939(void)
#else
int p939()
#endif
{
int done=0;
   bitmod('c',224,5);
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2894,896);
   if (anyof(935,223,-1))   say(64,2899,0);
   if (anyof(222,1126,-1))   say(64,2920,0);
   return 0;
   }
   if (anyof(710,287,-1)) {
   if ((value[1170]==2) &&
   !KEY(730)) {
   return 0;
   }
   if (KEY(287)) {
   bitmod('c',287,8);
   bitmod('c',286,8);
   bitmod('c',288,8);
   move(287,-2);
   }
   if ((value[1190]>4) ||
   bitest(evar(1171),2)) {
   bitmod('s',evar(1171),3);
   say(64,1414,0);
   }
   move(200,-value[1157]);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(219,0,-748);
   move(223,0,746,935,-223);
   move(224,0,-750);
   if (anyof(897,896,308,-1)) {
   p329(-1,224,-1,750,-1,219,-1,746);
   }}
   if (anyof(896,897,308,223,935,1126,222,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p506(void)
#else
int p506()
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
   move(222,0,754,-222);
   move(210,0,-753);
   if (anyof(744,745,746,747,748,749,750,751,-1))   say(64,2898,0);
   }
   if (anyof(887,223,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p257(void)
#else
int p257()
#endif
{
int done=0;
   if (value[1190]==4) {
   p148();
   }
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
   move(222,0,746,896,897,308,-222);
   }
   if (anyof(209,936,1055,991,896,897,308,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=296;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p216(void)
#else
int p216()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(899,896,-1))   say(76,2895,1137);
   if (anyof(753,892,-1))   say(64,2471,0);
   if (anyof(987,-1))   say(64,2924,0);
   return 0;
   }
   if (keyword(753,892,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(258,0,746,-899);
   move(219,0,753,-892);
   move(260,0,750,-896);
   move(266,0,-266);
   }
   if (anyof(899,896,892,987,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p76(void)
#else
int p76()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(258)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(754,209,-1))   say(64,2910,0);
   if (anyof(899,-1))   say(72,2895,899);
   return 0;
   }
   if ((KEY(848)) &&
   anyof(209,754,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(257,0,750,-899);
   move(259,0,754,848,-209);
   }
   if (anyof(258,209,899,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=259;*bitword(1142)=-1;
   value[1143]=1664;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p812(void)
#else
int p812()
#endif
{
int done=0;
   if (anyof(202,951,-1))   say(64,2593,0);
   if (keyword(790,898,-1)) {
   return 0;
   }
   if (KEY(822)) {
   if (anyof(898,-1))   say(72,2157,898);
   return 0;
   }
   if (anyof(762,898,848,757,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(758)) ||
   value[1170]==1) {
   move(258,0,753,757,-848);
   if (anyof(898,754,849,850,-1))   say(64,2593,0);
   if (anyof(762,898,-1))   say(64,1960,0);
   }
return done;
}
#ifdef __STDC__
int p244(void)
#else
int p244()
#endif
{
int done=0;
   if (KEY(822)) {
   if (anyof(896,897,308,-1))   say(72,2895,896);
   if (anyof(892,-1))   say(72,2470,0);
   if (anyof(991,1126,-1))   say(64,2921,0);
   if (anyof(887,-1))   say(64,2922,0);
   return 0;
   }
   if (((keyword(754,892,-1)) ||
   KEY(758)) ||
   value[1170]==1) {
   move(257,0,746,-896);
   move(261,0,754,-892);
   move(266,0,-266);
   if (anyof(887,-1))   say(64,2922,0);
   }
   if (anyof(991,1126,892,896,887,-1)) {
   bitmod('s',evar(1172),1);
   }
   value[1142]=261;*bitword(1142)=-1;
   value[1143]=1666;*bitword(1143)=-1;
return done;
}
#ifdef __STDC__
int p917(void)
#else
int p917()
#endif
{
int done=0;
   if (KEY(822)) {
   if (KEY(900)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if (anyof(899,896,-1))   say(76,2895,1137);
   return 0;
   }
   if (((keyword(848,753,-1)) ||
   KEY(758)) ||
   value[1170]==1) {
   move(227,0,748,753,896,-848);
   move(212,0,-746);
   move(253,0,750,899,-900);
   move(212,1494,-744);
   }
   if (anyof(900,896,899,-1)) {
   bitmod('s',evar(1172),1);
   }
return done;
}
#ifdef __STDC__
int p554(void)
#else
int p554()
#endif
{
int done=0;
   if ((KEY(758)) ||
   value[1170]==1) {
   move(226,0,-753);
   move(227,0,-744);
   move(228,0,-746);
   move(230,0,-748);
   move(237,0,-750);
   }
return done;
}
