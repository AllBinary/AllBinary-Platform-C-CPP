
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SensorAction.h"

class SensorActionFactory
            : public Object
         {
        

    private: static const instance: SensorActionFactory = new SensorActionFactory();

    public static SensorActionFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SensorActionFactory.instance;
    
}


private constructor (){

            super();
        }


    public const ATTACK: SensorAction = new SensorAction("Attack");

    public const EVADE: SensorAction = new SensorAction("Evade");

};

            

