
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/module/InputAutomationModuleServiceInterface.h>

      
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/osgi/InputAutomationModuleOSGIServiceVisitor.h"

class InputAutomationModuleServiceConsumer: public InputAutomationServiceConsumer {

public: InputAutomationModuleServiceConsumer(BundleContext* bundleContext) : InputAutomationServiceConsumer(InputAutomationModuleServiceInterface.constructor.getName(), bundleContext, new InputAutomationModuleOSGIServiceVisitor()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

