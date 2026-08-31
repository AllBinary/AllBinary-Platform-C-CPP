
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Features.h"
#include "Feature.h"
#include "GameFeatureChoiceGroups.h"

class GameFeatureUtil
            : public Object
         {
        

    private: static const instance: GameFeatureUtil = new GameFeatureUtil();

    public static GameFeatureUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    public const ON_GAME_FEATURE_CHANGE: string = "onGameFeatureChange";

    public const GAME_FEATURE_CHANGED: string = "Game Feature Changed: ";

                //@Throws(Exception.constructor)
            
    public setDefault(ChoiceGroup choiceGroup);

                //@Throws(Exception.constructor)
            
    public updateMultiple(ChoiceGroup choiceGroup);

                //@Throws(Exception.constructor)
            
    public updateExclusiveForChoiceGroup(ChoiceGroup choiceGroup);

    public bool isExclusive(string itemLabel);

                //@Throws(Exception.constructor)
            
    updateExclusive(string selectedChoiceLabel);

                //@Throws(Exception.constructor)
            
    public updateExclusiveList(Feature gameFeature, BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATUREUTIL_H
