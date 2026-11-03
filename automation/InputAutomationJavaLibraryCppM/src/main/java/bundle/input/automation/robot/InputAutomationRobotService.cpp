
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_CPP
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "bundle/input/automation/robot/InputAutomationRobotService.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"


InputAutomationRobotService::InputAutomationRobotService(std::vector<InputRobotInterface*> inputRobotInterfaceArray){
this->setInputRobotInterfaceArray(inputRobotInterfaceArray);
    
}


    auto InputAutomationRobotService::getInputRobotInterfaceArray() -> std::vector<InputRobotInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputRobotInterfaceArray;
    
}


    auto InputAutomationRobotService::setInputRobotInterfaceArray(std::vector<InputRobotInterface*> inputRobotInterfaceArray) -> void{
this->inputRobotInterfaceArray= inputRobotInterfaceArray;
    
}




        #endif //BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_CPP
