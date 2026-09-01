
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

    private: static const RTSLayer2SelectedLogHelper instanceC = RTSLayer2SelectedLogHelper();

    public: static RTSLayer2SelectedLogHelper getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string TRACK_TO_FIRE_OR_MOVE = "trackTo:fireOrMove";

    private: const std::string BUILDING_CHASE = "buildingChase";

    public: void steeringUp(PathFindingLayerInterface pathFindingLayerInterface);

    public: void steeringFireOrStop(PathFindingLayerInterface pathFindingLayerInterface);

    public: void buildingAbove(PathFindingLayerInterface pathFindingLayerInterface);

    public: void buildingChaseLeft(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public: void buildingChaseRight(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public: void buildingDown(PathFindingLayerInterface pathFindingLayerInterface);

    public: void buildingChaseDown(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public: void buildingChaseUp(PathFindingLayerInterface pathFindingLayerInterface, int32_t angle);

    public: void buildingLeft(PathFindingLayerInterface pathFindingLayerInterface);

    public: void buildingRight(PathFindingLayerInterface pathFindingLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_H
