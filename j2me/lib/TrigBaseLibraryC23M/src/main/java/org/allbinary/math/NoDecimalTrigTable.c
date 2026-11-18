// Generated Code Do Not Modify
#include "org/allbinary/math/NoDecimalTrigTable.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/math/Angle.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif


static NoDecimalTrigTable* NoDecimalTrigTable_instance;








void NoDecimalTrigTable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoDecimalTrigTable_instance = NoDecimalTrigTable_new();
}

void NoDecimalTrigTable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoDecimalTrigTable", nullptr);
    java_register_method("NoDecimalTrigTable", "sin", (void*) NoDecimalTrigTable_sin);
    java_register_method("NoDecimalTrigTable", "cos", (void*) NoDecimalTrigTable_cos);
    java_register_method("NoDecimalTrigTable", "tan", (void*) NoDecimalTrigTable_tan);
    java_register_method("NoDecimalTrigTable", "antiTan", (void*) NoDecimalTrigTable_antiTan);
    java_register_method("NoDecimalTrigTable", "antiTanDebug", (void*) NoDecimalTrigTable_antiTanDebug);
}

static void NoDecimalTrigTable_initFields(NoDecimalTrigTable* this) {
    this->mathUtil = MathUtil_getInstance();
    
    
    
    this->SCALE = 10000;
}


NoDecimalTrigTable* NoDecimalTrigTable_getInstance(void) {
        return (NoDecimalTrigTable_staticInit(), NoDecimalTrigTable_instance);
}


