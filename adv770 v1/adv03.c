/* adv03.c: Adv770 - copyright Mike Arnautov, 22 Dec 2014.
 * Locensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p658(void)
#else
int p658()
#endif
{
int done=0;
   if (!(value[1190]==6)) {
   say(76,1553,115);
   }
   if (!(have(115,-1,-1))) {
   say(64,1554,0);
   }
   if (bitest(115,15)) {
   say(76,1862,74);
   }
   say(8,1851,10);
   set('V',1172,'c',25,NULL,NULL);
   say(64,1852,0);
return done;
}
#ifdef __STDC__
int p665(void)
#else
int p665()
#endif
{
int done=0;
   if (!((314<=value[1138] && value[1138]<=316))) {
   return 0;
   }
   value[315] = irand(8);
   bitmod('c',315,3);
   p487();
   bitmod('s',315,3);
   if (bitest(evar(1170),8)) {
   set('E',16,'c',0,NULL,NULL);
   } else {
   value[16] = irand(9 - 1) + 1;
   }
   bitmod('s',evar(1170),8);
return done;
}
#ifdef __STDC__
int p24(void)
#else
int p24()
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
   value[163] -= 1;
   set('L',2,'c',0,lval, lbts);
   if (!((bitest(evar(1171),7)) ||
   value[163]>8)) {
   if (((value[163]<5) ||
   irand(100)<20) ||
   (value[HERE]==472)) {
   set('L',2,'c',1,lval, lbts);
   }}
   if (lval[2]>0) {
   bitmod('s',evar(1171),7);
   say(0,2464,0);
   if ((467<=value[1138] && value[1138]<=479)) {
   if (((value[HERE]==475)) &&
   value[162]==0) {
   return 0;
   }
   say(0,2465,0);
   if (bitest(evar(1170),0)) {
   say(0,1259,0);
   }}
   } else    if (value[163]==1) {
   set('E',477,'c',0,NULL,NULL);
   if (((value[HERE]==475)) &&
   value[162]==0) {
   say(0,1879,0);
   set('E',161,'c',0,NULL,NULL);
   set('E',472,'c',0,NULL,NULL);
   return 0;
   }
   if ((value[HERE]==491)) {
   set('E',161,'c',0,NULL,NULL);
   say(0,1878,0);
   return 0;
   }
   if ((467<=value[1138] && value[1138]<=479)) {
   set('L',0,'c',0,lval, lbts);
   set('L',1,'c',0,lval, lbts);
   if ((value[HERE]==473||value[HERE]==474||value[HERE]==476||value[HERE]==475)) {
   value[1147]=473;*bitword(1147)=-1;
   } else {
   value[1147]=491;*bitword(1147)=-1;
   }
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (!isat(value[1146],-1,-1,703)) continue;
   if (!((bitest(evar(1146),16)) &&
   value[1146]==2)) {
   if (bitest(evar(1146),5)) {
   set('L',0,'c',2,lval, lbts);
   apport(value[1146],473);
   } else {
   set('L',1,'c',1,lval, lbts);
   apport(value[1146],value[1147]);
   }}}
   value[1147]=location[147];*bitword(1147)=-1;
   if (((473<=value[1147] && value[1147]<=479)) ||
   (482<=value[1147] && value[1147]<=487)) {
   apport(147,195);
   }
   say(0,1259,0);
   if ((value[HERE]==467)) {
   lval[0] += lval[1];
   set('E',161,'c',0,NULL,NULL);
   say(8,2444,lval[0]);
   move(491,-2);
   }
   if ((value[HERE]==479)) {
   say(8,2467,0);
   } else    if ((value[HERE]==475)) {
   say(0,1880,0);
   } else    if ((value[HERE]==473)) {
   if (value[161]==1) {
   say(8,1881,0);
   } else {
   say(8,1881,1);
   }
   } else    if ((value[HERE]==474||value[HERE]==476)) {
   if (value[162]==0) {
   say(8,2467,1);
   } else {
   say(8,2467,2);
   }
   } else {
   say(0,2499,0);
   }
   say(0,1259,0);
   set('E',161,'c',0,NULL,NULL);
   set('E',472,'c',0,NULL,NULL);
   p153();
   }}
return done;
}
#ifdef __STDC__
int p781(void)
#else
int p781()
#endif
{
int done=0;
   if (!(bitest(evar(1170),8))) {
   say(0,2083,0);
   p153();
   }
return done;
}
#ifdef __STDC__
int p392(void)
#else
int p392()
#endif
{
int done=0;
   if (isnear(130,-1,-1)) {
   if (value[130]==6) {
   p153();
   }
   value[130] += 1;
   }
return done;
}
#ifdef __STDC__
int p400(void)
#else
int p400()
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
   set('V',1245,'c',0,NULL,NULL);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,value[1138])) continue;
   if ((lval[0]==16)) {
continue;
   }
   lbitmod(3,'s',0,4,lval,lbts);
   if (!(lbitest(0,10,lval,lbts))) {
   lval[2] += 1;
   if (lval[2]==1) {
   set('L',1,'l',0,lval, lbts);
   say(0,1259,0);
   }}
   lbitmod(3,'s',0,4,lval,lbts);
   if (!(lbitest(0,5,lval,lbts))) {
   if (!(((lval[0]==193)) ||
   (lval[0]==194))) {
   say(0,lval[0],0);
   value[1245] += 1;
   }}}
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   if (!isat(lval[0],-1,-1,value[1138])) continue;
   if (!lbitest(0,5,lval,lbts)) continue;
   say(0,lval[0],0);
   }
   if (ishere(193,-1,-1)) {
   say(0,193,0);
   }
   if (ishere(194,-1,-1)) {
   say(0,194,0);
   }
   if (lval[2]==1) {
   set('E',166,'l',1,lval, lbts);
   }
   if (isnear(100,0,3)) {
   bitmod('s',100,13);
   }
   if (((value[HERE]==502)) &&
   value[1245]>0) {
   say(12,3425,1245);
   }
return done;
}
#ifdef __STDC__
int p534(int typ0,int par0)
#else
int p534(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [5];
   short lbts [5];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = 0;
   lbts [1] = 0;
   lval[2] = 0;
   lbts [2] = 0;
   lval[3] = 0;
   lbts [3] = 0;
   lval[4] = 0;
   lbts [4] = 0;
   set('L',1,'c',1,lval, lbts);
   set('V',1245,'c',0,NULL,NULL);
   lval[4]=value[value[1138]];lbts[4*VARSIZE]=0;
   if (lval[4]==0) {
   return 0;
   }
   lval[2]=1-1; while(++lval[2]<=8) {
   lval[4]=value[value[1138]];lbts[4*VARSIZE]=0;
   lval[4] &= lval[1];
   if (lval[4]!=0) {
   value[1245] += 1;
   if (lval[0]>0) {
   if (value[1245]==1) {
   set('T',3199,'c',0,NULL,NULL);
   } else    if (value[1245]==lval[0]) {
   set('T',3199,'c',2,NULL,NULL);
   } else {
   set('T',3199,'c',1,NULL,NULL);
   }
   say(8,3199,lval[3]);
   }}
   lval[3] += 1;
   lval[1] += lval[1];
   }
return done;
}
#ifdef __STDC__
int p793(void)
#else
int p793()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (bitest(evar(1170),3)) {
   if (((594<=value[1138] && value[1138]<=617)) &&
   !(value[1138]==605)) {
   if ((value[HERE]==596||value[HERE]==597||value[HERE]==601||value[HERE]==607||value[HERE]==610)) {
   set('L',0,'c',0,lval, lbts);
   } else {
   set('L',0,'c',1,lval, lbts);
   }
   p534(0,0);
   if (value[1245]>0) {
   lval[0] += 2;
   }
glue_text();
   say(8,2998,lval[0]);
   if ((value[HERE]==604)) {
   say(0,3373,0);
   }
   if ((606<=value[1138] && value[1138]<=617)) {
   set('L',1,'v',1138,lval, lbts);
   lval[0]=594;lbts[0*VARSIZE]=-1;
   lval[1] -= lval[0];
   if ((value[HERE]==606||value[HERE]==607||value[HERE]==608||value[HERE]==612||value[HERE]==613)) {
   say(8,3202,lval[1]);
   } else {
   say(8,3203,lval[1]);
   }}
   if (!(KEY(822))) {
   say(0,3201,0);
   }}
   if (((bitest(evar(1138),15)) ||
   (587<=value[1138] && value[1138]<=589)) ||
   (value[HERE]==605)) {
   if (KEY(822)) {
   if ((value[HERE]==589||value[HERE]==588||value[HERE]==587)) {
glue_text();
   say(0,1258,0);
   }
   say(0,2294,0);
   } else {
   say(0,1259,0);
   }
   bitmod('c',evar(1138),4);
   } else    if ((value[HERE]==592||value[HERE]==593)) {
   say(0,2295,0);
   } else    if (((value[HERE]==209)) &&
   value[210]==0) {
   say(0,1689,0);
   }}
   if (bitest(evar(1138),13)) {
   say(0,1368,0);
   }
return done;
}
#ifdef __STDC__
int p323(void)
#else
int p323()
#endif
{
int done=0;
   if ((!ishere(163,-1,-1)) &&
   value[3252]==4) {
   set('E',491,'c',1,NULL,NULL);
   say(0,1259,0);
   say(32,163,0);
   apport(163,value[1138]);
   bitmod('s',163,4);
   set('E',163,'c',1,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p187(void)
#else
int p187()
#endif
{
int done=0;
   if ((value[HERE]==586)) {
   return 0;
   }
   say(2,1138,0);
   if ((value[HERE]==491)) {
   p323();
   }
   if (((519<=value[1138] && value[1138]<=543)) &&
   !(value[HERE]==538)) {
   value[1145]=value[value[1138]];*bitword(1145)=0;
   if (value[1145]==0) {
   say(0,1259,0);
   say(0,1348,0);
   }
   } else    if (((value[HERE]==544)) &&
   !(bitest(544,16))) {
   bitmod('s',544,16);
   say(0,2474,0);
   }
   p793();
   p400();
   if (have(39,-1,-1)) {
   say(0,1419,0);
   }
   p392();
return done;
}
#ifdef __STDC__
int p374(void)
#else
int p374()
#endif
{
int done=0;
   if (isnear(108,-1,-1)) {
   if (value[1179]>=value[1194]) {
   say(0,1381,0);
   flush_command();
   longjmp(loop_back,1);
   }
   if (have(108,-1,-1)) {
   say(76,1307,108);
   }
   apport(108,INHAND);
   say(12,1979,1136);
   if (value[109]==1) {
   apport(109,INHAND);
   if (value[1190]>=6) {
   bitmod('s',109,18);
   bitmod('s',108,18);
   }
   say(64,1997,0);
   }
   say(76,1980,1137);
   }
return done;
}
#ifdef __STDC__
int p373(void)
#else
int p373()
#endif
{
int done=0;
   if (isnear(109,-1,-1)) {
   if (have(109,-1,-1)) {
   say(76,1307,109);
   }
   if (value[109]==1) {
   p374();
   }
   if (isnear(108,-1,-1)) {
   if (have(110,-1,-1)) {
   say(64,1309,0);
   }
   if (!(bitest(evar(1210),3))) {
   say(64,2346,0);
   }
   bitmod('c',208,8);
   if (have(108,-1,-1)) {
   apport(109,INHAND);
   }
   set('E',109,'c',1,NULL,NULL);
   say(64,1984,0);
   }
   say(64,1310,0);
   }
return done;
}
#ifdef __STDC__
int p375(void)
#else
int p375()
#endif
{
int done=0;
   if (ishere(193,-1,-1)) {
   if (bitest(193,15)) {
   say(76,2037,193);
   }
   say(64,1402,0);
   }
return done;
}
#ifdef __STDC__
int p376(void)
#else
int p376()
#endif
{
int done=0;
   if (ishere(81,-1,-1)) {
   if (value[1179]<value[1194]) {
   apport(81,INHAND);
   apport(82,702);
   say(64,3415,0);
   }
   flush_command();
   say(64,1381,0);
   }
return done;
}
#ifdef __STDC__
int p379(void)
#else
int p379()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (((isnear(100,-1,-1)) &&
   value[1179]<value[1194]) &&
   !have(100,-1,-1)) {
   if (value[100]==0) {
   set('E',100,'c',1,NULL,NULL);
   apport(100,INHAND);
   say(64,1820,0);
   }
   if ((location[100]==value[1138])) {
   if (test("doall")) {
   say(64,2555,0);
   }
   say(64,1821,0);
   }}
return done;
}
#ifdef __STDC__
int p234(void)
#else
int p234()
#endif
{
int done=0;
   if (have(100,-1,-1)) {
   if ((value[1140]!=value[1138]) &&
   (value[1140]==443)) {
   value[1140]=442;*bitword(1140)=-1;
   }
   apport(100,value[1140]);
   bitmod('c',100,13);
   if ((value[100]>1) ||
   (value[HERE]==386)) {
   set('E',100,'c',3,NULL,NULL);
   if ((value[HERE]==386)) {
   say(0,1920,0);
   if (bitest(evar(1170),8)) {
   set('V',1245,'c',0,NULL,NULL);
   } else {
   bitmod('s',evar(1170),8);
   set('V',1245,'c',1,NULL,NULL);
   }
   } else {
   if (value[1140]!=value[1138]) {
   if (isnear(100,-1,-1)) {
   set('E',100,'c',2,NULL,NULL);
   }
   if ((642<=value[1138] && value[1138]<=650)) {
   say(8,1921,1);
   say(72,2420,0);
   } else {
   say(8,1921,2);
   }
   } else {
   say(8,1921,0);
   if (!(bitest(evar(1170),8))) {
   bitmod('s',evar(1170),8);
   bitmod('s',evar(1170),0);
   say(0,1259,0);
   }}
   say(64,1259,0);
   }
   if (isnear(88,-1,-1)) {
   p657();
   }
   if (value[1245]==1) {
   say(0,1259,0);
   p187();
   }
   } else {
   if (value[1140]!=value[1138]) {
   if ((642<=value[1138] && value[1138]<=650)) {
   say(0,3337,0);
   say(72,2420,0);
   }
   } else {
   set('V',1140,'c',0,NULL,NULL);
   }
   if (bitest(evar(1170),8)) {
   say(76,1822,1140);
   } else {
   say(64,1823,0);
   }}
   if ((value[HERE]==462)) {
   p936();
   }
   if (value[1140]==value[1138]) {
   longjmp(loop_back,1);
   }
   if (value[1144]==1) {
   say(12,1980,100);
   say(74,1141,0);
   } else {
   say(78,1141,100);
   }}
return done;
}
#ifdef __STDC__
int p235(void)
#else
int p235()
#endif
{
int done=0;
   if (!(have(102,-1,-1))) {
   return 0;
   }
   value[102] += 3;
   if (value[102]>8) {
   value[102] -= 8;
   }
   apport(102,value[1140]);
   if (isnear(102,-1,-1)) {
   set('T',2553,'c',0,NULL,NULL);
   } else    if ((642<=value[1138] && value[1138]<=650)) {
   set('T',2553,'c',3,NULL,NULL);
   } else    if ((value[1140]==443)) {
   set('T',2553,'c',2,NULL,NULL);
   } else {
   set('T',2553,'c',1,NULL,NULL);
   }
   say(12,2553,102);
   if (value[2553]==3) {
glue_text();
   say(8,2420,0);
   }
   if ((value[102]==8) &&
   !(bitest(102,13))) {
   bitmod('s',102,13);
   say(64,2293,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p231(void)
#else
int p231()
#endif
{
int done=0;
   if (!(have(109,-1,-1))) {
   return 0;
   }
   apport(109,HERE);
   set('E',109,'c',0,NULL,NULL);
   if (isnear(9,-1,-1)) {
   apport(9,702);
   bitmod('c',214,8);
   bitmod('c',214,5);
   say(72,1313,0);
   }
   if (isnear(21,-1,-1)) {
   if (value[21]==0) {
   p941();
   say(72,1313,1);
   }
   say(76,1982,1137);
   }
   if (isnear(5,-1,-1)) {
   say(72,1313,2);
   }
   if (isnear(23,-1,-1)) {
   say(72,1313,3);
   }
   if (isnear(25,-1,-1)) {
   p941();
   say(72,1313,4);
   }
   if (isnear(39,-1,-1)) {
   if (value[39]==0) {
   p941();
   say(72,1313,5);
   }
   say(72,1313,6);
   }
   if ((isnear(26,-1,-1)) &&
   value[26]<2) {
   say(8,1313,7);
   p941();
   p153();
   }
   if (isnear(90,-1,-1)) {
   p941();
   say(72,1313,8);
   }
   if (isnear(193,-1,-1)) {
   p941();
   say(12,1445,193);
   longjmp(loop_back,1);
   }
   if ((value[HERE]==448)) {
   if (!((location[112]==702))) {
   say(8,1313,9);
   say(0,1836,0);
   p153();
   }}
   if (((bitest(evar(1138),7)) &&
   !(587<=value[1138] && value[1138]<=627)) &&
   !(bitest(evar(1138),18))) {
   if ((location[9]==214)) {
   if (isnear(137,-1,-1)) {
   say(72,2652,0);
   } else {
   say(72,2652,1);
   }
   } else {
   p941();
   if (isnear(137,-1,-1)) {
   say(72,2652,2);
   } else {
   say(72,2652,3);
   }}}
   say(12,1982,1137);
   if ((value[HERE]==462)) {
   p936();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p232(void)
#else
int p232()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (have(108,-1,-1)) {
   apport(108,value[1140]);
   say(12,1979,1136);
   if (have(109,-1,-1)) {
   apport(109,HERE);
   say(0,1997,0);
   if (!(value[1140]==value[1138])) {
   if ((value[HERE]==210)) {
   set('L',0,'c',1,lval, lbts);
   } else {
   set('L',0,'c',0,lval, lbts);
   say(0,1259,0);
   }
   say(8,2027,lval[0]);
   apport(109,value[1140]);
   }
   } else {
   say(12,1980,1137);
   }
   if ((value[HERE]==263)) {
   apport(108,262);
   }
   if ((value[HERE]==462)) {
   p936();
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p236(void)
#else
int p236()
#endif
{
int done=0;
   if (have(56,-1,-1)) {
   apport(56,value[1140]);
   if ((value[HERE]==284)) {
   say(64,3415,0);
   } else {
   if (value[1140]==value[1138]) {
   if (ishere(113,-1,-1)) {
   set('E',56,'c',1,NULL,NULL);
   say(0,56,0);
   set('E',56,'c',0,NULL,NULL);
   } else {
   set('E',56,'c',2,NULL,NULL);
   say(0,56,0);
   apport(56,702);
   apport(57,value[1138]);
   }
   } else {
   say(0,1680,0);
   apport(56,702);
   apport(57,value[1140]);
   }}
   if ((value[HERE]==462)) {
   p936();
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p268(void)
#else
int p268()
#endif
{
int done=0;
   if (value[1243]==0) {
   say(64,3231,0);
   }
   value[1248]=value[value[1243]];*bitword(1248)=0;
   if (!(value[1248]>2)) {
   say(76,1737,1243);
   }
   if ((isnear(193,-1,-1)) &&
   KEY(793)) {
   p885();
value[value[1243]]=2;
   bitmod('s',193,14);
   say(12,2028,1245);
   say(12,1550,1243);
   say(76,1551,193);
   }
   if (value[1248]==6) {
   if ((value[1243]==136)) {
value[value[1243]]=1;
   } else {
value[value[1243]]=2;
   }
   apport(87,value[1140]);
   say(64,1367,0);
   }
   p217();
return done;
}
#ifdef __STDC__
int p237(void)
#else
int p237()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (have(value[1137],-1,-1)) {
   lval[0]=value[value[1137]];lbts[0*VARSIZE]=0;
   if (!(value[1138]==value[1140])) {
   if (((value[1243]==136)) &&
   value[136]==6) {
   set('E',136,'c',1,NULL,NULL);
   } else {
   set('E',136,'c',2,NULL,NULL);
   }
   if ((value[1243]==123)) {
   return 0;
   }
   if (((value[1243]==136)) &&
   lval[0]==6) {
   apport(87,value[1140]);
   return 0;
   }
   if ((lval[0]>2) &&
   !(587<=value[1138] && value[1138]<=627)) {
   bitmod('s',evar(1140),13);
   }}
   if ((lval[0]>2) &&
   value[1140]==value[1138]) {
   apport(value[1137],HERE);
   say(76,2238,1137);
   }}
return done;
}
#ifdef __STDC__
int p514(void)
#else
int p514()
#endif
{
int done=0;
   if (value[21]>0) {
   say(64,1457,0);
   }
   value[1148]=1330;*bitword(1148)=-1;
   special(23, &value[1148]);
   set('V',1172,'c',27,NULL,NULL);
   say(66,1148,0);
return done;
}
#ifdef __STDC__
int p225(void)
#else
int p225()
#endif
{
int done=0;
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   special(24, &value[1148]);
   set('E',21,'c',1,NULL,NULL);
   if ((value[HERE]==307)) {
   value[1138]=306;*bitword(1138)=-1;
   *bitword(1146)= -1; value[1146]=FOBJ-1; while (++value[1146]<=LOBJ) {
   if (!isat(value[1146],-1,-1,307)) continue;
   if (bitest(evar(1146),3)) {
   apport(value[1146],value[1138]);
   }}}
   apport(126,value[1138]);
   apport(63,value[1138]);
   apport(21,value[1138]);
   value[1196] = irand(5-0+1)+0;
   value[1196] += 5;
   bitmod('c',21,6);
   set('E',63,'c',2,NULL,NULL);
   say(0,1912,0);
   say(0,21,0);
   say(0,63,0);
   say(64,126,0);
   }
   if (anyof(823,857,744,-1)) {
   special(24, &value[1148]);
   say(12,1686,1136);
   say(76,1687,1137);
   }
   say(72,1715,0);
return done;
}
#ifdef __STDC__
int p513(void)
#else
int p513()
#endif
{
int done=0;
   if (value[1190]<6) {
   p941();
   say(64,1325,0);
   }
   say(64,1866,0);
return done;
}
#ifdef __STDC__
int p515(void)
#else
int p515()
#endif
{
int done=0;
   set('V',1172,'c',28,NULL,NULL);
   value[1148]=1331;*bitword(1148)=-1;
   special(23, &value[1148]);
   say(78,1148,193);
return done;
}
#ifdef __STDC__
int p247(void)
#else
int p247()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   special(24, &value[1148]);
   set('L',0,'v',1194,lval, lbts);
   lval[0] -= value[1179];
   lval[0] += 2;
   lval[0] *= 10;
   if (irand(100)<lval[0]) {
   say(0,1327,0);
   p517(0,0);
   longjmp(loop_back,1);
   }
   if (irand(100)<lval[0]) {
   say(64,1328,0);
   }
   say(0,1329,0);
   p153();
   }
   if (anyof(823,857,744,-1)) {
   special(24, &value[1148]);
   say(12,1686,1136);
   say(76,1687,193);
   }
   say(72,1715,0);
return done;
}
#ifdef __STDC__
int p516(void)
#else
int p516()
#endif
{
int done=0;
   set('V',1172,'c',29,NULL,NULL);
   value[1148]=1331;*bitword(1148)=-1;
   special(23, &value[1148]);
   say(78,1148,25);
return done;
}
#ifdef __STDC__
int p632(void)
#else
int p632()
#endif
{
int done=0;
   set('V',1172,'c',0,NULL,NULL);
   if (KEY(856)) {
   special(24, &value[1148]);
   if (irand(100)<50) {
   say(64,1588,0);
   }
   say(0,1589,0);
   p153();
   }
   if (anyof(823,857,744,-1)) {
   special(24, &value[1148]);
   say(12,1686,1136);
   say(76,1687,25);
   }
   say(72,1715,0);
return done;
}
#ifdef __STDC__
int p372(void)
#else
int p372()
#endif
{
int done=0;
   if (isnear(39,-1,-1)) {
   if (have(39,-1,-1)) {
   say(64,2178,0);
   }
   if (((value[HERE]==361)) &&
   value[39]<2) {
   say(64,1459,0);
   }
   apport(39,INHAND);
   say(64,2177,0);
   }
return done;
}
#ifdef __STDC__
int p381(void)
#else
int p381()
#endif
{
int done=0;
   if (isnear(125,-1,-1)) {
   if ((value[125]==0) &&
   value[1179]<value[1194]) {
   if (value[128]==2) {
   value[125] += 1;
   apport(125,INHAND);
   bitmod('c',517,8);
   say(64,1571,0);
   }
   say(64,1572,0);
   }}
return done;
}
#ifdef __STDC__
int p377(void)
#else
int p377()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (isnear(59,-1,-1)) {
   if ((value[59]==0) &&
   value[1179]<value[1194]) {
   apport(59,INHAND);
   set('E',59,'c',1,NULL,NULL);
   lval[0] = irand(4);
   if (lval[0]==0) {
   value[1156]=720;*bitword(1156)=-1;
   } else    if (lval[0]==1) {
   value[1156]=715;*bitword(1156)=-1;
   } else    if (lval[0]==2) {
   value[1156]=714;*bitword(1156)=-1;
   } else {
   value[1156]=708;*bitword(1156)=-1;
   }
   apport(38,702);
   if (value[36]==0) {
   say(76,1603,1156);
   }
   say(64,1604,0);
   }}
return done;
}
#ifdef __STDC__
int p800(void)
#else
int p800()
#endif
{
int done=0;
   say(12,1495,1180);
   p153();
return done;
}
#ifdef __STDC__
int p219(void)
#else
int p219()
#endif
{
int done=0;
   if (bitest(evar(1171),1)) {
   return 0;
   }
   bitmod('s',evar(1171),1);
   p26();
   if (value[1245]==1) {
   return 0;
   }
   bitmod('s',evar(1170),7);
   say(0,1660,0);
return done;
}
#ifdef __STDC__
int p147(void)
#else
int p147()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   say(0,1416,0);
   lbts[0*VARSIZE]=-1; lval[0]=FOBJ-1; while (++lval[0]<=LOBJ) {
   lbitmod(1,'c',0,18,lval,lbts);
   if (!((lval[0]==28))) {
   lbitmod(1,'c',0,13,lval,lbts);
   lbitmod(1,'c',0,14,lval,lbts);
   }
   if (lbitest(0,3,lval,lbts)) {
   if (have(lval[0],-1,-1)) {
   apport(lval[0],HERE);
   }}}
   apport(12,448);
   set('E',136,'c',2,NULL,NULL);
   set('E',119,'c',2,NULL,NULL);
   set('E',123,'c',2,NULL,NULL);
   bitmod('s',119,13);
   set('E',119,'c',2,NULL,NULL);
   bitmod('s',13,13);
   bitmod('s',139,13);
   bitmod('s',115,13);
   set('E',115,'c',0,NULL,NULL);
   bitmod('c',115,15);
   bitmod('s',110,13);
   bitmod('s',107,13);
   set('E',107,'c',0,NULL,NULL);
   set('V',1173,'c',0,NULL,NULL);
   bitmod('s',193,13);
   set('E',193,'c',0,NULL,NULL);
   bitmod('s',112,14);
   bitmod('s',9,14);
   bitmod('s',108,14);
   set('E',108,'c',1,NULL,NULL);
   bitmod('s',109,14);
   set('E',109,'c',1,NULL,NULL);
   bitmod('s',113,14);
   set('E',129,'c',2,NULL,NULL);
   set('E',139,'c',0,NULL,NULL);
   *bitword(1147)= -1; value[1147]=FLOC-1; while (++value[1147]<=LLOC) {
   if (bitest(evar(1147),7)) {
   bitmod('c',evar(1147),4);
   }}
   bitmod('s',110,4);
   set('E',529,'c',1,NULL,NULL);
   bitmod('s',302,8);
   bitmod('s',544,4);
   bitmod('s',302,4);
   set('V',1190,'c',6,NULL,NULL);
   set('E',202,'c',1,NULL,NULL);
   set('V',1189,'c',999,NULL,NULL);
   set('V',1139,'c',0,NULL,NULL);
   move(447,-2);
return done;
}
#ifdef __STDC__
int p148(void)
#else
int p148()
#endif
{
int done=0;
   set('V',1190,'c',5,NULL,NULL);
   set('E',6,'c',0,NULL,NULL);
   say(0,1413,0);
   if (isnear(193,-1,-1)) {
   say(12,1519,193);
   }
   apport(193,701);
   set('E',193,'c',0,NULL,NULL);
   set('V',1188,'c',0,NULL,NULL);
   set('V',1158,'c',0,NULL,NULL);
   set('E',10,'c',0,NULL,NULL);
   set('E',31,'c',0,NULL,NULL);
   apport(23,702);
   apport(21,702);
   set('E',23,'c',4,NULL,NULL);
   apport(24,303);
   bitmod('s',10,10);
   bitmod('s',31,10);
   apport(85,702);
   set('E',161,'c',0,NULL,NULL);
   set('E',164,'c',0,NULL,NULL);
   set('E',478,'c',0,NULL,NULL);
   set('E',477,'c',1,NULL,NULL);
   set('E',453,'c',2,NULL,NULL);
   set('E',163,'c',1000,NULL,NULL);
   set('V',1189,'c',30,NULL,NULL);
return done;
}
#ifdef __STDC__
int p669(int typ0,int par0)
#else
int p669(typ0,par0)
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
   if (lval[0]==0) {
   p26();
   if (value[1245]>0) {
   return 0;
   }}
   bitmod('c',20,13);
   set('L',2,'c',0,lval, lbts);
   bitmod('c',100,5);
   lbts[1*VARSIZE]=-1; lval[1]=FOBJ-1; while (++lval[1]<=LOBJ) {
   if (!lbitest(1,5,lval,lbts)) continue;
   if (isnear(lval[1],-1,-1)) {
   lval[3]=value[lval[1]];lbts[3*VARSIZE]=0;
   if (!(((lbitest(1,16,lval,lbts)) &&
   lval[3]==2) &&
   have(lval[1],-1,-1))) {
   apport(lval[1],251);
   set('L',2,'c',1,lval, lbts);
   }}}
   bitmod('s',100,5);
   if (lval[2]==0) {
   if ((bitest(20,4)) ||
   value[1186]<150) {
   if (bitest(evar(1170),0)) {
   say(0,1259,0);
   }
   say(0,1411,0);
   bitmod('s',20,13);
   value[1189] = irand(13-4+1)+4;
   } else {
   apport(52,251);
   apport(30,373);
   bitmod('s',20,4);
   say(0,1479,0);
   }
   } else {
   say(0,1412,0);
   if (!(bitest(20,4))) {
   bitmod('s',20,4);
   apport(52,251);
   apport(30,373);
   }}
   bitmod('s',evar(1170),7);
return done;
}
#ifdef __STDC__
int p246(int typ0,int par0)
#else
int p246(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if (lval[0]==0) {
   p26();
   if (value[1245]==1) {
   return 0;
   }}
   apport(124,value[1138]);
   bitmod('s',193,4);
   bitmod('s',124,4);
   say(0,1278,0);
   bitmod('s',evar(1170),7);
return done;
}
#ifdef __STDC__
int p272(void)
#else
int p272()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   bitmod('s',evar(1170),7);
   if ((value[46]>1) ||
   (value[HERE]==302)) {
   return 0;
   }
   if (value[1190]<4) {
   value[1189] = irand(39-30+1)+30;
   if (value[69]>0) {
   value[69] = irand(20 - 1) + 1;
   }
   if (value[125]>0) {
   value[125] = irand(15 - 1) + 1;
   }
   if ((value[21]>0) &&
   value[21]<3) {
   value[1196] -= 1;
   if ((value[1196]==4) ||
   value[1196]==0) {
   value[21] += 1;
   }}
   if (((bitest(28,13)) &&
   !(bitest(28,14))) &&
   !isnear(193,-1,-1)) {
   bitmod('s',28,14);
   say(0,1641,0);
   set('V',1189,'c',5,NULL,NULL);
   set('V',1198,'v',1189,NULL,NULL);
   return 0;
   }
   if (value[128]==2) {
   value[1195] -= value[1198];
   if (value[1195]<0) {
   set('E',128,'c',3,NULL,NULL);
   set('V',1195,'c',40,NULL,NULL);
   say(0,128,0);
   set('E',128,'c',0,NULL,NULL);
   set('V',1194,'c',8,NULL,NULL);
   value[1194] += 1;
   set('V',1189,'c',8,NULL,NULL);
   set('V',1198,'v',1189,NULL,NULL);
   return 0;
   }}
   if (((bitest(210,4)) ||
   bitest(222,4)) &&
   (location[9]==702)) {
   if ((bitest(evar(1138),7)) ||
   bitest(evar(1138),5)) {
   value[1189] = irand(17-8+1)+8;
   } else {
   if (((((((((bitest(evar(1170),8)) &&
   value[1186]>150) &&
   !(bitest(20,4))) ||
   bitest(20,13)) ||
   irand(100)<10) &&
   !(bitest(52,4))) &&
   !isnear(193,-1,-1)) &&
   !(bitest(evar(1138),3))) &&
   !(bitest(46,12))) {
   p669(0,1);
   } else {
   set('L',0,'v',1188,lval, lbts);
   lval[0] += 2;
   lval[0] *= 7;
   if (((isnear(193,-1,-1)) ||
   irand(100)<lval[0]) &&
   value[193]<value[1188]) {
   if (bitest(124,4)) {
   apport(193,value[1138]);
   value[193] += 1;
   if (value[193]==1) {
   if (bitest(evar(1170),8)) {
   say(0,193,0);
   }
   bitmod('s',193,13);
   bitmod('c',193,14);
   }
   if (value[1158]==0) {
   p131();
   }
   } else {
   if (!(bitest(evar(1138),11))) {
   if (((bitest(222,4)) ||
   !(location[9]==214)) &&
   bitest(evar(1170),8)) {
   p246(0,1);
   }}}}}}}
   } else {
   if (value[1190]==4) {
   p148();
   } else {
   if (bitest(evar(1171),3)) {
   bitmod('c',evar(1171),3);
   set('V',1189,'c',15,NULL,NULL);
   } else {
   p147();
   }}}
   set('V',1198,'v',1189,NULL,NULL);
return done;
}
#ifdef __STDC__
int p522(void)
#else
int p522()
#endif
{
int done=0;
   if (value[1173]>0) {
   if (value[40]==3) {
   say(0,1482,0);
   } else {
   if (isnear(40,-1,-1)) {
   say(0,1481,0);
   set('E',40,'c',3,NULL,NULL);
   set('V',1173,'c',400,NULL,NULL);
   } else {
   if (bitest(40,4)) {
   say(0,1480,0);
   } else {
   if ((227<=value[1138] && value[1138]<=252)) {
   say(8,1476,1);
   } else {
   if ((362<=value[1138] && value[1138]<=373)) {
   say(8,1476,2);
   } else {
   say(8,1476,0);
   }}}}}
   } else {
   if (value[1190]==5) {
   p147();
   } else {
   if (isnear(40,0,1)) {
   say(0,1481,0);
   set('E',40,'c',3,NULL,NULL);
   value[1173] += 400;
   } else {
   say(0,1477,0);
   set('E',107,'c',0,NULL,NULL);
   p487();
   bitmod('s',evar(1171),5);
   }}}
return done;
}
#ifdef __STDC__
int p933(void)
#else
int p933()
#endif
{
int done=0;
   bitmod('s',evar(1138),9);
   if (((391<=value[1138] && value[1138]<=426)) ||
   (value[HERE]==390)) {
   bitmod('s',390,9);
   *bitword(1147)= -1; value[1147]=390; while (++value[1147]<=426) {
   bitmod('s',evar(1147),9);
   }}
   if (bitest(evar(1138),15)) {
   *bitword(1147)= -1; value[1147]=593; while (++value[1147]<=617) {
   bitmod('s',evar(1147),9);
   }}
   if ((334<=value[1138] && value[1138]<=350)) {
   *bitword(1147)= -1; value[1147]=333; while (++value[1147]<=350) {
   bitmod('s',evar(1147),9);
   }}
   if ((454<=value[1138] && value[1138]<=459)) {
   *bitword(1147)= -1; value[1147]=453; while (++value[1147]<=459) {
   bitmod('s',evar(1147),9);
   }}
   if ((227<=value[1138] && value[1138]<=252)) {
   *bitword(1147)= -1; value[1147]=226; while (++value[1147]<=252) {
   bitmod('s',evar(1147),9);
   }}
   if ((362<=value[1138] && value[1138]<=373)) {
   *bitword(1147)= -1; value[1147]=361; while (++value[1147]<=373) {
   bitmod('s',evar(1147),9);
   }}
   say(64,1863,0);
return done;
}
#ifdef __STDC__
int p405(void)
#else
int p405()
#endif
{
int done=0;
   if (((isnear(85,-1,-1)) &&
   bitest(87,4)) &&
   !(bitest(evar(1138),8))) {
   return 0;
   }
   if (!(bitest(evar(1138),8))) {
   return 0;
   }
   if ((bitest(evar(1138),9)) &&
   !KEY(832)) {
   return 0;
   }
   set('V',1148,'c',0,NULL,NULL);
   if (((value[HERE]==517)) &&
   KEY(832)) {
   set('V',1193,'c',0,NULL,NULL);
   say(64,2658,0);
   }
   if ((((value[HERE]==203)) &&
   value[6]==0) &&
   !have(106,-1,-1)) {
   value[1148]=1346;*bitword(1148)=-1;
   } else    if ((value[HERE]==444)) {
   value[1148]=2573;*bitword(1148)=-1;
   } else    if (((value[HERE]==208)) &&
   isnear(109,0,0)) {
   if (have(110,-1,-1)) {
   value[1148]=1297;*bitword(1148)=-1;
   } else {
   if (!(bitest(evar(1210),3))) {
   value[1148]=1299;*bitword(1148)=-1;
   }}
   } else    if (((value[HERE]==214)) &&
   isnear(9,-1,-1)) {
   if (bitest(evar(1209),0)) {
   if (!((KEY(832)) &&
   !(bitest(evar(1138),9)))) {
   value[1148]=2063;*bitword(1148)=-1;
   }
   } else {
   if ((location[109]==702)) {
   value[1148]=1303;*bitword(1148)=-1;
   } else {
   value[1148]=1301;*bitword(1148)=-1;
   }}
   } else    if ((value[HERE]==295)) {
   value[1148]=1473;*bitword(1148)=-1;
   } else    if ((((value[HERE]==287||value[HERE]==286||value[HERE]==288)) &&
   bitest(287,4)) &&
   !(bitest(61,4))) {
   value[1148]=1471;*bitword(1148)=-1;
   } else    if ((value[HERE]==315)) {
   value[1148]=1611;*bitword(1148)=-1;
   } else    if ((((227<=value[1138] && value[1138]<=252)) ||
   (362<=value[1138] && value[1138]<=373)) ||
   (454<=value[1138] && value[1138]<=459)) {
   value[1148]=1468;*bitword(1148)=-1;
   } else    if ((390<=value[1138] && value[1138]<=426)) {
   value[1148]=1681;*bitword(1148)=-1;
   } else    if ((334<=value[1138] && value[1138]<=350)) {
   if ((KEY(832)) &&
   !(bitest(evar(1138),9))) {
   return 0;
   } else {
   value[1148]=1792;*bitword(1148)=-1;
   }
   } else    if ((isnear(85,-1,-1)) &&
   !(bitest(87,4))) {
   value[1148]=2396;*bitword(1148)=-1;
   } else    if ((value[HERE]==500)) {
   value[1148]=3382;*bitword(1148)=-1;
   } else    if ((value[HERE]==510||value[HERE]==511)) {
   if (bitest(evar(1209),7)) {
   value[1148]=3422;*bitword(1148)=-1;
   } else    if (bitest(evar(1209),6)) {
   value[1148]=2146;*bitword(1148)=-1;
   } else {
   value[1148]=2144;*bitword(1148)=-1;
   }
   } else    if ((value[HERE]==298)) {
   value[1148]=1790;*bitword(1148)=-1;
   } else    if (isnear(17,-1,-1)) {
   value[1148]=1898;*bitword(1148)=-1;
   } else    if ((value[HERE]==311)) {
   value[1148]=1902;*bitword(1148)=-1;
   } else    if ((value[HERE]==325)) {
   value[1148]=2000;*bitword(1148)=-1;
   } else    if ((value[HERE]==313)) {
   if (bitest(evar(1209),1)) {
   if (!((KEY(832)) &&
   !(bitest(evar(1138),9)))) {
   value[1148]=1904;*bitword(1148)=-1;
   }
   } else {
   value[1148]=1904;*bitword(1148)=-1;
   bitmod('s',evar(1209),1);
   }
   } else    if (isnear(25,-1,-1)) {
   value[1148]=1907;*bitword(1148)=-1;
   } else    if (isnear(36,-1,-1)) {
   value[1148]=1909;*bitword(1148)=-1;
   } else    if ((value[HERE]==322)) {
   if (KEY(832)) {
   value[1148]=1918;*bitword(1148)=-1;
   } else {
   return 0;
   }
   } else    if (((value[HERE]==198)) &&
   value[194]>4) {
   value[1148]=2394;*bitword(1148)=-1;
   set('V',1145,'v',1148,NULL,NULL);
   value[1145] += 1;
value[value[1145]]=1;
   if (bitest(95,4)) {
value[value[1145]]=0;
   }
   } else    if ((value[HERE]==453)) {
   if (value[453]==0) {
   value[1148]=2390;*bitword(1148)=-1;
   } else {
   if (value[194]<2) {
   value[1148]=2392;*bitword(1148)=-1;
   }}
   } else    if ((value[HERE]==631)) {
   value[1148]=2399;*bitword(1148)=-1;
   } else    if ((value[HERE]==443)) {
   value[1148]=2387;*bitword(1148)=-1;
   set('V',1145,'v',1148,NULL,NULL);
   value[1145] += 1;
   if (value[139]==1) {
value[value[1145]]=1;
   } else {
value[value[1145]]=0;
   }
   } else    if ((value[HERE]==559)) {
   value[1148]=1752;*bitword(1148)=-1;
   } else    if (bitest(evar(1138),15)) {
   value[1148]=2641;*bitword(1148)=-1;
   } else    if ((value[HERE]==571)) {
   value[1148]=1497;*bitword(1148)=-1;
   if (value[556]==2) {
   set('T',1870,'c',1,NULL,NULL);
   }
   } else    if ((value[HERE]==302)) {
   if (value[1190]<3) {
   value[1148]=1270;*bitword(1148)=-1;
   } else    if (value[1199]==0) {
   value[1148]=2656;*bitword(1148)=-1;
   }
   } else    if ((value[HERE]==641)) {
   value[1148]=2643;*bitword(1148)=-1;
   } else    if ((value[HERE]==593)) {
   value[1148]=2800;*bitword(1148)=-1;
   } else    if ((value[HERE]==592)) {
   value[1148]=2802;*bitword(1148)=-1;
   } else    if ((value[HERE]==482)) {
   value[1148]=2804;*bitword(1148)=-1;
   } else    if ((value[HERE]==575)) {
   value[1148]=2806;*bitword(1148)=-1;
   } else    if ((467<=value[1138] && value[1138]<=478)) {
   value[1148]=2808;*bitword(1148)=-1;
   } else    if ((value[HERE]==432)) {
   value[1148]=3361;*bitword(1148)=-1;
   }
   if (value[1148]==0) {
   return 0;
   }
   set('V',1193,'c',0,NULL,NULL);
   set('V',1172,'c',4,NULL,NULL);
   say(0,1259,0);
   say(66,1148,0);
return done;
}
#ifdef __STDC__
int p404(void)
#else
int p404()
#endif
{
int done=0;
   if (value[1172]==4) {
   if ((value[1170]==0) ||
   KEY(856)) {
   say(8,1466,10);
   set('V',1172,'c',5,NULL,NULL);
   say(64,1467,0);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   p933();
   say(64,1864,0);
   }
   say(0,1261,0);
   say(66,1148,0);
   }
   if (value[1172]==5) {
   if ((value[1170]==0) ||
   KEY(856)) {
   if ((value[1190]==6) &&
   (value[1148]==2396)) {
   value[1148] += 1;
   }
   value[1148] += 1;
   say(2,1148,0);
   value[1181] += 10;
   bitmod('c',evar(1138),8);
   bitmod('c',evar(1138),9);
   value[1148] -= 1;
   if ((value[1148]==3378)) {
   bitmod('s',evar(1209),10);
   longjmp(loop_back,1);
   }
   if ((value[HERE]==511||value[HERE]==510)) {
   if (!((bitest(evar(1209),6)) ||
   bitest(evar(1209),7))) {
   bitmod('s',511,8);
   bitmod('s',510,8);
   bitmod('s',evar(1209),6);
   }
   if (bitest(evar(1209),7)) {
   bitmod('c',511,8);
   bitmod('c',510,8);
   }}
   if (isnear(9,-1,-1)) {
   if ((value[1148]==2063)) {
   bitmod('c',evar(1209),0);
   } else {
   bitmod('s',evar(1138),8);
   bitmod('s',evar(1209),0);
   }}
   if ((value[HERE]==313)) {
   if ((value[1148]==1995)) {
   bitmod('c',evar(1209),1);
   } else {
   bitmod('s',evar(1138),8);
   bitmod('s',evar(1209),1);
   }}
   if (((value[HERE]==571)) &&
   value[556]==2) {
   set('T',1870,'c',1,NULL,NULL);
   }
   if (((value[HERE]==287||value[HERE]==286)) ||
   (value[HERE]==288)) {
   bitmod('c',287,8);
   bitmod('c',288,8);
   bitmod('c',286,8);
   }
   if ((((value[HERE]==313)) &&
   bitest(256,4)) &&
   bitest(evar(1209),1)) {
   say(0,1906,0);
   }
   if (isnear(36,-1,-1)) {
   bitmod('c',376,8);
   bitmod('c',377,8);
   }
   if (((value[HERE]==295)) &&
   value[1150]>30) {
   set('V',1150,'c',30,NULL,NULL);
   }
   if (((390<=value[1138] && value[1138]<=426)) ||
   (value[HERE]==390)) {
   bitmod('c',390,8);
   *bitword(1147)= -1; value[1147]=390; while (++value[1147]<=426) {
   bitmod('c',evar(1147),8);
   }}
   if ((334<=value[1138] && value[1138]<=350)) {
   *bitword(1147)= -1; value[1147]=333; while (++value[1147]<=350) {
   bitmod('c',evar(1147),8);
   }}
   if ((454<=value[1138] && value[1138]<=459)) {
   *bitword(1147)= -1; value[1147]=453; while (++value[1147]<=459) {
   bitmod('c',evar(1147),8);
   }}
   if ((227<=value[1138] && value[1138]<=252)) {
   if (value[227]==0) {
   say(0,1470,0);
   } else {
   say(0,1259,0);
   }
   *bitword(1147)= -1; value[1147]=226; while (++value[1147]<=252) {
   bitmod('c',evar(1147),8);
   }}
   if ((362<=value[1138] && value[1138]<=373)) {
   *bitword(1147)= -1; value[1147]=361; while (++value[1147]<=373) {
   bitmod('c',evar(1147),8);
   }}
   if (bitest(evar(1138),15)) {
   *bitword(1147)= -1; value[1147]=593; while (++value[1147]<=617) {
   bitmod('c',evar(1147),8);
   }}
   if (isnear(17,-1,-1)) {
   bitmod('c',224,8);
   bitmod('c',225,8);
   }
   if ((467<=value[1138] && value[1138]<=476)) {
   value[1147]=467-1; while(++value[1147]<=476) {
   bitmod('c',evar(1147),8);
   }}
   set('V',1172,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   }
   if (anyof(823,857,744,-1)) {
   set('V',1172,'c',0,NULL,NULL);
   p933();
   say(64,1863,0);
   }
   say(0,1261,0);
   say(0,1467,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p614(void)
#else
int p614()
#endif
{
int done=0;
   if (value[1170]==2) {
   flush_command();
   say(64,1345,0);
   }
   if (KEY(758)) {
   set('V',1148,'v',1137,NULL,NULL);
   } else {
   set('V',1148,'v',1136,NULL,NULL);
   }
   if (bitest(evar(1170),8)) {
   if (((227<=value[1138] && value[1138]<=252)) &&
   !(bitest(evar(1138),11))) {
   say(64,1338,0);
   }
   if (bitest(evar(1138),15)) {
   say(76,1288,1148);
   } else    if ((642<=value[1138] && value[1138]<=650)) {
   if (anyof(744,745,747,748,749,751,-1))   say(76,2417,1148);
   if (anyof(754,-1))   say(64,2547,0);
   }
   say(76,1287,1148);
   }
   if (((irand(100)<25) &&
   !(value[HERE]==462)) &&
   value[1190]<6) {
   if (bitest(evar(1138),7)) {
   say(8,1305,0);
   } else {
   say(8,1305,1);
   p153();
   }}
   say(76,1289,1148);
return done;
}
#ifdef __STDC__
int p73(void)
#else
int p73()
#endif
{
int done=0;
   apport(127,702);
   say(0,1574,0);
   if (isnear(34,-1,-1)) {
   apport(34,702);
   say(72,2815,5);
   } else {
   if (isnear(193,-1,-1)) {
   say(0,1259,0);
   say(12,2814,193);
   p517(0,-1);
   longjmp(loop_back,1);
   }
   if (isnear(23,-1,-1)) {
   say(72,2815,0);
   }
   if (isnear(39,-1,-1)) {
   if (value[39]>0) {
   say(72,2815,2);
   }
   say(72,2815,1);
   }
   if (isnear(9,-1,-1)) {
   say(72,2815,3);
   }
   if (isnear(109,-1,-1)) {
   say(72,2815,4);
   }
   if ((isnear(21,-1,-1)) &&
   value[21]==0) {
   say(72,2815,6);
   }
   if (isnear(28,-1,-1)) {
   say(72,2815,7);
   }
   if ((isnear(26,-1,-1)) &&
   value[26]<2) {
   say(72,2815,8);
   }
   if (isnear(130,-1,-1)) {
   say(72,2815,9);
   apport(130,701);
   }
   if (isnear(90,-1,-1)) {
   say(72,2815,10);
   }
   if (isnear(25,-1,-1)) {
   say(72,2815,11);
   }
   if (isnear(5,-1,-1)) {
   say(72,2815,12);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p238(void)
#else
int p238()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (value[1138]==value[1140]) {
   if (have(127,-1,-1)) {
   if (value[127]<16) {
   value[127] += 1;
   }
   set('L',0,'e',127,lval, lbts);
   lval[0] -= 6;
   if (lval[0]>0) {
   lval[0] *= lval[0];
   if (irand(100)<lval[0]) {
   say(0,1573,0);
   apport(127,702);
   p153();
   }}
   } else {
   return 0;
   }
   } else {
   apport(127,702);
   if (value[1144]==1) {
   say(12,2028,127);
   say(10,1141,0);
   } else {
   say(14,1141,127);
   }
   if (((value[1141]==1768)) ||
   (value[1141]==2090)) {
   longjmp(loop_back,1);
   } else {
   say(64,2248,0);
   }}
return done;
}
#ifdef __STDC__
int p245(void)
#else
int p245()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (bitest(evar(1170),8)) {
   set('L',0,'e',193,lval, lbts);
   lval[0] += 2;
   lval[0] = irand(lval[0]);
   lval[0] -= 1;
   if (lval[0]<1) {
   return 0;
   }
   bitmod('c',193,15);
   say(8,1279,lval[0]);
   set('L',1,'v',1194,lval, lbts);
   lval[1] -= value[1179];
   lval[1] *= 5;
   if (bitest(193,14)) {
   lval[1] -= 20;
   }
   value[1202] += lval[1];
   value[1202] += 35;
   value[1202] /= lval[0];
   if (have(67,0,2)) {
   lval[1] = irand(5);
   if (lval[1]>0) {
   value[1148]=1281;*bitword(1148)=-1;
   value[1148] += lval[1];
   say(10,1148,lval[0]);
   return 0;
   }}
   if ((irand(100)<value[1202]) ||
   bitest(193,13)) {
   say(8,1280,lval[0]);
   bitmod('c',193,13);
   } else {
   say(8,1281,lval[0]);
   p153();
   }}
return done;
}
#ifdef __STDC__
int p907(void)
#else
int p907()
#endif
{
int done=0;
   int lval [2];
   short lbts [2];
   lval[0] = 0;
   lbts [0] = 0;
   lval[1] = 0;
   lbts [1] = 0;
   if (have(value[1137],-1,-1)) {
   if ((KEY(793)) &&
   !(value[HERE]==199)) {
   apport(value[1137],HERE);
   }
   if (isnear(193,-1,-1)) {
   set('L',0,'v',1194,lval, lbts);
   lval[0] -= value[1179];
   lval[0] *= 5;
   set('L',1,'e',193,lval, lbts);
   lval[1] += 2;
   lval[1] *= 15;
   lval[0] += lval[1];
   if (anyof(124,781,-1)) {
   if (!(keyword(124,781,-1))) {
   lval[0] += 15;
   }}
   if (irand(100)<lval[0]) {
   if (((irand(100)<5) &&
   value[193]==1) &&
   !(bitest(evar(1210),8))) {
   bitmod('s',evar(1210),8);
   set('V',1207,'c',1,NULL,NULL);
   say(12,1433,1137);
   } else {
   say(0,1432,0);
   }
   p517(0,0);
   if (value[193]>0) {
   set('V',1202,'c',0,NULL,NULL);
   set('V',1201,'c',100,NULL,NULL);
   }
   } else {
   say(0,1328,0);
   set('V',1202,'c',0,NULL,NULL);
   set('V',1201,'c',100,NULL,NULL);
   }
   } else {
   if (isnear(9,-1,-1)) {
   if (KEY(793)) {
   apport(value[1137],INHAND);
   }
   say(64,1326,0);
   }
   if (isnear(21,-1,-1)) {
   say(76,1435,1137);
   }
   if (isnear(39,-1,-1)) {
   if (value[39]==0) {
   if (KEY(793)) {
   if (KEY(124)) {
   set('E',124,'c',1,NULL,NULL);
   say(64,1455,0);
   }
   say(76,1577,1137);
   }
   if (irand(100)<50) {
   say(64,1578,0);
   }
   say(0,1579,0);
   p153();
   }
   say(76,1456,39);
   }
   if (isnear(23,-1,-1)) {
   say(64,1448,0);
   }
   if (isnear(25,-1,-1)) {
   if (KEY(781)) {
   set('T',1585,'c',0,NULL,NULL);
   if (KEY(54)) {
   set('T',1585,'c',1,NULL,NULL);
   }
   say(12,1585,1137);
   p153();
   }
   if (anyof(124,54,-1)) {
   set('T',1586,'c',0,NULL,NULL);
   if (KEY(54)) {
   set('T',1586,'c',1,NULL,NULL);
   }
   say(12,1586,1137);
   p153();
   }
   bitmod('c',385,8);
   apport(25,702);
   apport(125,HERE);
   bitmod('c',385,5);
   say(64,1587,0);
   }
   if (isnear(18,-1,-1)) {
   say(76,1608,1137);
   }
   if (isnear(26,-1,-1)) {
   if (value[26]>1) {
   if (KEY(793)) {
   apport(value[1137],INHAND);
   }
   say(64,1457,0);
   }
   say(12,1617,1137);
   p153();
   }
   if (isnear(28,-1,-1)) {
   say(76,1618,1137);
   }
   if (isnear(130,-1,-1)) {
   say(12,1619,1137);
   p153();
   }
   if (isnear(194,-1,-1)) {
   if ((value[HERE]==199)) {
   say(76,3345,1137);
   }
   say(12,1786,1137);
   p153();
   }
   if (KEY(793)) {
   apport(value[1137],INHAND);
   return 0;
   }
   say(64,3415,0);
   }
   } else {
   p625(*bitword(1137),value[1137]);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p661(void)
#else
int p661()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if (isnear(36,-1,-1)) {
   bitmod('c',376,8);
   bitmod('c',377,8);
   if (value[36]==0) {
   if (value[1170]==2) {
   set('L',0,'v',1137,lval, lbts);
   } else {
   set('L',0,'v',1136,lval, lbts);
   }
   if (value[1156]==733) {
   if ((lval[0]==715)) {
   value[1156]=715;*bitword(1156)=-1;
   } else    if ((lval[0]==714)) {
   value[1156]=714;*bitword(1156)=-1;
   }}
   if (lval[0]==value[1156]) {
   set('E',36,'c',1,NULL,NULL);
   bitmod('s',36,13);
   say(64,1602,0);
   }
   if (!(bitest(36,13))) {
   set('E',36,'c',2,NULL,NULL);
   set('E',18,'c',1,NULL,NULL);
   bitmod('s',evar(1171),0);
   bitmod('s',evar(1171),2);
   set('E',6,'c',0,NULL,NULL);
   say(64,1605,0);
   }}}
   if ((isnear(98,-1,-1)) &&
   bitest(evar(1209),9)) {
   say(64,3322,0);
   }
   say(64,1322,0);
return done;
}
#ifdef __STDC__
int p845(void)
#else
int p845()
#endif
{
int done=0;
   if (value[18]>0) {
   value[18] += 1;
   if (value[18]>15) {
   apport(18,value[1138]);
   }
   say(0,2004,0);
   if (value[18]==18) {
   p153();
   }}
return done;
}
#ifdef __STDC__
int p683(void)
#else
int p683()
#endif
{
int done=0;
   move(702,-1);
   if (value[107]==1) {
   set('V',1173,'c',0,NULL,NULL);
   if (have(107,-1,-1)) {
   say(0,1629,0);
   } else {
   say(0,1630,0);
   }
   } else {
   say(0,1630,0);
   }
   p153();
return done;
}
#ifdef __STDC__
int p849(int typ0,int par0)
#else
int p849(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = par0;
   lbts [0] = typ0;
   if ((value[HERE]==629)) {
   say(8,3347,0);
   } else    if ((value[HERE]==495)) {
   say(8,3347,1);
   } else    if ((value[HERE]==286||value[HERE]==334)) {
   say(8,3347,2);
   } else    if ((value[HERE]==425)) {
   say(8,3347,3);
   } else {
   say(0,1306,0);
   }
   if (lval[0]!=0) {
   longjmp(loop_back,1);
   }
return done;
}
