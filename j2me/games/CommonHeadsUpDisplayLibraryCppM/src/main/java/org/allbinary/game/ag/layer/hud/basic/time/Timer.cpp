
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_CPP
        #define ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/layer/hud/basic/time/Timer.h"
        

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
        

Timer::Timer(int32_t maxTime) : hundrethsString(PrimitiveLongSingleton::getInstance()->ZERO), MAX({'L','O','L'}), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()){
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(maxTime);
    
this->maxTime= maxTime;
    
}


    auto Timer::start() -> void{
this->hundredthTime= 0;
    
this->startTime= this->gameTickTimeDelayHelper->startTime;
    
}


    auto Timer::get() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hundredthTime;
    
}


    auto Timer::update() -> void{

    int64_t lastLowerTime = this->hundredthTime;;
    

    int64_t currentTime = ((this->modifier +this->gameTickTimeDelayHelper->startTime) -this->startTime);;
    

                        if(currentTime < 0)
                        
                                    {
                                    currentTime= 0;
    

                                    }
                                
this->hundredthTime= currentTime /100;
    

                        if(this->hundredthTime >= this->maxTime)
                        
                                    {
                                    
                        if(this->startTime > 0)
                        
                                    {
                                    this->hundrethsString= this->MAX;
    

                                    }
                                

                                    }
                                
                             else 
                        if(lastLowerTime != this->hundredthTime)
                        
                                    {
                                    this->hundrethsString= this->primitiveLongUtil->getCharArray(static_cast<int32_t>(this->hundredthTime));
    
this->totalDigits= this->primitiveLongUtil->getCurrentTotalDigits();
    

                                    }
                                
}


    auto Timer::reduce(int32_t value) -> void{
this->modifier -= value;
    
}


    auto Timer::add(int32_t value) -> void{
this->modifier += value;
    
}


    auto Timer::getTimeChars() -> std::vector<char>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hundrethsString;
    
}


    auto Timer::getCurrentTotalDigits() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalDigits;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_LAYER_HUD_BASIC_TIME_TIMER_CPP
