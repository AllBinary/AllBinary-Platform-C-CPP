
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H

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

    private: static MyCommandsFactory instance() { return MyCommandsFactory(); }

    public: static MyCommandsFactory getInstance();

    public: const Command NO_COMMAND = Command(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING,  -1,  -1);

    public: const Command GAUGE_CHANGE = Command("GAUGE_CHANGE", StringUtil::getInstance().EMPTY_STRING, Command::ITEM, 1);

    public: const Command SET_DISPLAYABLE = Command("Display", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    public: const Command PAUSE_COMMAND = Command("Pause", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 0);

    public: const Command RESUME_COMMAND = Command("Resume", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 0);

protected: MyCommandsFactory();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
