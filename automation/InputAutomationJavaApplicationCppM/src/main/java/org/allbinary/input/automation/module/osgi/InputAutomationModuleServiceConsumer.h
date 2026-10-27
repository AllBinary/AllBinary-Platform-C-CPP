
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BundleContext;
class InputAutomationModuleServiceInterface;
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationModuleOSGIServiceVisitor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleServiceConsumer: public InputAutomationServiceConsumer {

public: InputAutomationModuleServiceConsumer(BundleContext* bundleContext);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H_COMPLETE
        #if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<bundle/input/automation/module/InputAutomationModuleServiceInterface.h>)
#include <bundle/input/automation/module/InputAutomationModuleServiceInterface.h>
#endif
#if __has_include(<org/allbinary/osgi/service/InputAutomationServiceConsumer.h>)
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>
#endif
#if __has_include("org/allbinary/input/automation/module/osgi/InputAutomationModuleOSGIServiceVisitor.h")
#include "org/allbinary/input/automation/module/osgi/InputAutomationModuleOSGIServiceVisitor.h"
#endif

        #endif
    
