
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTCHANGELISTENER_H
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTCHANGELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputAutomationRobotChangeEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationRobotChangeListener
            : public virtual Object
         {

    public: virtual void onAdd(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) = 0;

    public: virtual void onRemove(InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent) = 0;

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTCHANGELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTCHANGELISTENER_H_COMPLETE)
        #define BUNDLE_INPUT_AUTOMATION_ROBOT_INPUTAUTOMATIONROBOTCHANGELISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h>)
#include <org/allbinary/input/automation/robot/osgi/InputAutomationRobotChangeEvent.h>
#endif

        #endif
    
