
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class InputAutomationModuleFactoryInterface;
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h>
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GenericModuleFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationGenericModuleServiceFactory: public InputAutomationModuleServiceFactory {

    private: static InputAutomationGenericModuleServiceFactory* inputAutomationGenericModuleServiceFactory_owner();
    private: static InputAutomationGenericModuleServiceFactory* inputAutomationGenericModuleServiceFactory;

    public: static InputAutomationGenericModuleServiceFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

public: InputAutomationGenericModuleServiceFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h>)
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/GenericModuleFactory.h")
#include "org/allbinary/input/automation/module/generic/GenericModuleFactory.h"
#endif

        #endif
    
