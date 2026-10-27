
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_H
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class InputRobotInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationRobotService
            : public virtual Object
        , public InputAutomationRobotServiceInterface {

    private: std::vector<InputRobotInterface*> inputRobotInterfaceArray;

public: InputAutomationRobotService(std::vector<InputRobotInterface*> inputRobotInterfaceArray);

    public: std::vector<InputRobotInterface*> getInputRobotInterfaceArray();

    public: void setInputRobotInterfaceArray(std::vector<InputRobotInterface*> inputRobotInterfaceArray);

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICE_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include("bundle/input/automation/robot/InputAutomationRobotServiceInterface.h")
#include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"
#endif

        #endif
    
