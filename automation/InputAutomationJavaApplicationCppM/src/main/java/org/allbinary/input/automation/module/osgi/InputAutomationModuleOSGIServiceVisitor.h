
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEOSGISERVICEVISITOR_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEOSGISERVICEVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class InputAutomationModuleService;
class InputAutomationJFrame;
class InputAutomationConfigurationUtil;
class InputAutomationModuleFactoryInterface;
class LogUtil;
class OSGIServiceInterface;
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleOSGIServiceVisitor
            : public virtual Object
        , public OSGIServiceVisitorInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

public: InputAutomationModuleOSGIServiceVisitor();

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }

    public: bool visit(OSGIServiceInterface* osgiServiceInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEOSGISERVICEVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEOSGISERVICEVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONMODULEOSGISERVICEVISITOR_H_COMPLETE
        #if __has_include(<bundle/input/automation/module/InputAutomationModuleService.h>)
#include <bundle/input/automation/module/InputAutomationModuleService.h>
#endif
#if __has_include(<org/allbinary/input/automation/InputAutomationJFrame.h>)
#include <org/allbinary/input/automation/InputAutomationJFrame.h>
#endif
#if __has_include(<org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h>)
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIServiceInterface.h>)
#include <org/allbinary/osgi/OSGIServiceInterface.h>
#endif
#if __has_include(<org/allbinary/osgi/OSGIServiceVisitorInterface.h>)
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
