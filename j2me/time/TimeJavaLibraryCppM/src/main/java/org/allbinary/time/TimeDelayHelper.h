
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeDelayHelper
            : public Object
         {
        

    private: startTime: int64_t =  -1;

    private: elapsedTimeAtPause: int64_t = Long.MIN_VALUE;

    public delay: int32_t;

public constructor (int32_t delay);

    public bool isTimeTNT();

    public bool isTimeSinceTNT(int32_t delay);

    public bool isTime(int64_t currentTime);

    public bool isTimeWithoutReset(int64_t currentTime);

    public bool isTimeSince(int32_t delay, int64_t currentTime);

    public int64_t getElapsedTNT();

    public int64_t getElapsed(int64_t currentTime);

    public bool isElapsed(int64_t currentTime, int64_t time);

    public bool isElapsedTNT(int64_t time);

    public setStartTime(int64_t startTime);

    public int64_t getStartTime();

    public setStartTimeTNT();

    public pause();

    public bool resume();

    public string toStringAt(int64_t currentTime);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMEDELAYHELPER_H
