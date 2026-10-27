
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/ItemStateListener.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/configuration/GameOptionsForm.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"

class GameFeatureItemStateListener
            : public Object
        , public ItemStateListener {

    private: static inline BasicArrayList* toggleList = new BasicArrayListD();

    public: static void add(GameFeature* gameFeature){

                        if(!GameFeatureItemStateListener::toggleList->contains(gameFeature))
                        
                                    {
                                    GameFeatureItemStateListener::toggleList->add(gameFeature);
    

                                    }
                                
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: GameOptionsForm* gameOptionsForm;

public: GameFeatureItemStateListener(GameOptionsForm* gameOptionsForm){
this->gameOptionsForm= gameOptionsForm;
    

    GameFeatureFactory* gameFeatureFactory = GameFeatureFactory::getInstance();;
    
GameFeatureItemStateListener::add(gameFeatureFactory->ARTIFICIAL_INTELLEGENCE_PROCESSOR);
    
GameFeatureItemStateListener::add(gameFeatureFactory->COLLIDABLE_INTERFACE_LAYER_PROCESSOR);
    
GameFeatureItemStateListener::add(gameFeatureFactory->DAMAGE_FLOATERS);
    
GameFeatureItemStateListener::add(gameFeatureFactory->DROPPED_ITEMS);
    
GameFeatureItemStateListener::add(gameFeatureFactory->GAME_INPUT_LAYER_PROCESSOR);
    
GameFeatureItemStateListener::add(gameFeatureFactory->HEALTH_BARS);
    
GameFeatureItemStateListener::add(gameFeatureFactory->SOUND);
    
GameFeatureItemStateListener::add(gameFeatureFactory->TICKABLE_LAYER_PROCESSOR);
    
}


    public: void itemStateChanged(Item* item){

        try {
            
    std::string itemLabel = item->getLabel();;
    
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->ITEM_LABEL)->append(itemLabel)->toString(), this, "itemStateChanged");
    

                        if(
                                        (dynamic_cast<const GameConfigurationGauge*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameConfigurationUtil::getInstance()->change(this->gameOptionsForm, dynamic_cast<GameConfigurationGauge*>(item));
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const ChoiceGroup*>(item) != nullptr)
                                    )
                        
                                    {
                                    
    GameFeatureUtil* gameFeatureUtil = GameFeatureUtil::getInstance();;
    

                        if(gameFeatureUtil->isExclusive(itemLabel))
                        
                                    {
                                    gameFeatureUtil->updateExclusiveForChoiceGroup(dynamic_cast<ChoiceGroup*>(item));
    

                                    }
                                
                        else {
                            gameFeatureUtil->updateMultiple(dynamic_cast<ChoiceGroup*>(item));
    

                        }
                            

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "itemStateChanged", &e);
    
}

}


};

            

