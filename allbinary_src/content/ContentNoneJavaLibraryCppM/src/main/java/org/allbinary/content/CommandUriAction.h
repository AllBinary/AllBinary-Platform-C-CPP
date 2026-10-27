
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
        



        #ifndef ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
        #define ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommandUriAction
            : public Object
         {

    private: static CommandUriAction* instance() { static std::unique_ptr<CommandUriAction> value(new CommandUriAction()); return value.get(); }

    public: static CommandUriAction* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: void add(Command* command, std::string url);

    public: void process(Command* command);

};

            


        #endif //ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
