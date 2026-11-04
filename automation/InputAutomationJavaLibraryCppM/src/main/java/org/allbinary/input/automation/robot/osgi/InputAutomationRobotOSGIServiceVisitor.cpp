
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTOSGISERVICEVISITOR_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTOSGISERVICEVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotOSGIServiceVisitor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <bundle/input/automation/robot/InputAutomationRobotServiceInterface.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/osgi/OSGIServiceInterface.h>

      
#include <org/allbinary/osgi/OSGIServiceVisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InputAutomationRobotOSGIServiceVisitor::InputAutomationRobotOSGIServiceVisitor() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto InputAutomationRobotOSGIServiceVisitor::visit(Object* anyType) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->visit(dynamic_cast<OSGIServiceInterface*>(anyType)););
    
}


    auto InputAutomationRobotOSGIServiceVisitor::visit(OSGIServiceInterface* osgiServiceInterface) -> bool{

        try {
            this->logUtil->putF(this->commonStrings->START, this, "visit");
    

    InputAutomationRobotServiceInterface* inputAutomationRobotServiceInterface = dynamic_cast<InputAutomationRobotServiceInterface*>(osgiServiceInterface);;
    

    std::vector<InputRobotInterface*> inputRobotInterfaceArray = inputAutomationRobotServiceInterface->getInputRobotInterfaceArray();;
    




                        for (
    int32_t index = 0;index < inputRobotInterfaceArray.size(); index++)
        {
this->logUtil->putF(JavaString::valueOf("Adding: ") +JavaString::valueOf(inputRobotInterfaceArray[index]->getName()), this, "visit");
    
InputRobotFactory::getInstance()->add(inputRobotInterfaceArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "visit", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ROBOT_OSGI_INPUTAUTOMATIONROBOTOSGISERVICEVISITOR_CPP
