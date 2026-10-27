
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONACTION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONACTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>
class InputRobotInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericInputAutomationAction
            : public virtual Object
        , public InputAutomationActionInterface {

public: GenericInputAutomationAction();

                //@Throws(Exception.constructor)
            
    public: void test();

    public: std::vector<InputRobotInterface*> getInputRobotInterfaceArray();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONACTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONACTION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICINPUTAUTOMATIONACTION_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/InputAutomationActionInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif

        #endif
    
