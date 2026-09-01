
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

            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericModuleFactory.h"

class InputAutomationGenericModuleServiceFactory: public InputAutomationModuleServiceFactory {

    private: static InputAutomationGenericModuleServiceFactory inputAutomationGenericModuleServiceFactory = InputAutomationGenericModuleServiceFactory();

    public: static InputAutomationGenericModuleServiceFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: InputAutomationGenericModuleServiceFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_INPUTAUTOMATIONGENERICMODULESERVICEFACTORY_H
