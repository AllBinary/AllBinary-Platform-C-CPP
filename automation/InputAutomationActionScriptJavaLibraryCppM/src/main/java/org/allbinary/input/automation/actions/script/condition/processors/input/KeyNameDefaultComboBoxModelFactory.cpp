
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyNameDefaultComboBoxModelFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"


KeyNameDefaultComboBoxModelFactory::KeyNameDefaultComboBoxModelFactory(){
}


    auto KeyNameDefaultComboBoxModelFactory::getInstance() -> DefaultComboBoxModel*{

    DefaultComboBoxModel* defaultComboBoxModel = new DefaultComboBoxModel();;
    

    std::vector<int32_t> keyArray = KeySingletonFactory::getArray();;
    




                        for (
    int32_t index = 0;index < keyArray.size(); index++)
        {

    std::string keyAsString = KeyEvent::getKeyText(keyArray[index]);;
    
defaultComboBoxModel->addElement(keyAsString);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultComboBoxModel;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYNAMEDEFAULTCOMBOBOXMODELFACTORY_CPP
