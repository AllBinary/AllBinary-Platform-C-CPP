
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SensorAction.h"

class SensorActionFactory
            : public Object
         {

    private: static SensorActionFactory instance() { return SensorActionFactory(); }

    public: static SensorActionFactory getInstance();

private: SensorActionFactory();

    public: const SensorAction ATTACK = SensorAction("Attack");

    public: const SensorAction EVADE = SensorAction("Evade");

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SENSORACTIONFACTORY_H
