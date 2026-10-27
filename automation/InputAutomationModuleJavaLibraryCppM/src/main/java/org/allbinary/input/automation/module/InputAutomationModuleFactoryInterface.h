
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class HelpSet;
#include <javax/swing.h>
class RunnableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JPanel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleFactoryInterface
            : public virtual Object
         {


            
    public: InputAutomationModuleFactoryInterface();
        
    public: std::string getName();

    public: JPanel* getConfigurationJPanel();

    public: HelpSet* getHelpSet();

                //@Throws(Exception.constructor)
            
    public: RunnableInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include("org/allbinary/input/automation/module/JPanel.h")
#include "org/allbinary/input/automation/module/JPanel.h"
#endif

        #endif
    
