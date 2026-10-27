
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICMODULEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICMODULEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>
class InputAutomationActionInterface;
class InputAutomationModuleData;
class GenericModuleConfigurationJPanel;
class GenericProfile;
class NoImageComparatorConstraints;
class NoMotionRectangleConstraints;
class RunnableInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GenericInputAutomationAction;
class GenericInputAutomationWorker;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericModuleFactory: public AbstractInputAutomationFactory {

    private: static std::string NAME;

public: GenericModuleFactory();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: RunnableInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICMODULEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICMODULEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_GENERICMODULEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>)
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationActionInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleData.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationJPanel.h>)
#include <org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationJPanel.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/constraints/NoImageComparatorConstraints.h>)
#include <org/allbinary/input/automation/module/generic/constraints/NoImageComparatorConstraints.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/constraints/NoMotionRectangleConstraints.h>)
#include <org/allbinary/input/automation/module/generic/constraints/NoMotionRectangleConstraints.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/GenericInputAutomationAction.h")
#include "org/allbinary/input/automation/module/generic/GenericInputAutomationAction.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/GenericInputAutomationWorker.h")
#include "org/allbinary/input/automation/module/generic/GenericInputAutomationWorker.h"
#endif

        #endif
    
