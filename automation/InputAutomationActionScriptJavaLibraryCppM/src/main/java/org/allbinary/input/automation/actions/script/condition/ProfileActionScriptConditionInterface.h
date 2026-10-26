
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONINTERFACE_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomTreeNodeInterface.h"

class ProfileActionScriptConditionInterface: public ProfileActionScriptNodeInterface, public CustomTreeNodeInterface, public ProfileActionScriptItemInterface {

    void addProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface);

    void removeProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface);

                //@Throws(Exception.constructor)
            
    bool shouldProcess(Long frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONINTERFACE_H
