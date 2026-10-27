
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

public: Driver(int32_t turnSpeed, int32_t trackPathSelectionSkill, Aggression* aggression){
this->setTurnSpeed(turnSpeed);
    
this->setTrackPathSelectionSkill(trackPathSelectionSkill);
    
this->aggression= aggression;
    
}


    public: int32_t getTurnSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->turnSpeed;
    
}


    public: void setTurnSpeed(int32_t turnSpeed){
this->turnSpeed= turnSpeed;
    
}


    public: int32_t getTrackPathSelectionSkill(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackPathSelectionSkill;
    
}


    public: void setTrackPathSelectionSkill(int32_t trackPathSelectionSkill){
this->trackPathSelectionSkill= trackPathSelectionSkill;
    
}


    public: Aggression* getAggression(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->aggression;
    
}


    public: void setAggression(Aggression* aggression){
this->aggression= aggression;
    
}


};

            

