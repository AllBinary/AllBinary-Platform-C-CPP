
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureItemCommandListener.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureItemStateListener.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GameConfigurationPersistanceSingleton.h>

      
#include <org/allbinary/game/configuration/persistance/KeyValuePersistance.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/input/gyro/OrientationData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfigurationTextInput.h"
#include "GameConfigurationSingleton.h"
#include "GameConfiguration.h"
#include "GameConfigurationGauge.h"
#include "GameConfigurationUtil.h"
#include "GameConfigurationCentral.h"

class GameOptionsForm: public CommandForm {

public: GameOptionsForm(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

                //@Throws(Exception.constructor)
            
    public: void closeClientInformation(AbeClientInformationInterface abeClientInformation);

    private: void addTextFieldsIfSimulated();

    private: void addTextFields();

    private: void addConfiguration();

    public: void initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface abeClientInformation);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMEOPTIONSFORM_H
