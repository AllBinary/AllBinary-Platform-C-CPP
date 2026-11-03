
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/SensorActionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SensorAction.h"

auto SensorActionFactory::instance_owner() -> SensorActionFactory* { static std::unique_ptr<SensorActionFactory> value(new SensorActionFactory()); return value.get(); }
SensorActionFactory* SensorActionFactory::instance = SensorActionFactory::instance_owner();

    auto SensorActionFactory::getInstance() -> SensorActionFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SensorActionFactory::instance;
    
}


SensorActionFactory::SensorActionFactory() : ATTACK(new SensorAction("Attack")), EVADE(new SensorAction("Evade")){
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_CPP
