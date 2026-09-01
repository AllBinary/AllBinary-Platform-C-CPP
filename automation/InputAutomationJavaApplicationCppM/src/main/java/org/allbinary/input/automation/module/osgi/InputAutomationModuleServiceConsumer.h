
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

#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/module/InputAutomationModuleServiceInterface.h>

      
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationModuleOSGIServiceVisitor.h"

class InputAutomationModuleServiceConsumer: public InputAutomationServiceConsumer {

public: InputAutomationModuleServiceConsumer(BundleContext bundleContext);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICECONSUMER_H
