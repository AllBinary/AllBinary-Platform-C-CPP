
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Bundle;
#include <org/osgi/framework/ServiceFactory.h>
class ServiceRegistration;
class InputAutomationModuleService;
class InputAutomationModuleFactoryInterface;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleServiceFactory
            : public virtual Object
        , public virtual ServiceFactory {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray;

public: InputAutomationModuleServiceFactory();

    public: Object* getService(Bundle* bundle, ServiceRegistration* registration);

    public: void ungetService(Bundle* bundle, ServiceRegistration* registration, Object* service);
    public: void ungetService(Bundle* bundle, ServiceRegistration* registration, const std::string& service) { return ungetService(bundle, registration, JavaString::box(service)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void ungetService(Bundle* bundle, ServiceRegistration* registration, BoxValue service) { return ungetService(bundle, registration, JavaBoxes::toObject(service)); }

    public: std::vector<InputAutomationModuleFactoryInterface*> getInputAutomationModuleInterfaceArray();

    public: void setInputAutomationModuleInterfaceArray(std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULESERVICEFACTORY_H_COMPLETE
        #if __has_include(<org/osgi/framework/Bundle.h>)
#include <org/osgi/framework/Bundle.h>
#endif
#if __has_include(<org/osgi/framework/ServiceFactory.h>)
#include <org/osgi/framework/ServiceFactory.h>
#endif
#if __has_include(<org/osgi/framework/ServiceRegistration.h>)
#include <org/osgi/framework/ServiceRegistration.h>
#endif
#if __has_include(<bundle/input/automation/module/InputAutomationModuleService.h>)
#include <bundle/input/automation/module/InputAutomationModuleService.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
