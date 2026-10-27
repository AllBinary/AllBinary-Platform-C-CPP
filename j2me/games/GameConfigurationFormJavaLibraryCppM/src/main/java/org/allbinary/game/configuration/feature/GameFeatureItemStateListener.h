
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ChoiceGroup;
class Item;
#include <javax/microedition/lcdui/ItemStateListener.h>
class GameConfigurationGauge;
class GameConfigurationUtil;
class GameOptionsForm;
class LogUtil;
class StringMaker;
class CommonLabels;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameFeatureFactory;
class GameFeature;
class GameFeatureUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureItemStateListener
            : public virtual Object
        , public ItemStateListener {

    private: static BasicArrayList* toggleList;

    public: static void add(GameFeature* gameFeature);

    /*protected*/ public: LogUtil* logUtil;

    private: GameOptionsForm* gameOptionsForm;

public: GameFeatureItemStateListener(GameOptionsForm* gameOptionsForm);

    public: void itemStateChanged(Item* item);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMSTATELISTENER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/ChoiceGroup.h>)
#include <javax/microedition/lcdui/ChoiceGroup.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/ItemStateListener.h>)
#include <javax/microedition/lcdui/ItemStateListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationGauge.h>)
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationUtil.h>)
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameOptionsForm.h>)
#include <org/allbinary/game/configuration/GameOptionsForm.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
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
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeature.h")
#include "org/allbinary/game/configuration/feature/GameFeature.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureUtil.h")
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#endif

        #endif
    
