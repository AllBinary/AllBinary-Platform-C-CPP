
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Aggression.h"

class Driver
            : public Object
         {

    public: static const Driver NULL_DRIVER = Driver(SmallIntegerSingletonFactory::getInstance().getAt(0), SmallIntegerSingletonFactory::getInstance().getAt(0), Aggression(SmallIntegerSingletonFactory::getInstance().getAt(0), SmallIntegerSingletonFactory::getInstance().getAt(0), SmallIntegerSingletonFactory::getInstance().getAt(0)));

    private: Integer turnSpeed = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: Integer trackPathSelectionSkill = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: Aggression aggression;

public: Driver(Integer turnSpeed, Integer trackPathSelectionSkill, Aggression aggression){
this->setTurnSpeed(turnSpeed);
    
this->setTrackPathSelectionSkill(trackPathSelectionSkill);
    
this->aggression= aggression;
    
}


    public: Integer getTurnSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->turnSpeed;
    
}


    public: void setTurnSpeed(Integer turnSpeed){
this->turnSpeed= turnSpeed;
    
}


    public: Integer getTrackPathSelectionSkill(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->trackPathSelectionSkill;
    
}


    public: void setTrackPathSelectionSkill(Integer trackPathSelectionSkill){
this->trackPathSelectionSkill= trackPathSelectionSkill;
    
}


    public: Aggression getAggression(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->aggression;
    
}


    public: void setAggression(Aggression aggression){
this->aggression= aggression;
    
}


};

            

