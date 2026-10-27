
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/game/test/TestModuleFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/game/test/JPanel.h"

std::string TestModuleFactory::NAME = JavaString::valueOf("Test New Game") +JavaString::valueOf(InputAutomationModuleData::MODULE_NAME_END);

TestModuleFactory::TestModuleFactory() : AbstractInputAutomationFactory(NAME, new BlankModuleConfigurationJPanel()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TestModuleFactory::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TestModuleFactory::NAME;
    
}


    auto TestModuleFactory::getConfigurationJPanel() -> JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->blankModuleConfigurationJPanel;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto TestModuleFactory::getInstance() -> RunnableInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_CPP
