
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
        



        #ifndef ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H
        #define ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
class StringMaker;
class StringUtil;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeDelayHelper
            : public virtual Object
         {

    private: int64_t startTime =  -1;

    private: int64_t elapsedTimeAtPause;

    public: int32_t delay;

public: TimeDelayHelper(int32_t delay);

    public: bool isTimeTNT();

    public: bool isTimeSinceTNT(int32_t delay);

    public: bool isTime(int64_t currentTime);

    public: bool isTimeWithoutReset(int64_t currentTime);

    public: bool isTimeSince(int32_t delay, int64_t currentTime);

    public: int64_t getElapsedTNT();

    public: int64_t getElapsed(int64_t currentTime);

    public: bool isElapsed(int64_t currentTime, int64_t time);

    public: bool isElapsedTNT(int64_t time);

    public: void setStartTime(int64_t startTime);

    public: int64_t getStartTime();

    public: void setStartTimeTNT();

    public: void pause();

    public: bool resume();

    public: std::string toStringAt(int64_t currentTime);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
