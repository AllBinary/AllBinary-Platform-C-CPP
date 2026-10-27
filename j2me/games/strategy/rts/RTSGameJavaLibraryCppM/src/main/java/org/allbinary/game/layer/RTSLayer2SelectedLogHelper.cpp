
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class RTSLayer2SelectedLogHelper: public RTSLayer2LogHelper {

    private: static RTSLayer2SelectedLogHelper* instanceC() { static std::unique_ptr<RTSLayer2SelectedLogHelper> value(new RTSLayer2SelectedLogHelper()); return value.get(); }

    public: static RTSLayer2SelectedLogHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer2SelectedLogHelper::instanceC();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: const std::string TRACK_TO_FIRE_OR_MOVE = "trackTo:fireOrMove";

    private: const std::string BUILDING_CHASE = "buildingChase";

    public: void steeringUp(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Up")->toString(), this, this->TRACK_TO_FIRE_OR_MOVE);
    
}


    public: void steeringFireOrStop(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Fire/All Stop")->toString(), this, this->TRACK_TO_FIRE_OR_MOVE);
    
}


    public: void buildingAbove(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Above")->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingChaseLeft(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Left: ")->appendint(angle)->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingChaseRight(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Right: ")->appendint(angle)->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingDown(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Below")->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingChaseDown(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Down: ")->appendint(angle)->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingChaseUp(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Up: ")->appendint(angle)->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingLeft(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Left")->toString(), this, this->BUILDING_CHASE);
    
}


    public: void buildingRight(PathFindingLayerInterface* pathFindingLayerInterface){
this->logUtil->putF((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Right")->toString(), this, this->BUILDING_CHASE);
    
}


};

            

