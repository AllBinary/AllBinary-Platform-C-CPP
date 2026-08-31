
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
        



#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>

      
#include <org/allbinary/osgi/service/InputAutomationServiceConsumer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationRobotOSGIServiceVisitor.h"

class InputAutomationRobotServiceConsumer: public InputAutomationServiceConsumer {
        

public constructor (BundleContext bundleContext){
            super(InputAutomationRobotServiceInterface.constructor.toString()!, bundleContext, new InputAutomationRobotOSGIServiceVisitor());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

