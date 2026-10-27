
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Timer
            : public Object
         {

    private: int64_t startTime =  -1;

    private: int64_t hundredthTime= 0;

    private: int64_t maxTime;

    private: int64_t modifier= 0;

    private: std::vector<char> hundrethsString = PrimitiveLongSingleton::getInstance()->ZERO;

    private: int32_t totalDigits = 1;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: const std::vector<char> MAX = ['L','O','L'];

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

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
