
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEDEFAULTCOMBOBOXMODELFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEDEFAULTCOMBOBOXMODELFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/InputAutomationTypeDefaultComboBoxModelFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Set.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"


InputAutomationTypeDefaultComboBoxModelFactory::InputAutomationTypeDefaultComboBoxModelFactory(){
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationTypeDefaultComboBoxModelFactory::getInstance() -> DefaultComboBoxModel*{

    DefaultComboBoxModel* defaultComboBoxModel = new DefaultComboBoxModel();;
    

    Set* set = InputRobotFactory::getInstance()->get()->keySet();;
    

    std::vector<Object*> nameArray = set->toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
defaultComboBoxModel->addElement(nameArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultComboBoxModel;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEDEFAULTCOMBOBOXMODELFACTORY_CPP
