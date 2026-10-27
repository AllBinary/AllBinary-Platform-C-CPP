
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
class Item;
#include <javax/microedition/lcdui/ItemCommandListener.h>
class GameConfigurationGauge;
class GameConfigurationUtil;
class GameOptionsForm;
class LogUtil;
class StringMaker;
class MidletStrings;
class CommonLabels;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureItemCommandListener
            : public virtual Object
        , public ItemCommandListener {

    /*protected*/ public: LogUtil* logUtil;

    private: GameOptionsForm* gameOptionsForm;

public: GameFeatureItemCommandListener(GameOptionsForm* gameOptionsForm);

    public: void commandAction(Command* command, Item* item);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREITEMCOMMANDLISTENER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/ItemCommandListener.h>)
#include <javax/microedition/lcdui/ItemCommandListener.h>
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
#if __has_include(<org/allbinary/midlet/MidletStrings.h>)
#include <org/allbinary/midlet/MidletStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
