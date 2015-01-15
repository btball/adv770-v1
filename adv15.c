/* adv15.c: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p3(void)
#else
int p3()
#endif
{
int done=0;
   bitmod('s',479,18);
   bitmod('c',475,18);
   if (value[94]>0) {
   if (!((503<=value[1138] && value[1138]<=511))) {
   set('E',94,'c',0,NULL,NULL);
   }}
   p847();
   if (value[1170]==-1) {
   set('V',1170,'c',2,NULL,NULL);
   say(12,3197,1137);
   (*procs[726])();
   }
   if (value[1172]==2) {
   say(0,1543,0);
   set('V',1172,'c',43,NULL,NULL);
   }
   if ((value[1190]>2) ||
   value[1172]>0) {
   return 0;
   }
   if (value[1190]<=1) {
   if (test("cgi")) {
   p762();
   }
   set('V',1172,'c',3,NULL,NULL);
   p925();
   set('V',1170,'c',98,NULL,NULL);
   say(64,1263,0);
   }
return done;
}
#ifdef __STDC__
int p4(void)
#else
int p4()
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
   if (value[1172]>0) {
   return 0;
   }
   if ((value[1158]>0) &&
   !(location[value[1158]]==473)) {
   set('V',1158,'c',0,NULL,NULL);
   }
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!lbitest(0,6,lval,lbts)) continue;
   if (!isat(lval[0],-1,-1,702)) continue;
   if (!((location[lval[0]]==701))) {
   lbitmod(4,'c',0,6,lval,lbts);
   }}
   if (value[1207]!=0) {
   if (bitest(evar(1207),0)) {
   set('V',1207,'c',0,NULL,NULL);
   bitmod('c',evar(1207),0);
   } else {
   bitmod('s',evar(1207),0);
   }}
   if (((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) ||
   (value[HERE]==502)) {
   set('T',1695,'c',1,NULL,NULL);
   } else {
   set('T',1695,'c',0,NULL,NULL);
   }
   lval[1] = irand(100);
   p487();
   if ((value[HERE]==564)) {
   if (isnear(165,-1,-1)) {
   if (value[165]==3) {
   if (!((KEY(822)) &&
   value[1170]==1)) {
   say(0,165,0);
   }}
   if (value[165]>2) {
   apport(165,702);
   }}
   if ((irand(100)<50) &&
   (location[165]==701)) {
   apport(165,value[1138]);
   if (!(bitest(evar(1170),0))) {
   say(0,165,0);
   }
   bitmod('s',165,4);
   }}
   if ((value[HERE]==586)) {
   if (!((KEY(822)) &&
   value[1170]==1)) {
   say(0,1259,0);
   }
   if (value[586]==0) {
   bitmod('s',154,4);
   move(547,-2512);
   }
   } else    if ((value[63]==1) &&
   !ishere(63,-1,-1)) {
   set('E',63,'c',3,NULL,NULL);
   }
   if (bitest(evar(1138),15)) {
   p211();
   }
   if ((bitest(evar(1170),6)) &&
   (value[HERE]==462)) {
   if (anyof(765,793,-1)) {
   p936();
   }}
   if ((irand(100)<4) &&
   value[1190]==3) {
   p547();
   }
   if (value[1190]==6) {
   p806();
   }
   if ((value[HERE]==540)) {
   bitmod('s',138,4);
   }
   if (((value[HERE]==671)) &&
   value[671]==2) {
   say(0,2871,0);
   value[671] += 1;
   }
   if ((value[HERE]==210)) {
   if ((value[213]==0) &&
   !have(47,-1,-1)) {
   set('E',210,'c',0,NULL,NULL);
   } else {
   set('E',210,'c',1,NULL,NULL);
   }}
   if (bitest(evar(1170),0)) {
   set('T',2502,'c',0,NULL,NULL);
   set('T',2503,'c',0,NULL,NULL);
   bitmod('c',138,13);
   bitmod('s',120,13);
   if (isnear(5,0,0)) {
   bitmod('s',5,13);
   }
   bitmod('s',194,15);
   value[1186] += 1;
   if ((value[HERE]==214)) {
   set('V',1152,'v',1139,NULL,NULL);
   }
   if (((519<=value[1138] && value[1138]<=544)) ||
   (value[HERE]==480||value[HERE]==481)) {
   apport(131,value[1138]);
   }
   if (value[193]>0) {
   if ((bitest(evar(1138),7)) ||
   bitest(evar(1138),5)) {
   bitmod('c',193,15);
   if (irand(100)<15) {
   value[193] -= 1;
   if (value[193]==0) {
   apport(193,701);
   }}
   } else {
   if (!(((location[193]==value[1138])) ||
   (location[193]==value[1139]))) {
   set('E',193,'c',0,NULL,NULL);
   apport(193,701);
   }}}
   if ((bitest(20,13)) &&
   bitest(evar(1138),7)) {
   bitmod('c',20,13);
   }
   if ((value[HERE]==515||value[HERE]==511||value[HERE]==315||value[HERE]==544)) {
   p676();
   }}
   if (bitest(evar(1171),0)) {
   p845();
   }
   if (bitest(evar(1170),0)) {
   if ((isnear(100,-1,-1)) &&
   value[100]>1) {
   if ((location[100]==value[1138])) {
   set('E',100,'c',3,NULL,NULL);
   } else {
   set('E',100,'c',2,NULL,NULL);
   }}
   if ((bitest(evar(1139),11)) &&
   (location[193]==value[1139])) {
   if (irand(100)<97) {
   move(value[1139],-1);
   bitmod('c',evar(1170),0);
   say(0,1277,0);
   bitmod('s',193,15);
   return 0;
   } else {
   p781();
   }}
   } else {
   if ((isnear(193,-1,-1)) &&
   irand(100)<value[1201]) {
   p245();
   }
   return 0;
   }
   if (bitest(evar(1170),0)) {
   bitmod('s',evar(1172),3);
   bitmod('c',evar(1170),0);
   } else {
   bitmod('c',evar(1172),3);
   }
   value[1157]=1580;*bitword(1157)=-1;
   if (irand(100)<1) {
   value[1157] += 1;
   }
   if (isnear(107,-1,-1)) {
   if ((value[107]==1) &&
   !(value[HERE]==315)) {
   value[1173] -= 1;
   if ((value[1173]==40) ||
   value[1173]==0) {
   p522();
   }}}
   if ((isnear(88,-1,-1)) &&
   bitest(evar(1170),8)) {
   p657();
   }
   if (!(((location[130]==701)) ||
   (location[130]==702))) {
   apport(130,value[1138]);
   if (value[130]>0) {
   if (bitest(evar(1170),8)) {
   say(0,1628,0);
   }}}
   if (!((((bitest(evar(1138),4)) &&
   bitest(evar(1170),1)) ||
   bitest(evar(1170),2)) ||
   bitest(evar(1170),9))) {
   bitmod('s',evar(1170),3);
   }
   if (bitest(evar(1170),8)) {
   say(2,1138,0);
   if ((value[HERE]==491)) {
   p323();
   }
   bitmod('c',evar(1170),9);
   if ((((value[1139]==544)) &&
   !(value[1138]==544)) &&
   anyof(744,745,746,747,748,749,750,751,-1)) {
   say(0,2590,0);
   }
   p793();
   if (bitest(evar(1138),4)) {
   set('L',1,'c',2,lval, lbts);
   } else {
   set('L',1,'c',3,lval, lbts);
   }
   if (!(bitest(evar(1138),7))) {
   value[1189] -= lval[1];
   }
   bitmod('s',evar(1138),4);
   if (value[193]<1) {
   bitmod('c',193,15);
   } else {
   if (!((bitest(evar(1138),7)) ||
   bitest(evar(1138),5))) {
   apport(193,value[1138]);
   }}
   p400();
   if (((isnear(193,-1,-1)) &&
   value[1158]!=0) &&
   irand(100)<67) {
   if (value[193]==1) {
   say(8,1808,0);
   } else {
   say(8,1808,1);
   }}
   if (have(39,-1,-1)) {
   say(0,1419,0);
   }
   } else {
   if (((642<=value[1138] && value[1138]<=670)) ||
   (value[HERE]==641)) {
   if ((((((value[HERE]==643||value[HERE]==644||value[HERE]==647||value[HERE]==648)) ||
   (659<=value[1138] && value[1138]<=663)) ||
   (653<=value[1138] && value[1138]<=655)) ||
   (value[HERE]==666)) ||
   (value[HERE]==652||value[HERE]==653||value[HERE]==656||value[HERE]==657||value[HERE]==658)) {
   say(0,2777,0);
   } else    if ((value[HERE]==649)) {
   say(0,2778,0);
   } else {
   p849(0,0);
   }}
   if (!((bitest(evar(1139),3)) ||
   isnear(22,0,1))) {
   if (!(((location[107]==value[1139])) &&
   value[107]==1)) {
   if (!(((location[100]==value[1139])) &&
   value[100]!=1)) {
   if ((((have(61,-1,-1)) ||
   irand(100)<25) &&
   !(bitest(evar(1171),5))) &&
   value[1190]<6) {
   if (!((isnear(22,-1,-1)) &&
   value[22]>0)) {
   if (bitest(evar(1138),7)) {
   say(8,1305,0);
   } else {
   say(8,1305,1);
   p153();
   }}}}}}
   p849(0,0);
   }
   bitmod('c',evar(1170),3);
   bitmod('c',evar(1171),5);
   if (((((irand(100)<1) &&
   irand(100)<5) &&
   value[1190]<6) &&
   value[1185]>250) &&
   !(bitest(evar(1138),3))) {
   p219();
   }
   p536();
   if ((((620<=value[1138] && value[1138]<=622)) &&
   bitest(evar(1170),12)) &&
   !(bitest(evar(1210),10))) {
   bitmod('c',evar(1170),12);
   p321(0,0);
   if (value[1243]==0) {
   if (have(136,-1,-1)) {
   say(8,3002,0);
   } else {
   say(8,3002,1);
   }
   } else    if ((value[1243]==123)) {
   say(8,3002,1);
   } else    if ((((value[1243]==136)) &&
   value[136]==9) ||
   (value[1243]==119)) {
   say(8,3002,2);
   } else    if ((value[1243]==136)) {
   if (value[136]>3) {
   say(8,3002,3);
   }
   bitmod('s',evar(1210),10);
   }}
   if (((value[HERE]==636||value[HERE]==637)) &&
   bitest(evar(1138),16)) {
   bitmod('c',evar(1138),16);
   if ((value[HERE]==636)) {
   say(0,2536,0);
   } else {
   say(0,2537,0);
   }}
   if (value[1160]>0) {
   set('V',1160,'c',0,NULL,NULL);
   if (!(((bitest(199,4)) ||
   bitest(86,4)) &&
   bitest(137,4))) {
   if ((bitest(199,4)) ||
   bitest(137,4)) {
   say(0,2298,0);
   } else {
   say(0,2297,0);
   }}}
   if ((value[HERE]==222)) {
   if (irand(100)<35) {
   say(0,1286,0);
   }}
   if ((548<=value[1138] && value[1138]<=553)) {
   if (irand(100)<3) {
   if (bitest(evar(1210),7)) {
   say(64,2566,0);
   bitmod('c',evar(1210),7);
   } else {
   lval[3] = irand(2408-2406+1)+2406;
   set('L',2,'l',3,lval, lbts);
   lval[1]=2406;lbts[1*VARSIZE]=-1;
   lval[2] -= lval[1];
   if (!(bitest(evar(1211),lval[2]))) {
   bitmod('s',evar(1211),lval[2]);
   say(0,1259,0);
   say(0,lval[3],0);
   }}}}
   p392();
   if ((bitest(evar(1138),7)) ||
   value[1190]>5) {
   p549();
   } else {
   if (value[1189]<1) {
   p272();
   } else {
   bitmod('c',evar(1170),7);
   value[1240] -= 1;
   if (value[1240]==0) {
   value[1240] = irand(20-10+1)+10;
   p380();
   } else {
   p549();
   }}}
   if (isnear(193,-1,-1)) {
   set('V',1202,'c',50,NULL,NULL);
   p245();
   }
   if ((((location[107]==702)) &&
   (value[HERE]==195)) &&
   value[1190]<7) {
   say(0,1478,0);
   p322();
   }
   if (!((((bitest(124,4)) ||
   !(bitest(evar(1170),8))) ||
   value[1186]<150) ||
   !(bitest(90,4)))) {
   p246(0,0);
   }
   if (!(((bitest(20,4)) ||
   !(bitest(evar(1170),8))) ||
   value[1186]<200)) {
   p669(0,0);
   }
return done;
}
#ifdef __STDC__
int p5(void)
#else
int p5()
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
   if (value[1172]>0) {
   return 0;
   }
   if (value[163]>1) {
   p24();
   }
   if ((bitest(evar(1138),8)) ||
   isnear(85,-1,-1)) {
   if (value[1161]==0) {
   set('V',1161,'v',1138,NULL,NULL);
   set('V',1193,'c',0,NULL,NULL);
   }
   if (value[1161]==value[1138]) {
   value[1193] += 1;
   special(12,&lval[2]);
   if ((lval[2]==1) &&
   value[1193]>10) {
   p405();
   }
   } else {
   set('L',0,'c',0,lval, lbts);
   if (((227<=value[1138] && value[1138]<=252)) &&
   (227<=value[1161] && value[1161]<=252)) {
   set('L',0,'c',1,lval, lbts);
   } else    if (((362<=value[1138] && value[1138]<=373)) &&
   (362<=value[1161] && value[1161]<=373)) {
   set('L',0,'c',1,lval, lbts);
   } else    if (((391<=value[1138] && value[1138]<=426)) &&
   (391<=value[1161] && value[1161]<=426)) {
   set('L',0,'c',1,lval, lbts);
   } else    if (((334<=value[1138] && value[1138]<=350)) &&
   (334<=value[1161] && value[1161]<=350)) {
   set('L',0,'c',1,lval, lbts);
   } else    if ((bitest(evar(1138),15)) &&
   (594<=value[1161] && value[1161]<=617)) {
   set('L',0,'c',1,lval, lbts);
   }
   if (lval[0]==0) {
   set('V',1193,'c',0,NULL,NULL);
   set('V',1161,'v',1138,NULL,NULL);
   }}}
   if (isnear(94,-1,-1)) {
   value[94] += 1;
   say(0,1985,0);
   if (value[94]>5) {
   move(502,-1);
   if (have(118,-1,-1)) {
   apport(118,701);
   }
   set('E',94,'c',0,NULL,NULL);
   p153();
   }}
   if (bitest(evar(1138),12)) {
   p688();
   }
   if (value[1236]>0) {
   value[1236] -= 1;
   }
   if (isnear(194,-1,-1)) {
   p383(0,0);
   }
   if (((value[194]>0) &&
   value[194]<5) &&
   value[1236]<1) {
   if (value[194]==2) {
   set('E',194,'c',4,NULL,NULL);
   bitmod('c',194,4);
   value[1236] = irand(7-4+1)+4;
   } else {
   if (bitest(194,4)) {
   set('E',194,'c',0,NULL,NULL);
   }}}
   p609();
   if ((((value[HERE]==495)) &&
   !(bitest(103,4))) &&
   irand(100)<3) {
   p26();
   if (value[1245]==0) {
   say(0,1727,0);
   bitmod('s',103,4);
   set('T',3428,'c',1,NULL,NULL);
   }}
   if ((value[HERE]==453)) {
   p243();
   }
   if (bitest(evar(1170),6)) {
   bitmod('c',evar(1170),6);
   set('V',1179,'c',0,NULL,NULL);
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if ((have(value[1146],-1,-1)) &&
   !(bitest(evar(1146),12))) {
   value[1179] += 1;
   }}}
   if (!((value[HERE]==302))) {
   p832();
   }
   set('V',1202,'c',25,NULL,NULL);
   set('V',1201,'c',35,NULL,NULL);
   if (value[84]>=1) {
   if (value[84]==2) {
   set('E',84,'c',1,NULL,NULL);
   } else {
   bitmod('s',evar(1138),13);
   set('E',84,'c',0,NULL,NULL);
   say(0,1259,0);
   say(8,1794,1);
   }}
   if (bitest(17,14)) {
   if (isnear(17,-1,-1)) {
   say(0,1895,0);
   }
   bitmod('c',17,14);
   }
   if (bitest(17,13)) {
   bitmod('s',17,14);
   bitmod('c',17,13);
   }
   if ((bitest(evar(1171),8)) &&
   !KEY(712)) {
   bitmod('c',evar(1171),8);
   }
   if (!(value[1185]<6000)) {
   say(8,1557,6000);
   p322();
   }
   bitmod('c',46,13);
   if (!(((((value[HERE]==311||value[HERE]==312||value[HERE]==310)) ||
   value[46]<2) ||
   value[1170]==0) ||
   bitest(evar(1170),5))) {
   if (have(46,-1,-1)) {
   if (value[46]>2) {
   value[1148]=2108;*bitword(1148)=-1;
   value[1148] += value[46];
   value[1148] -= 2;
   say(2,1148,0);
   }
   if (!(value[46]<9)) {
   bitmod('s',evar(1234),10);
   }
   bitmod('s',evar(1170),7);
   if ((((((irand(100)<40) ||
   value[46]>9) ||
   value[46]==2) &&
   value[46]!=7) ||
   KEY(773)) ||
   irand(100)<value[1233]) {
   value[46] += 1;
   if (value[46]<7) {
   set('V',1233,'c',0,NULL,NULL);
   } else {
   value[1233] += 1;
   }
   if (value[46]==12) {
   bitmod('s',evar(1209),9);
   }
   if (value[46]>19) {
   p153();
   }
   bitmod('s',46,13);
   }
   } else {
   if (value[46]>1) {
   if (value[46]>=9) {
   say(0,2108,0);
   }
   set('E',46,'c',1,NULL,NULL);
   }}}
   if (!(bitest(evar(1170),7))) {
   if (value[145]>1) {
   value[145] -= 1;
   if (value[145]==1) {
   if (value[1179]<value[1194]) {
   set('L',1,'c',0,lval, lbts);
   } else {
   set('L',1,'c',1,lval, lbts);
   }
   say(8,2320,lval[1]);
   }}}
   if (((value[HERE]==302)) &&
   value[1185]==5) {
   say(0,1274,0);
   }
   if ((((((isnear(5,0,0)) &&
   bitest(5,13)) &&
   irand(100)<20) &&
   !(value[HERE]==701)) &&
   bitest(evar(1170),8)) &&
   !KEY(805)) {
   bitmod('c',5,13);
   say(0,2330,0);
   }
   if (((value[HERE]==565)) &&
   value[565]==3) {
   say(0,1259,0);
   p828(0,1);
   }
return done;
}
#ifdef __STDC__
int p6(void)
#else
int p6()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   bitmod('c',evar(1172),1);
   bitmod('c',evar(1172),2);
   if (value[1172]==0) {
   if (((isnear(19,-1,-1)) &&
   value[575]==1) &&
   value[1254]==0) {
   say(0,1259,0);
   p146();
   }
   if (value[1190]<3) {
   set('V',1170,'c',99,NULL,NULL);
   }
   input(0);
   if (bitest(evar(1172),4)) {
   value[1192]=1260;*bitword(1192)=-1;
   value[1191]=1322;*bitword(1191)=-1;
   }
   return 0;
   }
   input(1258);
   if (value[1172]==1) {
   set('V',1172,'c',0,NULL,NULL);
   }
   if (value[1172]==0) {
   return 0;
   }
   if ((value[1172]==4) ||
   value[1172]==5) {
   p404();
   } else    if (value[1172]==6) {
   p222();
   } else    if (value[1172]==7) {
   p926();
   } else    if (value[1172]==8) {
   if ((value[1170]==0) ||
   anyof(856,823,-1)) {
   p322();
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1260,0);
   }
   if (KEY(858)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,2331,0);
   }
   say(0,1261,0);
   say(64,1425,0);
   } else    if ((value[1172]==9) ||
   value[1172]==10) {
   p685();
   } else    if (value[1172]==11) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   value[1181] += 10;
   move(195,-value[1157]);
   }
   if (anyof(823,857,744,-1))   say(64,1260,0);
   if (anyof(858,-1))   say(64,2331,0);
   set('V',1172,'c',11,NULL,NULL);
   say(0,1261,0);
   say(64,1923,0);
   } else    if (value[1172]==12) {
   p552();
   } else    if (value[1172]==13) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   say(64,1789,0);
   }
   if (anyof(823,857,744,-1)) {
   say(8,1686,783);
   say(76,1687,1137);
   }
   say(72,1715,0);
   } else    if (value[1172]==15) {
   if (value[1170]==0) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1262,0);
   }
   if (value[1170]==1) {
   special(11,&value[0]);
   p742();
   }
   } else    if (value[1172]==45) {
   if ((value[1170]==0) ||
   KEY(856)) {
   special(24, &value[1148]);
   special(3,&value[0]);
   p742();
   }
   set('V',1172,'c',0,NULL,NULL);
   if (anyof(857,744,-1))   say(64,1863,0);
   say(72,1715,0);
   } else    if ((value[1172]==14) ||
   value[1172]==16) {
   p741();
   } else    if ((value[1172]==17) ||
   value[1172]==18) {
   p33();
   } else    if (value[1172]==20) {
   if (KEY(858)) {
   set('V',1170,'c',0,NULL,NULL);
   }
   if ((value[1170]==0) ||
   KEY(856)) {
   p510(*bitword(1153),value[1153],*bitword(1154),value[1154]);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   if (bitest(evar(1138),4)) {
   say(0,1260,0);
   }
   longjmp(loop_back,1);
   }
   say(0,1261,0);
   say(64,1424,0);
   } else    if (value[1172]==21) {
   set('V',1190,'c',3,NULL,NULL);
   if (KEY(858)) {
   set('V',1170,'c',0,NULL,NULL);
   say(8,1715,1);
   say(0,1259,0);
   }
   if ((value[1170]==0) ||
   KEY(856)) {
   set('V',1172,'c',0,NULL,NULL);
   p220();
   say(64,1259,0);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   if (bitest(evar(1172),0)) {
   say(0,1865,0);
   }
   longjmp(loop_back,1);
   }
   say(0,1261,0);
   say(64,1266,0);
   } else    if (value[1172]==22) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   say(64,2625,0);
   }
   if (anyof(857,744,-1))   say(64,1716,0);
   say(72,1715,0);
   } else    if (value[1172]==23) {
   if (KEY(856)) {
   bitmod('s',evar(1171),10);
   apport(85,value[1138]);
   bitmod('s',85,4);
   set('V',1172,'c',0,NULL,NULL);
   if (irand(100)<20) {
   say(72,1742,1);
   } else {
   say(72,1742,0);
   }}
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1743,0);
   }
   say(0,1261,0);
   say(72,1741,1);
   } else    if (value[1172]==24) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   bitmod('s',evar(1209),5);
   say(64,2165,0);
   }
   if (anyof(823,857,744,-1))   say(64,2167,0);
   if (anyof(858,-1))   say(72,1715,0);
   set('V',1172,'c',24,NULL,NULL);
   say(0,1261,0);
   say(64,2164,0);
   } else    if (value[1172]==25) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   bitmod('s',115,15);
   value[1181] += 10;
   say(64,1853,0);
   }
   if (anyof(823,857,744,-1))   say(64,1863,0);
   if (anyof(858,-1))   say(64,2331,0);
   set('V',1172,'c',25,NULL,NULL);
   say(0,1261,0);
   say(64,1852,0);
   } else    if (value[1172]==26) {
   p716();
   } else    if (value[1172]==27) {
   p225();
   } else    if (value[1172]==28) {
   p247();
   } else    if (value[1172]==29) {
   p632();
   } else    if (value[1172]==30) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   p760();
   }
   if (anyof(823,857,744,-1))   say(64,1716,0);
   say(72,1715,0);
   } else    if (value[1172]==31) {
   if ((value[1170]==0) ||
   KEY(856)) {
   set('V',1172,'c',0,NULL,NULL);
   value[1181] += 10;
   *bitword(1147)= -1; value[1147]=226; while (++value[1147]<=252) {
value[value[1147]]=1;
   }
   say(64,2189,0);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,2192,0);
   }
   say(0,1261,0);
   say(64,2188,0);
   } else    if ((value[1172]==33) ||
   value[1172]==32) {
   set('L',0,'v',1172,lval, lbts);
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   if (lval[0]==33) {
   say(0,2205,0);
   move(443,-1);
   p153();
   } else {
   if (value[102]==8) {
   say(72,2286,744);
   }
   bitmod('c',evar(1138),8);
   move(445,-2202);
   }}
   if (anyof(823,857,744,-1))   say(64,2570,0);
   say(72,1715,0);
   } else    if (value[1172]==35) {
   p773();
   } else    if (((value[1172]==34) ||
   value[1172]==36) ||
   value[1172]==37) {
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   say(64,1863,0);
   }
   if (value[1172]==34) {
   set('V',1172,'c',35,NULL,NULL);
   say(0,1935,0);
   say(64,1424,0);
   } else    if (value[1172]==36) {
   say(0,1956,0);
   if (test("cgi")) {
   say(0,1259,0);
   } else {
   set('V',1172,'c',37,NULL,NULL);
   say(64,1424,0);
   }
   } else {
   say(0,1957,0);
   }
   set('V',1172,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   } else    if ((value[1172]==38) ||
   value[1172]==39) {
   if (!((value[1170]==0) ||
   KEY(856))) {
   set('L',0,'c',39,lval, lbts);
   lval[0] -= value[1172];
   say(8,1856,lval[0]);
   }
   if (value[1172]==38) {
   set('V',1172,'c',39,NULL,NULL);
   say(0,1857,0);
   say(64,1855,0);
   }
   if (value[1182]==770) {
   say(0,1859,0);
   } else    if (value[1182]>770) {
   if (value[1182]==value[1245]) {
   set('T',3392,'c',1,NULL,NULL);
   }
   say(0,3392,0);
   } else {
   say(0,1858,0);
   }
   p322();
   } else    if (value[1172]==40) {
   if (!((value[1170]==0) ||
   KEY(856))) {
   say(0,1645,0);
   }
   say(0,1646,0);
   say(0,1259,0);
   finita();
   } else    if (value[1172]==41) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   special(24, &value[0]);
   special(3,&value[0]);
   } else    if (!(anyof(857,744,-1))) {
   say(72,1715,0);
   }
   say(64,1260,0);
   } else    if ((value[1172]==43) ||
   value[1172]==2) {
   p715();
   } else    if (value[1172]==42) {
   p250();
   } else    if (value[1172]==44) {
   set('V',1172,'c',0,NULL,NULL);
   if (value[1170]==0) {
   say(64,1262,0);
   }
   special(11,&value[0]);
   (*procs[726])();
   } else    if (value[1172]==3) {
   if (value[1170]==0) {
   p762();
   } else {
   special(11,&value[0]);
   (*procs[726])();
   }
   } else    if (value[1172]==46) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   move(575,-2481);
   }
   if (anyof(857,744,-1)) {
   say(64,1547,0);
   }
   say(72,1715,0);
   } else    if (value[1172]==47) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   bitmod('s',evar(1171),12);
   (*procs[806])();
   }
   if (anyof(857,744,-1)) {
   say(64,1547,0);
   }
   say(72,1715,0);
   } else    if (value[1172]==19) {
   set('V',1172,'c',0,NULL,NULL);
   if ((value[1170]==0) ||
   KEY(856)) {
   move(642,-2418);
   }
   if (anyof(744,857,-1))   say(64,1547,0);
   say(72,1715,0);
   } else    if (value[1172]==48) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   say(0,1711,0);
   move(702,-1);
   p153();
   }
   if (anyof(744,857,-1)) {
   say(64,3330,0);
   }
   say(72,1715,0);
   } else    if (value[1172]==49) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   set('V',1184,'c',1,NULL,NULL);
   say(64,3411,0);
   }
   if (anyof(744,857,-1))   say(64,2311,0);
   say(72,1715,0);
   } else    if (value[1172]==50) {
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   if (have(84,-1,-1)) {
   set('L',0,'c',0,lval, lbts);
   } else {
   set('L',0,'c',1,lval, lbts);
   }
   apport(84,702);
   bitmod('s',evar(1138),13);
   say(64,3454,0);
   }
   if (anyof(744,857,-1))   say(64,1547,0);
   say(72,1715,0);
   }
return done;
}
#ifdef __STDC__
int p7(void)
#else
int p7()
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
   if (value[1170]==-6) {
   flush_command();
   if (KEY(868)) {
   (*procs[868])();
   }
   if (anyof(724,-1))   say(64,1486,0);
   say(64,1444,0);
   }
   if (((value[1170]>1) &&
   (723<=value[1137] && value[1137]<=903)) &&
   !(723<=value[1136] && value[1136]<=903)) {
   special(29,&value[0]);
   }
   if (((value[HERE]==218)) ||
   (value[HERE]==443)) {
   if (anyof(737,-1))   say(64,2792,0);
   } else {
   if (anyof(737,-1))   say(64,1370,0);
   }
   if (((value[1136]==725)) ||
   (value[1136]==726)) {
   if (value[1136]<LPROC && value[1136]>= 0) (*procs[value[1136]])(); else pcall(value[1136]);
   longjmp(loop_back,1);
   }
   if (KEY(770)) {
   if (anyof(753,-1))   say(64,3385,0);
if (value[ARG1] == 770) {value[ARG1]=769; (void)fake(1,769);}
if (value[ARG2] == 770) {value[ARG2]=769; (void)fake(2,769);}
   }
   if (KEY(300)) {
   if (value[1170]==1) {
   if ((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) {
   say(72,3218,2);
   } else    if (bitest(evar(1138),14)) {
   say(72,3218,0);
   } else {
   say(72,3218,1);
   }}
   if ((value[1136]==300)) {
   special(29,&value[0]);
   }
   set('V',1137,'c',0,NULL,NULL);
   set('V',1170,'c',1,NULL,NULL);
   }
if (value[ARG1] == 1077) value[ARG1]=129;
if (value[ARG2] == 1077) value[ARG2]=129;
   if (value[166]>0) {
   if (((value[1136]==166)) ||
   (value[1137]==166)) {
   set('L',0,'e',166,lval, lbts);
   if ((lval[0]==14)) {
   lval[0]=13;lbts[0*VARSIZE]=-1;
   } else    if ((lval[0]==24)) {
   lval[0]=23;lbts[0*VARSIZE]=-1;
   } else    if ((lval[0]==82)) {
   lval[0]=81;lbts[0*VARSIZE]=-1;
   } else    if ((lval[0]==140)) {
   lval[0]=139;lbts[0*VARSIZE]=-1;
   } else    if (((((lval[0]==19)) ||
   (lval[0]==161)) ||
   (lval[0]==164)) ||
   (lval[0]==169)) {
   lval[0]=8;lbts[0*VARSIZE]=-1;
   } else    if ((lval[0]==112)) {
   if (((KEY(765)) &&
   have(110,-1,-1)) ||
   value[112]==0) {
   lval[0]=110;lbts[0*VARSIZE]=-1;
   }}
if (value[ARG1] == 166) {value[ARG1]=lval[0]; (void)fake(1,lval[0]);}
if (value[ARG2] == 166) {value[ARG2]=lval[0]; (void)fake(2,lval[0]);}
   }}
   if (((((value[1170]==2) &&
   value[1137]!=-2) &&
   value[1137]!=-6) &&
   value[1137]!=-4) &&
   value[1137]!=-3) {
   set('E',166,'v',1137,NULL,NULL);
   } else    if ((bitest(evar(1136),0)) ||
   (903<=value[1136] && value[1136]<=1134)) {
   set('E',166,'v',1136,NULL,NULL);
   }
   if (KEY(937)) {
   (*procs[937])();
   }
   if (KEY(967)) {
   if (KEY(822)) {
   if ((value[1136]==967)) {
   special(29,&value[0]);
   }
   set('V',1170,'c',1,NULL,NULL);
   } else    if (KEY(758)) {
   say(64,2660,0);
   } else {
   say(64,1486,0);
   }}
   if ((value[1170]==1) &&
   KEY(758)) {
   (*procs[758])();
   }
   if (KEY(1098)) {
   if (isnear(125,-1,-1)) {
   if (anyof(798,822,-1))   say(64,3439,0);
if (value[ARG1] == 1098) {value[ARG1]=125; (void)fake(1,125);}
if (value[ARG2] == 1098) {value[ARG2]=125; (void)fake(2,125);}
   } else    if (isnear(92,-1,-1)) {
   if (anyof(798,822,-1)) {
   bitmod('s',92,13);
   say(64,1720,0);
   }
if (value[ARG1] == 1098) {value[ARG1]=92; (void)fake(1,92);}
if (value[ARG2] == 1098) {value[ARG2]=92; (void)fake(2,92);}
   } else    if (isnear(147,-1,-1)) {
   if (anyof(798,822,-1))   say(72,2025,1098);
if (value[ARG1] == 1098) {value[ARG1]=147; (void)fake(1,147);}
if (value[ARG2] == 1098) {value[ARG2]=147; (void)fake(2,147);}
   } else    if (((value[1136]==1098)) &&
   !(value[1137]==1098)) {
   say(72,1894,1098);
   } else {
   say(72,1312,1098);
   }}
   if (KEY(1094)) {
   if ((anyof(756,757,758,759,760,761,762,-1)) ||
   value[1170]==1) {
   say(64,3424,0);
   } else {
   say(64,1999,0);
   }}
   p221();
   if (keyword(758,972,-1)) {
   set('V',1170,'c',1,NULL,NULL);
   }
   if ((KEY(724)) &&
   value[1170]>1) {
if (value[ARG1] == 724) {value[ARG1]=765; (void)fake(1,765);}
if (value[ARG2] == 724) {value[ARG2]=765; (void)fake(2,765);}
   }
   if (anyof(843,-1))   say(64,1929,0);
   if ((KEY(798)) &&
   !(bitest(evar(1170),8))) {
   say(64,2380,0);
   }
   if (KEY(822)) {
   if ((KEY(936)) &&
   (314<=value[1138] && value[1138]<=316)) {
   say(64,1933,0);
   }
   if (KEY(288)) {
   if (((643<=value[1138] && value[1138]<=648)) ||
   (651<=value[1138] && value[1138]<=667)) {
   if (have(107,0,1)) {
   say(72,2992,1);
   } else {
   say(72,2992,0);
   }}
   if (bitest(evar(1138),3)) {
   say(64,1999,0);
   } else    if (bitest(evar(1170),8)) {
   say(72,2992,1);
   } else {
   say(72,2992,0);
   }
   } else    if (!(bitest(evar(1170),8))) {
   if (irand(100)<5) {
   say(64,2380,0);
   }
   say(64,1318,0);
   }}
   if (((value[1170]>1) &&
   (value[1137]==121)) &&
   !anyof(812,809,794,-1)) {
   p320(0,0);
   if ((value[1243]==0) &&
   !isnear(121,-1,-1)) {
   say(12,1312,121);
   if (isnear(127,-1,-1)) {
glue_text();
   say(0,1888,0);
   }
   longjmp(loop_back,1);
   }}
   if (KEY(1059)) {
   if ((500<=value[1138] && value[1138]<=509)) {
if (value[ARG1] == 1059) {value[ARG1]=955; (void)fake(1,955);}
if (value[ARG2] == 1059) {value[ARG2]=955; (void)fake(2,955);}
   } else    if ((((bitest(evar(1138),17)) ||
   (547<=value[1138] && value[1138]<=554)) ||
   (439<=value[1138] && value[1138]<=442)) ||
   (value[HERE]==572||value[HERE]==573)) {
if (value[ARG1] == 1059) {value[ARG1]=120; (void)fake(1,120);}
if (value[ARG2] == 1059) {value[ARG2]=120; (void)fake(2,120);}
   } else    if ((value[HERE]==217)) {
if (value[ARG1] == 1059) {value[ARG1]=121; (void)fake(1,121);}
if (value[ARG2] == 1059) {value[ARG2]=121; (void)fake(2,121);}
   } else    if (isnear(127,-1,-1)) {
if (value[ARG1] == 1059) {value[ARG1]=127; (void)fake(1,127);}
if (value[ARG2] == 1059) {value[ARG2]=127; (void)fake(2,127);}
   } else {
   p321(0,0);
   if (value[1243]!=0) {
if (value[ARG1] == 1059) {value[ARG1]=120; (void)fake(1,120);}
if (value[ARG2] == 1059) {value[ARG2]=120; (void)fake(2,120);}
   } else    if (isnear(136,0,5)) {
if (value[ARG1] == 1059) {value[ARG1]=122; (void)fake(1,122);}
if (value[ARG2] == 1059) {value[ARG2]=122; (void)fake(2,122);}
   } else    if ((isnear(119,0,4)) ||
   isnear(123,0,4)) {
if (value[ARG1] == 1059) {value[ARG1]=121; (void)fake(1,121);}
if (value[ARG2] == 1059) {value[ARG2]=121; (void)fake(2,121);}
   }}}
   if (KEY(122)) {
   if (isnear(136,0,5)) {
   bitmod('s',evar(1172),1);
   } else    if ((isnear(194,-1,-1)) &&
   value[194]>=5) {
   say(64,2271,0);
   }}
   if (KEY(173)) {
   if ((isnear(27,-1,-1)) ||
   isnear(147,-1,-1)) {
   bitmod('s',evar(1172),1);
   }}
   if ((KEY(87)) &&
   isnear(136,0,6)) {
   bitmod('s',evar(1172),1);
   }
   if (KEY(948)) {
   p851();
   }
   if ((value[1170]>1) &&
   (value[1136]==890)) {
if (value[ARG1] == 890) value[ARG1]=822;
if (value[ARG2] == 890) value[ARG2]=822;
   }
   if ((((KEY(102)) &&
   (value[HERE]==318)) &&
   !isnear(102,-1,-1)) &&
   !anyof(753,794,809,-1)) {
if (value[ARG1] == 102) value[ARG1]=976;
if (value[ARG2] == 102) value[ARG2]=976;
   }
   if ((KEY(977)) &&
   bitest(100,4)) {
   if (!(((((643<=value[1138] && value[1138]<=648)) ||
   (651<=value[1138] && value[1138]<=663)) ||
   (value[HERE]==666)) &&
   !anyof(765,793,-1))) {
   if (!((isnear(110,-1,-1)) &&
   !isnear(100,-1,-1))) {
if (value[ARG1] == 977) value[ARG1]=100;
if (value[ARG2] == 977) value[ARG2]=100;
   }}}
   if (KEY(977)) {
   if ((isnear(110,-1,-1)) ||
   (value[HERE]==447)) {
   if (isnear(110,-1,-1)) {
   if (anyof(822,-1))   say(72,2797,0);
   } else {
   if (anyof(822,-1))   say(72,2797,1);
   }
   say(0,3326,0);
   if (anyof(764,772,800,816,-1))   say(64,2456,0);
   if (anyof(792,-1))   say(64,1322,0);
   if (value[1170]>1) {
   say(64,1396,0);
   }}}
   if (((((KEY(100)) &&
   !have(100,-1,-1)) &&
   (643<=value[1138] && value[1138]<=648)) ||
   (651<=value[1138] && value[1138]<=663)) ||
   (value[HERE]==666)) {
if (value[ARG1] == 100) {value[ARG1]=977; (void)fake(1,977);}
if (value[ARG2] == 100) {value[ARG2]=977; (void)fake(2,977);}
   }
   if ((KEY(1126)) &&
   isnear(57,-1,-1)) {
if (value[ARG1] == 1126) value[ARG1]=57;
if (value[ARG2] == 1126) value[ARG2]=57;
   }
   if (keyword(779,914,-1)) {
   say(64,2629,0);
   }
   if (KEY(1075)) {
   if ((482<=value[1138] && value[1138]<=487)) {
if (value[ARG1] == 1075) value[ARG1]=1076;
if (value[ARG2] == 1075) value[ARG2]=1076;
   } else    if (isnear(143,-1,-1)) {
if (value[ARG1] == 1075) {value[ARG1]=143; (void)fake(1,143);}
if (value[ARG2] == 1075) {value[ARG2]=143; (void)fake(2,143);}
   } else {
   say(72,1312,1076);
   }}
   if (anyof(741,-1))   say(64,3465,0);
   if ((KEY(151)) &&
   isnear(152,-1,-1)) {
   if (anyof(767,787,804,-1))   say(64,2798,0);
   if (!((anyof(13,139,-1)) ||
   (value[HERE]==443))) {
if (value[ARG1] == 151) {value[ARG1]=152; (void)fake(1,152);}
if (value[ARG2] == 151) {value[ARG2]=152; (void)fake(2,152);}
   }}
   if ((KEY(44)) &&
   isnear(45,-1,-1)) {
if (value[ARG1] == 44) {value[ARG1]=45; (void)fake(1,45);}
if (value[ARG2] == 44) {value[ARG2]=45; (void)fake(2,45);}
   }
   if ((KEY(319)) &&
   isnear(63,0,0)) {
if (value[ARG1] == 319) {value[ARG1]=63; (void)fake(1,63);}
if (value[ARG2] == 319) {value[ARG2]=63; (void)fake(2,63);}
   }
   if ((KEY(171)) &&
   !(value[HERE]==210)) {
if (value[ARG1] == 171) value[ARG1]=7;
if (value[ARG2] == 171) value[ARG2]=7;
   }
   if ((value[1137]==769)) {
   if (((value[HERE]==203||value[HERE]==204)) ||
   isnear(52,-1,-1)) {
   if (anyof(767,800,822,784,-1)) {
   if ((value[HERE]==203||value[HERE]==204)) {
   say(72,2834,0);
   } else    if (isnear(52,-1,-1)) {
   say(72,2834,1);
   }
   } else    if (!((value[1136]==769))) {
   say(64,1396,0);
   }
   } else {
   if (anyof(822,-1))   say(76,1312,1137);
   }}
   if (((isnear(19,-1,-1)) &&
   value[575]==1) &&
   value[1254]==0) {
   p146();
   say(0,1259,0);
   }
   if (value[1190]==6) {
   set('E',112,'c',0,NULL,NULL);
   if (KEY(112)) {
   if (!(test("doall"))) {
   set('E',112,'c',1,NULL,NULL);
   }}}
   if ((KEY(1025)) &&
   isnear(141,-1,-1)) {
if (value[ARG1] == 1025) {value[ARG1]=141; (void)fake(1,141);}
if (value[ARG2] == 1025) {value[ARG2]=141; (void)fake(2,141);}
   }
   if (((value[1170]>1) &&
   (value[1136]==124)) &&
   have(124,-1,-1)) {
if (value[ARG1] == 124) {value[ARG1]=776; (void)fake(1,776);}
if (value[ARG2] == 124) {value[ARG2]=776; (void)fake(2,776);}
   }
   if (value[1170]==1) {
   if (KEY(764)) {
   default_to(0,value[1138],3);
   } else    if (KEY(765)) {
   default_to(0,703,-1);
   }
   } else    if (KEY(3)) {
   p768();
   if (value[1255]==-6) {
   say(76,3210,1255);
   }
   if (value[1255]==-3) {
   say(76,1926,1255);
   }
   if (value[1255]==-2) {
   flush_command();
   say(76,1344,1255);
   }
   if (value[1255]==-4) {
   say(76,2528,1255);
   }
   if (anyof(765,754,-1)) {
   p291();
   p233(0,0);
   default_to(1,703,-1);
   } else    if (KEY(764)) {
   if (((value[HERE]==540)) &&
   !isnear(138,-1,-1)) {
   apport(138,value[1138]);
   }
   if (bitest(evar(1170),8)) {
   p291();
   default_to(1,value[1138],3);
   } else {
   say(72,1683,1);
   }}}
   if ((KEY(168)) &&
   !KEY(730)) {
   if (anyof(765,754,-1)) {
   p291();
   p233(0,1);
   default_to(1,703,5);
   } else    if (KEY(764)) {
   p291();
   default_to(1,value[1138],5);
   } else {
   say(64,1295,0);
   }}
   if (keyword(758,1003,-1)) {
   say(64,2813,0);
   }
   if (anyof(943,942,-1)) {
   if (anyof(942,-1))   say(64,2568,0);
   say(64,2567,0);
   }
   if (!(anyof(719,718,717,716,833,-1))) {
   set('V',1187,'c',0,NULL,NULL);
   }
   if (value[1187]>=0) {
   value[1187] -= 1;
   }
   value[1185] += 1;
   if (value[1185]==20) {
   bitmod('c',evar(1170),10);
   }
   if (KEY(725)) {
   (*procs[725])();
   longjmp(loop_back,1);
   }
   if (value[1170]==0) {
   longjmp(loop_back,1);
   }
   if (((value[1136]==-2) ||
   value[1136]==-3) ||
   value[1136]==-4) {
   if (value[1136]==-2) {
   flush_command();
   if (value[1170]>1) {
   if (irand(100)<33) {
   say(12,1343,1136);
   } else {
   say(12,1342,1136);
   }
   } else {
   say(12,1343,1136);
   }
   if (bitest(evar(1170),10)) {
   say(0,1848,0);
   bitmod('c',evar(1170),10);
   }
   } else    if (value[1136]==-3) {
   say(12,1926,1136);
   } else {
   say(12,2528,1136);
   if (bitest(evar(1170),10)) {
   say(0,1848,0);
   bitmod('c',evar(1170),10);
   }}
   p768();
   longjmp(loop_back,1);
   }
   if (KEY(730)) {
   if (!((704<=value[1137] && value[1137]<=722))) {
   (*procs[730])();
   }}
   if ((KEY(3)) &&
   !KEY(730)) {
   p125();
   }
   if (value[1170]>1) {
   if ((((value[1137]==-2) ||
   value[1137]==-3) ||
   value[1137]==-4) ||
   value[1137]==-5) {
   if (!((723<=value[1136] && value[1136]<=742))) {
   if (value[1137]==-3) {
   say(12,1926,1137);
   } else    if (value[1137]==-2) {
   flush_command();
   say(12,1344,1137);
   if (bitest(evar(1170),10)) {
   say(0,1848,0);
   bitmod('c',evar(1170),10);
   }
   } else    if ((value[1137]==-5) &&
   value[1190]>2) {
   say(76,2527,1137);
   } else {
   say(12,2528,1137);
   if (bitest(evar(1170),10)) {
   say(0,1848,0);
   bitmod('c',evar(1170),10);
   }}
   p768();
   longjmp(loop_back,1);
   }}}
   set('V',1140,'v',1138,NULL,NULL);
   set('V',1142,'v',1138,NULL,NULL);
   set('V',1141,'c',0,NULL,NULL);
   set('V',1143,'c',0,NULL,NULL);
   set('V',1144,'c',0,NULL,NULL);
   set('V',1243,'c',0,NULL,NULL);
   set('V',1247,'c',0,NULL,NULL);
   if (KEY(139)) {
   if ((isnear(13,-1,-1)) ||
   isnear(14,-1,-1)) {
if (value[ARG1] == 139) value[ARG1]=13;
if (value[ARG2] == 139) value[ARG2]=13;
   }}
   if (KEY(13)) {
   if (((isnear(140,-1,-1)) &&
   value[139]==2) ||
   isnear(139,-1,-1)) {
if (value[ARG1] == 13) value[ARG1]=139;
if (value[ARG2] == 13) value[ARG2]=139;
   }}
   if (KEY(51)) {
   if (isnear(104,-1,-1)) {
if (value[ARG1] == 51) {value[ARG1]=104; (void)fake(1,104);}
if (value[ARG2] == 51) {value[ARG2]=104; (void)fake(2,104);}
   } else    if (isnear(105,-1,-1)) {
if (value[ARG1] == 51) {value[ARG1]=105; (void)fake(1,105);}
if (value[ARG2] == 51) {value[ARG2]=105; (void)fake(2,105);}
   }}
   if (((KEY(927)) &&
   isnear(149,-1,-1)) &&
   !(value[HERE]==491)) {
if (value[ARG1] == 927) value[ARG1]=149;
if (value[ARG2] == 927) value[ARG2]=149;
   }
   if ((KEY(958)) &&
   isnear(147,-1,-1)) {
   if (value[1377]<3) {
   say(0,1377,0);
   }
   if (value[1377]==1) {
   longjmp(loop_back,1);
   }
if (value[ARG1] == 958) {value[ARG1]=147; (void)fake(1,147);}
if (value[ARG2] == 958) {value[ARG2]=147; (void)fake(2,147);}
   }
   if (KEY(965)) {
   if ((((isnear(8,-1,-1)) ||
   isnear(19,-1,-1)) ||
   isnear(161,-1,-1)) ||
   isnear(164,-1,-1)) {
if (value[ARG1] == 965) {value[ARG1]=8; (void)fake(1,8);}
if (value[ARG2] == 965) {value[ARG2]=8; (void)fake(2,8);}
   }}
   if (KEY(959)) {
   if ((((((value[HERE]==318)) &&
   (1<=318 && 318<=2)) ||
   (606<=value[1138] && value[1138]<=617)) ||
   (587<=value[1138] && value[1138]<=593)) ||
   (value[HERE]==627)) {
if (value[ARG1] == 959) value[ARG1]=593;
if (value[ARG2] == 959) value[ARG2]=593;
   }}
   if (keyword(108,109,-1)) {
if (value[ARG1] == 108) {value[ARG1]=764; (void)fake(1,764);}
if (value[ARG2] == 108) {value[ARG2]=764; (void)fake(2,764);}
   }
   if (keyword(750,758,-1)) {
   value[1203] += 1;
   if (value[1203]==5) {
   if ((value[1136]==758)) {
   say(12,1992,1136);
   } else {
   say(12,1992,1137);
   }}}
   if (value[1190]==8) {
   p817();
   }
   if ((value[1170]>1) &&
   (1103<=value[1137] && value[1137]<=1123)) {
   p752();
   }
   if ((KEY(904)) &&
   anyof(758,756,-1)) {
   if ((334<=value[1138] && value[1138]<=350)) {
   say(64,1418,0);
   } else    if ((value[HERE]==332||value[HERE]==333||value[HERE]==352||value[HERE]==353)) {
   say(64,2441,0);
   } else {
   say(64,1417,0);
   }}
   if (!(((KEY(730)) &&
   value[1170]>1) &&
   !(704<=value[1137] && value[1137]<=722))) {
   set('V',1216,'c',0,NULL,NULL);
   if ((value[HERE]==445)) {
if (value[ARG1] == 760) value[ARG1]=748;
if (value[ARG2] == 760) value[ARG2]=748;
   }
   if ((((bitest(evar(1138),7)) &&
   !(bitest(evar(1138),18))) &&
   have(102,-1,-1)) &&
   !KEY(822)) {
   if ((743<=value[1136] && value[1136]<=752)) {
   set('V',1216,'v',1136,NULL,NULL);
   } else {
   if ((value[1170]>1) &&
   (743<=value[1137] && value[1137]<=752)) {
   set('V',1216,'v',1137,NULL,NULL);
   }}
   if (value[1216]>0) {
   p151(*bitword(1216),value[1216]);
   }}
   if ((519<=value[1138] && value[1138]<=538)) {
   p476();
   }
   if (value[1138]<LPROC && value[1138]>= 0) (*procs[value[1138]])(); else pcall(value[1138]);
   }
   if (KEY(1127)) {
   if ((isnear(102,-1,-1)) &&
   isnear(100,-1,-1)) {
   set('L',2,'c',0,lval, lbts);
   if (have(102,-1,-1)) {
   set('L',2,'c',1,lval, lbts);
   }
   if (have(100,-1,-1)) {
   lval[2] += 1;
   }
   if (lval[2]==1) {
   if (KEY(764)) {
   if (ishere(102,-1,-1)) {
if (value[ARG1] == 1127) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1127) {value[ARG2]=102; (void)fake(2,102);}
   } else {
if (value[ARG1] == 1127) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1127) {value[ARG2]=100; (void)fake(2,100);}
   }
   } else    if (anyof(765,793,-1)) {
   if (have(102,-1,-1)) {
if (value[ARG1] == 1127) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1127) {value[ARG2]=102; (void)fake(2,102);}
   } else {
if (value[ARG1] == 1127) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1127) {value[ARG2]=100; (void)fake(2,100);}
   }}
   } else {
   say(64,2810,0);
   }
   } else    if (isnear(102,-1,-1)) {
if (value[ARG1] == 1127) {value[ARG1]=102; (void)fake(1,102);}
if (value[ARG2] == 1127) {value[ARG2]=102; (void)fake(2,102);}
   } else    if (isnear(100,-1,-1)) {
if (value[ARG1] == 1127) {value[ARG1]=100; (void)fake(1,100);}
if (value[ARG2] == 1127) {value[ARG2]=100; (void)fake(2,100);}
   }}
   if ((KEY(761)) &&
   value[1170]==2) {
   if (!(anyof(778,762,754,-1))) {
   say(64,2579,0);
   }}
   if (value[1190]==8) {
   p817();
   }
   if (bitest(evar(1136),1)) {
   if ((value[HERE]==value[1136])) {
   say(64,1418,0);
   } else {
   say(64,1417,0);
   }}
   if ((value[1190]==6) &&
   value[1170]>1) {
   p802();
   if (anyof(110,1130,-1)) {
   p727();
   }
   if (anyof(1130,1131,1036,-1))   say(64,1998,0);
   }
   if (KEY(76)) {
   if ((value[HERE]==284||value[HERE]==461||value[HERE]==512)) {
   apport(76,value[1138]);
   bitmod('s',76,4);
   }}
   if (anyof(1130,1131,-1))   say(64,1999,0);
   if (anyof(851,759,-1))   say(64,1290,0);
   if (KEY(206)) {
   p183();
   longjmp(loop_back,1);
   }
   if (KEY(72)) {
   if (bitest(evar(1210),5)) {
   say(72,1745,1);
   }
   say(72,1745,0);
   }
   if (KEY(932)) {
   if (value[565]==5) {
   say(72,2516,0);
   }
   say(72,2516,1);
   }
   if (KEY(1073)) {
   if ((value[1170]==1) ||
   anyof(764,794,798,822,-1)) {
   say(64,3205,0);
   }}
   if (anyof(906,905,-1)) {
   if (bitest(95,4)) {
   if (KEY(906)) {
   value[1146]=906;*bitword(1146)=-1;
   } else {
   value[1146]=905;*bitword(1146)=-1;
   }
   if (have(95,0,2)) {
   say(76,2270,1146);
   }
   say(76,1312,1146);
   } else {
   say(64,1999,0);
   }}
   if (((keyword(92,87,-1)) &&
   isnear(92,-1,-1)) &&
   isnear(87,-1,-1)) {
   if (bitest(92,14)) {
   say(64,3319,0);
   }
   if (bitest(139,4)) {
   bitmod('s',92,14);
   say(0,3315,0);
   say(64,1259,0);
   }
   say(64,1353,0);
   }
   if (KEY(1078)) {
   if ((438<=value[1138] && value[1138]<=445)) {
   say(72,3364,0);
   } else    if ((547<=value[1138] && value[1138]<=554)) {
   say(72,3364,1);
   } else    if ((value[HERE]==446||value[HERE]==199)) {
   say(64,3363,0);
   }
   say(72,1312,1078);
   }
   if ((bitest(evar(1138),12)) ||
   (value[HERE]==502)) {
   if (KEY(955)) {
   if ((KEY(764)) &&
   bitest(139,4)) {
   say(72,2026,1);
   } else    if (KEY(822)) {
   say(64,3052,0);
   } else {
   say(32,87,0);
   longjmp(loop_back,1);
   }}
   if ((keyword(764,120,-1)) ||
   KEY(796)) {
   if (bitest(139,4)) {
   say(72,2026,1);
   } else {
   say(72,2026,0);
   }}}
   if (value[1136]<LPROC && value[1136]>= 0) (*procs[value[1136]])(); else pcall(value[1136]);
   p768();
   flush_command();
   if (bitest(evar(1136),0)) {
   set('V',1243,'c',0,NULL,NULL);
   if ((value[1136]==120)) {
   p321(0,0);
   if ((value[1243]==0) &&
   bitest(evar(1138),17)) {
   set('V',1243,'c',1,NULL,NULL);
   }}
   if (!(((KEY(120)) &&
   value[1243]>0) ||
   isnear(value[1136],-1,-1))) {
   if (bitest(evar(1136),4)) {
   say(76,1312,1136);
   } else {
   say(64,1999,0);
   }}}
   p39();
   longjmp(loop_back,1);
return done;
}
