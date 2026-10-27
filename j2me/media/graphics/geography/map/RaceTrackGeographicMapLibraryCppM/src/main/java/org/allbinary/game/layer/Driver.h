
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DRIVER_H
        #define ORG_ALLBINARY_GAME_LAYER_DRIVER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/Aggression.h"

class Driver
            : public Object
         {

    public: static Driver* NULL_DRIVER() { static std::unique_ptr<Driver> value(new Driver(SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0), new Aggression(SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0), SmallIntegerSingletonFactory::getInstance()->getAt(0)))); return value.get(); }

    private: int32_t turnSpeed = SmallIntegerSingletonFactory::getInstance()->getAt(0);

    private: int32_t trackPathSelectionSkill = SmallIntegerSingletonFactory::getInstance()->getAt(0);

    private: Aggression* aggression;

public: Driver(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression);

    public: int32_t getTurnSpeed();

    public: void setTurnSpeed(int32_t turnSpeed);

    public: int32_t getTrackPathSelectionSkill();

    public: void setTrackPathSelectionSkill(int32_t trackPathSelectionSkill);

    public: Aggression* getAggression();

    public: void setAggression(Aggression* aggression);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DRIVER_H
