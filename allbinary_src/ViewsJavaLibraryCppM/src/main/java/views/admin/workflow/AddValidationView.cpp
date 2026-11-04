
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
        



        #ifndef VIEWS_ADMIN_WORKFLOW_ADDVALIDATIONVIEW_CPP
        #define VIEWS_ADMIN_WORKFLOW_ADDVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/workflow/AddValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/data/tables/workflow/WorkFlowEntityFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/control/workflow/NewWorkFlowFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/workflow/WorkFlowView.h"


AddValidationView::AddValidationView(TransformInfoInterface* transformInfoInterface) : WorkFlowView(transformInfoInterface), logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->workFlowInterface= NewWorkFlowFactory::getInstance()->getInstance(this->abeClientInformation, this->getPropertiesHashMap(), this->getPageContext());
    
}


    auto AddValidationView::isValid() -> bool{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto AddValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(WorkFlowEntityFactory::getInstance()->create2()->get(this->workFlowInterface->getName(), this->getTransformInfoInterface()->getStoreName()) != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Workflow already exist", this, "validationInfo()");
    

                                    }
                                
stringBuffer->append("The WorkFlow name you selected is already in use.<br/>  Please select another Name.<br />");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Getting Validation Info";
    
}

}


    auto AddValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto AddValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_ADMIN_WORKFLOW_ADDVALIDATIONVIEW_CPP
