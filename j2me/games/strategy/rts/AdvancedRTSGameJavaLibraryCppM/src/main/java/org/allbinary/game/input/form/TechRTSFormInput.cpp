
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSInterface.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/TechnologyRTSInterfaceImageItem.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/rts/technology/event/TechEventHandler.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/media/audio/BuildingSound.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"

class TechRTSFormInput: public RTSFormInput {

    private: AllBinaryEventObject* EVENT = new AllBinaryEventObject(this);

    protected: GameNotificationEvent* noMoneyGameNotificationEvent;

public: TechRTSFormInput(std::vector<Group*> groupInterface) : RTSFormInput(groupInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    
this->noMoneyGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->NO_MONEY, SmallIntegerSingletonFactory::getInstance()->getAt(2), basicColorFactory->WHITE, BooleanFactory::getInstance()->FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->noMoneyGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex){
super.process(layerManager);
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    StringMaker* stringMaker = new StringMaker();;
    

    TechnologyRTSInterfaceImageItem* technologyRTSInterfaceImageItem = dynamic_cast<TechnologyRTSInterfaceImageItem*>(item);;
    

    RTSInterface* rtsInterface = technologyRTSInterfaceImageItem->getRtsInterface();;
    
this->logUtil.putF(stringMaker->append("isUpgradeable: ")->appendboolean(rtsInterface->isUpgradeable())->toString(), this, commonStrings->PROCESS);
    

                        if(rtsInterface->isUpgradeable())
                        
                                    {
                                    
    int32_t cost = rtsInterface->getUpgradeCost();;
    

    Capital* capital = rtsPlayerLayerInterface->getCapital();;
    
stringMaker->delete(0, stringMaker->length());
    
this->logUtil.putF(stringMaker->appendint(cost)->append("<=")->appendint(capital->getTotalMoney())->toString(), this, commonStrings->PROCESS);
    

                        if(cost <= capital->getTotalMoney())
                        
                                    {
                                    rtsPlayerLayerInterface->add(BuildingSound::getInstance());
    
capital->removeMoney(cost);
    
rtsInterface->upgrade();
    
technologyRTSInterfaceImageItem->update();
    
TechEventHandler::getInstance()->fireEvent(this->EVENT);
    

                                    }
                                
                        else {
                            rtsPlayerLayerInterface->add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
}


};

            

