
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NotificationUtil
            : public Object
         {

    private: static NotificationUtil* SINGLETON() { static std::unique_ptr<NotificationUtil> value(new NotificationUtil()); return value.get(); }

    public: static NotificationUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NotificationUtil::SINGLETON();
    
}


    public: void notify(Command* command, std::string resource, std::string message){
}


};

            

