/* adv4.h: Adv770 - copyright Mike Arnautov, 13 Jan 2015.
 * Licensed under the Modified BSD Licence (see the supplied LICENCE file).
 */

int (*procs[])() = {
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p675,p0,p0,p390,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p170,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p898,
p633,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p659,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p724,p403,p697,
p698,p813,p77,p877,p778,p186,p473,p149,p182,p86,p59,
p670,p604,p253,p918,p629,p607,p921,p256,p255,p920,p544,
p789,p922,p939,p506,p257,p923,p917,p554,p555,p556,p557,
p561,p562,p563,p564,p565,p567,p570,p573,p574,p577,p558,
p566,p571,p559,p569,p575,p576,p560,p568,p572,p553,p578,
p537,p538,p162,p179,p216,p76,p812,p244,p150,p123,p51,
p886,p0,p56,p821,p775,p758,p759,p508,p543,p180,p755,
p930,p848,p824,p181,p610,p480,p382,p470,p118,p783,p653,
p25,p679,p173,p605,p29,p770,p694,p166,p27,p934,p601,
p853,p708,p709,p730,p40,p628,p815,p611,p779,p756,p757,
p154,p352,p896,p74,p295,p79,p672,p673,p674,p0,p43,
p866,p867,p130,p664,p615,p619,p46,p786,p637,p803,p807,
p299,p296,p103,p711,p104,p101,p93,p94,p95,p96,p97,
p98,p99,p100,p87,p88,p89,p90,p91,p92,p102,p612,
p36,p37,p540,p393,p28,p864,p71,p533,p42,p55,p579,
p580,p581,p582,p583,p584,p585,p586,p587,p588,p589,p590,
p738,p606,p119,p663,p931,p929,p850,p218,p165,p794,p486,
p389,p521,p68,p70,p411,p777,p412,p425,p426,p438,p439,
p441,p442,p443,p444,p445,p446,p447,p413,p414,p415,p416,
p417,p418,p419,p420,p421,p422,p423,p424,p427,p428,p429,
p430,p431,p432,p433,p434,p435,p436,p437,p440,p69,p156,
p157,p158,p780,p30,p31,p32,p505,p477,p353,p725,p48,
p739,p928,p49,p52,p53,p526,p54,p707,p816,p62,p175,
p678,p692,p241,p909,p910,p911,p912,p913,p914,p45,p169,
p120,p121,p395,p107,p106,p854,p857,p856,p523,p861,p860,
p808,p771,p729,p772,p859,p858,p248,p862,p655,p358,p359,
p357,p363,p360,p361,p242,p915,p164,p852,p35,p618,p185,
p660,p872,p884,p546,p67,p666,p478,p753,p167,p168,p763,
p764,p765,p766,p767,p810,p809,p41,p545,p524,p820,p172,
p823,p269,p333,p344,p346,p347,p348,p349,p350,p351,p334,
p335,p336,p337,p338,p339,p340,p341,p342,p343,p345,p662,
p620,p252,p787,p177,p178,p174,p133,p769,p488,p502,p501,
p503,p504,p500,p498,p499,p489,p490,p491,p492,p493,p494,
p83,p495,p496,p497,p827,p81,p82,p66,p887,p888,p718,
p57,p85,p84,p902,p594,p595,p598,p596,p597,p599,p600,
p482,p879,p176,p17,p621,p254,p788,p919,p799,p798,p796,
p188,p199,p203,p204,p205,p206,p207,p208,p209,p189,p190,
p726,p191,p192,p193,p194,p195,p196,p197,p198,p200,p201,
p202,p210,p720,p721,p747,p748,p749,p134,p135,p136,p137,
p44,p109,p110,p111,p113,p112,p114,p115,p719,p723,p117,
p116,p804,p801,p19,p9,p10,p11,p12,p13,p14,p15,
p16,p18,p449,p450,p451,p452,p453,p454,p455,p456,p457,
p458,p459,p460,p461,p462,p463,p464,p465,p468,p469,p466,
p937,p483,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p402,p532,p0,p0,
p0,p942,p938,p844,p782,p737,p681,p667,p624,p591,p519,
p518,p330,p328,p307,p300,p63,p47,p0,p0,p23,p740,
p713,p710,p152,p784,p743,p525,p527,p750,p548,p712,p927,
p355,p868,p703,p163,p0,p0,p0,p617,p622,p251,p790,
p785,p791,p916,p623,p0,p874,p224,p0,p472,p654,p391,
p0,p38,p507,p161,p0,p365,p228,p239,p638,p870,p140,
p0,p908,p705,p535,p863,p891,p171,p636,p631,p531,p294,
p903,p671,p512,p407,p511,p64,p686,p258,p128,p226,p774,
p731,p833,p317,p301,p308,p530,p699,p706,p72,p717,p324,
p744,p261,p384,p325,p689,p690,p630,p215,p273,p924,p826,
p795,p132,p878,p78,p0,p592,p0,p484,p274,p693,p829,
p616,p882,p406,p409,p593,p702,p761,p399,p356,p214,p541,
p481,p819,p935,p776,p746,p818,p408,p754,p485,p745,p271,
p61,p138,p0,p0,p0,p876,p704,p751,p890,p940,p613,
p551,p825,p354,p897,p213,p728,p871,p124,p249,p270,p691,
p34,p509,p831,p684,p687,p520,p155,p635,p608,p60,p160,
p830,p292,p0,p212,p846,p293,p0,p0,p108,p0,p0,
p0,p0,p332,p0,p0,p0,p0,p0,p159,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p58,p0,
p0,p0,p0,p0,p0,p883,p627,p0,p0,p0,p0,
p0,p603,p822,p0,p0,p0,p0,p0,p0,p0,p0,
p680,p682,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p471,p0,p0,p0,p0,p0,p0,p0,
p0,p0,p0,p0 };
