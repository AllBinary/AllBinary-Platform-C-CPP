
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
        



        #ifndef VIEWS_ADMIN_USER_EDITVALIDATIONUSERVIEW_CPP
        #define VIEWS_ADMIN_USER_EDITVALIDATIONUSERVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/user/EditValidationUserView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/username/UserName.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/user/UserView.h"


EditValidationUserView::EditValidationUserView(TransformInfoInterface* transformInfoInterface) : UserView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    HttpServletRequest* httpServletRequest = dynamic_cast<HttpServletRequest*>(this->getPageContext()->getRequest());;
    

    HashMap<Object*, Object*>* hashMap = (new RequestParams(httpServletRequest))->toHashMap();;
    
this->userName= (new UserName(hashMap))->get();
    
}


    auto EditValidationUserView::isValid() -> bool{

        try {
            
                        if(UserName::getInstance()->isValid(this->userName) == Boolean::TRUE)
                        
                                    {
                                    this->user= UserEntityFactory::getInstance()->getUser(this->userName);
    

                        if(this->user == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->user->isValid();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    auto EditValidationUserView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

                        if(UserName::getInstance()->isValid(this->userName) == Boolean::TRUE)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("User Name is valid", this, "validationInfo()");
    

                                    }
                                
this->user= UserEntityFactory::getInstance()->getUser(this->userName);
    

                        if(this->user == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("User does not exist.<br />");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                                    }
                                

                                    }
                                
                        else {
                            stringBuffer->append("User Name is not valid.<br />");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                        }
                            

                        if(this->user->isValid() == Boolean::FALSE)
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("User exists but is invalid - Probably manually modified", this, "validationInfo()");
    

                                    }
                                
stringBuffer->append("User data is not valid - Please call administrator.<br />");
    
stringBuffer->append(this->user->validationInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    auto EditValidationUserView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto EditValidationUserView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //VIEWS_ADMIN_USER_EDITVALIDATIONUSERVIEW_CPP
