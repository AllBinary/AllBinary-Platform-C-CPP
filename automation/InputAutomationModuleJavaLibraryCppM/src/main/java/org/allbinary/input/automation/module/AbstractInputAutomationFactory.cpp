
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/AbstractInputAutomationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/net/URL.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/input/automation/module/JPanel.h"


AbstractInputAutomationFactory::AbstractInputAutomationFactory(std::string name, JPanel* jPanel, HelpSet* helpSet){
this->name= name;
    
this->jPanel= jPanel;
    
this->helpSet= helpSet;
    
}


AbstractInputAutomationFactory::AbstractInputAutomationFactory(std::string name, JPanel* jPanel){
this->name= name;
    
this->jPanel= jPanel;
    

    URL* url = this->getClass()->getResource("/help/Help.hs");;
    
this->helpSet= JavaHelpUtil::getInstance()->getHelpSet(url);
    
}


    auto AbstractInputAutomationFactory::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto AbstractInputAutomationFactory::getConfigurationJPanel() -> JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jPanel;
    
}


    auto AbstractInputAutomationFactory::getHelpSet() -> HelpSet*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->helpSet;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_CPP
