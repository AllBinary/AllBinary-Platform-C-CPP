
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"

class TestModuleFactory: public AbstractInputAutomationFactory {

    private: static std::string NAME = "Test New Game" +InputAutomationModuleData::MODULE_NAME_END;

    private: BlankModuleConfigurationJPanel blankModuleConfigurationJPanel;

public: TestModuleFactory();

    public: std::string getName();

    public: JPanel getConfigurationJPanel();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: RunnableInterface getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H
