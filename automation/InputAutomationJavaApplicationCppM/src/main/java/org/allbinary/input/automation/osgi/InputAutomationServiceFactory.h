
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/ServiceFactory.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/input/automation/InputAutomationJFrame.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationServiceFactory
            : public Object
        , public ServiceFactory {

    private: static InputAutomationServiceFactory* inputAutomationServiceFactory() { static std::unique_ptr<InputAutomationServiceFactory> value(new InputAutomationServiceFactory()); return value.get(); }

    public: static InputAutomationServiceFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

private: InputAutomationServiceFactory();

    public: Object* getService(Bundle* bundle, ServiceRegistration* registration);

    public: void ungetService(Bundle* bundle, ServiceRegistration* registration, Object* service);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_INPUTAUTOMATIONSERVICEFACTORY_H
