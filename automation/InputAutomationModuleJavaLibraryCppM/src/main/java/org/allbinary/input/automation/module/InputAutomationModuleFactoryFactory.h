
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
class HelpSet;
class HelpSetEvent;
class HelpSetListener;
class ListModel;
class InputAutomationModuleConfiguration;
class InputAutomationModuleConfigurations;
class StdUtil;
class LogUtil;
class JavaHelpSetNotifier;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DefaultListModelHelper;
class InputAutomationModuleFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleFactoryFactory
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* hashMap;

    private: DefaultListModelHelper* defaultListModelHelper;

    private: HelpSetListener* helpSetListenerInterface;

public: InputAutomationModuleFactoryFactory(InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface);

    private: void add(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);

    public: ListModel* getListModel();

    public: InputAutomationModuleFactoryInterface* getInstance(std::string moduleName);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H_COMPLETE
        #if __has_include(<java/util/Collection.h>)
#include <java/util/Collection.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Iterator.h>)
#include <java/util/Iterator.h>
#endif
#if __has_include(<javax/help/HelpSet.h>)
#include <javax/help/HelpSet.h>
#endif
#if __has_include(<javax/help/event/HelpSetEvent.h>)
#include <javax/help/event/HelpSetEvent.h>
#endif
#if __has_include(<javax/help/event/HelpSetListener.h>)
#include <javax/help/event/HelpSetListener.h>
#endif
#if __has_include(<javax/swing/ListModel.h>)
#include <javax/swing/ListModel.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/help/JavaHelpSetNotifier.h>)
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/module/DefaultListModelHelper.h")
#include "org/allbinary/input/automation/module/DefaultListModelHelper.h"
#endif
#if __has_include("org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h")
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#endif

        #endif
    
