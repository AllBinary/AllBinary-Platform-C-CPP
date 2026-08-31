
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
        

    private: static hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    public static SIMULATOR_IP: GameConfigurationTextInput = new GameConfigurationTextInput("IP: ", "192.168.1.3");

    public static SIMULATOR_PORT: GameConfigurationTextInput = new GameConfigurationTextInput("Port: ", "8010");

    public static update(TextField textField){

    anyType: any = textField!.getLabel();;
    

    gameConfigurationTextInput: GameConfigurationTextInput = GameConfigurationTextInput.hashtable.get(anyType) as GameConfigurationTextInput;;
    
gameConfigurationTextInput!.setText(textField!.getString());
    
}


    public static Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationTextInput.hashtable;
    
}


    private: label: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: text: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string label, string text){

            super();
        this.setText(text);
    
this.setLabel(label);
    
GameConfigurationTextInput.hashtable.put(this.getLabel(), this);
    
}


    public setText(string text){
this.text= text;
    
}


    public string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.text;
    
}


    public setLabel(string label){
this.label= label;
    
}


    public string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.label;
    
}


};

            

