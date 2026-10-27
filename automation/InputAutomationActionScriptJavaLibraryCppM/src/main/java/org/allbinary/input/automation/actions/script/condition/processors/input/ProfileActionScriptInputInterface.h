
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>
class InputRobotInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfileActionScriptInputInterface: public ProfileActionScriptProcessorInterface {

    public: virtual void setInputRobotInterface(InputRobotInterface* inputRobotInterface) = 0;

    public: virtual InputRobotInterface* getInputRobotInterface() = 0;

    public: virtual int32_t getTime() = 0;

    public: virtual void setTime(int32_t time) = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif

        #endif
    
