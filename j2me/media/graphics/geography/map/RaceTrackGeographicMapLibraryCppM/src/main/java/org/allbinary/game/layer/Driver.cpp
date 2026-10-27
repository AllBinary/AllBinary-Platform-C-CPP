
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DRIVER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_DRIVER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/Driver.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/Aggression.h"

auto Driver::NULL_DRIVER_owner() -> Driver* { static std::unique_ptr<Driver> value(new Driver(SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0), new Aggression(SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0)))); return value.get(); }
Driver* Driver::NULL_DRIVER = Driver::NULL_DRIVER_owner();

Driver::Driver(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression) : turnSpeed(SmallIntegerSingletonFactory::getInstance()->getAt(0)), trackPathSelectionSkill(SmallIntegerSingletonFactory::getInstance()->getAt(0)){
this->setTurnSpeed(turnSpeed);
    
this->setTrackPathSelectionSkill(trackPathSelectionSkill);
    
this->aggression= aggression;
    
}


    auto Driver::getTurnSpeed() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->turnSpeed;
    
}


    auto Driver::setTurnSpeed(int32_t turnSpeed) -> void{
this->turnSpeed= turnSpeed;
    
}


    auto Driver::getTrackPathSelectionSkill() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackPathSelectionSkill;
    
}


    auto Driver::setTrackPathSelectionSkill(int32_t trackPathSelectionSkill) -> void{
this->trackPathSelectionSkill= trackPathSelectionSkill;
    
}


    auto Driver::getAggression() -> Aggression*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->aggression;
    
}


    auto Driver::setAggression(Aggression* aggression) -> void{
this->aggression= aggression;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_DRIVER_CPP
