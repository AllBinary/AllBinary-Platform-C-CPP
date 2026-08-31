
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H

            #include "../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameConfigurationTextInput
            : public Object
         {
        

    private: static hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    public static SIMULATOR_IP: GameConfigurationTextInput = new GameConfigurationTextInput("IP: ", "192.168.1.3");

    public static SIMULATOR_PORT: GameConfigurationTextInput = new GameConfigurationTextInput("Port: ", "8010");

    public static update(TextField textField);

    public static Hashtable<any, any> getHashtable();

    private: label: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: text: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string label, string text);

    public setText(string text);

    public string getText();

    public setLabel(string label);

    public string getLabel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
