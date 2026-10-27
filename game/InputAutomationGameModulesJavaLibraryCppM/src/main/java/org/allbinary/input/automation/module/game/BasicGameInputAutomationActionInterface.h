
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_BASICGAMEINPUTAUTOMATIONACTIONINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_BASICGAMEINPUTAUTOMATIONACTIONINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/Rectangle.h"

class BasicGameInputAutomationActionInterface: public InputAutomationActionInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void attack(Rectangle* rectangle) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void target(Rectangle* rectangle) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_BASICGAMEINPUTAUTOMATIONACTIONINTERFACE_H
