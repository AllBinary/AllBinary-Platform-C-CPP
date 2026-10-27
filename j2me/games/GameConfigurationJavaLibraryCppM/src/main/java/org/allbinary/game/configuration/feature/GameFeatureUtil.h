
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>
class ChoiceGroup;
class TsUtil;
class LogUtil;
class StringMaker;
class CommonLabels;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class EnumerationUtil;
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Features;
class Feature;
class GameFeatureChoiceGroups;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameFeatureUtil
            : public virtual Object
         {

    private: static GameFeatureUtil* instance_owner();
    private: static GameFeatureUtil* instance;

    public: static GameFeatureUtil* getInstance();


            
    public: GameFeatureUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: TsUtil* tsUtil;

    private: EnumerationUtil* enumerationUtil;

    public: const std::string ON_GAME_FEATURE_CHANGE = "onGameFeatureChange";

    public: const std::string GAME_FEATURE_CHANGED = "Game Feature Changed: ";

                //@Throws(Exception.constructor)
            
    public: void setDefault(ChoiceGroup* choiceGroup);

                //@Throws(Exception.constructor)
            
    public: void updateMultiple(ChoiceGroup* choiceGroup);

                //@Throws(Exception.constructor)
            
    public: void updateExclusiveForChoiceGroup(ChoiceGroup* choiceGroup);

    public: bool isExclusive(std::string itemLabel);

                //@Throws(Exception.constructor)
            
    private: void updateExclusive(std::string selectedChoiceLabel);

                //@Throws(Exception.constructor)
            
    public: void updateExclusiveList(Feature* gameFeature, BasicArrayList* list);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<javax/microedition/lcdui/ChoiceGroup.h>)
#include <javax/microedition/lcdui/ChoiceGroup.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
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
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
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
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h")
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
#endif

        #endif
    
