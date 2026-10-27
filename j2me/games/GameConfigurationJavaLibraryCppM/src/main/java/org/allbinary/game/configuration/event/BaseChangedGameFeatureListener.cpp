
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Feature.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"


BaseChangedGameFeatureListener::BaseChangedGameFeatureListener() : logUtil(LogUtil::getInstance()), gameFeatureUtil(GameFeatureUtil::getInstance()), list(new BasicArrayListD()) {
        }
        
    auto BaseChangedGameFeatureListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(CommonStrings::getInstance()->NOT_IMPLEMENTED, this);
    
}


    auto BaseChangedGameFeatureListener::onGameFeatureChange(GameFeatureEvent* gameFeatureEvent) -> void{
this->logUtil->putF((new StringMaker())->append(this->gameFeatureUtil->GAME_FEATURE_CHANGED)->append(gameFeatureEvent->getWhatChanged())->toString(), this, this->gameFeatureUtil->ON_GAME_FEATURE_CHANGE);
    
this->list->add(gameFeatureEvent->getGameOption());
    
this->setChanged(true);
    
}


    auto BaseChangedGameFeatureListener::add(Feature* gameFeature) -> void{
this->list->add(gameFeature);
    
}


    auto BaseChangedGameFeatureListener::remove(Feature* gameFeature) -> void{
this->list->remove(gameFeature);
    
}


    auto BaseChangedGameFeatureListener::setChanged(bool initialized) -> void{
this->changed= initialized;
    

                        if(!this->isChanged())
                        
                                    {
                                    this->list->clear();
    

                                    }
                                
}


    auto BaseChangedGameFeatureListener::isChangedFeature(Feature* gameFeature) -> bool{

    bool isChanged = this->list->contains(gameFeature);;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("GameFeature: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(gameFeature));
    
stringBuffer->append(" isFeature: ");
    
stringBuffer->appendboolean(Features::getInstance()->isFeature(gameFeature));
    
stringBuffer->append(" isChanged: ");
    
stringBuffer->appendboolean(isChanged);
    
this->logUtil->putF(stringBuffer->toString(), this, "isChanged");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isChanged;
    
}


    auto BaseChangedGameFeatureListener::isChanged() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->changed;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_CPP
