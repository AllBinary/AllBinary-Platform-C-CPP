
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyCommandsFactory
            : public Object
         {

    private: static MyCommandsFactory* instance() { static std::unique_ptr<MyCommandsFactory> value(new MyCommandsFactory()); return value.get(); }

    public: static MyCommandsFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyCommandsFactory::instance();
    
}


    public: Command* NO_COMMAND = new Command(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING,  -1,  -1);

    public: Command* GAUGE_CHANGE = new Command("GAUGE_CHANGE", StringUtil::getInstance()->EMPTY_STRING, Command::ITEM, 1);

    public: Command* SET_DISPLAYABLE = new Command("Display", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2);

    public: Command* PAUSE_COMMAND = new Command("Pause", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 0);

    public: Command* RESUME_COMMAND = new Command("Resume", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 0);

protected: MyCommandsFactory(){
}


};

            

