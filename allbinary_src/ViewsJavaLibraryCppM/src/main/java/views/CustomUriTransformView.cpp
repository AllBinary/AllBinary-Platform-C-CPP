
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
        



        #ifndef VIEWS_CUSTOMURITRANSFORMVIEW_CPP
        #define VIEWS_CUSTOMURITRANSFORMVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/CustomUriTransformView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CustomUriTransformView::CustomUriTransformView(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setTransformInfoInterface(transformInfoInterface);
    
this->setTransformDocumentInterface(TransformDocumentFactory::getInstance());
    
}


    auto CustomUriTransformView::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_TYPE;
    
}


    auto CustomUriTransformView::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformInfoInterface;
    
}


    auto CustomUriTransformView::setTransformInfoInterface(TransformInfoInterface* transformInfoInterface) -> void{
this->transformInfoInterface= transformInfoInterface;
    
}


    auto CustomUriTransformView::getTransformDocumentInterface() -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface;
    
}


    auto CustomUriTransformView::setTransformDocumentInterface(TransformDocumentInterface* transformDocumentInterface) -> void{
this->transformDocumentInterface= transformDocumentInterface;
    
}


    auto CustomUriTransformView::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformDocumentInterface->getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomUriTransformView::getDoc() -> Document*{

    Document* document = this->getTransformInfoInterface()->getDataDocument();;
    

    Node* dataNode = this->getTransformDocumentInterface()->getDoc()->importNode(document->getFirstChild(), true);;
    

                        if(dataNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->getTransformDocumentInterface()->getBaseNode()->appendChild(dataNode);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTransformDocumentInterface()->getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    auto CustomUriTransformView::view() -> std::string{

        try {
            
    std::string success = XmlDocumentHelper::toString(this->getDoc());;
    

    std::string result = (new TransformInfoCustomUriTransformer(this->abeClientInformation, this->getTransformInfoInterface()))->translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_CUSTOMURITRANSFORMVIEW_CPP
