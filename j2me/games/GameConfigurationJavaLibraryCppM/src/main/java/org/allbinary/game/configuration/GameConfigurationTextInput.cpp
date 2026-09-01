
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
        



            #include "../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameConfigurationTextInput
            : public Object
         {

    private: static Hashtable<any, any> hashtable = Hashtable<any, any>();

    public: static GameConfigurationTextInput SIMULATOR_IP = GameConfigurationTextInput("IP: ", "192.168.1.3");

    public: static GameConfigurationTextInput SIMULATOR_PORT = GameConfigurationTextInput("Port: ", "8010");

    public: static void update(TextField textField){

    Object* anyType = textField.getLabel();;
    

    GameConfigurationTextInput gameConfigurationTextInput = GameConfigurationTextInput::hashtable.get(anyType) as GameConfigurationTextInput;;
    
gameConfigurationTextInput.setText(textField.getString());
    
}


    public: static Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationTextInput::hashtable;
    
}


    private: std::string label = StringUtil::getInstance().EMPTY_STRING;

    private: std::string text = StringUtil::getInstance().EMPTY_STRING;

public: GameConfigurationTextInput(std::string label, std::string text){
this->setText(text);
    
this->setLabel(label);
    
GameConfigurationTextInput::hashtable.put(this->getLabel(), this);
    
}


    public: void setText(std::string text){
this->text= text;
    
}


    public: std::string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->text;
    
}


    public: void setLabel(std::string label){
this->label= label;
    
}


    public: std::string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->label;
    
}


};

            

