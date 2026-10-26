
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationRobotInterfaceWrapper.h"
#include "InputAutomationRobotChangeEvent.h"

class InputAutomationRobotUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static InputAutomationRobotChangeEvent getChangeEvent(InputRobotInterface inputRobotInterface);

private: InputAutomationRobotUtil();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_H
