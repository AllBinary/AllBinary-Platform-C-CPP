
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Aggression.h"

class Driver
            : public Object
         {
        

    public static const NULL_DRIVER: Driver = new Driver(SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0), new Aggression(SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0), SmallIntegerSingletonFactory.getInstance()!.getAt(0)));

    private: turnSpeed: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: trackPathSelectionSkill: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: aggression: Aggression;

public constructor (Integer turnSpeed, Integer trackPathSelectionSkill, Aggression aggression){

            super();
        this.setTurnSpeed(turnSpeed);
    
this.setTrackPathSelectionSkill(trackPathSelectionSkill);
    
this.aggression= aggression;
    
}


    public Integer getTurnSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.turnSpeed;
    
}


    public setTurnSpeed(Integer turnSpeed){
this.turnSpeed= turnSpeed;
    
}


    public Integer getTrackPathSelectionSkill(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.trackPathSelectionSkill;
    
}


    public setTrackPathSelectionSkill(Integer trackPathSelectionSkill){
this.trackPathSelectionSkill= trackPathSelectionSkill;
    
}


    public Aggression getAggression(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.aggression;
    
}


    public setAggression(Aggression aggression){
this.aggression= aggression;
    
}


};

            

