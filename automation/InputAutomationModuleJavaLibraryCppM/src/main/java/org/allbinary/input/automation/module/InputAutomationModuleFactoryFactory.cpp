
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/InputAutomationModuleFactoryFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Collection.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Iterator.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/help/event/HelpSetEvent.h>

      
#include <javax/help/event/HelpSetListener.h>

      
#include <javax/swing/ListModel.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/DefaultListModelHelper.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"


InputAutomationModuleFactoryFactory::InputAutomationModuleFactoryFactory(InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface) : logUtil(LogUtil::getInstance()){
this->helpSetListenerInterface= helpSetListenerInterface;
    
this->defaultListModelHelper= new DefaultListModelHelper();
    
this->hashMap= StdUtil::getInstance()->createHashMap();
    

    Collection* collection = inputAutomationModuleConfigurations->getHashMap()->values();;
    

    Iterator* iterator = collection->iterator();;
    

    InputAutomationModuleConfiguration* inputAutomationModuleConfiguration;;
    

        while(iterator->hasNext())
        {
inputAutomationModuleConfiguration= dynamic_cast<InputAutomationModuleConfiguration*>(iterator->next());
    
this->add(inputAutomationModuleConfiguration);
    
}

this->defaultListModelHelper->initDefaultModelList();
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Loaded ") +JavaString::valueOf(this->hashMap->size())) +JavaString::valueOf("/")) +JavaString::valueOf(this->defaultListModelHelper->getListModel()->getSize())) +JavaString::valueOf(" Input Automation Modules"), this, "Contructor");
    
}


    auto InputAutomationModuleFactoryFactory::add(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) -> void{

    InputAutomationModuleFactoryInterface* inputAutomationModuleInterface = inputAutomationModuleConfiguration->getInputAutomationModuleInterface();;
    
this->hashMap->put(inputAutomationModuleConfiguration->getName(), inputAutomationModuleInterface);
    
this->defaultListModelHelper->add(inputAutomationModuleConfiguration->getName());
    

    HelpSet* helpSet = inputAutomationModuleInterface->getHelpSet();;
    

                        if(!JavaHelpSetNotifier::isNotified(helpSet))
                        
                                    {
                                    
    HelpSetEvent* helpSetEvent = new HelpSetEvent(this, helpSet, HelpSetEvent::HELPSET_ADDED);;
    
this->helpSetListenerInterface->helpSetAdded(helpSetEvent);
    

                                    }
                                
}


    auto InputAutomationModuleFactoryFactory::getListModel() -> ListModel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ListModel*>(this->defaultListModelHelper->getListModel());
    
}


    auto InputAutomationModuleFactoryFactory::getInstance(std::string moduleName) -> InputAutomationModuleFactoryInterface*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf("Getting Module: ") +JavaString::valueOf(moduleName), this, commonStrings->GET_INSTANCE);
    

    InputAutomationModuleFactoryInterface* inputAutomationModuleFactoryInterface = dynamic_cast<InputAutomationModuleFactoryInterface*>(this->hashMap->get(moduleName));;
    

                        if(inputAutomationModuleFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Module: ") +JavaString::valueOf(moduleName)) +JavaString::valueOf(" was null"), this, commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationModuleFactoryInterface;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYFACTORY_CPP
