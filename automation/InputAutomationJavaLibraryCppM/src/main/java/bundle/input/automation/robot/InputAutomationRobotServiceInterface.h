
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICEINTERFACE_H
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputRobotInterface;
#include <org/allbinary/osgi/OSGIServiceInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationRobotServiceInterface: public virtual OSGIServiceInterface {

    public: virtual std::vector<InputRobotInterface*> getInputRobotInterfaceArray() = 0;

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICEINTERFACE_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTSERVICEINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIServiceInterface.h>)
#include <org/allbinary/osgi/OSGIServiceInterface.h>
#endif

        #endif
    
