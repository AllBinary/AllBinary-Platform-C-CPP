
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceConsumer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/module/InputAutomationModuleServiceInterface.h>

      
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/osgi/InputAutomationModuleOSGIServiceVisitor.h"


InputAutomationModuleServiceConsumer::InputAutomationModuleServiceConsumer(BundleContext* bundleContext) : InputAutomationServiceConsumer(Class::forType(typeid(InputAutomationModuleServiceInterface))->getName(), bundleContext, new InputAutomationModuleOSGIServiceVisitor()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_CPP
