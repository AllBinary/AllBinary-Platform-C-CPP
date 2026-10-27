
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionData.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionData.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"

class ProfileActionScriptConditionFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptConditionInterface* getInstance(Node* node){

    ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = 
                null
            ;;
    

                        if(DomSearchHelper::getNodeNoThrow(ColorAtActionScriptConditionData::NAME, node->getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptConditionInterface= new ColorAtActionScriptCondition(node);
    

                                    }
                                
                             else 
                        if(DomSearchHelper::getNodeNoThrow(TimeIntervalActionScriptConditionData::NAME, node->getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptConditionInterface= new TimeIntervalActionScriptCondition(node);
    

                                    }
                                
                             else 
                        if(DomSearchHelper::getNodeNoThrow(AlwaysActionScriptConditionData::NAME, node->getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptConditionInterface= new AlwaysActionScriptCondition(node);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return profileActionScriptConditionInterface;
    
}


private: ProfileActionScriptConditionFactory(){
}


};

            

