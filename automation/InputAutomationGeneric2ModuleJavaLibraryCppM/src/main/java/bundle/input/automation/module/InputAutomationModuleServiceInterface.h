
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICEINTERFACE_H
        #define BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICEINTERFACE_H

            #include <vector>
        
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationModuleServiceInterface: public OSGIServiceInterface {

    std::vector<InputAutomationModuleFactoryInterface> getInputAutomationModuleInterfaceArray();

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULESERVICEINTERFACE_H
