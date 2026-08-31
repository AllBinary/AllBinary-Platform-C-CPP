
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

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingLayerInterface.h"

class RTSLayer2LogHelper
            : public Object
         {
        

    private: static const instance: RTSLayer2LogHelper = new RTSLayer2LogHelper();

    public static RTSLayer2LogHelper getInstance();

    public steeringUp(PathFindingLayerInterface pathFindingLayerInterface);

    public steeringFireOrStop(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingAbove(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingChaseLeft(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingChaseRight(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingDown(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingChaseDown(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingChaseUp(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingLeft();

    public buildingRight();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_H
