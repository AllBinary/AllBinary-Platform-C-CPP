
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomSearchHelper;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ProfileActionScriptConditionInterface;
class ColorAtActionScriptConditionData;
class TimeIntervalActionScriptConditionData;
class AlwaysActionScriptConditionData;
class AlwaysActionScriptCondition;
class TimeIntervalActionScriptCondition;
class ColorAtActionScriptCondition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfileActionScriptConditionFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptConditionInterface* getInstance(Node* node);

private: ProfileActionScriptConditionFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"
#endif

        #endif
    
