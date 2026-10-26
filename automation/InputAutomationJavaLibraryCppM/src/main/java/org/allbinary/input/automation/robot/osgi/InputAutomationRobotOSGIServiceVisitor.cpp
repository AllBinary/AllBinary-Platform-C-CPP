
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
        
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationRobotOSGIServiceVisitor
            : public Object
        : public OSGIServiceVisitorInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: InputAutomationRobotOSGIServiceVisitor(){
}


    public: Object* visit(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visit(*dynamic_cast<OSGIServiceInterface*>(anyType));;
    
}


    public: Boolean visit(OSGIServiceInterface osgiServiceInterface){

        try {
            this->logUtil.putF(this->commonStrings.START, this, "visit");
    

    InputAutomationRobotServiceInterface inputAutomationRobotServiceInterface = osgiServiceInterface;;
    

    std::vector<InputRobotInterface> inputRobotInterfaceArray = inputAutomationRobotServiceInterface.getInputRobotInterfaceArray();;
    




                        for (
    int32_t index = 0;index < inputRobotInterfaceArray.size(); index++)
        {
this->logUtil.putF("Adding: " +inputRobotInterfaceArray[index].getName(), this, "visit");
    
InputRobotFactory::getInstance().add(inputRobotInterfaceArray[index]);
    
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

            

