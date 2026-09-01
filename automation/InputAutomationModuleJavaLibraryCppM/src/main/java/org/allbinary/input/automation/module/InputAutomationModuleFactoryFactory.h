
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Collection.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Iterator.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/help/event/HelpSetEvent.h>

      
#include <javax/help/event/HelpSetListener.h>

      
#include <javax/swing/ListModel.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultListModelHelper.h"
#include "InputAutomationModuleFactoryInterface.h"

class InputAutomationModuleFactoryFactory
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<any, any> hashMap;

    private: DefaultListModelHelper defaultListModelHelper;

    private: HelpSetListener helpSetListenerInterface;

public: InputAutomationModuleFactoryFactory(InputAutomationModuleConfigurations inputAutomationModuleConfigurations, HelpSetListener helpSetListenerInterface);

    private: void add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration);

    public: ListModel getListModel();

    public: InputAutomationModuleFactoryInterface getInstance(std::string moduleName);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_H
