
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/net/URL.h>
class HelpSet;
#include <javax/swing.h>
class JavaHelpUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
class JPanel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbstractInputAutomationFactory: public InputAutomationModuleFactoryInterface {

    private: std::string name;

    private: JPanel* jPanel;

    private: HelpSet* helpSet;

public: AbstractInputAutomationFactory(std::string name, JPanel* jPanel, HelpSet* helpSet);

public: AbstractInputAutomationFactory(std::string name, JPanel* jPanel);

    public: std::string getName();

    public: JPanel* getConfigurationJPanel();

    public: HelpSet* getHelpSet();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H_COMPLETE
        #if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/logic/java/help/JavaHelpUtil.h>)
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>
#endif
#if __has_include("org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h")
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/JPanel.h")
#include "org/allbinary/input/automation/module/JPanel.h"
#endif

        #endif
    
