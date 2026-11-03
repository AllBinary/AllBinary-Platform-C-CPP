
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfigurationTextInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
ABHashtable<Object*, Object*>* GameConfigurationTextInput::hashtable = StdUtil::getInstance()->createHashtable();
auto GameConfigurationTextInput::SIMULATOR_IP_owner() -> GameConfigurationTextInput* { static std::unique_ptr<GameConfigurationTextInput> value(new GameConfigurationTextInput("IP: ", "192.168.1.3")); return value.get(); }
GameConfigurationTextInput* GameConfigurationTextInput::SIMULATOR_IP = GameConfigurationTextInput::SIMULATOR_IP_owner();
auto GameConfigurationTextInput::SIMULATOR_PORT_owner() -> GameConfigurationTextInput* { static std::unique_ptr<GameConfigurationTextInput> value(new GameConfigurationTextInput("Port: ", "8010")); return value.get(); }
GameConfigurationTextInput* GameConfigurationTextInput::SIMULATOR_PORT = GameConfigurationTextInput::SIMULATOR_PORT_owner();

GameConfigurationTextInput::GameConfigurationTextInput(std::string label, std::string text) : label(StringUtil::getInstance()->EMPTY_STRING), text(StringUtil::getInstance()->EMPTY_STRING){
this->setText(text);
    
this->setLabel(label);
    
GameConfigurationTextInput::hashtable->put(this->getLabel(), this);
    
}


    auto GameConfigurationTextInput::update(TextField* textField) -> void{

    Object* anyType = JavaBoxes::toObject(textField->getLabel());;
    

    GameConfigurationTextInput* gameConfigurationTextInput = dynamic_cast<GameConfigurationTextInput*>(GameConfigurationTextInput::hashtable->get(anyType));;
    
gameConfigurationTextInput->setText(textField->getString());
    
}


    auto GameConfigurationTextInput::setText(std::string text) -> void{
this->text= text;
    
}


    auto GameConfigurationTextInput::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->text;
    
}


    auto GameConfigurationTextInput::setLabel(std::string label) -> void{
this->label= label;
    
}


    auto GameConfigurationTextInput::getLabel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->label;
    
}


    auto GameConfigurationTextInput::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameConfigurationTextInput::hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_CPP
