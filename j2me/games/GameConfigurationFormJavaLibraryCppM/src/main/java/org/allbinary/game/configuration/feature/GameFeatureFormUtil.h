
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ChoiceGroup;
class Item;
class NullImage;
class GameConfigurationGauge;
class GameConfigurationUtil;
class CommandForm;
class MEUtil;
class LogUtil;
class StringMaker;
class StringUtil;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Features;
class Feature;
class GameFeatureUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureFormUtil
            : public virtual Object
         {

    private: static GameFeatureFormUtil* instance_owner();
    private: static GameFeatureFormUtil* instance;

    public: static GameFeatureFormUtil* getInstance();


            
    public: GameFeatureFormUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: MEUtil* meUtil;

    public: ChoiceGroup* getChoiceGroup(ABHashtable<Object*, Object*>* hashtable, std::string name, int32_t option);

    public: void addChoiceGroup(CommandForm* form, ABHashtable<Object*, Object*>* hashtable, int32_t option);

                //@Throws(Exception.constructor)
            
    public: void setDefault(CommandForm* form);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREFORMUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/ChoiceGroup.h>)
#include <javax/microedition/lcdui/ChoiceGroup.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationGauge.h>)
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>
#endif
#if __has_include(<org/allbinary/game/configuration/GameConfigurationUtil.h>)
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/logic/MEUtil.h>)
#include <org/allbinary/logic/MEUtil.h>
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
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Feature.h")
#include "org/allbinary/game/configuration/feature/Feature.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureUtil.h")
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"
#endif

        #endif
    
