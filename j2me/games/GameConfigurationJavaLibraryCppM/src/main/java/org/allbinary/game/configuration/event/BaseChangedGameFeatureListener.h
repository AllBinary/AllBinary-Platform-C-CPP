
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H

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

class BaseChangedGameFeatureListener
            : public Object
        , public GameFeatureListenerInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: GameFeatureUtil* gameFeatureUtil = GameFeatureUtil::getInstance();

    protected: BasicArrayList* list = new BasicArrayListD();

    private: bool changed = true;

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onGameFeatureChange(GameFeatureEvent* gameFeatureEvent);

    public: void add(Feature* gameFeature);

    public: void remove(Feature* gameFeature);

    public: void setChanged(bool initialized);

    public: bool isChangedFeature(Feature* gameFeature);

    public: bool isChanged();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
