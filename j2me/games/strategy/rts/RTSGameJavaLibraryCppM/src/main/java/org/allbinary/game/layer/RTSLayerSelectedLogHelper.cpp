
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

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/NamedAngle.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayerLogHelper.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class RTSLayerSelectedLogHelper: public RTSLayerLogHelper {

    private: static RTSLayerSelectedLogHelper* instanceC() { static std::unique_ptr<RTSLayerSelectedLogHelper> value(new RTSLayerSelectedLogHelper()); return value.get(); }

    public: static RTSLayerSelectedLogHelper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayerSelectedLogHelper::instanceC();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: PositionStrings* positionStrings = PositionStrings::getInstance();

    private: const std::string TRACKTO_TURNTO = "trackTo:turnTo";

    public: void setClosestGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->START);
    
stringBuffer->appendint(pathsList->size());
    
stringBuffer->append(" -> ");
    
stringBuffer->append(StringUtil::getInstance()->toString(pathsList));
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: setClosestGeographicMapCellHistory");
    
}


    public: void trackTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, std::string reason){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(StringUtil::getInstance()->toString(nextUnvisitedPathGeographicMapCellPosition));
    
stringBuffer->append(this->positionStrings->DX_LABEL);
    
stringBuffer->appendint(dx);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->positionStrings->DY_LABEL);
    
stringBuffer->appendint(dy);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(reason);
    
this->logUtil->putF(stringBuffer->toString(), this, "selected: trackTo");
    
}


    public: void turnTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(associatedAdvancedRTSGameLayer->getName());
    
stringBuffer->append(" steering - ");
    
stringBuffer->append(this->positionStrings->DX_LABEL);
    
stringBuffer->appendint(dx);
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->positionStrings->DY_LABEL);
    
stringBuffer->appendint(dy);
    
stringBuffer->append(" angle: ");
    
stringBuffer->appendint(angle);
    
stringBuffer->append(" movementAngle: ");
    
stringBuffer->append(movementAngle->name);
    
stringBuffer->append(this->commonSeps->FORWARD_SLASH);
    
stringBuffer->appendshort(movementAngle->getValue());
    

                        if(angleInfo != 
                                    nullptr
                                )
                        
                                    {
                                    
    int16_t angleIncrement = angleInfo->getAngleIncrementInfo()->getAngleIncrement();;
    
stringBuffer->append(" angleIncrement: ");
    
stringBuffer->appendshort(angleIncrement);
    

                                    }
                                
stringBuffer->append(" Evading: ");
    
stringBuffer->appendboolean(evading);
    
this->logUtil->putF(stringBuffer->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void doneMoving(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - done moving 0,0")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void closeEnough(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - close enough")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void movingLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - allow movingLeft")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void movingRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - allow movingRight")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void movingUp(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - allow movingUp")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void movingDown(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - allow movingDown")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void currentMoveEnded(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - correct angle, but movement not needed for current deltas so reseting movement angle")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void evade(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - evade")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void rotateLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - rotating left")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void rotateRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - rotating right")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void handle(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - movementAngle: ")->append(movementAngle->name)->append(this->commonSeps->FORWARD_SLASH)->appendshort(movementAngle->getValue())->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void noRotation(PathFindingLayerInterface* associatedAdvancedRTSGameLayer){
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(" steering - Do not rotate")->toString(), this, this->TRACKTO_TURNTO);
    
}


    public: void notOnPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList){

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->logUtil->putF((new StringMaker())->append(associatedAdvancedRTSGameLayer->getName())->append(CommonSeps::getInstance()->SPACE)->appendint(geographicMapCellHistory->getTotalVisited())->append(CommonSeps::getInstance()->SPACE)->append(stringUtil->toString(currentGeographicMapCellPosition))->append(" - trying to move but not on path: ")->append(stringUtil->toString(pathList))->toString(), this, "turnTo");
    
}


};

            

