
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/swing.h>
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>
class InputAutomationModuleData;
class BlankModuleConfigurationJPanel;
class RunnableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JPanel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestModuleFactory: public AbstractInputAutomationFactory {

    private: static std::string NAME;

    private: BlankModuleConfigurationJPanel* blankModuleConfigurationJPanel;

public: TestModuleFactory();

    public: std::string getName();

    public: JPanel* getConfigurationJPanel();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: RunnableInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GAME_TEST_TESTMODULEFACTORY_H_COMPLETE
        #if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>)
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleData.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h>)
#include <org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include("org/allbinary/input/automation/module/game/test/JPanel.h")
#include "org/allbinary/input/automation/module/game/test/JPanel.h"
#endif

        #endif
    
