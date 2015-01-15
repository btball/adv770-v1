/* adv1.h: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

#ifndef ADV1_H
#define ADV1_H
#define GAME_NAME "Adv770"
#define GAME_VERSION "2.09"
#define GAME_ID "Adv770 version 2.09, 31 May 2014"
#define STYLE 12
#ifndef ADV01
#define GAME_DATE "31 May 2014"
#define ACDC_VERSION "12.29, 04 Jan 2015"
#if defined(MSDOS) || defined(_WIN32)
#  define PERSISTENT_DATA "_adv770.adp"
#  define CGINAME "_adv770"
#else
#  define PERSISTENT_DATA ".adv770.adp"
#  define CGINAME ".adv770"
#endif
#define DBNAME "adv770.dat"
#define OBJSIZE 2
#define LOCSIZE 2
#define VARSIZE 1
#define FOBJ 3
#define LOBJ 194
#define FLOC 195
#define LLOC 703
#define FVERB 704
#define LVERB 1135
#define FVAR 1136
#define LVAR 1257
#define FTEXT 1257
#define LTEXT 3478
#define NOISE 19
#define KNOT 52
#define VOCAB_SIZE 1269
#define INHAND 703
#define HERE 1138
#define THERE 1139
#define STATUS 1170
#define ARG1 1136
#define ARG2 1137
#define ARG3 1255
#define UNDO 738
#define REDO 739
#define UNDO_STAT 1256
#define UNDO_OFF 3
#define UNDO_INFO 4
#define UNDO_NONE 5
#define UNDO_TRIM 6
#define UNDO_INV 7
#define UNDO_BAD 8
#define SCHIZOID 6
#define JUGGLED 6
#define MOVED 0
#define PLSCLARIFY 5
#define AGAIN 724
#define ALL 3
#define EXCEPT 1135
#define TYPO 2549
#define IT 166
#define ADVCONTEXT 1172
#define DWARVEN 1254
#define PROMPTED 4
#define FSPECIAL 723
#define LSPECIAL 742
#define FACT 704
#define LACT 722
#define FDIR 743
#define LDIR 755
#define SAY 730
#define BADWORD -2
#define AMBIGWORD -3
#define AMBIGTYPO -4
#define SCENEWORD -5
#define BADSYNTAX -6
#define OBJ 0
#define LOC 1
#define VERB 2
#define FULL 3
#define BEENHERE 4
#define TERSE 2
#define BRIEF 1
#define DBSTATUS 0
#define LPROC 1136
#define KEY(X) (value[1136]==X || value[1137]==X)
#define INIT_PROC p1
#define REPEAT_PROC p2
#endif
