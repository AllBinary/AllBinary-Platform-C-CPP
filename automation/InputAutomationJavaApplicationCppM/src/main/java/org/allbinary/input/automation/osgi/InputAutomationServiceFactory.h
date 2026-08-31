
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/input/automation/InputAutomationJFrame.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationServiceFactory
            : public Object
        : public ServiceFactory {
        

    private: static const inputAutomationServiceFactory: InputAutomationServiceFactory = new InputAutomationServiceFactory();

    public static InputAutomationServiceFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

private constructor ();

    public any getService(Bundle bundle, ServiceRegistration registration);

    public ungetService(Bundle bundle, ServiceRegistration registration, any = {} service);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_H
