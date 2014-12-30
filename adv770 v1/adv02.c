/* adv02.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p625(int typ0,int par0)
#else
int p625(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (lbitest(0,0,lval,lbts)) {
   if (ishere(lval[0],-1,-1)) {
   say(72,3455,lval[0]);
   }
   say(72,1506,lval[0]);
   }
   say(64,1396,0);
return done;
}
#ifdef __STDC__
int p397(void)
#else
int p397()
#endif
{
int done=0;
   if (value[1170]==1) {
   if (((isnear(123,0,4)) ||
   isnear(119,0,4)) ||
   ishere(121,-1,-1)) {
   bitmod('s',evar(1170),5);
   say(76,1500,121);
   }
   say(76,1312,121);
   }
   if (anyof(764,765,793,787,-1))   say(76,1312,1137);
   if (value[1170]==1) {
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p398(void)
#else
int p398()
#endif
{
int done=0;
   if (value[1170]==1) {
   if ((((isnear(123,0,3)) ||
   isnear(119,0,3)) ||
   isnear(136,0,3)) ||
   bitest(evar(1138),17)) {
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   }
   say(76,1312,1136);
   }
   if (anyof(756,764,765,793,787,790,-1))   say(76,1312,1137);
   if (value[1170]==1) {
   say(64,1396,0);
   }
return done;
}
#ifdef __STDC__
int p364(void)
#else
int p364()
#endif
{
int done=0;
   if ((value[1170]==1) ||
   bitest(evar(1137),0)) {
   return 0;
   }
   if ((bitest(evar(1172),2)) &&
   !KEY(822)) {
   say(64,3312,0);
   }
   if (bitest(evar(1172),1)) {
   if (anyof(764,-1))   say(76,3057,1137);
   if (anyof(808,807,-1))   say(64,1322,0);
   if (anyof(783,800,785,-1))   say(64,3307,0);
   }
   if (((anyof(798,774,796,804,769,768,767,769,-1)) ||
   anyof(815,801,795,771,788,789,790,775,772,-1)) ||
   anyof(791,799,802,803,811,813,814,-1)) {
   if (value[3305]==0) {
   say(12,3305,1137);
   say(76,3306,1136);
   } else {
   say(12,3305,1136);
   say(76,3306,1137);
   }}
return done;
}
#ifdef __STDC__
int p39(void)
#else
int p39()
#endif
{
int done=0;
   if (KEY(121)) {
   p397();
   }
   if (KEY(120)) {
   p398();
   }
   if ((anyof(1096,93,1097,-1)) &&
   ishere(85,-1,-1)) {
   if (anyof(93,-1))   say(72,3435,0);
   if (anyof(1096,-1))   say(72,3435,1);
   if (anyof(1097,-1))   say(72,3435,2);
   }
   if (anyof(927,-1))   say(64,1999,0);
   if (anyof(376,475,-1)) {
   if ((bitest(evar(1138),7)) ||
   bitest(evar(1138),18)) {
   say(64,1396,0);
   }}
   if (anyof(1020,-1))   say(64,2949,0);
   if (KEY(976)) {
   if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   bitmod('s',evar(1172),2);
   }}
   if ((KEY(935)) &&
   !(bitest(evar(1138),7))) {
   if (anyof(848,-1))   say(64,3448,0);
   if (anyof(822,-1))   say(72,2025,935);
   if (anyof(783,784,785,-1))   say(72,3447,888);
   say(64,1396,0);
   }
   if (((anyof(1011,17,-1)) &&
   bitest(evar(1138),7)) &&
   !(586<=value[1138] && value[1138]<=702)) {
   say(64,3148,0);
   }
   if (KEY(953)) {
   if ((((((isnear(33,-1,-1)) ||
   (547<=value[1138] && value[1138]<=554)) ||
   (594<=value[1138] && value[1138]<=619)) ||
   (587<=value[1138] && value[1138]<=590)) ||
   (620<=value[1138] && value[1138]<=626)) ||
   (440<=value[1138] && value[1138]<=442)) {
   if (value[1170]==1) {
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   } else    if (KEY(764)) {
   say(72,1841,953);
   } else    if (KEY(822)) {
   if (isnear(33,-1,-1)) {
   say(32,33,0);
   longjmp(loop_back,1);
   }
   if ((547<=value[1138] && value[1138]<=554)) {
   say(64,2604,0);
   }
   if ((440<=value[1138] && value[1138]<=442)) {
   say(64,2606,0);
   }
   say(64,2605,0);
   } else {
   flush_command();
   say(64,1396,0);
   }}}
   if ((KEY(1055)) &&
   have(49,-1,-1)) {
   if (anyof(822,-1))   say(64,3437,0);
   bitmod('s',evar(1172),1);
   }
   if (anyof(991,987,-1)) {
   if (bitest(evar(1138),7)) {
   if (value[1170]==1) {
   say(76,1841,1136);
   }
   say(76,1841,1137);
   } else {
   say(64,2923,0);
   }}
   if ((KEY(966)) &&
   !(bitest(evar(1138),7))) {
   say(64,3377,0);
   }
   if ((KEY(1005)) &&
   isnear(148,-1,-1)) {
   if (value[1170]==2) {
   say(64,1396,0);
   }
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   }
   if (KEY(1054)) {
   if ((((((value[HERE]==220||value[HERE]==462||value[HERE]==463||value[HERE]==464||value[HERE]==473)) ||
   (value[HERE]==474||value[HERE]==475||value[HERE]==282||value[HERE]==448)) ||
   isnear(110,-1,-1)) ||
   isnear(112,-1,-1)) ||
   isnear(111,-1,-1)) {
   say(64,1396,0);
   }}
   if (((KEY(779)) &&
   value[1170]>1) &&
   !KEY(107)) {
   say(64,1396,0);
   }
   if (KEY(1024)) {
   if ((value[1136]==1024)) {
   say(76,2962,1136);
   } else {
   say(76,2962,1137);
   }}
   if (anyof(945,-1))   say(64,3113,0);
   if (anyof(944,-1))   say(64,3112,0);
   if (value[1170]==1) {
   if ((bitest(evar(1136),0)) &&
   isnear(value[1136],-1,-1)) {
   if (bitest(evar(1136),8)) {
   say(76,1764,1136);
   } else {
   bitmod('s',evar(1170),5);
   say(76,1500,1136);
   }}
   if (((763<=value[1136] && value[1136]<=820)) ||
   KEY(730)) {
   bitmod('s',evar(1170),5);
   say(64,2600,0);
   }
   if ((886<=value[1136] && value[1136]<=902)) {
   say(64,1417,0);
   }
   if ((((903<=value[1136] && value[1136]<=1124)) &&
   !(bitest(evar(1172),1))) &&
   !(bitest(evar(1172),2))) {
   say(76,1312,1136);
   } else {
   say(76,1342,1136);
   }
   } else    if (KEY(822)) {
   if ((KEY(1049)) &&
   bitest(evar(1138),7)) {
   say(72,3131,1049);
   }
   if (((KEY(1048)) &&
   bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   say(72,3131,1048);
   }}
   if (anyof(938,-1))   say(64,1396,0);
   if ((value[1170]==2) &&
   bitest(evar(1137),0)) {
   if (bitest(evar(1172),1)) {
   if (anyof(785,800,783,-1)) {
   say(64,3307,0);
   }
   say(64,1345,0);
   }
   if (KEY(120)) {
   if (bitest(evar(1138),17)) {
   say(64,2072,0);
   }
   } else    if (KEY(168)) {
   if (KEY(764)) {
   say(72,2671,0);
   } else    if (anyof(765,-1))   say(72,2671,1);
   } else    if (KEY(3)) {
   if (KEY(764)) {
   say(72,2674,0);
   }
   if (anyof(765,-1))   say(72,2674,1);
   }
   if (((isnear(value[1137],-1,-1)) ||
   bitest(evar(1172),1)) ||
   bitest(evar(1172),2)) {
   p364();
   say(12,1989,1136);
   say(76,1990,1137);
   } else    if ((((bitest(evar(1137),4)) ||
   bitest(evar(1137),10)) ||
   bitest(evar(1137),8)) ||
   KEY(13)) {
   say(76,1312,1137);
   } else {
   say(64,1486,0);
   }}
   if (bitest(evar(1137),1)) {
   if (KEY(547)) {
   say(76,1312,1137);
   }}
   if ((value[1137]==781)) {
   say(72,3193,781);
   }
   if ((903<=value[1137] && value[1137]<=1134)) {
   if (anyof(1004,-1))   say(64,2812,0);
   if (anyof(1003,-1))   say(64,1396,0);
   if (anyof(784,1126,1133,-1)) {
   say(0,1396,0);
   } else    if ((anyof(935,376,475,-1)) &&
   !(bitest(evar(1138),7))) {
   say(64,1396,0);
   } else {
   if ((903<=value[1137] && value[1137]<=1124)) {
   if ((bitest(evar(1172),1)) ||
   bitest(evar(1172),2)) {
   p364();
   say(64,1396,0);
   } else {
   say(12,1312,1137);
   }
   } else {
   if (KEY(1132)) {
   if (!((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18)))) {
   say(72,1312,1132);
   }}
   p364();
   say(12,1989,1136);
   say(12,1990,1137);
   }}
   } else {
   say(0,1486,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p885(void)
#else
int p885()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   lval[0]=value[value[1243]];lbts[0*VARSIZE]=0;
   if ((lval[0]==3) ||
   value[136]>=7) {
   value[1245]=120;*bitword(1245)=-1;
   } else {
   if (lval[0]==4) {
   value[1245]=121;*bitword(1245)=-1;
   } else {
   if (lval[0]==5) {
   value[1245]=122;*bitword(1245)=-1;
   } else {
   if (lval[0]==value[87]) {
   value[1245]=87;*bitword(1245)=-1;
   } else {
   set('V',1245,'c',0,NULL,NULL);
   }}}}
   value[1146]=120;*bitword(1146)=-1;
   value[1146] += lval[0];
return done;
}
#ifdef __STDC__
int p217(void)
#else
int p217()
#endif
{
int done=0;
   if (value[1243]==0) {
   say(64,3231,0);
   }
   p885();
   if ((value[1245]==122)) {
   if (isnear(194,-1,-1)) {
   say(64,3344,0);
   }
   say(0,2247,0);
   }
value[value[1243]]=2;
   if (!((value[1243]==123))) {
   bitmod('s',evar(1140),13);
   }
   if (value[1247]==1) {
   set('V',1247,'c',0,NULL,NULL);
   return 0;
   }
   say(12,1363,1245);
   say(12,1364,1243);
   if ((value[1243]==123)) {
   say(64,1259,0);
   } else {
   bitmod('s',evar(1140),13);
   if (value[1140]==value[1138]) {
   say(64,1365,0);
   } else {
   say(64,1259,0);
   }}
return done;
}
#ifdef __STDC__
int p321(int typ0,int par0)
#else
int p321(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (have(136,-1,-1)) {
   if ((value[136]==3) ||
   value[136]>=7) {
   value[1243]=136;*bitword(1243)=-1;
   return 0;
   }}
   if (have(119,0,3)) {
   value[1243]=119;*bitword(1243)=-1;
   return 0;
   }
   if (have(123,0,3)) {
   value[1243]=123;*bitword(1243)=-1;
   return 0;
   }
   if (ishere(136,-1,-1)) {
   if ((value[136]==3) ||
   value[136]>=7) {
   value[1243]=136;*bitword(1243)=-1;
   return 0;
   }}
   if (ishere(119,0,3)) {
   value[1243]=119;*bitword(1243)=-1;
   return 0;
   }
   if (ishere(123,0,3)) {
   value[1243]=123;*bitword(1243)=-1;
   return 0;
   }
   if (lval[0]==1) {
   say(76,1506,120);
   }
   set('V',1243,'c',0,NULL,NULL);
return done;
}
#ifdef __STDC__
int p900(void)
#else
int p900()
#endif
{
int done=0;
   if (value[1243]==0) {
   p321(0,1);
   }
   if (isnear(139,-1,-1)) {
   say(64,2080,0);
   }
value[value[1243]]=2;
   if ((value[1243]==123)) {
   say(76,1831,123);
   }
   say(12,1366,120);
   say(12,1550,1243);
   if (value[13]==2) {
   set('E',13,'c',0,NULL,NULL);
   bitmod('s',14,10);
   say(0,2077,0);
   } else {
   if (value[13]==1) {
   set('E',13,'c',2,NULL,NULL);
   say(0,2076,0);
   } else {
   set('E',13,'c',1,NULL,NULL);
   say(0,2075,0);
   }
   bitmod('c',14,10);
   }
   set('E',14,'e',13,NULL,NULL);
   say(0,1259,0);
   say(64,13,0);
return done;
}
#ifdef __STDC__
int p304(void)
#else
int p304()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (isnear(13,-1,-1)) {
   say(64,2081,0);
   }
   if (isnear(139,0,2)) {
   say(64,3442,0);
   }
   if (!((have(136,0,6)) ||
   have(151,-1,-1))) {
   say(64,1747,0);
   }
   if ((have(151,-1,-1)) &&
   !anyof(136,87,-1)) {
   if (!((value[151]==2) ||
   anyof(767,813,-1))) {
   say(0,2378,0);
   }
   apport(151,702);
   apport(152,INHAND);
   set('L',0,'c',1,lval, lbts);
   } else {
   set('E',136,'c',1,NULL,NULL);
   apport(85,702);
   set('V',1161,'c',0,NULL,NULL);
   set('L',0,'c',0,lval, lbts);
   }
   set('V',1161,'c',0,NULL,NULL);
   if (value[139]==0) {
   say(8,2078,lval[0]);
   set('E',139,'c',1,NULL,NULL);
   set('E',441,'c',1,NULL,NULL);
   set('E',442,'c',1,NULL,NULL);
   set('E',440,'c',1,NULL,NULL);
   set('V',1193,'c',0,NULL,NULL);
   } else {
   bitmod('c',443,8);
   say(8,2079,lval[0]);
   set('E',139,'c',2,NULL,NULL);
   set('E',140,'c',2,NULL,NULL);
   bitmod('c',140,10);
   set('E',441,'c',2,NULL,NULL);
   set('E',442,'c',2,NULL,NULL);
   set('E',440,'c',2,NULL,NULL);
   }
   say(0,1259,0);
   say(64,139,0);
return done;
}
#ifdef __STDC__
int p127(void)
#else
int p127()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (test("doall")) {
   set('L',1,'c',1,lval, lbts);
   }
   if (bitest(evar(1137),16)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (lval[0]>1) {
   if (lval[1]==0) {
   say(12,2096,1137);
   }
   longjmp(loop_back,1);
   }}
return done;
}
#ifdef __STDC__
int p320(int typ0,int par0)
#else
int p320(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (have(119,0,4)) {
   value[1243]=119;*bitword(1243)=-1;
   return 0;
   }
   if (have(123,0,4)) {
   value[1243]=123;*bitword(1243)=-1;
   return 0;
   }
   if (ishere(119,0,4)) {
   value[1243]=119;*bitword(1243)=-1;
   return 0;
   }
   if (ishere(123,0,4)) {
   value[1243]=123;*bitword(1243)=-1;
   return 0;
   }
   if (lval[0]==1) {
   say(76,1506,121);
   }
   set('V',1243,'c',0,NULL,NULL);
return done;
}
#ifdef __STDC__
int p634(void)
#else
int p634()
#endif
{
int done=0;
   if (value[1243]==0) {
   p320(0,1);
   }
value[value[1243]]=2;
   if (!((value[1243]==123))) {
   bitmod('s',evar(1138),13);
   }
   if (value[8]==0) {
   set('E',8,'c',1,NULL,NULL);
   say(64,1400,0);
   }
   say(12,1979,121);
   say(76,1980,8);
return done;
}
#ifdef __STDC__
int p901(void)
#else
int p901()
#endif
{
int done=0;
   if (value[1243]==0) {
   p321(0,1);
   }
value[value[1243]]=2;
   if (!((value[1243]==123))) {
   bitmod('s',evar(1138),13);
   }
   if (value[8]==1) {
   set('E',8,'c',0,NULL,NULL);
   say(64,1399,0);
   }
   say(12,1979,120);
   say(76,1980,8);
return done;
}
#ifdef __STDC__
int p487(void)
#else
int p487()
#endif
{
int done=0;
   if (((isnear(107,0,1)) ||
   bitest(evar(1138),3)) ||
   isnear(100,0,3)) {
   bitmod('s',evar(1170),8);
   return 0;
   }
   if ((473<=value[1138] && value[1138]<=476)) {
   if ((value[162]==1) ||
   value[161]==1) {
   bitmod('s',evar(1170),8);
   return 0;
   }}
   bitmod('c',evar(1170),8);
return done;
}
#ifdef __STDC__
int p941(void)
#else
int p941()
#endif
{
int done=0;
   apport(109,702);
   if ((location[9]==214)) {
   bitmod('s',214,8);
   }
return done;
}
#ifdef __STDC__
int p899(int typ0,int par0,int typ1,int par1,int typ2,int par2)
#else
int p899(typ0,par0,typ1,par1,typ2,par2)
int typ0;int par0;
int typ1;int par1;
int typ2;int par2;
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
   lval[3] = 0;
   lbts [3] = 0;
   if (value[120]>0) {
   if (anyof(791,-1))   say(72,2274,1);
   say(0,1355,0);
   } else {
   if (anyof(791,-1))   say(72,2274,0);
   if (lval[2]==0) {
   say(8,lval[1],lval[2]);
   }}
   if (((lval[2]==136)) &&
   value[136]<9) {
   if (value[120]==0) {
   say(0,3003,0);
   }
   if (value[136]==3) {
   set('E',136,'c',7,NULL,NULL);
   } else {
   value[136] += 1;
   }
   } else    if (lval[2]>0) {
   say(8,lval[1],lval[2]);
value[lval[2]]=2;
   }
   lval[3] = irand(300);
   value[1238] += lval[0];
   value[1238] += lval[3];
   if (value[1238]>1800) {
   set('V',1238,'c',1800,NULL,NULL);
   }
   set('E',120,'c',0,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p547(void)
#else
int p547()
#endif
{
int done=0;
   if ((value[1188]<9) &&
   irand(100)<50) {
   value[1188] += 1;
   }
   if (((location[118]==701)) &&
   !(value[HERE]==495)) {
   apport(118,495);
   bitmod('c',118,4);
   }
return done;
}
#ifdef __STDC__
int p131(void)
#else
int p131()
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
   set('V',1158,'c',0,NULL,NULL);
   if (value[1188]<1) {
   return 0;
   }
   set('L',0,'c',0,lval, lbts);
   lbts[3*VARSIZE]=-1; lval[3]=FOBJ-1; while (++lval[3]<=LOBJ) {
   if (!isat(lval[3],-1,-1,473)) continue;
   if (!lbitest(3,3,lval,lbts)) continue;
   lval[0] += 1;
   }
   set('L',1,'l',0,lval, lbts);
   lval[1] *= 100;
   lval[1] /= value[1188];
   lval[1] *= value[193];
   if (irand(100)<lval[1]) {
   lval[2] = irand(lval[0]);
   lval[2] += 1;
   lbts[3*VARSIZE]=-1; lval[3]=FOBJ-1; while (++lval[3]<=LOBJ) {
   if (!isat(lval[3],-1,-1,473)) continue;
   if (!lbitest(3,3,lval,lbts)) continue;
   lval[2] -= 1;
   if (lval[2]==0) {
   set('V',1158,'l',3,lval, lbts);
   return 0;
   }}}
return done;
}
#ifdef __STDC__
int p517(int typ0,int par0)
#else
int p517(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[1]=1-1; while(++lval[1]<=10) {
   if (lval[0]!=-1) {
   if (value[1158]==0) {
   p131();
   }
   if (value[1158]>0) {
   apport(value[1158],value[1138]);
   if (bitest(evar(1170),8)) {
glue_text();
   say(0,3464,0);
   say(2,1158,0);
   }
   set('V',1158,'c',0,NULL,NULL);
   }
   value[1188] -= 1;
   }
   value[193] -= 1;
   if (value[193]==0) {
   apport(193,701);
   return 0;
   }
   if (!((lval[0]!=0) &&
   value[193]>0)) {
   return 0;
   }}
return done;
}
#ifdef __STDC__
int p936(void)
#else
int p936()
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
   lval[0] = irand(5);
   if (lval[0]==0) {
   lval[0]=227;lbts[0*VARSIZE]=-1;
   } else    if (lval[0]==1) {
   lval[0]=250;lbts[0*VARSIZE]=-1;
   } else    if (lval[0]==2) {
   lval[0]=210;lbts[0*VARSIZE]=-1;
   } else    if (lval[0]==3) {
   lval[0]=271;lbts[0*VARSIZE]=-1;
   } else {
   lval[0]=381;lbts[0*VARSIZE]=-1;
   }
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!isat(lval[2],-1,-1,value[1138])) continue;
   if (!lbitest(2,3,lval,lbts)) continue;
   if (!((lval[2]==81))) {
   apport(lval[2],lval[0]);
   set('L',1,'c',1,lval, lbts);
   }}
   if ((location[81]==462)) {
   apport(82,463);
   }
   say(8,1694,lval[1]);
   if (lval[1]==0) {
   move(210,-2);
   }
   flush_command();
   move(lval[0],-2);
return done;
}
#ifdef __STDC__
int p401(void)
#else
int p401()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,value[1138])) continue;
   if (!lbitest(0,3,lval,lbts)) continue;
   apport(lval[0],700);
   }
return done;
}
#ifdef __STDC__
int p240(int typ0,int par0)
#else
int p240(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lbts[1*VARSIZE]=-1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
   if (!isat(lval[1],-1,-1,700)) continue;
   apport(lval[1],lval[0]);
   if (((lval[1]==108||lval[1]==109)) &&
   value[109]==1) {
   if ((location[108]==700)) {
   apport(108,lval[0]);
   } else {
   apport(109,lval[0]);
   }}}
return done;
}
#ifdef __STDC__
int p626(int typ0,int par0,int typ1,int par1)
#else
int p626(typ0,par0,typ1,par1)
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
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!isat(lval[2],-1,-1,703)) continue;
   if (!lbitest(2,15,lval,lbts)) continue;
   say(72,lval[0],lval[1]);
   }
return done;
}
#ifdef __STDC__
int p843(void)
#else
int p843()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1170]==1) {
   default_to(0,703,-1);
   if (value[1170]==1) {
   return 0;
   }}
   if (bitest(evar(1137),15)) {
   say(76,3460,1137);
   }
   lval[0]=1692;lbts[0*VARSIZE]=-1;
   if ((irand(100)<10) &&
   (location[81]==462)) {
   lval[0]=1693;lbts[0*VARSIZE]=-1;
   apport(81,502);
   apport(82,702);
   }
   say(12,2028,1137);
   if (bitest(evar(1137),11)) {
   say(8,lval[0],1);
   } else {
   say(8,lval[0],0);
   }
   apport(value[1137],502);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p410(int typ0,int par0)
#else
int p410(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   set('V',1245,'c',0,NULL,NULL);
   if (value[1190]==8) {
   return 0;
   }
   set('L',1,'c',0,lval, lbts);
   bitmod('c',100,5);
   bitmod('c',67,5);
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!lbitest(2,5,lval,lbts)) continue;
   if (!((((location[lval[2]]==200)) ||
   (location[lval[2]]==702)) ||
   (lval[2]==170))) {
   if (((lval[2]==143)) &&
   !(bitest(143,4))) {
   set('L',1,'c',1,lval, lbts);
   } else {
   bitmod('s',67,5);
   bitmod('s',100,5);
   return 0;
   }}}
   bitmod('s',67,5);
   bitmod('s',100,5);
   if (!((((location[100]==200)) ||
   (location[100]==199)) ||
   (location[100]==702))) {
   return 0;
   }
   if (((have(67,-1,-1)) ||
   (location[67]==200)) ||
   (location[67]==702)) {
   if (lval[1]==0) {
   if (lval[0]==0) {
   set('V',1190,'c',4,NULL,NULL);
   } else {
   set('V',1245,'c',4,NULL,NULL);
   }
   } else {
   set('V',1245,'c',-1,NULL,NULL);
   }}
return done;
}
#ifdef __STDC__
int p889(void)
#else
int p889()
#endif
{
int done=0;
   set('T',1869,'c',0,NULL,NULL);
   p410(0,1);
   if (value[1245]==4) {
   set('T',1869,'c',26,NULL,NULL);
   } else {
   set('T',1869,'c',25,NULL,NULL);
   }
   if (!(bitest(143,4))) {
   set('T',1869,'c',24,NULL,NULL);
   }
   if (!(bitest(98,13))) {
   set('T',1869,'c',23,NULL,NULL);
   }
   if (!(bitest(473,4))) {
   set('T',1869,'c',22,NULL,NULL);
   }
   if (!(bitest(565,4))) {
   set('T',1869,'c',21,NULL,NULL);
   }
   if (!(bitest(547,4))) {
   set('T',1869,'c',20,NULL,NULL);
   }
   if (!(bitest(63,13))) {
   set('T',1869,'c',19,NULL,NULL);
   }
   if (!(bitest(158,4))) {
   set('T',1869,'c',18,NULL,NULL);
   }
   if (!(bitest(102,14))) {
   set('T',1869,'c',17,NULL,NULL);
   }
   if (!(bitest(63,5))) {
   set('T',1869,'c',16,NULL,NULL);
   }
   if (!(value[139]==2)) {
   set('T',1869,'c',15,NULL,NULL);
   }
   if (!(bitest(85,4))) {
   set('T',1869,'c',14,NULL,NULL);
   }
   if (!(value[453]==1)) {
   set('T',1869,'c',13,NULL,NULL);
   }
   if (!(bitest(145,4))) {
   set('T',1869,'c',12,NULL,NULL);
   }
   if (!(bitest(136,4))) {
   set('T',1869,'c',11,NULL,NULL);
   }
   if (!(bitest(46,4))) {
   set('T',1869,'c',10,NULL,NULL);
   }
   if (!(bitest(59,4))) {
   set('T',1869,'c',9,NULL,NULL);
   }
   if (value[32]==0) {
   set('T',1869,'c',8,NULL,NULL);
   }
   if (!(bitest(312,4))) {
   set('T',1869,'c',7,NULL,NULL);
   }
   if (!(bitest(67,4))) {
   set('T',1869,'c',6,NULL,NULL);
   }
   if ((location[25]==385)) {
   set('T',1869,'c',5,NULL,NULL);
   }
   if (value[125]==0) {
   set('T',1869,'c',4,NULL,NULL);
   }
   if ((location[90]==457)) {
   set('T',1869,'c',3,NULL,NULL);
   }
   if (!(bitest(454,4))) {
   set('T',1869,'c',2,NULL,NULL);
   }
   if (!(bitest(279,4))) {
   set('T',1869,'c',1,NULL,NULL);
   }
   if (value[1869]==value[1208]) {
   if (irand(100)<75) {
   set('T',1869,'c',0,NULL,NULL);
   } else {
   value[1869] = jrand(27 - 0) + 0;
   if (value[1869]<value[1208]) {
   set('T',1869,'c',0,NULL,NULL);
   }}
   } else {
   set('V',1208,'e',1869,NULL,NULL);
   }
   say(64,1869,0);
return done;
}
#ifdef __STDC__
int p657(void)
#else
int p657()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   bitmod('s',88,4);
   if (isnear(107,0,1)) {
   say(0,1770,0);
   say(0,1259,0);
   }
   set('V',1147,'v',1138,NULL,NULL);
   lval[0] = irand(3-1+1)+1;
   if (irand(100)<50) {
   value[1147] += lval[0];
   } else {
   value[1147] -= lval[0];
   }
   if (((bitest(evar(1147),3)) ||
   bitest(evar(1147),7)) ||
   bitest(evar(1147),5)) {
   set('V',1147,'v',1155,NULL,NULL);
   }
   apport(88,value[1147]);
   if (isnear(88,-1,-1)) {
   if ((value[HERE]==264)) {
   apport(88,262);
   } else {
   apport(88,264);
   }}
return done;
}
#ifdef __STDC__
int p656(int typ0,int par0,int typ1,int par1)
#else
int p656(typ0,par0,typ1,par1)
int typ0;int par0;
int typ1;int par1;
#endif
{
int done=0;
   int lval [4];
   short lbts [4];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   if (!(((isnear(22,-1,-1)) &&
   value[22]>0) ||
   isnear(90,-1,-1))) {
   if (irand(100)<lval[0]) {
   say(64,2003,0);
   return 0;
   }
   if (irand(100)<lval[1]) {
   say(64,1772,0);
   return 0;
   }}
   if (bitest(evar(1170),8)) {
   say(64,1771,0);
   } else {
   if (isnear(90,-1,-1)) {
   say(0,1774,0);
   apport(90,702);
   set('T',3430,'c',1,NULL,NULL);
   set('T',3431,'c',0,NULL,NULL);
   set('E',89,'c',1,NULL,NULL);
   bitmod('s',91,4);
   if (value[124]==2) {
   set('E',124,'c',0,NULL,NULL);
   }
   } else    if ((isnear(22,-1,-1)) &&
   value[22]>0) {
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!isat(lval[2],-1,-1,703)) continue;
   if (!lbitest(2,15,lval,lbts)) continue;
   say(64,2783,0);
   }
   if ((value[HERE]==303)) {
   move(304,-1);
   } else {
   move(303,-1);
   }
   say(64,2782,0);
   } else    if (isnear(193,-1,-1)) {
   say(0,1774,0);
   p517(0,1);
   } else    if (isnear(21,0,0)) {
   apport(88,702);
   if (bitest(91,4)) {
   say(72,1930,0);
   } else {
   say(72,1930,1);
   }
   } else {
   say(0,1773,0);
   }
   value[1155]=location[88];*bitword(1155)=-1;
   apport(88,value[1138]);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p105(void)
#else
int p105()
#endif
{
int done=0;
   int lval [5];
   short lbts [5];
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
   if ((value[1170]==1) ||
   (743<=value[1136] && value[1136]<=752)) {
   set('V',1216,'v',1136,NULL,NULL);
   } else {
   set('V',1216,'v',1137,NULL,NULL);
   }
   set('L',0,'v',1138,lval, lbts);
   lval[4]=335;lbts[4*VARSIZE]=-1;
   lval[0] -= lval[4];
   lval[1]=1217;lbts[1*VARSIZE]=-1;
   lval[1] += lval[0];
   lval[3]=value[lval[1]];lbts[3*VARSIZE]=0;
   lval[2]=744;lbts[2*VARSIZE]=-1;
   if (lval[3]==0) {
   bitmod('s',evar(1138),8);
   set('L',3,'v',1216,lval, lbts);
value[lval[1]]=value[1216];
   set('V',1213,'c',0,NULL,NULL);
   } else {
   lval[3] += value[1213];
   lval[3] -= 8;
   if (lval[3]<lval[2]) {
   lval[3] += 8;
   }}
   if (lval[3]==value[1216]) {
   if ((value[HERE]==350)) {
   value[1213] += 1;
   if (value[1213]==8) {
   set('V',1213,'c',0,NULL,NULL);
   }
   move(330,-2);
   }
   set('L',4,'v',1138,lval, lbts);
   lval[4] += 1;
   move(lval[4],-2);
   } else    if ((value[HERE]==347)) {
   if (value[1215]==0) {
   set('V',1215,'v',1216,NULL,NULL);
   set('L',0,'v',1216,lval, lbts);
   } else {
   set('L',0,'v',1215,lval, lbts);
   lval[0] += value[1213];
   lval[0] -= 9;
   if (lval[0]<lval[2]) {
   lval[0] += 8;
   }
   if (lval[0]<lval[2]) {
   lval[0] += 8;
   }}
   if (lval[0]==value[1216]) {
   move(334,-2);
   } else {
   move(346,-2);
   }
   } else    if ((value[HERE]==335)) {
   set('V',1214,'l',3,lval, lbts);
   value[1214] -= 4;
   if (value[1214]<lval[2]) {
   value[1214] += 8;
   }
   if (value[1214]==value[1216]) {
   set('V',1214,'l',3,lval, lbts);
   set('E',333,'v',1214,NULL,NULL);
   value[333] -= lval[2];
   move(333,-2);
   } else {
   move(335,-2);
   }
   } else {
   set('L',4,'v',1138,lval, lbts);
   lval[4] -= 1;
   move(lval[4],-2);
   }
return done;
}
#ifdef __STDC__
int p122(void)
#else
int p122()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('E',84,'c',0,NULL,NULL);
   if ((value[HERE]==200||value[HERE]==259||value[HERE]==495||value[HERE]==333)) {
   say(64,1738,0);
   }
   lval[0] = irand(750-600+1)+600;
   value[1238] += lval[0];
   if (value[1238]>1800) {
   set('V',1238,'c',1800,NULL,NULL);
   }
   set('E',120,'c',0,NULL,NULL);
   if (bitest(evar(1171),10)) {
   say(64,2176,0);
   }
   set('L',0,'c',0,lval, lbts);
   if (bitest(evar(1171),9)) {
   say(0,2601,0);
   set('L',0,'c',2,lval, lbts);
   } else    if (bitest(67,4)) {
   say(8,1740,1);
   } else {
   say(8,1740,0);
   }
   set('T',2635,'c',1,NULL,NULL);
   bitmod('s',evar(1171),9);
   set('V',1172,'c',23,NULL,NULL);
   say(72,1741,lval[0]);
return done;
}
#ifdef __STDC__
int p26(void)
#else
int p26()
#endif
{
int done=0;
   set('V',1245,'c',1,NULL,NULL);
   if (!(bitest(evar(1170),8))) {
   return 0;
   }
   set('V',1245,'c',0,NULL,NULL);
   if (((((((((((((((bitest(evar(1170),7)) ||
   value[1190]>3) ||
   bitest(evar(1138),7)) ||
   bitest(evar(1138),5)) ||
   bitest(evar(1138),11)) ||
   bitest(20,13)) ||
   isnear(193,-1,-1)) ||
   isnear(21,-1,-1)) ||
   isnear(23,-1,-1)) ||
   isnear(9,-1,-1)) ||
   isnear(25,-1,-1)) ||
   isnear(5,-1,-1)) ||
   isnear(33,-1,-1)) ||
   value[1187]>0) ||
   bitest(46,12)) {
   set('V',1245,'c',1,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p609(void)
#else
int p609()
#endif
{
int done=0;
   value[1235] -= 1;
   if ((value[1235]<1) &&
   irand(100)<25) {
   p26();
   if (value[1245]==1) {
   return 0;
   }
   set('V',1234,'c',-1,NULL,NULL);
   if (!((((bitest(evar(1234),0)) ||
   irand(100)<75) ||
   (location[84]==702)) ||
   bitest(67,4))) {
   set('V',1234,'c',0,NULL,NULL);
   bitmod('s',evar(1234),0);
   }
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),1)) ||
   irand(100)<75) ||
   bitest(454,4))) {
   set('V',1234,'c',1,NULL,NULL);
   bitmod('s',evar(1234),1);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),9)) ||
   irand(100)<75) ||
   bitest(128,4)) ||
   !(bitest(125,4)))) {
   set('V',1234,'c',9,NULL,NULL);
   bitmod('s',evar(1234),9);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),2)) ||
   irand(100)<75) ||
   bitest(312,4)) ||
   !(bitest(309,4)))) {
   set('V',1234,'c',2,NULL,NULL);
   bitmod('s',evar(1234),2);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),3)) ||
   irand(100)<75) ||
   !(bitest(322,4))) ||
   bitest(28,13))) {
   set('V',1234,'c',3,NULL,NULL);
   bitmod('s',evar(1234),3);
   }}
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),4)) ||
   irand(100)<75) ||
   bitest(312,4))) {
   set('V',1234,'c',4,NULL,NULL);
   bitmod('s',evar(1234),4);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),6)) ||
   irand(100)<75) ||
   (location[100]==199)) ||
   !(bitest(100,4)))) {
   set('V',1234,'c',6,NULL,NULL);
   bitmod('s',evar(1234),6);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),7)) ||
   irand(100)<75) ||
   bitest(583,4)) ||
   !(bitest(335,4)))) {
   set('V',1234,'c',7,NULL,NULL);
   bitmod('s',evar(1234),7);
   }}
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),8)) ||
   irand(100)<75) ||
   !(bitest(386,4)))) {
   set('V',1234,'c',8,NULL,NULL);
   bitmod('s',evar(1234),8);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),11)) ||
   irand(100)<75) ||
   bitest(61,4)) ||
   bitest(287,8))) {
   set('V',1234,'c',11,NULL,NULL);
   bitmod('s',evar(1234),11);
   }}
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),10)) ||
   irand(100)<75) ||
   !(bitest(59,4)))) {
   set('V',1234,'c',10,NULL,NULL);
   bitmod('s',evar(1234),10);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),12)) ||
   irand(100)<75) ||
   !(bitest(498,4))) ||
   bitest(503,4))) {
   set('V',1234,'c',12,NULL,NULL);
   bitmod('s',evar(1234),12);
   }}
   if (value[1234]==-1) {
   if (!((((bitest(evar(1234),13)) ||
   irand(100)<75) ||
   !(bitest(318,4))) ||
   bitest(627,4))) {
   set('V',1234,'c',13,NULL,NULL);
   bitmod('s',evar(1234),13);
   }}
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),14)) ||
   irand(100)<75) ||
   !(bitest(144,4)))) {
   if ((((location[144]==631)) ||
   (location[144]==633)) ||
   (location[144]==634)) {
   set('V',1234,'c',14,NULL,NULL);
   bitmod('s',evar(1234),14);
   }}}
   if (value[1234]==-1) {
   if (!(((((bitest(evar(1234),16)) ||
   irand(100)<75) ||
   !(bitest(85,4))) ||
   (location[85]==702)) ||
   bitest(87,4))) {
   set('V',1234,'c',16,NULL,NULL);
   bitmod('s',evar(1234),16);
   }}
   if (value[1234]==-1) {
   if (!(((bitest(evar(1234),15)) ||
   irand(100)<75) ||
   bitest(63,5))) {
   set('V',1234,'c',15,NULL,NULL);
   bitmod('s',evar(1234),15);
   }}
   if (((value[1234]==-1) &&
   bitest(332,4)) &&
   !(value[HERE]==332)) {
   if (!(((bitest(evar(1234),17)) ||
   irand(100)<75) ||
   bitest(334,4))) {
   set('V',1234,'c',17,NULL,NULL);
   bitmod('s',evar(1234),17);
   }}
   if (value[1234]==-1) {
   if (!((bitest(evar(1234),5)) ||
   irand(100)<85)) {
   set('V',1234,'c',5,NULL,NULL);
   bitmod('s',evar(1234),5);
   }}
   value[1235] = irand(100-20+1)+20;
   if (value[1234]>-1) {
   set('T',1749,'v',1234,NULL,NULL);
   say(0,1749,0);
   value[1235] += 100;
   }}
return done;
}
#ifdef __STDC__
int p542(void)
#else
int p542()
#endif
{
int done=0;
   if (irand(100)<20) {
   move(517,-2);
   }
   move(515,-2);
return done;
}
#ifdef __STDC__
int p700(void)
#else
int p700()
#endif
{
int done=0;
   set('E',517,'c',1,NULL,NULL);
   say(64,1805,0);
return done;
}
#ifdef __STDC__
int p380(void)
#else
int p380()
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
   if (value[1188]<1) {
   return 0;
   }
   set('L',6,'c',0,lval, lbts);
   bitmod('s',100,15);
   bitmod('s',118,15);
   if ((location[116]==295)) {
   bitmod('s',116,15);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!lbitest(0,3,lval,lbts)) continue;
   if (!(lbitest(0,15,lval,lbts))) {
   lbitmod(8,'c',0,18,lval,lbts);
   if ((((lbitest(0,4,lval,lbts)) &&
   !(lbitest(0,15,lval,lbts))) &&
   !isnear(lval[0],-1,-1)) &&
   !(lval[0]==124)) {
   set('L',7,'c',1,lval, lbts);
   if (lbitest(0,7,lval,lbts)) {
   lval[7]=value[lval[0]];lbts[7*VARSIZE]=0;
   }
   if (lval[7]>0) {
   lval[1]=location[lval[0]];lbts[1*VARSIZE]=-1;
   if (!(((lbitest(1,7,lval,lbts)) ||
   lbitest(1,5,lval,lbts)) ||
   lbitest(1,10,lval,lbts))) {
   lval[6] += 1;
   lbitmod(8,'s',0,18,lval,lbts);
   }}}}}
   bitmod('c',100,15);
   bitmod('c',116,15);
   bitmod('c',118,15);
   if (lval[6]>0) {
   lval[5] = irand(lval[6]);
   lval[5] += 1;
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!lbitest(2,18,lval,lbts)) continue;
   lval[3] += 1;
   if (lval[5]>0) {
   lval[5] -= 1;
   if (lval[5]==0) {
   lval[1]=location[lval[2]];lbts[1*VARSIZE]=-1;
   set('L',0,'l',2,lval, lbts);
   }}}
   set('L',4,'l',3,lval, lbts);
   lval[4] *= 100;
   lval[4] /= value[1188];
   lval[4] *= value[193];
   if (irand(100)<lval[4]) {
   if (!(lbitest(0,5,lval,lbts))) {
   return 0;
   }
   lval[5] = irand(lval[3]);
   lval[5] += 1;
   lbts[2*VARSIZE]=-1; lval[2]=FOBJ-1; while (++lval[2]<=LOBJ) {
   if (!isat(lval[2],-1,-1,473)) continue;
   if (lval[5]>0) {
   lval[5] -= 1;
   if (lval[5]==0) {
   if ((lbitest(2,5,lval,lbts)) ||
   lval[2]==value[1158]) {
   return 0;
   }
   apport(lval[2],lval[1]);
   }}}}
   apport(lval[0],473);
   }
return done;
}
#ifdef __STDC__
int p817(void)
#else
int p817()
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
   set('L',0,'v',1136,lval, lbts);
   } else {
   set('L',0,'v',1137,lval, lbts);
   }
   if ((743<=lval[0] && lval[0]<=752)) {
   lval[0] += 4;
   lval[1]=752;lbts[1*VARSIZE]=-1;
   if (lval[0]>=lval[1]) {
   lval[0] -= 8;
   }
   if (value[1170]==1) {
   set('V',1136,'l',0,lval, lbts);
   } else {
   set('V',1137,'l',0,lval, lbts);
   }}
return done;
}
#ifdef __STDC__
int p802(void)
#else
int p802()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if ((KEY(110)) &&
   (value[HERE]==448)) {
   return 0;
   }
   set('V',1165,'c',0,NULL,NULL);
   if (value[1170]==1) {
   set('L',0,'v',1136,lval, lbts);
   } else {
   set('L',0,'v',1137,lval, lbts);
   }
   if (!((((((lbitest(0,0,lval,lbts)) &&
   lbitest(0,3,lval,lbts)) &&
   !(lbitest(0,5,lval,lbts))) ||
   (lval[0]==139)) ||
   (lval[0]==9)) ||
   (lval[0]==193))) {
   return 0;
   }
   if ((isnear(lval[0],-1,-1)) &&
   !KEY(764)) {
   return 0;
   }
   if (KEY(28)) {
   return 0;
   }
   if (isnear(lval[0],-1,-1)) {
   return 0;
   }
   set('L',1,'c',0,lval, lbts);
   if ((lbitest(0,13,lval,lbts)) &&
   (value[HERE]==447)) {
   set('L',1,'c',1,lval, lbts);
   }
   if ((lbitest(0,14,lval,lbts)) &&
   (value[HERE]==448)) {
   set('L',1,'c',1,lval, lbts);
   }
   if (!((isnear(value[1137],-1,-1)) ||
   lval[1]==1)) {
   say(76,1312,1137);
   }
   if (KEY(764)) {
   if (anyof(193,-1))   say(64,1396,0);
   if (bitest(evar(1137),11)) {
   set('T',1842,'c',1,NULL,NULL);
   } else {
   set('T',1842,'c',0,NULL,NULL);
   }
   if (lbitest(0,18,lval,lbts)) {
   say(76,1842,1137);
   }
   if (value[1179]<value[1194]) {
   lbitmod(2,'s',0,18,lval,lbts);
   } else {
   flush_command();
   say(64,1381,0);
   }}
   set('V',1165,'l',0,lval, lbts);
   apport(lval[0],value[1138]);
return done;
}
#ifdef __STDC__
int p806(void)
#else
int p806()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (!(value[1165]==0)) {
   if (value[1170]==1) {
   set('L',0,'v',1136,lval, lbts);
   } else {
   set('L',0,'v',1137,lval, lbts);
   }
   if (!(lbitest(0,0,lval,lbts))) {
   return 0;
   }
   if (!(have(lval[0],-1,-1))) {
   apport(value[1165],473);
   }}
return done;
}
#ifdef __STDC__
int p183(void)
#else
int p183()
#endif
{
int done=0;
   if ((value[HERE]==206||value[HERE]==502||value[HERE]==432||value[HERE]==449)) {
   say(76,1841,206);
   }
   say(76,1323,206);
return done;
}
#ifdef __STDC__
int p378(void)
#else
int p378()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   set('V',1182,'c',0,NULL,NULL);
   set('V',1183,'c',0,NULL,NULL);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!lbitest(0,5,lval,lbts)) continue;
   if (((location[lval[0]]==200)) ||
   (location[lval[0]]==302)) {
   if (((lval[0]==144)) ||
   (lval[0]==148)) {
   lval[1]=value[lval[0]];lbts[1*VARSIZE]=0;
   if (lval[1]>=2) {
   value[1182] += 9;
   } else {
   value[1182] += 14;
   }
   } else {
   value[1182] += 14;
   }
   } else {
   if (lbitest(0,4,lval,lbts)) {
   value[1182] += 7;
   }}
   value[1183] += 14;
   }
   if ((location[100]==200)) {
   value[1182] += 7;
   value[1182] -= 14;
   } else    if ((location[100]==199)) {
   value[1182] += 14;
   value[1182] -= 7;
   }
   if (!(bitest(83,5))) {
   value[1183] += 14;
   }
   if (!(bitest(63,5))) {
   value[1183] += 14;
   }
   if (bitest(104,4)) {
   value[1182] += 3;
   if (((location[104]==200)) ||
   (location[105]==200)) {
   value[1182] += 3;
   }}
   if ((((location[116]==200)) ||
   (location[116]==302)) ||
   (location[116]==295)) {
   value[1182] += 1;
   }
   value[1183] += 1;
   if (bitest(170,5)) {
   value[1182] += 7;
   }
   if (value[1190]<6) {
   if (bitest(195,4)) {
   value[1182] += 1;
   }
   if (bitest(540,4)) {
   value[1182] += 2;
   }
   if (bitest(199,4)) {
   value[1182] += 2;
   }
   if ((bitest(206,4)) ||
   bitest(222,4)) {
   value[1182] += 8;
   }
   if (bitest(589,4)) {
   value[1182] += 8;
   }
   if (bitest(545,4)) {
   value[1182] += 8;
   }
   if (bitest(386,4)) {
   value[1182] += 8;
   }
   if (bitest(439,4)) {
   value[1182] += 8;
   }
   if (bitest(312,4)) {
   value[1182] += 8;
   }
   if (bitest(352,4)) {
   value[1182] += 8;
   }
   if (bitest(28,13)) {
   value[1182] += 8;
   }
   if (bitest(158,4)) {
   value[1182] += 10;
   }
   if (bitest(547,4)) {
   value[1182] += 10;
   }
   if (bitest(483,4)) {
   value[1182] += 10;
   }
   } else {
   value[1182] += 99;
   }
   value[1183] += 99;
   if (value[1190]>3) {
   set('L',1,'v',1190,lval, lbts);
   lval[1] -= 3;
   lval[1] *= 16;
   value[1182] += lval[1];
   }
   value[1183] += 96;
   set('V',1245,'v',1183,NULL,NULL);
   if (value[1164]==3) {
   value[1182] += 7;
   value[1245] += 7;
   }
   set('V',1163,'v',1182,NULL,NULL);
   if (value[1164]!=2) {
   set('V',1162,'v',1180,NULL,NULL);
   value[1162] *= 10;
   value[1162] += value[1181];
   value[1163] -= value[1162];
   }
   if (value[1163]<0) {
   set('V',1163,'c',0,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p322(void)
#else
int p322()
#endif
{
int done=0;
   p378();
   say(12,1513,1182);
   if (value[1182]>770) {
   say(0,3391,0);
   }
   if (value[1162]>0) {
   say(12,1515,1162);
   say(12,1516,1163);
   }
   say(12,1517,1183);
   say(12,1518,1185);
   say(0,1259,0);
   set('V',1245,'v',1182,NULL,NULL);
   value[1245] -= value[1162];
   if (value[1163]<50) {
   say(0,1520,0);
   value[1245] -= 50;
   } else    if (value[1163]<150) {
   say(0,1521,0);
   value[1245] -= 150;
   } else    if (value[1163]<250) {
   say(0,1522,0);
   value[1245] -= 250;
   } else    if (value[1163]<350) {
   say(0,1523,0);
   value[1245] -= 350;
   } else    if (value[1163]<450) {
   say(0,1524,0);
   value[1245] -= 450;
   } else    if (value[1163]<550) {
   say(0,1525,0);
   value[1245] -= 550;
   } else    if (value[1163]<650) {
   say(0,1526,0);
   value[1245] -= 650;
   } else    if (value[1163]<750) {
   say(0,1527,0);
   value[1245] -= 750;
   } else    if (value[1163]<770) {
   say(0,1528,0);
   value[1245] -= 770;
   } else    if (value[1163]==770) {
   say(0,1529,0);
   set('V',1245,'c',0,NULL,NULL);
   } else    if (value[1163]<777) {
   say(0,3388,0);
   set('V',1245,'c',0,NULL,NULL);
   } else {
   say(0,3387,0);
   set('V',1245,'c',0,NULL,NULL);
   }
   say(0,1259,0);
   value[1245] *= -1;
   if (value[1245]>0) {
   if (value[1245]==1) {
   say(0,1530,0);
   } else {
   say(12,1531,1245);
   }}
   say(0,1259,0);
   finita();
return done;
}
#ifdef __STDC__
int p153(void)
#else
int p153()
#endif
{
int done=0;
   flush_command();
   say(0,1259,0);
   bitmod('c',evar(1171),2);
   bitmod('c',evar(1171),0);
   bitmod('c',100,13);
   if (value[100]==2) {
   set('E',100,'c',3,NULL,NULL);
   }
   if ((value[HERE]==515||value[HERE]==315)) {
   move(702,-1);
   }
   set('E',18,'c',0,NULL,NULL);
   apport(18,701);
   if (!((location[130]==702))) {
   apport(130,701);
   }
   if (value[26]==1) {
   set('E',26,'c',0,NULL,NULL);
   } else {
   if (value[26]==3) {
   set('E',26,'c',2,NULL,NULL);
   }}
   if (value[46]>1) {
   set('E',46,'c',1,NULL,NULL);
   }
   if (value[36]==1) {
   set('E',36,'c',0,NULL,NULL);
   set('V',1156,'c',0,NULL,NULL);
   bitmod('c',36,13);
   }
   value[1180] += 1;
   if (value[1190]>4) {
   if (value[1190]==5) {
   say(0,1415,0);
   } else {
   value[1180] -= 1;
   }
   p322();
   }
   set('E',120,'c',0,NULL,NULL);
   value[1238] = irand(700-600+1)+600;
   set('V',1172,'c',26,NULL,NULL);
   say(64,1372,0);
return done;
}
#ifdef __STDC__
int p727(void)
#else
int p727()
#endif
{
int done=0;
   set('T',1980,'c',0,NULL,NULL);
   if (KEY(764)) {
   if (ishere(110,-1,-1)) {
   return 0;
   }
   if (have(112,-1,-1)) {
   say(76,1307,1137);
   }
   if (!(isnear(112,-1,-1))) {
   if ((value[HERE]==448)) {
   if (bitest(112,4)) {
   say(76,1842,1137);
   }
   } else {
   return 0;
   }}
   bitmod('s',112,4);
   if (value[1179]<value[1194]) {
   if (!(bitest(112,18))) {
   bitmod('s',112,18);
   set('T',1980,'c',1,NULL,NULL);
   }
   apport(112,INHAND);
   set('V',1165,'c',0,NULL,NULL);
   say(12,1979,1136);
   if (value[112]==0) {
   say(76,1980,110);
   } else {
   say(76,1980,1137);
   }}
   flush_command();
   say(64,1381,0);
   }
   if (anyof(765,793,-1)) {
   if (have(110,-1,-1)) {
   set('V',1165,'c',0,NULL,NULL);
   return 0;
   }
   if (have(112,-1,-1)) {
   apport(112,HERE);
   say(12,1979,1136);
   if (value[112]==0) {
   say(76,1980,110);
   } else {
   say(76,1980,1137);
   }}
   say(76,1506,1137);
   }
   if (KEY(781)) {
   if ((have(110,-1,-1)) ||
   have(112,-1,-1)) {
   if ((value[HERE]==448)) {
   say(0,3467,0);
   if (value[3467]==0) {
   p153();
   }
   longjmp(loop_back,1);
   } else {
   say(64,1322,0);
   }}
   say(76,1506,1137);
   }
   if (KEY(822)) {
   if ((((isnear(110,-1,-1)) &&
   bitest(110,18)) &&
   !have(112,-1,-1)) ||
   have(110,-1,-1)) {
   say(76,2025,1137);
   } else    if (isnear(112,-1,-1)) {
   say(72,2772,0);
   } else    if ((value[HERE]==447)) {
   say(64,2771,0);
   } else    if ((value[HERE]==448)) {
   say(72,2772,1);
   }
   } else {
   say(64,1861,0);
   }
return done;
}
