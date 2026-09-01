
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

public: InputAutomationModuleFactoryFactory(InputAutomationModuleConfigurations inputAutomationModuleConfigurations, HelpSetListener helpSetListenerInterface){
this->helpSetListenerInterface= helpSetListenerInterface;
    
this->defaultListModelHelper= DefaultListModelHelper();
    
this->hashMap= HashMap<any, any>();
    

    Collection collection = inputAutomationModuleConfigurations.getHashMap().values();;
    

    Iterator iterator = collection.iterator();;
    

    InputAutomationModuleConfiguration inputAutomationModuleConfiguration;;
    

        while(iterator.hasNext())
        {
inputAutomationModuleConfiguration= iterator.next() as InputAutomationModuleConfiguration;
    
this->add(inputAutomationModuleConfiguration);
    
}

this->defaultListModelHelper.initDefaultModelList();
    
this->logUtil.putF("Loaded " +this->hashMap.size() +"/" +this->defaultListModelHelper.getListModel().getSize() +" Input Automation Modules", this, "Contructor");
    
}


    private: void add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){

    InputAutomationModuleFactoryInterface inputAutomationModuleInterface = inputAutomationModuleConfiguration.getInputAutomationModuleInterface();;
    
this->hashMap.put(inputAutomationModuleConfiguration.getName(), inputAutomationModuleInterface);
    
this->defaultListModelHelper.add(inputAutomationModuleConfiguration.getName());
    

    HelpSet helpSet = inputAutomationModuleInterface.getHelpSet();;
    

                        if(!JavaHelpSetNotifier::isNotified(helpSet))
                        
                                    {
                                    
    HelpSetEvent helpSetEvent = HelpSetEvent(this, helpSet, HelpSetEvent::HELPSET_ADDED);;
    
this->helpSetListenerInterface.helpSetAdded(helpSetEvent);
    

                                    }
                                
}


    public: ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultListModelHelper.getListModel() as ListModel;
    
}


    public: InputAutomationModuleFactoryInterface getInstance(std::string moduleName){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF("Getting Module: " +moduleName, this, commonStrings.GET_INSTANCE);
    

    InputAutomationModuleFactoryInterface inputAutomationModuleFactoryInterface = this->hashMap.get(moduleName) as InputAutomationModuleFactoryInterface;;
    

                        if(inputAutomationModuleFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("Module: " +moduleName +" was null", this, commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationModuleFactoryInterface;
    
}


};

            

