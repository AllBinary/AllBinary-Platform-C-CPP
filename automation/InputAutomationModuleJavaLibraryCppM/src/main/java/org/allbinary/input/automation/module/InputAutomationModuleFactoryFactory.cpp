
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: hashMap: HashMap<any, any>;

    private: defaultListModelHelper: DefaultListModelHelper;

    private: helpSetListenerInterface: HelpSetListener;

public constructor (InputAutomationModuleConfigurations inputAutomationModuleConfigurations, HelpSetListener helpSetListenerInterface){

            super();
        this.helpSetListenerInterface= helpSetListenerInterface;
    
this.defaultListModelHelper= new DefaultListModelHelper();
    
this.hashMap= new HashMap<any, any>();
    

    collection: Collection = inputAutomationModuleConfigurations!.getHashMap()!.values()!;;
    

    iterator: Iterator = collection.iterator()!;;
    

    inputAutomationModuleConfiguration: InputAutomationModuleConfiguration;;
    

        while(iterator.hasNext())
        {
inputAutomationModuleConfiguration= iterator.next() as InputAutomationModuleConfiguration;
    
this.add(inputAutomationModuleConfiguration);
    
}

this.defaultListModelHelper!.initDefaultModelList();
    
this.logUtil!.putF("Loaded " +this.hashMap!.size() +"/" +this.defaultListModelHelper!.getListModel()!.getSize() +" Input Automation Modules", this, "Contructor");
    
}


    add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration){

    inputAutomationModuleInterface: InputAutomationModuleFactoryInterface = inputAutomationModuleConfiguration!.getInputAutomationModuleInterface()!;;
    
this.hashMap!.put(inputAutomationModuleConfiguration!.getName(), inputAutomationModuleInterface);
    
this.defaultListModelHelper!.add(inputAutomationModuleConfiguration!.getName());
    

    helpSet: HelpSet = inputAutomationModuleInterface!.getHelpSet()!;;
    

                        if(!JavaHelpSetNotifier.isNotified(helpSet))
                        
                                    {
                                    
    helpSetEvent: HelpSetEvent = new HelpSetEvent(this, helpSet, HelpSetEvent.HELPSET_ADDED);;
    
this.helpSetListenerInterface!.helpSetAdded(helpSetEvent);
    

                                    }
                                
}


    public ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.defaultListModelHelper!.getListModel() as ListModel;
    
}


    public InputAutomationModuleFactoryInterface getInstance(string moduleName){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF("Getting Module: " +moduleName, this, commonStrings!.GET_INSTANCE);
    

    inputAutomationModuleFactoryInterface: InputAutomationModuleFactoryInterface = this.hashMap!.get(moduleName) as InputAutomationModuleFactoryInterface;;
    

                        if(inputAutomationModuleFactoryInterface == 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF("Module: " +moduleName +" was null", this, commonStrings!.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputAutomationModuleFactoryInterface;
    
}


};

            

