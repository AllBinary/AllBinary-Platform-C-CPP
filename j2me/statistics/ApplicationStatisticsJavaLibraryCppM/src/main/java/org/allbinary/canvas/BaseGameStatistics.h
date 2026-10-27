
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H
        #define ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
class PrimitiveLongSingleton;
class ScaleFactorFactory;
class StringMaker;
class StringUtil;
class CommonSeps;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseGameStatistics
            : public virtual Object
         {

    private: TimeDelayHelper* timeDelayHelper;

    private: TimeDelayHelper* updateDelayHelper;

    private: int64_t totalRefreshes= 0;

    private: int64_t totalFrames= 0;

    /*protected*/ public: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

public: BaseGameStatistics();

    public: void init();

    public: void add(std::string string);

    public: void process();

    public: void nextFrame();

    public: void nextRefresh();

    private: const int32_t DEFAULT_SCALE_FACTOR;

    public: int16_t getRefreshRate();

    /*protected*/ public: TimeDelayHelper* getTimeDelayHelper();

    /*protected*/ public: const std::string NOT = "Not enough Time to Calculate";

    private: const std::string EMPTY_STRING;

    private: std::vector<std::string> STRING_ARRAY;

    private: const char SPACE_CHAR = ' ';

    private: const char PLUS_CHAR = '+';

    private: const char X_CHAR = 'X';

    private: std::vector<std::vector<char>> CHAR_ARRAY;

    private: PrimitiveLongSingleton* primitiveLongSingleton;

    public: std::vector<std::vector<char>> to2DCharArray();

    public: std::vector<std::string> toStringArray();

    public: std::string toStringAt(int64_t totalTime);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/PrimitiveLongSingleton.h>)
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/math/ScaleFactorFactory.h>)
#include <org/allbinary/logic/math/ScaleFactorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif

        #endif
    
