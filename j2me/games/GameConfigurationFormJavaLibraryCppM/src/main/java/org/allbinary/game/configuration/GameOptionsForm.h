
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Choice;
class Command;
class CommandListener;
class Item;
class TextField;
class GameCommandsFactory;
class GameFeatureChoiceGroups;
class GameFeatureFormUtil;
class GameFeatureItemCommandListener;
class GameFeatureItemStateListener;
class SensorFeatureFactory;
class GameConfigurationPersistanceSingleton;
class KeyValuePersistance;
class BasicColor;
class MyCommandsFactory;
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
class OrientationData;
class MEUtil;
class StringMaker;
class AbeClientInformationInterface;
class BasicArrayList;
class HashtableUtil;
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameConfigurationTextInput;
class GameConfigurationSingleton;
class GameConfiguration;
class GameConfigurationGauge;
class GameConfigurationUtil;
class GameConfigurationCentral;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameOptionsForm: public CommandForm {

    private: MEUtil* meUtil;

public: GameOptionsForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void closeClientInformation(AbeClientInformationInterface* abeClientInformation);

    private: void addTextFieldsIfSimulated();

    private: void addTextFields();

    private: void addConfiguration();

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Choice.h>)
#include <javax/microedition/lcdui/Choice.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/SensorFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>)
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/KeyValuePersistance.h>)
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandsFactory.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/input/gyro/OrientationData.h>)
#include <org/allbinary/input/gyro/OrientationData.h>
#endif
#if __has_include(<org/allbinary/logic/MEUtil.h>)
#include <org/allbinary/logic/MEUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationTextInput.h")
#include "org/allbinary/game/configuration/GameConfigurationTextInput.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationSingleton.h")
#include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfiguration.h")
#include "org/allbinary/game/configuration/GameConfiguration.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationGauge.h")
#include "org/allbinary/game/configuration/GameConfigurationGauge.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif

        #endif
    
