
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Feature;
class Features;
class GameFeatureUtil;
class ForcedLogUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
class GameFeatureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseChangedGameFeatureListener
            : public virtual Object
        , public virtual GameFeatureListenerInterface {


            
    public: BaseChangedGameFeatureListener();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: GameFeatureUtil* gameFeatureUtil;

    /*protected*/ public: BasicArrayList* list;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_EVENT_BASECHANGEDGAMEFEATURELISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Feature.h>)
#include <org/allbinary/game/configuration/feature/Feature.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureUtil.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/configuration/event/GameFeatureListenerInterface.h")
#include "org/allbinary/game/configuration/event/GameFeatureListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/configuration/event/GameFeatureEvent.h")
#include "org/allbinary/game/configuration/event/GameFeatureEvent.h"
#endif

        #endif
    
