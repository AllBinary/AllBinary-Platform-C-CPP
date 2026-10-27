
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotInterfaceWrapper.h"
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h"


InputAutomationRobotUtil::InputAutomationRobotUtil(){
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationRobotUtil::getChangeEvent(InputRobotInterface* inputRobotInterface) -> InputAutomationRobotChangeEvent*{

    InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper = new InputAutomationRobotInterfaceWrapper(inputRobotInterface);;
    

    InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = new InputAutomationRobotChangeEvent(inputAutomationRobotInterfaceWrapper);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationRobotChangeEvent;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTUTIL_CPP
