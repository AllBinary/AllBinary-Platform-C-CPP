
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SensorAction.h"

class SensorActionFactory
            : public Object
         {

    private: static SensorActionFactory* instance() { static std::unique_ptr<SensorActionFactory> value(new SensorActionFactory()); return value.get(); }

    public: static SensorActionFactory* getInstance();

private: SensorActionFactory();

    public: SensorAction* ATTACK = new SensorAction("Attack");

    public: SensorAction* EVADE = new SensorAction("Evade");

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_H
