
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h"

class ProfileActionScriptInputFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptInputInterface* getInstance(Node* node);

private: ProfileActionScriptInputFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_PROFILEACTIONSCRIPTINPUTFACTORY_H