void NoDecimalTrigTable_init(NoDecimalTrigTable* this) {
    NoDecimalTrigTable_register();
    NoDecimalTrigTable_initFields(this);
        int32_t TOTAL_ANGLE = ((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE);
        int64_t MAX_VALUE = (((int64_t) (Integer_staticInit(), Integer_MAX_VALUE)));
        this->noDecimalSin = ((int64_t*) java_array_new(sizeof(int64_t), TOTAL_ANGLE));
        this->noDecimalCos = ((int64_t*) java_array_new(sizeof(int64_t), TOTAL_ANGLE));
        this->noDecimalTan = ((int64_t*) java_array_new(sizeof(int64_t), TOTAL_ANGLE + 1));
        this->noDecimalSin[0] = 0LL;
        this->noDecimalSin[1] = 174LL;
        this->noDecimalSin[2] = 348LL;
        this->noDecimalSin[3] = 523LL;
        this->noDecimalSin[4] = 697LL;
        this->noDecimalSin[5] = 871LL;
        this->noDecimalSin[6] = 1045LL;
        this->noDecimalSin[7] = 1218LL;
        this->noDecimalSin[8] = 1391LL;
        this->noDecimalSin[9] = 1564LL;
        this->noDecimalSin[10] = 1736LL;
        this->noDecimalSin[11] = 1908LL;
        this->noDecimalSin[12] = 2079LL;
        this->noDecimalSin[13] = 2249LL;
        this->noDecimalSin[14] = 2419LL;
        this->noDecimalSin[15] = 2588LL;
        this->noDecimalSin[16] = 2756LL;
        this->noDecimalSin[17] = 2923LL;
        this->noDecimalSin[18] = 3090LL;
        this->noDecimalSin[19] = 3255LL;
        this->noDecimalSin[20] = 3420LL;
        this->noDecimalSin[21] = 3583LL;
        this->noDecimalSin[22] = 3746LL;
        this->noDecimalSin[23] = 3907LL;
        this->noDecimalSin[24] = 4067LL;
        this->noDecimalSin[25] = 4226LL;
        this->noDecimalSin[26] = 4383LL;
        this->noDecimalSin[27] = 4539LL;
        this->noDecimalSin[28] = 4694LL;
        this->noDecimalSin[29] = 4848LL;
        this->noDecimalSin[30] = 4999LL;
        this->noDecimalSin[31] = 5150LL;
        this->noDecimalSin[32] = 5299LL;
        this->noDecimalSin[33] = 5446LL;
        this->noDecimalSin[34] = 5591LL;
        this->noDecimalSin[35] = 5735LL;
        this->noDecimalSin[36] = 5877LL;
        this->noDecimalSin[37] = 6018LL;
        this->noDecimalSin[38] = 6156LL;
        this->noDecimalSin[39] = 6293LL;
        this->noDecimalSin[40] = 6427LL;
        this->noDecimalSin[41] = 6560LL;
        this->noDecimalSin[42] = 6691LL;
        this->noDecimalSin[43] = 6819LL;
        this->noDecimalSin[44] = 6946LL;
        this->noDecimalSin[45] = 7071LL;
        this->noDecimalSin[46] = 7193LL;
        this->noDecimalSin[47] = 7313LL;
        this->noDecimalSin[48] = 7431LL;
        this->noDecimalSin[49] = 7547LL;
        this->noDecimalSin[50] = 7660LL;
        this->noDecimalSin[51] = 7771LL;
        this->noDecimalSin[52] = 7880LL;
        this->noDecimalSin[53] = 7986LL;
        this->noDecimalSin[54] = 8090LL;
        this->noDecimalSin[55] = 8191LL;
        this->noDecimalSin[56] = 8290LL;
        this->noDecimalSin[57] = 8386LL;
        this->noDecimalSin[58] = 8480LL;
        this->noDecimalSin[59] = 8571LL;
        this->noDecimalSin[60] = 8660LL;
        this->noDecimalSin[61] = 8746LL;
        this->noDecimalSin[62] = 8829LL;
        this->noDecimalSin[63] = 8910LL;
        this->noDecimalSin[64] = 8987LL;
        this->noDecimalSin[65] = 9063LL;
        this->noDecimalSin[66] = 9135LL;
        this->noDecimalSin[67] = 9205LL;
        this->noDecimalSin[68] = 9271LL;
        this->noDecimalSin[69] = 9335LL;
        this->noDecimalSin[70] = 9396LL;
        this->noDecimalSin[71] = 9455LL;
        this->noDecimalSin[72] = 9510LL;
        this->noDecimalSin[73] = 9563LL;
        this->noDecimalSin[74] = 9612LL;
        this->noDecimalSin[75] = 9659LL;
        this->noDecimalSin[76] = 9702LL;
        this->noDecimalSin[77] = 9743LL;
        this->noDecimalSin[78] = 9781LL;
        this->noDecimalSin[79] = 9816LL;
        this->noDecimalSin[80] = 9848LL;
        this->noDecimalSin[81] = 9876LL;
        this->noDecimalSin[82] = 9902LL;
        this->noDecimalSin[83] = 9925LL;
        this->noDecimalSin[84] = 9945LL;
        this->noDecimalSin[85] = 9961LL;
        this->noDecimalSin[86] = 9975LL;
        this->noDecimalSin[87] = 9986LL;
        this->noDecimalSin[88] = 9993LL;
        this->noDecimalSin[89] = 9998LL;
        this->noDecimalSin[90] = 10000LL;
        this->noDecimalSin[91] = 9998LL;
        this->noDecimalSin[92] = 9993LL;
        this->noDecimalSin[93] = 9986LL;
        this->noDecimalSin[94] = 9975LL;
        this->noDecimalSin[95] = 9961LL;
        this->noDecimalSin[96] = 9945LL;
        this->noDecimalSin[97] = 9925LL;
        this->noDecimalSin[98] = 9902LL;
        this->noDecimalSin[99] = 9876LL;
        this->noDecimalSin[100] = 9848LL;
        this->noDecimalSin[101] = 9816LL;
        this->noDecimalSin[102] = 9781LL;
        this->noDecimalSin[103] = 9743LL;
        this->noDecimalSin[104] = 9702LL;
        this->noDecimalSin[105] = 9659LL;
        this->noDecimalSin[106] = 9612LL;
        this->noDecimalSin[107] = 9563LL;
        this->noDecimalSin[108] = 9510LL;
        this->noDecimalSin[109] = 9455LL;
        this->noDecimalSin[110] = 9396LL;
        this->noDecimalSin[111] = 9335LL;
        this->noDecimalSin[112] = 9271LL;
        this->noDecimalSin[113] = 9205LL;
        this->noDecimalSin[114] = 9135LL;
        this->noDecimalSin[115] = 9063LL;
        this->noDecimalSin[116] = 8987LL;
        this->noDecimalSin[117] = 8910LL;
        this->noDecimalSin[118] = 8829LL;
        this->noDecimalSin[119] = 8746LL;
        this->noDecimalSin[120] = 8660LL;
        this->noDecimalSin[121] = 8571LL;
        this->noDecimalSin[122] = 8480LL;
        this->noDecimalSin[123] = 8386LL;
        this->noDecimalSin[124] = 8290LL;
        this->noDecimalSin[125] = 8191LL;
        this->noDecimalSin[126] = 8090LL;
        this->noDecimalSin[127] = 7986LL;
        this->noDecimalSin[128] = 7880LL;
        this->noDecimalSin[129] = 7771LL;
        this->noDecimalSin[130] = 7660LL;
        this->noDecimalSin[131] = 7547LL;
        this->noDecimalSin[132] = 7431LL;
        this->noDecimalSin[133] = 7313LL;
        this->noDecimalSin[134] = 7193LL;
        this->noDecimalSin[135] = 7071LL;
        this->noDecimalSin[136] = 6946LL;
        this->noDecimalSin[137] = 6819LL;
        this->noDecimalSin[138] = 6691LL;
        this->noDecimalSin[139] = 6560LL;
        this->noDecimalSin[140] = 6427LL;
        this->noDecimalSin[141] = 6293LL;
        this->noDecimalSin[142] = 6156LL;
        this->noDecimalSin[143] = 6018LL;
        this->noDecimalSin[144] = 5877LL;
        this->noDecimalSin[145] = 5735LL;
        this->noDecimalSin[146] = 5591LL;
        this->noDecimalSin[147] = 5446LL;
        this->noDecimalSin[148] = 5299LL;
        this->noDecimalSin[149] = 5150LL;
        this->noDecimalSin[150] = 4999LL;
        this->noDecimalSin[151] = 4848LL;
        this->noDecimalSin[152] = 4694LL;
        this->noDecimalSin[153] = 4539LL;
        this->noDecimalSin[154] = 4383LL;
        this->noDecimalSin[155] = 4226LL;
        this->noDecimalSin[156] = 4067LL;
        this->noDecimalSin[157] = 3907LL;
        this->noDecimalSin[158] = 3746LL;
        this->noDecimalSin[159] = 3583LL;
        this->noDecimalSin[160] = 3420LL;
        this->noDecimalSin[161] = 3255LL;
        this->noDecimalSin[162] = 3090LL;
        this->noDecimalSin[163] = 2923LL;
        this->noDecimalSin[164] = 2756LL;
        this->noDecimalSin[165] = 2588LL;
        this->noDecimalSin[166] = 2419LL;
        this->noDecimalSin[167] = 2249LL;
        this->noDecimalSin[168] = 2079LL;
        this->noDecimalSin[169] = 1908LL;
        this->noDecimalSin[170] = 1736LL;
        this->noDecimalSin[171] = 1564LL;
        this->noDecimalSin[172] = 1391LL;
        this->noDecimalSin[173] = 1218LL;
        this->noDecimalSin[174] = 1045LL;
        this->noDecimalSin[175] = 871LL;
        this->noDecimalSin[176] = 697LL;
        this->noDecimalSin[177] = 523LL;
        this->noDecimalSin[178] = 348LL;
        this->noDecimalSin[179] = 174LL;
        this->noDecimalSin[180] = 0LL;
        this->noDecimalSin[181] = ((int64_t) (-174));
        this->noDecimalSin[182] = ((int64_t) (-348));
        this->noDecimalSin[183] = ((int64_t) (-523));
        this->noDecimalSin[184] = ((int64_t) (-697));
        this->noDecimalSin[185] = ((int64_t) (-871));
        this->noDecimalSin[186] = ((int64_t) (-1045));
        this->noDecimalSin[187] = ((int64_t) (-1218));
        this->noDecimalSin[188] = ((int64_t) (-1391));
        this->noDecimalSin[189] = ((int64_t) (-1564));
        this->noDecimalSin[190] = ((int64_t) (-1736));
        this->noDecimalSin[191] = ((int64_t) (-1908));
        this->noDecimalSin[192] = ((int64_t) (-2079));
        this->noDecimalSin[193] = ((int64_t) (-2249));
        this->noDecimalSin[194] = ((int64_t) (-2419));
        this->noDecimalSin[195] = ((int64_t) (-2588));
        this->noDecimalSin[196] = ((int64_t) (-2756));
        this->noDecimalSin[197] = ((int64_t) (-2923));
        this->noDecimalSin[198] = ((int64_t) (-3090));
        this->noDecimalSin[199] = ((int64_t) (-3255));
        this->noDecimalSin[200] = ((int64_t) (-3420));
        this->noDecimalSin[201] = ((int64_t) (-3583));
        this->noDecimalSin[202] = ((int64_t) (-3746));
        this->noDecimalSin[203] = ((int64_t) (-3907));
        this->noDecimalSin[204] = ((int64_t) (-4067));
        this->noDecimalSin[205] = ((int64_t) (-4226));
        this->noDecimalSin[206] = ((int64_t) (-4383));
        this->noDecimalSin[207] = ((int64_t) (-4539));
        this->noDecimalSin[208] = ((int64_t) (-4694));
        this->noDecimalSin[209] = ((int64_t) (-4848));
        this->noDecimalSin[210] = ((int64_t) (-5000));
        this->noDecimalSin[211] = ((int64_t) (-5150));
        this->noDecimalSin[212] = ((int64_t) (-5299));
        this->noDecimalSin[213] = ((int64_t) (-5446));
        this->noDecimalSin[214] = ((int64_t) (-5591));
        this->noDecimalSin[215] = ((int64_t) (-5735));
        this->noDecimalSin[216] = ((int64_t) (-5877));
        this->noDecimalSin[217] = ((int64_t) (-6018));
        this->noDecimalSin[218] = ((int64_t) (-6156));
        this->noDecimalSin[219] = ((int64_t) (-6293));
        this->noDecimalSin[220] = ((int64_t) (-6427));
        this->noDecimalSin[221] = ((int64_t) (-6560));
        this->noDecimalSin[222] = ((int64_t) (-6691));
        this->noDecimalSin[223] = ((int64_t) (-6819));
        this->noDecimalSin[224] = ((int64_t) (-6946));
        this->noDecimalSin[225] = ((int64_t) (-7071));
        this->noDecimalSin[226] = ((int64_t) (-7193));
        this->noDecimalSin[227] = ((int64_t) (-7313));
        this->noDecimalSin[228] = ((int64_t) (-7431));
        this->noDecimalSin[229] = ((int64_t) (-7547));
        this->noDecimalSin[230] = ((int64_t) (-7660));
        this->noDecimalSin[231] = ((int64_t) (-7771));
        this->noDecimalSin[232] = ((int64_t) (-7880));
        this->noDecimalSin[233] = ((int64_t) (-7986));
        this->noDecimalSin[234] = ((int64_t) (-8090));
        this->noDecimalSin[235] = ((int64_t) (-8191));
        this->noDecimalSin[236] = ((int64_t) (-8290));
        this->noDecimalSin[237] = ((int64_t) (-8386));
        this->noDecimalSin[238] = ((int64_t) (-8480));
        this->noDecimalSin[239] = ((int64_t) (-8571));
        this->noDecimalSin[240] = ((int64_t) (-8660));
        this->noDecimalSin[241] = ((int64_t) (-8746));
        this->noDecimalSin[242] = ((int64_t) (-8829));
        this->noDecimalSin[243] = ((int64_t) (-8910));
        this->noDecimalSin[244] = ((int64_t) (-8987));
        this->noDecimalSin[245] = ((int64_t) (-9063));
        this->noDecimalSin[246] = ((int64_t) (-9135));
        this->noDecimalSin[247] = ((int64_t) (-9205));
        this->noDecimalSin[248] = ((int64_t) (-9271));
        this->noDecimalSin[249] = ((int64_t) (-9335));
        this->noDecimalSin[250] = ((int64_t) (-9396));
        this->noDecimalSin[251] = ((int64_t) (-9455));
        this->noDecimalSin[252] = ((int64_t) (-9510));
        this->noDecimalSin[253] = ((int64_t) (-9563));
        this->noDecimalSin[254] = ((int64_t) (-9612));
        this->noDecimalSin[255] = ((int64_t) (-9659));
        this->noDecimalSin[256] = ((int64_t) (-9702));
        this->noDecimalSin[257] = ((int64_t) (-9743));
        this->noDecimalSin[258] = ((int64_t) (-9781));
        this->noDecimalSin[259] = ((int64_t) (-9816));
        this->noDecimalSin[260] = ((int64_t) (-9848));
        this->noDecimalSin[261] = ((int64_t) (-9876));
        this->noDecimalSin[262] = ((int64_t) (-9902));
        this->noDecimalSin[263] = ((int64_t) (-9925));
        this->noDecimalSin[264] = ((int64_t) (-9945));
        this->noDecimalSin[265] = ((int64_t) (-9961));
        this->noDecimalSin[266] = ((int64_t) (-9975));
        this->noDecimalSin[267] = ((int64_t) (-9986));
        this->noDecimalSin[268] = ((int64_t) (-9993));
        this->noDecimalSin[269] = ((int64_t) (-9998));
        this->noDecimalSin[270] = ((int64_t) (-10000));
        this->noDecimalSin[271] = ((int64_t) (-9998));
        this->noDecimalSin[272] = ((int64_t) (-9993));
        this->noDecimalSin[273] = ((int64_t) (-9986));
        this->noDecimalSin[274] = ((int64_t) (-9975));
        this->noDecimalSin[275] = ((int64_t) (-9961));
        this->noDecimalSin[276] = ((int64_t) (-9945));
        this->noDecimalSin[277] = ((int64_t) (-9925));
        this->noDecimalSin[278] = ((int64_t) (-9902));
        this->noDecimalSin[279] = ((int64_t) (-9876));
        this->noDecimalSin[280] = ((int64_t) (-9848));
        this->noDecimalSin[281] = ((int64_t) (-9816));
        this->noDecimalSin[282] = ((int64_t) (-9781));
        this->noDecimalSin[283] = ((int64_t) (-9743));
        this->noDecimalSin[284] = ((int64_t) (-9702));
        this->noDecimalSin[285] = ((int64_t) (-9659));
        this->noDecimalSin[286] = ((int64_t) (-9612));
        this->noDecimalSin[287] = ((int64_t) (-9563));
        this->noDecimalSin[288] = ((int64_t) (-9510));
        this->noDecimalSin[289] = ((int64_t) (-9455));
        this->noDecimalSin[290] = ((int64_t) (-9396));
        this->noDecimalSin[291] = ((int64_t) (-9335));
        this->noDecimalSin[292] = ((int64_t) (-9271));
        this->noDecimalSin[293] = ((int64_t) (-9205));
        this->noDecimalSin[294] = ((int64_t) (-9135));
        this->noDecimalSin[295] = ((int64_t) (-9063));
        this->noDecimalSin[296] = ((int64_t) (-8987));
        this->noDecimalSin[297] = ((int64_t) (-8910));
        this->noDecimalSin[298] = ((int64_t) (-8829));
        this->noDecimalSin[299] = ((int64_t) (-8746));
        this->noDecimalSin[300] = ((int64_t) (-8660));
        this->noDecimalSin[301] = ((int64_t) (-8571));
        this->noDecimalSin[302] = ((int64_t) (-8480));
        this->noDecimalSin[303] = ((int64_t) (-8386));
        this->noDecimalSin[304] = ((int64_t) (-8290));
        this->noDecimalSin[305] = ((int64_t) (-8191));
        this->noDecimalSin[306] = ((int64_t) (-8090));
        this->noDecimalSin[307] = ((int64_t) (-7986));
        this->noDecimalSin[308] = ((int64_t) (-7880));
        this->noDecimalSin[309] = ((int64_t) (-7771));
        this->noDecimalSin[310] = ((int64_t) (-7660));
        this->noDecimalSin[311] = ((int64_t) (-7547));
        this->noDecimalSin[312] = ((int64_t) (-7431));
        this->noDecimalSin[313] = ((int64_t) (-7313));
        this->noDecimalSin[314] = ((int64_t) (-7193));
        this->noDecimalSin[315] = ((int64_t) (-7071));
        this->noDecimalSin[316] = ((int64_t) (-6946));
        this->noDecimalSin[317] = ((int64_t) (-6819));
        this->noDecimalSin[318] = ((int64_t) (-6691));
        this->noDecimalSin[319] = ((int64_t) (-6560));
        this->noDecimalSin[320] = ((int64_t) (-6427));
        this->noDecimalSin[321] = ((int64_t) (-6293));
        this->noDecimalSin[322] = ((int64_t) (-6156));
        this->noDecimalSin[323] = ((int64_t) (-6018));
        this->noDecimalSin[324] = ((int64_t) (-5877));
        this->noDecimalSin[325] = ((int64_t) (-5735));
        this->noDecimalSin[326] = ((int64_t) (-5591));
        this->noDecimalSin[327] = ((int64_t) (-5446));
        this->noDecimalSin[328] = ((int64_t) (-5299));
        this->noDecimalSin[329] = ((int64_t) (-5150));
        this->noDecimalSin[330] = ((int64_t) (-5000));
        this->noDecimalSin[331] = ((int64_t) (-4848));
        this->noDecimalSin[332] = ((int64_t) (-4694));
        this->noDecimalSin[333] = ((int64_t) (-4539));
        this->noDecimalSin[334] = ((int64_t) (-4383));
        this->noDecimalSin[335] = ((int64_t) (-4226));
        this->noDecimalSin[336] = ((int64_t) (-4067));
        this->noDecimalSin[337] = ((int64_t) (-3907));
        this->noDecimalSin[338] = ((int64_t) (-3746));
        this->noDecimalSin[339] = ((int64_t) (-3583));
        this->noDecimalSin[340] = ((int64_t) (-3420));
        this->noDecimalSin[341] = ((int64_t) (-3255));
        this->noDecimalSin[342] = ((int64_t) (-3090));
        this->noDecimalSin[343] = ((int64_t) (-2923));
        this->noDecimalSin[344] = ((int64_t) (-2756));
        this->noDecimalSin[345] = ((int64_t) (-2588));
        this->noDecimalSin[346] = ((int64_t) (-2419));
        this->noDecimalSin[347] = ((int64_t) (-2249));
        this->noDecimalSin[348] = ((int64_t) (-2079));
        this->noDecimalSin[349] = ((int64_t) (-1908));
        this->noDecimalSin[350] = ((int64_t) (-1736));
        this->noDecimalSin[351] = ((int64_t) (-1564));
        this->noDecimalSin[352] = ((int64_t) (-1391));
        this->noDecimalSin[353] = ((int64_t) (-1218));
        this->noDecimalSin[354] = ((int64_t) (-1045));
        this->noDecimalSin[355] = ((int64_t) (-871));
        this->noDecimalSin[356] = ((int64_t) (-697));
        this->noDecimalSin[357] = ((int64_t) (-523));
        this->noDecimalSin[358] = ((int64_t) (-348));
        this->noDecimalSin[359] = ((int64_t) (-174));
        this->noDecimalCos[0] = 10000LL;
        this->noDecimalCos[1] = 9998LL;
        this->noDecimalCos[2] = 9993LL;
        this->noDecimalCos[3] = 9986LL;
        this->noDecimalCos[4] = 9975LL;
        this->noDecimalCos[5] = 9961LL;
        this->noDecimalCos[6] = 9945LL;
        this->noDecimalCos[7] = 9925LL;
        this->noDecimalCos[8] = 9902LL;
        this->noDecimalCos[9] = 9876LL;
        this->noDecimalCos[10] = 9848LL;
        this->noDecimalCos[11] = 9816LL;
        this->noDecimalCos[12] = 9781LL;
        this->noDecimalCos[13] = 9743LL;
        this->noDecimalCos[14] = 9702LL;
        this->noDecimalCos[15] = 9659LL;
        this->noDecimalCos[16] = 9612LL;
        this->noDecimalCos[17] = 9563LL;
        this->noDecimalCos[18] = 9510LL;
        this->noDecimalCos[19] = 9455LL;
        this->noDecimalCos[20] = 9396LL;
        this->noDecimalCos[21] = 9335LL;
        this->noDecimalCos[22] = 9271LL;
        this->noDecimalCos[23] = 9205LL;
        this->noDecimalCos[24] = 9135LL;
        this->noDecimalCos[25] = 9063LL;
        this->noDecimalCos[26] = 8987LL;
        this->noDecimalCos[27] = 8910LL;
        this->noDecimalCos[28] = 8829LL;
        this->noDecimalCos[29] = 8746LL;
        this->noDecimalCos[30] = 8660LL;
        this->noDecimalCos[31] = 8571LL;
        this->noDecimalCos[32] = 8480LL;
        this->noDecimalCos[33] = 8386LL;
        this->noDecimalCos[34] = 8290LL;
        this->noDecimalCos[35] = 8191LL;
        this->noDecimalCos[36] = 8090LL;
        this->noDecimalCos[37] = 7986LL;
        this->noDecimalCos[38] = 7880LL;
        this->noDecimalCos[39] = 7771LL;
        this->noDecimalCos[40] = 7660LL;
        this->noDecimalCos[41] = 7547LL;
        this->noDecimalCos[42] = 7431LL;
        this->noDecimalCos[43] = 7313LL;
        this->noDecimalCos[44] = 7193LL;
        this->noDecimalCos[45] = 7071LL;
        this->noDecimalCos[46] = 6946LL;
        this->noDecimalCos[47] = 6819LL;
        this->noDecimalCos[48] = 6691LL;
        this->noDecimalCos[49] = 6560LL;
        this->noDecimalCos[50] = 6427LL;
        this->noDecimalCos[51] = 6293LL;
        this->noDecimalCos[52] = 6156LL;
        this->noDecimalCos[53] = 6018LL;
        this->noDecimalCos[54] = 5877LL;
        this->noDecimalCos[55] = 5735LL;
        this->noDecimalCos[56] = 5591LL;
        this->noDecimalCos[57] = 5446LL;
        this->noDecimalCos[58] = 5299LL;
        this->noDecimalCos[59] = 5150LL;
        this->noDecimalCos[60] = 5000LL;
        this->noDecimalCos[61] = 4848LL;
        this->noDecimalCos[62] = 4694LL;
        this->noDecimalCos[63] = 4539LL;
        this->noDecimalCos[64] = 4383LL;
        this->noDecimalCos[65] = 4226LL;
        this->noDecimalCos[66] = 4067LL;
        this->noDecimalCos[67] = 3907LL;
        this->noDecimalCos[68] = 3746LL;
        this->noDecimalCos[69] = 3583LL;
        this->noDecimalCos[70] = 3420LL;
        this->noDecimalCos[71] = 3255LL;
        this->noDecimalCos[72] = 3090LL;
        this->noDecimalCos[73] = 2923LL;
        this->noDecimalCos[74] = 2756LL;
        this->noDecimalCos[75] = 2588LL;
        this->noDecimalCos[76] = 2419LL;
        this->noDecimalCos[77] = 2249LL;
        this->noDecimalCos[78] = 2079LL;
        this->noDecimalCos[79] = 1908LL;
        this->noDecimalCos[80] = 1736LL;
        this->noDecimalCos[81] = 1564LL;
        this->noDecimalCos[82] = 1391LL;
        this->noDecimalCos[83] = 1218LL;
        this->noDecimalCos[84] = 1045LL;
        this->noDecimalCos[85] = 871LL;
        this->noDecimalCos[86] = 697LL;
        this->noDecimalCos[87] = 523LL;
        this->noDecimalCos[88] = 348LL;
        this->noDecimalCos[89] = 174LL;
        this->noDecimalCos[90] = 0LL;
        this->noDecimalCos[91] = ((int64_t) (-174));
        this->noDecimalCos[92] = ((int64_t) (-348));
        this->noDecimalCos[93] = ((int64_t) (-523));
        this->noDecimalCos[94] = ((int64_t) (-697));
        this->noDecimalCos[95] = ((int64_t) (-871));
        this->noDecimalCos[96] = ((int64_t) (-1045));
        this->noDecimalCos[97] = ((int64_t) (-1218));
        this->noDecimalCos[98] = ((int64_t) (-1391));
        this->noDecimalCos[99] = ((int64_t) (-1564));
        this->noDecimalCos[100] = ((int64_t) (-1736));
        this->noDecimalCos[101] = ((int64_t) (-1908));
        this->noDecimalCos[102] = ((int64_t) (-2079));
        this->noDecimalCos[103] = ((int64_t) (-2249));
        this->noDecimalCos[104] = ((int64_t) (-2419));
        this->noDecimalCos[105] = ((int64_t) (-2588));
        this->noDecimalCos[106] = ((int64_t) (-2756));
        this->noDecimalCos[107] = ((int64_t) (-2923));
        this->noDecimalCos[108] = ((int64_t) (-3090));
        this->noDecimalCos[109] = ((int64_t) (-3255));
        this->noDecimalCos[110] = ((int64_t) (-3420));
        this->noDecimalCos[111] = ((int64_t) (-3583));
        this->noDecimalCos[112] = ((int64_t) (-3746));
        this->noDecimalCos[113] = ((int64_t) (-3907));
        this->noDecimalCos[114] = ((int64_t) (-4067));
        this->noDecimalCos[115] = ((int64_t) (-4226));
        this->noDecimalCos[116] = ((int64_t) (-4383));
        this->noDecimalCos[117] = ((int64_t) (-4539));
        this->noDecimalCos[118] = ((int64_t) (-4694));
        this->noDecimalCos[119] = ((int64_t) (-4848));
        this->noDecimalCos[120] = ((int64_t) (-4999));
        this->noDecimalCos[121] = ((int64_t) (-5150));
        this->noDecimalCos[122] = ((int64_t) (-5299));
        this->noDecimalCos[123] = ((int64_t) (-5446));
        this->noDecimalCos[124] = ((int64_t) (-5591));
        this->noDecimalCos[125] = ((int64_t) (-5735));
        this->noDecimalCos[126] = ((int64_t) (-5877));
        this->noDecimalCos[127] = ((int64_t) (-6018));
        this->noDecimalCos[128] = ((int64_t) (-6156));
        this->noDecimalCos[129] = ((int64_t) (-6293));
        this->noDecimalCos[130] = ((int64_t) (-6427));
        this->noDecimalCos[131] = ((int64_t) (-6560));
        this->noDecimalCos[132] = ((int64_t) (-6691));
        this->noDecimalCos[133] = ((int64_t) (-6819));
        this->noDecimalCos[134] = ((int64_t) (-6946));
        this->noDecimalCos[135] = ((int64_t) (-7071));
        this->noDecimalCos[136] = ((int64_t) (-7193));
        this->noDecimalCos[137] = ((int64_t) (-7313));
        this->noDecimalCos[138] = ((int64_t) (-7431));
        this->noDecimalCos[139] = ((int64_t) (-7547));
        this->noDecimalCos[140] = ((int64_t) (-7660));
        this->noDecimalCos[141] = ((int64_t) (-7771));
        this->noDecimalCos[142] = ((int64_t) (-7880));
        this->noDecimalCos[143] = ((int64_t) (-7986));
        this->noDecimalCos[144] = ((int64_t) (-8090));
        this->noDecimalCos[145] = ((int64_t) (-8191));
        this->noDecimalCos[146] = ((int64_t) (-8290));
        this->noDecimalCos[147] = ((int64_t) (-8386));
        this->noDecimalCos[148] = ((int64_t) (-8480));
        this->noDecimalCos[149] = ((int64_t) (-8571));
        this->noDecimalCos[150] = ((int64_t) (-8660));
        this->noDecimalCos[151] = ((int64_t) (-8746));
        this->noDecimalCos[152] = ((int64_t) (-8829));
        this->noDecimalCos[153] = ((int64_t) (-8910));
        this->noDecimalCos[154] = ((int64_t) (-8987));
        this->noDecimalCos[155] = ((int64_t) (-9063));
        this->noDecimalCos[156] = ((int64_t) (-9135));
        this->noDecimalCos[157] = ((int64_t) (-9205));
        this->noDecimalCos[158] = ((int64_t) (-9271));
        this->noDecimalCos[159] = ((int64_t) (-9335));
        this->noDecimalCos[160] = ((int64_t) (-9396));
        this->noDecimalCos[161] = ((int64_t) (-9455));
        this->noDecimalCos[162] = ((int64_t) (-9510));
        this->noDecimalCos[163] = ((int64_t) (-9563));
        this->noDecimalCos[164] = ((int64_t) (-9612));
        this->noDecimalCos[165] = ((int64_t) (-9659));
        this->noDecimalCos[166] = ((int64_t) (-9702));
        this->noDecimalCos[167] = ((int64_t) (-9743));
        this->noDecimalCos[168] = ((int64_t) (-9781));
        this->noDecimalCos[169] = ((int64_t) (-9816));
        this->noDecimalCos[170] = ((int64_t) (-9848));
        this->noDecimalCos[171] = ((int64_t) (-9876));
        this->noDecimalCos[172] = ((int64_t) (-9902));
        this->noDecimalCos[173] = ((int64_t) (-9925));
        this->noDecimalCos[174] = ((int64_t) (-9945));
        this->noDecimalCos[175] = ((int64_t) (-9961));
        this->noDecimalCos[176] = ((int64_t) (-9975));
        this->noDecimalCos[177] = ((int64_t) (-9986));
        this->noDecimalCos[178] = ((int64_t) (-9993));
        this->noDecimalCos[179] = ((int64_t) (-9998));
        this->noDecimalCos[180] = ((int64_t) (-10000));
        this->noDecimalCos[181] = ((int64_t) (-9998));
        this->noDecimalCos[182] = ((int64_t) (-9993));
        this->noDecimalCos[183] = ((int64_t) (-9986));
        this->noDecimalCos[184] = ((int64_t) (-9975));
        this->noDecimalCos[185] = ((int64_t) (-9961));
        this->noDecimalCos[186] = ((int64_t) (-9945));
        this->noDecimalCos[187] = ((int64_t) (-9925));
        this->noDecimalCos[188] = ((int64_t) (-9902));
        this->noDecimalCos[189] = ((int64_t) (-9876));
        this->noDecimalCos[190] = ((int64_t) (-9848));
        this->noDecimalCos[191] = ((int64_t) (-9816));
        this->noDecimalCos[192] = ((int64_t) (-9781));
        this->noDecimalCos[193] = ((int64_t) (-9743));
        this->noDecimalCos[194] = ((int64_t) (-9702));
        this->noDecimalCos[195] = ((int64_t) (-9659));
        this->noDecimalCos[196] = ((int64_t) (-9612));
        this->noDecimalCos[197] = ((int64_t) (-9563));
        this->noDecimalCos[198] = ((int64_t) (-9510));
        this->noDecimalCos[199] = ((int64_t) (-9455));
        this->noDecimalCos[200] = ((int64_t) (-9396));
        this->noDecimalCos[201] = ((int64_t) (-9335));
        this->noDecimalCos[202] = ((int64_t) (-9271));
        this->noDecimalCos[203] = ((int64_t) (-9205));
        this->noDecimalCos[204] = ((int64_t) (-9135));
        this->noDecimalCos[205] = ((int64_t) (-9063));
        this->noDecimalCos[206] = ((int64_t) (-8987));
        this->noDecimalCos[207] = ((int64_t) (-8910));
        this->noDecimalCos[208] = ((int64_t) (-8829));
        this->noDecimalCos[209] = ((int64_t) (-8746));
        this->noDecimalCos[210] = ((int64_t) (-8660));
        this->noDecimalCos[211] = ((int64_t) (-8571));
        this->noDecimalCos[212] = ((int64_t) (-8480));
        this->noDecimalCos[213] = ((int64_t) (-8386));
        this->noDecimalCos[214] = ((int64_t) (-8290));
        this->noDecimalCos[215] = ((int64_t) (-8191));
        this->noDecimalCos[216] = ((int64_t) (-8090));
        this->noDecimalCos[217] = ((int64_t) (-7986));
        this->noDecimalCos[218] = ((int64_t) (-7880));
        this->noDecimalCos[219] = ((int64_t) (-7771));
        this->noDecimalCos[220] = ((int64_t) (-7660));
        this->noDecimalCos[221] = ((int64_t) (-7547));
        this->noDecimalCos[222] = ((int64_t) (-7431));
        this->noDecimalCos[223] = ((int64_t) (-7313));
        this->noDecimalCos[224] = ((int64_t) (-7193));
        this->noDecimalCos[225] = ((int64_t) (-7071));
        this->noDecimalCos[226] = ((int64_t) (-6946));
        this->noDecimalCos[227] = ((int64_t) (-6819));
        this->noDecimalCos[228] = ((int64_t) (-6691));
        this->noDecimalCos[229] = ((int64_t) (-6560));
        this->noDecimalCos[230] = ((int64_t) (-6427));
        this->noDecimalCos[231] = ((int64_t) (-6293));
        this->noDecimalCos[232] = ((int64_t) (-6156));
        this->noDecimalCos[233] = ((int64_t) (-6018));
        this->noDecimalCos[234] = ((int64_t) (-5877));
        this->noDecimalCos[235] = ((int64_t) (-5735));
        this->noDecimalCos[236] = ((int64_t) (-5591));
        this->noDecimalCos[237] = ((int64_t) (-5446));
        this->noDecimalCos[238] = ((int64_t) (-5299));
        this->noDecimalCos[239] = ((int64_t) (-5150));
        this->noDecimalCos[240] = ((int64_t) (-5000));
        this->noDecimalCos[241] = ((int64_t) (-4848));
        this->noDecimalCos[242] = ((int64_t) (-4694));
        this->noDecimalCos[243] = ((int64_t) (-4539));
        this->noDecimalCos[244] = ((int64_t) (-4383));
        this->noDecimalCos[245] = ((int64_t) (-4226));
        this->noDecimalCos[246] = ((int64_t) (-4067));
        this->noDecimalCos[247] = ((int64_t) (-3907));
        this->noDecimalCos[248] = ((int64_t) (-3746));
        this->noDecimalCos[249] = ((int64_t) (-3583));
        this->noDecimalCos[250] = ((int64_t) (-3420));
        this->noDecimalCos[251] = ((int64_t) (-3255));
        this->noDecimalCos[252] = ((int64_t) (-3090));
        this->noDecimalCos[253] = ((int64_t) (-2923));
        this->noDecimalCos[254] = ((int64_t) (-2756));
        this->noDecimalCos[255] = ((int64_t) (-2588));
        this->noDecimalCos[256] = ((int64_t) (-2419));
        this->noDecimalCos[257] = ((int64_t) (-2249));
        this->noDecimalCos[258] = ((int64_t) (-2079));
        this->noDecimalCos[259] = ((int64_t) (-1908));
        this->noDecimalCos[260] = ((int64_t) (-1736));
        this->noDecimalCos[261] = ((int64_t) (-1564));
        this->noDecimalCos[262] = ((int64_t) (-1391));
        this->noDecimalCos[263] = ((int64_t) (-1218));
        this->noDecimalCos[264] = ((int64_t) (-1045));
        this->noDecimalCos[265] = ((int64_t) (-871));
        this->noDecimalCos[266] = ((int64_t) (-697));
        this->noDecimalCos[267] = ((int64_t) (-523));
        this->noDecimalCos[268] = ((int64_t) (-348));
        this->noDecimalCos[269] = ((int64_t) (-174));
        this->noDecimalCos[270] = 0LL;
        this->noDecimalCos[271] = 174LL;
        this->noDecimalCos[272] = 348LL;
        this->noDecimalCos[273] = 523LL;
        this->noDecimalCos[274] = 697LL;
        this->noDecimalCos[275] = 871LL;
        this->noDecimalCos[276] = 1045LL;
        this->noDecimalCos[277] = 1218LL;
        this->noDecimalCos[278] = 1391LL;
        this->noDecimalCos[279] = 1564LL;
        this->noDecimalCos[280] = 1736LL;
        this->noDecimalCos[281] = 1908LL;
        this->noDecimalCos[282] = 2079LL;
        this->noDecimalCos[283] = 2249LL;
        this->noDecimalCos[284] = 2419LL;
        this->noDecimalCos[285] = 2588LL;
        this->noDecimalCos[286] = 2756LL;
        this->noDecimalCos[287] = 2923LL;
        this->noDecimalCos[288] = 3090LL;
        this->noDecimalCos[289] = 3255LL;
        this->noDecimalCos[290] = 3420LL;
        this->noDecimalCos[291] = 3583LL;
        this->noDecimalCos[292] = 3746LL;
        this->noDecimalCos[293] = 3907LL;
        this->noDecimalCos[294] = 4067LL;
        this->noDecimalCos[295] = 4226LL;
        this->noDecimalCos[296] = 4383LL;
        this->noDecimalCos[297] = 4539LL;
        this->noDecimalCos[298] = 4694LL;
        this->noDecimalCos[299] = 4848LL;
        this->noDecimalCos[300] = 5000LL;
        this->noDecimalCos[301] = 5150LL;
        this->noDecimalCos[302] = 5299LL;
        this->noDecimalCos[303] = 5446LL;
        this->noDecimalCos[304] = 5591LL;
        this->noDecimalCos[305] = 5735LL;
        this->noDecimalCos[306] = 5877LL;
        this->noDecimalCos[307] = 6018LL;
        this->noDecimalCos[308] = 6156LL;
        this->noDecimalCos[309] = 6293LL;
        this->noDecimalCos[310] = 6427LL;
        this->noDecimalCos[311] = 6560LL;
        this->noDecimalCos[312] = 6691LL;
        this->noDecimalCos[313] = 6819LL;
        this->noDecimalCos[314] = 6946LL;
        this->noDecimalCos[315] = 7071LL;
        this->noDecimalCos[316] = 7193LL;
        this->noDecimalCos[317] = 7313LL;
        this->noDecimalCos[318] = 7431LL;
        this->noDecimalCos[319] = 7547LL;
        this->noDecimalCos[320] = 7660LL;
        this->noDecimalCos[321] = 7771LL;
        this->noDecimalCos[322] = 7880LL;
        this->noDecimalCos[323] = 7986LL;
        this->noDecimalCos[324] = 8090LL;
        this->noDecimalCos[325] = 8191LL;
        this->noDecimalCos[326] = 8290LL;
        this->noDecimalCos[327] = 8386LL;
        this->noDecimalCos[328] = 8480LL;
        this->noDecimalCos[329] = 8571LL;
        this->noDecimalCos[330] = 8660LL;
        this->noDecimalCos[331] = 8746LL;
        this->noDecimalCos[332] = 8829LL;
        this->noDecimalCos[333] = 8910LL;
        this->noDecimalCos[334] = 8987LL;
        this->noDecimalCos[335] = 9063LL;
        this->noDecimalCos[336] = 9135LL;
        this->noDecimalCos[337] = 9205LL;
        this->noDecimalCos[338] = 9271LL;
        this->noDecimalCos[339] = 9335LL;
        this->noDecimalCos[340] = 9396LL;
        this->noDecimalCos[341] = 9455LL;
        this->noDecimalCos[342] = 9510LL;
        this->noDecimalCos[343] = 9563LL;
        this->noDecimalCos[344] = 9612LL;
        this->noDecimalCos[345] = 9659LL;
        this->noDecimalCos[346] = 9702LL;
        this->noDecimalCos[347] = 9743LL;
        this->noDecimalCos[348] = 9781LL;
        this->noDecimalCos[349] = 9816LL;
        this->noDecimalCos[350] = 9848LL;
        this->noDecimalCos[351] = 9876LL;
        this->noDecimalCos[352] = 9902LL;
        this->noDecimalCos[353] = 9925LL;
        this->noDecimalCos[354] = 9945LL;
        this->noDecimalCos[355] = 9961LL;
        this->noDecimalCos[356] = 9975LL;
        this->noDecimalCos[357] = 9986LL;
        this->noDecimalCos[358] = 9993LL;
        this->noDecimalCos[359] = 9998LL;
        this->noDecimalTan[0] = 0LL;
        this->noDecimalTan[1] = 174LL;
        this->noDecimalTan[2] = 349LL;
        this->noDecimalTan[3] = 524LL;
        this->noDecimalTan[4] = 699LL;
        this->noDecimalTan[5] = 874LL;
        this->noDecimalTan[6] = 1051LL;
        this->noDecimalTan[7] = 1227LL;
        this->noDecimalTan[8] = 1405LL;
        this->noDecimalTan[9] = 1583LL;
        this->noDecimalTan[10] = 1763LL;
        this->noDecimalTan[11] = 1943LL;
        this->noDecimalTan[12] = 2125LL;
        this->noDecimalTan[13] = 2308LL;
        this->noDecimalTan[14] = 2493LL;
        this->noDecimalTan[15] = 2679LL;
        this->noDecimalTan[16] = 2867LL;
        this->noDecimalTan[17] = 3057LL;
        this->noDecimalTan[18] = 3249LL;
        this->noDecimalTan[19] = 3443LL;
        this->noDecimalTan[20] = 3639LL;
        this->noDecimalTan[21] = 3838LL;
        this->noDecimalTan[22] = 4040LL;
        this->noDecimalTan[23] = 4244LL;
        this->noDecimalTan[24] = 4452LL;
        this->noDecimalTan[25] = 4663LL;
        this->noDecimalTan[26] = 4877LL;
        this->noDecimalTan[27] = 5095LL;
        this->noDecimalTan[28] = 5317LL;
        this->noDecimalTan[29] = 5543LL;
        this->noDecimalTan[30] = 5773LL;
        this->noDecimalTan[31] = 6008LL;
        this->noDecimalTan[32] = 6248LL;
        this->noDecimalTan[33] = 6494LL;
        this->noDecimalTan[34] = 6745LL;
        this->noDecimalTan[35] = 7002LL;
        this->noDecimalTan[36] = 7265LL;
        this->noDecimalTan[37] = 7535LL;
        this->noDecimalTan[38] = 7812LL;
        this->noDecimalTan[39] = 8097LL;
        this->noDecimalTan[40] = 8390LL;
        this->noDecimalTan[41] = 8692LL;
        this->noDecimalTan[42] = 9004LL;
        this->noDecimalTan[43] = 9325LL;
        this->noDecimalTan[44] = 9656LL;
        this->noDecimalTan[45] = 9999LL;
        this->noDecimalTan[46] = 10355LL;
        this->noDecimalTan[47] = 10723LL;
        this->noDecimalTan[48] = 11106LL;
        this->noDecimalTan[49] = 11503LL;
        this->noDecimalTan[50] = 11917LL;
        this->noDecimalTan[51] = 12348LL;
        this->noDecimalTan[52] = 12799LL;
        this->noDecimalTan[53] = 13270LL;
        this->noDecimalTan[54] = 13763LL;
        this->noDecimalTan[55] = 14281LL;
        this->noDecimalTan[56] = 14825LL;
        this->noDecimalTan[57] = 15398LL;
        this->noDecimalTan[58] = 16003LL;
        this->noDecimalTan[59] = 16642LL;
        this->noDecimalTan[60] = 17320LL;
        this->noDecimalTan[61] = 18040LL;
        this->noDecimalTan[62] = 18807LL;
        this->noDecimalTan[63] = 19626LL;
        this->noDecimalTan[64] = 20503LL;
        this->noDecimalTan[65] = 21445LL;
        this->noDecimalTan[66] = 22460LL;
        this->noDecimalTan[67] = 23558LL;
        this->noDecimalTan[68] = 24750LL;
        this->noDecimalTan[69] = 26050LL;
        this->noDecimalTan[70] = 27474LL;
        this->noDecimalTan[71] = 29042LL;
        this->noDecimalTan[72] = 30776LL;
        this->noDecimalTan[73] = 32708LL;
        this->noDecimalTan[74] = 34874LL;
        this->noDecimalTan[75] = 37320LL;
        this->noDecimalTan[76] = 40107LL;
        this->noDecimalTan[77] = 43314LL;
        this->noDecimalTan[78] = 47046LL;
        this->noDecimalTan[79] = 51445LL;
        this->noDecimalTan[80] = 56712LL;
        this->noDecimalTan[81] = 63137LL;
        this->noDecimalTan[82] = 71153LL;
        this->noDecimalTan[83] = 81443LL;
        this->noDecimalTan[84] = 95143LL;
        this->noDecimalTan[85] = 114300LL;
        this->noDecimalTan[86] = 143006LL;
        this->noDecimalTan[87] = 190811LL;
        this->noDecimalTan[88] = 286362LL;
        this->noDecimalTan[89] = 572899LL;
        this->noDecimalTan[90] = MAX_VALUE;
        this->noDecimalTan[91] = ((int64_t) (-572899));
        this->noDecimalTan[92] = ((int64_t) (-286362));
        this->noDecimalTan[93] = ((int64_t) (-190811));
        this->noDecimalTan[94] = ((int64_t) (-143006));
        this->noDecimalTan[95] = ((int64_t) (-114300));
        this->noDecimalTan[96] = ((int64_t) (-95143));
        this->noDecimalTan[97] = ((int64_t) (-81443));
        this->noDecimalTan[98] = ((int64_t) (-71153));
        this->noDecimalTan[99] = ((int64_t) (-63137));
        this->noDecimalTan[100] = ((int64_t) (-56712));
        this->noDecimalTan[101] = ((int64_t) (-51445));
        this->noDecimalTan[102] = ((int64_t) (-47046));
        this->noDecimalTan[103] = ((int64_t) (-43314));
        this->noDecimalTan[104] = ((int64_t) (-40107));
        this->noDecimalTan[105] = ((int64_t) (-37320));
        this->noDecimalTan[106] = ((int64_t) (-34874));
        this->noDecimalTan[107] = ((int64_t) (-32708));
        this->noDecimalTan[108] = ((int64_t) (-30776));
        this->noDecimalTan[109] = ((int64_t) (-29042));
        this->noDecimalTan[110] = ((int64_t) (-27474));
        this->noDecimalTan[111] = ((int64_t) (-26050));
        this->noDecimalTan[112] = ((int64_t) (-24750));
        this->noDecimalTan[113] = ((int64_t) (-23558));
        this->noDecimalTan[114] = ((int64_t) (-22460));
        this->noDecimalTan[115] = ((int64_t) (-21445));
        this->noDecimalTan[116] = ((int64_t) (-20503));
        this->noDecimalTan[117] = ((int64_t) (-19626));
        this->noDecimalTan[118] = ((int64_t) (-18807));
        this->noDecimalTan[119] = ((int64_t) (-18040));
        this->noDecimalTan[120] = ((int64_t) (-17320));
        this->noDecimalTan[121] = ((int64_t) (-16642));
        this->noDecimalTan[122] = ((int64_t) (-16003));
        this->noDecimalTan[123] = ((int64_t) (-15398));
        this->noDecimalTan[124] = ((int64_t) (-14825));
        this->noDecimalTan[125] = ((int64_t) (-14281));
        this->noDecimalTan[126] = ((int64_t) (-13763));
        this->noDecimalTan[127] = ((int64_t) (-13270));
        this->noDecimalTan[128] = ((int64_t) (-12799));
        this->noDecimalTan[129] = ((int64_t) (-12348));
        this->noDecimalTan[130] = ((int64_t) (-11917));
        this->noDecimalTan[131] = ((int64_t) (-11503));
        this->noDecimalTan[132] = ((int64_t) (-11106));
        this->noDecimalTan[133] = ((int64_t) (-10723));
        this->noDecimalTan[134] = ((int64_t) (-10355));
        this->noDecimalTan[135] = ((int64_t) (-10000));
        this->noDecimalTan[136] = ((int64_t) (-9656));
        this->noDecimalTan[137] = ((int64_t) (-9325));
        this->noDecimalTan[138] = ((int64_t) (-9004));
        this->noDecimalTan[139] = ((int64_t) (-8692));
        this->noDecimalTan[140] = ((int64_t) (-8390));
        this->noDecimalTan[141] = ((int64_t) (-8097));
        this->noDecimalTan[142] = ((int64_t) (-7812));
        this->noDecimalTan[143] = ((int64_t) (-7535));
        this->noDecimalTan[144] = ((int64_t) (-7265));
        this->noDecimalTan[145] = ((int64_t) (-7002));
        this->noDecimalTan[146] = ((int64_t) (-6745));
        this->noDecimalTan[147] = ((int64_t) (-6494));
        this->noDecimalTan[148] = ((int64_t) (-6248));
        this->noDecimalTan[149] = ((int64_t) (-6008));
        this->noDecimalTan[150] = ((int64_t) (-5773));
        this->noDecimalTan[151] = ((int64_t) (-5543));
        this->noDecimalTan[152] = ((int64_t) (-5317));
        this->noDecimalTan[153] = ((int64_t) (-5095));
        this->noDecimalTan[154] = ((int64_t) (-4877));
        this->noDecimalTan[155] = ((int64_t) (-4663));
        this->noDecimalTan[156] = ((int64_t) (-4452));
        this->noDecimalTan[157] = ((int64_t) (-4244));
        this->noDecimalTan[158] = ((int64_t) (-4040));
        this->noDecimalTan[159] = ((int64_t) (-3838));
        this->noDecimalTan[160] = ((int64_t) (-3639));
        this->noDecimalTan[161] = ((int64_t) (-3443));
        this->noDecimalTan[162] = ((int64_t) (-3249));
        this->noDecimalTan[163] = ((int64_t) (-3057));
        this->noDecimalTan[164] = ((int64_t) (-2867));
        this->noDecimalTan[165] = ((int64_t) (-2679));
        this->noDecimalTan[166] = ((int64_t) (-2493));
        this->noDecimalTan[167] = ((int64_t) (-2308));
        this->noDecimalTan[168] = ((int64_t) (-2125));
        this->noDecimalTan[169] = ((int64_t) (-1943));
        this->noDecimalTan[170] = ((int64_t) (-1763));
        this->noDecimalTan[171] = ((int64_t) (-1583));
        this->noDecimalTan[172] = ((int64_t) (-1405));
        this->noDecimalTan[173] = ((int64_t) (-1227));
        this->noDecimalTan[174] = ((int64_t) (-1051));
        this->noDecimalTan[175] = ((int64_t) (-874));
        this->noDecimalTan[176] = ((int64_t) (-699));
        this->noDecimalTan[177] = ((int64_t) (-524));
        this->noDecimalTan[178] = ((int64_t) (-349));
        this->noDecimalTan[179] = ((int64_t) (-174));
        this->noDecimalTan[180] = 0LL;
        this->noDecimalTan[181] = 174LL;
        this->noDecimalTan[182] = 349LL;
        this->noDecimalTan[183] = 524LL;
        this->noDecimalTan[184] = 699LL;
        this->noDecimalTan[185] = 874LL;
        this->noDecimalTan[186] = 1051LL;
        this->noDecimalTan[187] = 1227LL;
        this->noDecimalTan[188] = 1405LL;
        this->noDecimalTan[189] = 1583LL;
        this->noDecimalTan[190] = 1763LL;
        this->noDecimalTan[191] = 1943LL;
        this->noDecimalTan[192] = 2125LL;
        this->noDecimalTan[193] = 2308LL;
        this->noDecimalTan[194] = 2493LL;
        this->noDecimalTan[195] = 2679LL;
        this->noDecimalTan[196] = 2867LL;
        this->noDecimalTan[197] = 3057LL;
        this->noDecimalTan[198] = 3249LL;
        this->noDecimalTan[199] = 3443LL;
        this->noDecimalTan[200] = 3639LL;
        this->noDecimalTan[201] = 3838LL;
        this->noDecimalTan[202] = 4040LL;
        this->noDecimalTan[203] = 4244LL;
        this->noDecimalTan[204] = 4452LL;
        this->noDecimalTan[205] = 4663LL;
        this->noDecimalTan[206] = 4877LL;
        this->noDecimalTan[207] = 5095LL;
        this->noDecimalTan[208] = 5317LL;
        this->noDecimalTan[209] = 5543LL;
        this->noDecimalTan[210] = 5773LL;
        this->noDecimalTan[211] = 6008LL;
        this->noDecimalTan[212] = 6248LL;
        this->noDecimalTan[213] = 6494LL;
        this->noDecimalTan[214] = 6745LL;
        this->noDecimalTan[215] = 7002LL;
        this->noDecimalTan[216] = 7265LL;
        this->noDecimalTan[217] = 7535LL;
        this->noDecimalTan[218] = 7812LL;
        this->noDecimalTan[219] = 8097LL;
        this->noDecimalTan[220] = 8390LL;
        this->noDecimalTan[221] = 8692LL;
        this->noDecimalTan[222] = 9004LL;
        this->noDecimalTan[223] = 9325LL;
        this->noDecimalTan[224] = 9656LL;
        this->noDecimalTan[225] = 9999LL;
        this->noDecimalTan[226] = 10355LL;
        this->noDecimalTan[227] = 10723LL;
        this->noDecimalTan[228] = 11106LL;
        this->noDecimalTan[229] = 11503LL;
        this->noDecimalTan[230] = 11917LL;
        this->noDecimalTan[231] = 12348LL;
        this->noDecimalTan[232] = 12799LL;
        this->noDecimalTan[233] = 13270LL;
        this->noDecimalTan[234] = 13763LL;
        this->noDecimalTan[235] = 14281LL;
        this->noDecimalTan[236] = 14825LL;
        this->noDecimalTan[237] = 15398LL;
        this->noDecimalTan[238] = 16003LL;
        this->noDecimalTan[239] = 16642LL;
        this->noDecimalTan[240] = 17320LL;
        this->noDecimalTan[241] = 18040LL;
        this->noDecimalTan[242] = 18807LL;
        this->noDecimalTan[243] = 19626LL;
        this->noDecimalTan[244] = 20503LL;
        this->noDecimalTan[245] = 21445LL;
        this->noDecimalTan[246] = 22460LL;
        this->noDecimalTan[247] = 23558LL;
        this->noDecimalTan[248] = 24750LL;
        this->noDecimalTan[249] = 26050LL;
        this->noDecimalTan[250] = 27474LL;
        this->noDecimalTan[251] = 29042LL;
        this->noDecimalTan[252] = 30776LL;
        this->noDecimalTan[253] = 32708LL;
        this->noDecimalTan[254] = 34874LL;
        this->noDecimalTan[255] = 37320LL;
        this->noDecimalTan[256] = 40107LL;
        this->noDecimalTan[257] = 43314LL;
        this->noDecimalTan[258] = 47046LL;
        this->noDecimalTan[259] = 51445LL;
        this->noDecimalTan[260] = 56712LL;
        this->noDecimalTan[261] = 63137LL;
        this->noDecimalTan[262] = 71153LL;
        this->noDecimalTan[263] = 81443LL;
        this->noDecimalTan[264] = 95143LL;
        this->noDecimalTan[265] = 114300LL;
        this->noDecimalTan[266] = 143006LL;
        this->noDecimalTan[267] = 190811LL;
        this->noDecimalTan[268] = 286362LL;
        this->noDecimalTan[269] = 572899LL;
        this->noDecimalTan[270] = MAX_VALUE;
        this->noDecimalTan[271] = ((int64_t) (-572899));
        this->noDecimalTan[272] = ((int64_t) (-286362));
        this->noDecimalTan[273] = ((int64_t) (-190811));
        this->noDecimalTan[274] = ((int64_t) (-143006));
        this->noDecimalTan[275] = ((int64_t) (-114300));
        this->noDecimalTan[276] = ((int64_t) (-95143));
        this->noDecimalTan[277] = ((int64_t) (-81443));
        this->noDecimalTan[278] = ((int64_t) (-71153));
        this->noDecimalTan[279] = ((int64_t) (-63137));
        this->noDecimalTan[280] = ((int64_t) (-56712));
        this->noDecimalTan[281] = ((int64_t) (-51445));
        this->noDecimalTan[282] = ((int64_t) (-47046));
        this->noDecimalTan[283] = ((int64_t) (-43314));
        this->noDecimalTan[284] = ((int64_t) (-40107));
        this->noDecimalTan[285] = ((int64_t) (-37320));
        this->noDecimalTan[286] = ((int64_t) (-34874));
        this->noDecimalTan[287] = ((int64_t) (-32708));
        this->noDecimalTan[288] = ((int64_t) (-30776));
        this->noDecimalTan[289] = ((int64_t) (-29042));
        this->noDecimalTan[290] = ((int64_t) (-27474));
        this->noDecimalTan[291] = ((int64_t) (-26050));
        this->noDecimalTan[292] = ((int64_t) (-24750));
        this->noDecimalTan[293] = ((int64_t) (-23558));
        this->noDecimalTan[294] = ((int64_t) (-22460));
        this->noDecimalTan[295] = ((int64_t) (-21445));
        this->noDecimalTan[296] = ((int64_t) (-20503));
        this->noDecimalTan[297] = ((int64_t) (-19626));
        this->noDecimalTan[298] = ((int64_t) (-18807));
        this->noDecimalTan[299] = ((int64_t) (-18040));
        this->noDecimalTan[300] = ((int64_t) (-17320));
        this->noDecimalTan[301] = ((int64_t) (-16642));
        this->noDecimalTan[302] = ((int64_t) (-16003));
        this->noDecimalTan[303] = ((int64_t) (-15398));
        this->noDecimalTan[304] = ((int64_t) (-14825));
        this->noDecimalTan[305] = ((int64_t) (-14281));
        this->noDecimalTan[306] = ((int64_t) (-13763));
        this->noDecimalTan[307] = ((int64_t) (-13270));
        this->noDecimalTan[308] = ((int64_t) (-12799));
        this->noDecimalTan[309] = ((int64_t) (-12348));
        this->noDecimalTan[310] = ((int64_t) (-11917));
        this->noDecimalTan[311] = ((int64_t) (-11503));
        this->noDecimalTan[312] = ((int64_t) (-11106));
        this->noDecimalTan[313] = ((int64_t) (-10723));
        this->noDecimalTan[314] = ((int64_t) (-10355));
        this->noDecimalTan[315] = ((int64_t) (-10000));
        this->noDecimalTan[316] = ((int64_t) (-9656));
        this->noDecimalTan[317] = ((int64_t) (-9325));
        this->noDecimalTan[318] = ((int64_t) (-9004));
        this->noDecimalTan[319] = ((int64_t) (-8692));
        this->noDecimalTan[320] = ((int64_t) (-8390));
        this->noDecimalTan[321] = ((int64_t) (-8097));
        this->noDecimalTan[322] = ((int64_t) (-7812));
        this->noDecimalTan[323] = ((int64_t) (-7535));
        this->noDecimalTan[324] = ((int64_t) (-7265));
        this->noDecimalTan[325] = ((int64_t) (-7002));
        this->noDecimalTan[326] = ((int64_t) (-6745));
        this->noDecimalTan[327] = ((int64_t) (-6494));
        this->noDecimalTan[328] = ((int64_t) (-6248));
        this->noDecimalTan[329] = ((int64_t) (-6008));
        this->noDecimalTan[330] = ((int64_t) (-5773));
        this->noDecimalTan[331] = ((int64_t) (-5543));
        this->noDecimalTan[332] = ((int64_t) (-5317));
        this->noDecimalTan[333] = ((int64_t) (-5095));
        this->noDecimalTan[334] = ((int64_t) (-4877));
        this->noDecimalTan[335] = ((int64_t) (-4663));
        this->noDecimalTan[336] = ((int64_t) (-4452));
        this->noDecimalTan[337] = ((int64_t) (-4244));
        this->noDecimalTan[338] = ((int64_t) (-4040));
        this->noDecimalTan[339] = ((int64_t) (-3838));
        this->noDecimalTan[340] = ((int64_t) (-3639));
        this->noDecimalTan[341] = ((int64_t) (-3443));
        this->noDecimalTan[342] = ((int64_t) (-3249));
        this->noDecimalTan[343] = ((int64_t) (-3057));
        this->noDecimalTan[344] = ((int64_t) (-2867));
        this->noDecimalTan[345] = ((int64_t) (-2679));
        this->noDecimalTan[346] = ((int64_t) (-2493));
        this->noDecimalTan[347] = ((int64_t) (-2308));
        this->noDecimalTan[348] = ((int64_t) (-2125));
        this->noDecimalTan[349] = ((int64_t) (-1943));
        this->noDecimalTan[350] = ((int64_t) (-1763));
        this->noDecimalTan[351] = ((int64_t) (-1583));
        this->noDecimalTan[352] = ((int64_t) (-1405));
        this->noDecimalTan[353] = ((int64_t) (-1227));
        this->noDecimalTan[354] = ((int64_t) (-1051));
        this->noDecimalTan[355] = ((int64_t) (-874));
        this->noDecimalTan[356] = ((int64_t) (-699));
        this->noDecimalTan[357] = ((int64_t) (-524));
        this->noDecimalTan[358] = ((int64_t) (-349));
        this->noDecimalTan[359] = ((int64_t) (-174));
        this->noDecimalTan[0] = ((int64_t) (-174));
}

NoDecimalTrigTable* NoDecimalTrigTable_new(void) {
    NoDecimalTrigTable* this = java_object_alloc(sizeof(NoDecimalTrigTable), "NoDecimalTrigTable");
    NoDecimalTrigTable_init(this);
    return this;
}


int64_t NoDecimalTrigTable_sin(NoDecimalTrigTable* this, int32_t angle) {
        return this->noDecimalSin[angle];
}


int64_t NoDecimalTrigTable_cos(NoDecimalTrigTable* this, int32_t angle) {
        return this->noDecimalCos[angle];
}


int64_t NoDecimalTrigTable_tan(NoDecimalTrigTable* this, int32_t angle) {
        return this->noDecimalTan[angle];
}


// throws Exception
int16_t NoDecimalTrigTable_antiTan(NoDecimalTrigTable* this, int32_t dx, int32_t dy) {
        int64_t MAX_VALUE = (((int64_t) (Integer_staticInit(), Integer_MAX_VALUE)));
        int64_t MIN_VALUE = (((int64_t) (Integer_staticInit(), Integer_MIN_VALUE)));
        int64_t ratio = (MAX_VALUE - 1LL);
        if (dy != 0) {
            int64_t dxl = (((int64_t) dx));
            ratio = ((int64_t) this->SCALE) * dxl / ((int64_t) dy);
            if (dx <= 0 && dy < 0) {
                ratio = MathUtil_abslong(this->mathUtil, ratio);
            }
        }
        if ((dx >= 0 && dy < 0)) {
            for (int32_t index = 180; index > 90; index--) {
                if (ratio <= this->noDecimalTan[index]) {
                    if (ratio > this->noDecimalTan[index - 1]) {
                        return (((int16_t) index));
                    } else if (this->noDecimalTan[index - 1] == MAX_VALUE && ratio > MIN_VALUE) {
                        return (((int16_t) index));
                    }
                }
            }
        } else if ((dx < 0 && dy <= 0)) {
            for (int32_t index = 270; index > 180; index--) {
                if (ratio < this->noDecimalTan[index] && ratio >= this->noDecimalTan[index - 1]) {
                    return (((int16_t) index));
                }
            }
        } else if ((dx < 0 && dy > 0)) {
            for (int32_t index = (java_array_length(this->noDecimalTan) - 1); index > 270; index--) {
                if (ratio < this->noDecimalTan[index]) {
                    if (ratio >= this->noDecimalTan[index - 1]) {
                        return (((int16_t) index));
                    } else if (this->noDecimalTan[index - 1] == MAX_VALUE && ratio >= MIN_VALUE) {
                        return (((int16_t) index));
                    }
                }
            }
        } else if ((dx >= 0 && dy >= 0)) {
            for (int32_t index = 90; index > 0; index--) {
                if (ratio < this->noDecimalTan[index] && ratio >= this->noDecimalTan[index - 1]) {
                    return (((int16_t) index));
                }
            }
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Invalid Ratio: ");
        StringMaker_appendlong(stringBuffer, ratio);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, PositionStrings_getInstance()->DX_LABEL);
        StringMaker_appendint(stringBuffer, dx);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, PositionStrings_getInstance()->DX_LABEL);
        StringMaker_appendint(stringBuffer, dy);
        java_throw(java_exception_new("Exception", java_string_of(stringBuffer)));
}


