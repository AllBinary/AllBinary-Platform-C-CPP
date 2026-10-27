
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/GenericModuleFactory.h"

class InputAutomationGenericModuleServiceFactory: public InputAutomationModuleServiceFactory {

    private: static InputAutomationGenericModuleServiceFactory* inputAutomationGenericModuleServiceFactory() { static std::unique_ptr<InputAutomationGenericModuleServiceFactory> value(new InputAutomationGenericModuleServiceFactory()); return value.get(); }

    public: static InputAutomationGenericModuleServiceFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputAutomationGenericModuleServiceFactory::inputAutomationGenericModuleServiceFactory();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

public: InputAutomationGenericModuleServiceFactory(){

        try {
            
    std::vector<InputAutomationModuleFactoryInterface*> inputAutomationModuleInterfaceArray = std::vector<InputAutomationModuleFactoryInterface*>(1);;
    
inputAutomationModuleInterfaceArray[0]= new GenericModuleFactory();
    
this->setInputAutomationModuleInterfaceArray(inputAutomationModuleInterfaceArray);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, &e);
    
}

}


};

            

