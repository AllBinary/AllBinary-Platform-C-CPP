
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyCommandsFactory
            : public Object
         {
        

    private: static const instance: MyCommandsFactory = new MyCommandsFactory();

    public static MyCommandsFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyCommandsFactory.instance;
    
}


    public const NO_COMMAND: Command = new Command(StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING,  -1,  -1);

    public const GAUGE_CHANGE: Command = new Command("GAUGE_CHANGE", StringUtil.getInstance()!.EMPTY_STRING, Command.ITEM, 1);

    public const SET_DISPLAYABLE: Command = new Command("Display", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public const PAUSE_COMMAND: Command = new Command("Pause", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 0);

    public const RESUME_COMMAND: Command = new Command("Resume", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 0);

protected constructor (){

            super();
        }


};

            

