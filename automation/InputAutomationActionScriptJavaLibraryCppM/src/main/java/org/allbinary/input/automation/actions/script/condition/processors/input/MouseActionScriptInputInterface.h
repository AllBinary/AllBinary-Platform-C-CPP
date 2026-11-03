
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/awt.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
class Point;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MouseActionScriptInputInterface: public virtual ProfileActionScriptInputInterface {

    public: virtual void setPoint(Point* point) = 0;

    public: virtual Point* getPoint() = 0;

    public: virtual int32_t getButtonClicks() = 0;

    public: virtual void setButtonClicks(int32_t buttons) = 0;

    public: virtual void log() = 0;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTINTERFACE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/Point.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Point.h"
#endif

        #endif
    
