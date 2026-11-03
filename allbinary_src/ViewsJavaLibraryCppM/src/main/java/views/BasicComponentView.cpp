
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
        



        #ifndef VIEWS_BASICCOMPONENTVIEW_CPP
        #define VIEWS_BASICCOMPONENTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/BasicComponentView.h"
        

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

      
#include <org/allbinary/logic/visual/transform/BasicTransformer.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicComponentView::BasicComponentView(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setTransformInfoInterface(transformInfoInterface);
    
this->setTransformDocumentInterface(TransformDocumentFactory::getInstance());
    
}


    auto BasicComponentView::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NO_TYPE;
    
}


    auto BasicComponentView::getTransformDocumentInterface() -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformDocumentInterface;
    
}


    auto BasicComponentView::setTransformDocumentInterface(TransformDocumentInterface* transformDocumentInterface) -> void{
this->transformDocumentInterface= transformDocumentInterface;
    
}


    auto BasicComponentView::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoInterface;
    
}


    auto BasicComponentView::setTransformInfoInterface(TransformInfoInterface* transformInfoInterface) -> void{
this->transformInfoInterface= transformInfoInterface;
    
}


    auto BasicComponentView::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformDocumentInterface->getDoc();;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicComponentView::getDoc() -> Document*{

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
            
    auto BasicComponentView::view() -> std::string{

        try {
            
    std::string success = XmlDocumentHelper::toString(this->getDoc());;
    

    std::string result = (new BasicTransformer(this->abeClientInformation, this->getTransformInfoInterface()))->translate(success);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_BASICCOMPONENTVIEW_CPP
