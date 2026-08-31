
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

            #include "../../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Timer
            : public Object
         {
        

    private: startTime: int64_t =  -1;

    private: hundredthTime: int64_t= 0;

    private: maxTime: int64_t;

    private: modifier: int64_t= 0;

    private: hundrethsString: std::vector<char> = PrimitiveLongSingleton.getInstance()!.ZERO;

    private: totalDigits: int32_t = 1;

    private: primitiveLongUtil: PrimitiveLongUtil;

    private: const MAX: std::vector<char> = ['L','O','L'];

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (int32_t maxTime);

    public start();

    public int64_t get();

    public update();

    public reduce(int32_t value);

    public add(int32_t value);

    public std::vector<char> getTimeChars();

    public int32_t getCurrentTotalDigits();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_H