// throws Exception
int16_t NoDecimalTrigTable_antiTanDebug(NoDecimalTrigTable* this, int32_t screenX, int32_t screenY, int32_t targetX, int32_t targetY) {
        const char* METHOD_NAME = "antiTanDebug";
        const char* TARGET_ANGLE = " Targeting angle: ";
        StringMaker* stringMaker = StringMaker_new();
        PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(stringMaker, "screenX: "), screenX), " screenY: "), screenY), " targetX: "), targetX), " targetY: "), targetY)), this, METHOD_NAME);
        int32_t targetX2 = -targetX;
        int32_t targetY2 = -targetY;
        int32_t screenX2 = -screenX;
        int32_t screenY2 = -screenY;
        int32_t* dx = ((int32_t*) java_array_new(sizeof(int32_t), 4));
        dx[0] = (screenX - targetX);
        dx[1] = (screenX - targetX2);
        dx[2] = (screenX2 - targetX);
        dx[3] = (screenX2 - targetX2);
        int32_t* dy = ((int32_t*) java_array_new(sizeof(int32_t), 4));
        dy[0] = (screenY - targetY);
        dy[1] = (screenY - targetY2);
        dy[2] = (screenY2 - targetY);
        dy[3] = (screenY2 - targetY2);
        int16_t angleOfTarget = 0;
        AngleFactory* angleFactory = AngleFactory_getInstance();
        Angle* angle = nullptr;
        for (int32_t index = 0; index < java_array_length(dx); index++) {
            for (int32_t index2 = 0; index2 < java_array_length(dy); index2++) {
                angleOfTarget = NoDecimalTrigTable_antiTan(this, dx[index], dy[index2]);
                angle = AngleFactory_getAt(angleFactory, ((int32_t) angleOfTarget));
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                PreLogUtil_put(java_string_of(StringMaker_appendshort(StringMaker_append(StringMaker_appendshort(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(stringMaker, CommonLabels_getInstance()->INDEX_LABEL), index), " index2: "), index2), PositionStrings_getInstance()->DX_LABEL), dx[index]), PositionStrings_getInstance()->DY_LABEL), dy[index2]), TARGET_ANGLE), angleOfTarget), CommonSeps_getInstance()->EQUALS), Angle_getValue(angle))), this, METHOD_NAME);
            }
        }
        angleOfTarget = NoDecimalTrigTable_antiTan(this, dx[0], dy[0]);
        return angleOfTarget;
}

