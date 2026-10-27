
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PathFindingLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayer2LogHelper
            : public virtual Object
         {

    private: static RTSLayer2LogHelper* instance_owner();
    private: static RTSLayer2LogHelper* instance;

    public: static RTSLayer2LogHelper* getInstance();


            
    public: RTSLayer2LogHelper();
        
    public: void steeringUp(PathFindingLayerInterface* pathFindingLayerInterface);

    public: void steeringFireOrStop(PathFindingLayerInterface* pathFindingLayerInterface);

    public: void buildingAbove(PathFindingLayerInterface* pathFindingLayerInterface);

    public: void buildingChaseLeft(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);

    public: void buildingChaseRight(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);

    public: void buildingDown(PathFindingLayerInterface* pathFindingLayerInterface);

    public: void buildingChaseDown(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);

    public: void buildingChaseUp(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);

    public: void buildingLeft();

    public: void buildingRight();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H_COMPLETE
        #if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif

        #endif
    
