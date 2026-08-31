
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_H

#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayer2LogHelper.h"
#include "PathFindingLayerInterface.h"

class RTSLayer2SelectedLogHelper: public RTSLayer2LogHelper {
        

    private: static const instanceC: RTSLayer2SelectedLogHelper = new RTSLayer2SelectedLogHelper();

    public static RTSLayer2SelectedLogHelper getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const TRACK_TO_FIRE_OR_MOVE: string = "trackTo:fireOrMove";

    private: const BUILDING_CHASE: string = "buildingChase";

    public steeringUp(PathFindingLayerInterface pathFindingLayerInterface);

    public steeringFireOrStop(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingAbove(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingChaseLeft(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingChaseRight(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingDown(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingChaseDown(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingChaseUp(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public buildingLeft(PathFindingLayerInterface pathFindingLayerInterface);

    public buildingRight(PathFindingLayerInterface pathFindingLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_H
