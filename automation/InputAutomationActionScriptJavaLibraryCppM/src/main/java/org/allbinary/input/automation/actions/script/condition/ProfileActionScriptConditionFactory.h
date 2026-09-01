
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptConditionInterface.h"
#include "ColorAtActionScriptConditionData.h"
#include "TimeIntervalActionScriptConditionData.h"
#include "AlwaysActionScriptConditionData.h"
#include "AlwaysActionScriptCondition.h"
#include "TimeIntervalActionScriptCondition.h"
#include "ColorAtActionScriptCondition.h"

class ProfileActionScriptConditionFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptConditionInterface getInstance(Node node);

private: ProfileActionScriptConditionFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROFILEACTIONSCRIPTCONDITIONFACTORY_H
