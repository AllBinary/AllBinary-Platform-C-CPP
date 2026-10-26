
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <bundle/input/automation/module/InputAutomationModuleService.h>

      
#include <org/allbinary/input/automation/InputAutomationJFrame.h>

      
#include <org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationModuleOSGIServiceVisitor
            : public Object
        : public OSGIServiceVisitorInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

public: InputAutomationModuleOSGIServiceVisitor(){
}


    public: Object* visit(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visit(*dynamic_cast<OSGIServiceInterface*>(anyType));;
    
}


    public: Boolean visit(OSGIServiceInterface osgiServiceInterface){

        try {
            
    InputAutomationModuleService inputAutomationModuleService = osgiServiceInterface;;
    

    std::vector<InputAutomationModuleFactoryInterface> inputAutomationModuleInterfaceArray = inputAutomationModuleService.getInputAutomationModuleInterfaceArray();;
    




                        for (
    int32_t index = 0;index < inputAutomationModuleInterfaceArray.size(); index++)
        {
InputAutomationJFrame::getInstance().onAdd(InputAutomationConfigurationUtil::getChangeEvent(inputAutomationModuleInterfaceArray[index]));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "visit", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


};

            

