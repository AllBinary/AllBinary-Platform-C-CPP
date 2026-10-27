
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PrimitiveLongSingleton;
class PrimitiveLongUtil;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Timer
            : public virtual Object
         {

    private: int64_t startTime =  -1;

    private: int64_t hundredthTime= 0;

    private: int64_t maxTime;

    private: int64_t modifier= 0;

    private: std::vector<char> hundrethsString;

    private: int32_t totalDigits = 1;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: std::vector<char> MAX;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

public: Timer(int32_t maxTime);

    public: void start();

    public: int64_t get();

    public: void update();

    public: void reduce(int32_t value);

    public: void add(int32_t value);

    public: std::vector<char> getTimeChars();

    public: int32_t getCurrentTotalDigits();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/PrimitiveLongSingleton.h>)
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif

        #endif
    
