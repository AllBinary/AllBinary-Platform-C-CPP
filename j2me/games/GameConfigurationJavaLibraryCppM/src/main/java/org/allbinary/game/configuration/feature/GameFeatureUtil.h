
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"

class GameFeatureUtil
            : public Object
         {

    private: static GameFeatureUtil* instance() { static std::unique_ptr<GameFeatureUtil> value(new GameFeatureUtil()); return value.get(); }

    public: static GameFeatureUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

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
