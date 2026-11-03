
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/HttpContextView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/ContextTransformer.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <views/HttpComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HttpContextView::HttpContextView(TransformInfoInterface* transformInfoInterface) : HttpComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setTransformDocumentInterface(TransformHttpRequestDocumentFactory::getInstance(this->getPageContext(), this->getWeblisketSession()));
    
}


                //@Throws(Exception.constructor)
            
    auto HttpContextView::view() -> std::string{

        try {
            this->toXmlDoc();
    

    std::string success = XmlDocumentHelper::toString(this->getDoc());;
    

    std::string result = (new ContextTransformer(this->abeClientInformation, this->getTransformInfoInterface()))->translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_CPP
