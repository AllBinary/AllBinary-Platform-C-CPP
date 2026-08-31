
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

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureListenerInterface.h"
#include "GameFeatureEvent.h"

class BaseChangedGameFeatureListener
            : public Object
        : public GameFeatureListenerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const gameFeatureUtil: GameFeatureUtil = GameFeatureUtil.getInstance()!;

    const list: BasicArrayList = new BasicArrayListD();

    private: changed: bool = true;

    public onEvent(AllBinaryEventObject eventObject);

    public onGameFeatureChange(GameFeatureEvent gameFeatureEvent);

    public add(Feature gameFeature);

    public remove(Feature gameFeature);

    public setChanged(bool initialized);

    public bool isChangedFeature(Feature gameFeature);

    public bool isChanged();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H
