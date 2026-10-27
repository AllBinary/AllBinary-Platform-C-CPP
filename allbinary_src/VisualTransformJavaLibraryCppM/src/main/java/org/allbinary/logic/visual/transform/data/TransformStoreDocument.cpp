
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontViewFactory.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/data/TransformHttpRequestDocument.h"

class TransformStoreDocument: public TransformHttpRequestDocument {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: TransformStoreDocument(PageContext* pageContext, WeblisketSession* weblisketSession) : TransformHttpRequestDocument(pageContext, weblisketSession){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            
    std::string storeName = weblisketSession->getStoreName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Using Session StoreName: " +storeName, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->getBaseNode()->appendChild(StoreFrontViewFactory::getInstance(storeName)->toXmlNode(this->getDoc()));
    
this->getBaseNode()->appendChild((new RequestParams(dynamic_cast<HttpServletRequest*>(pageContext->getRequest())))->toXmlNode(this->getDoc()));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


public: TransformStoreDocument(SearchRequest* searchRequest) : TransformHttpRequestDocument(searchRequest){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this->getBaseNode()->appendChild(StoreFrontViewFactory::getInstance(searchRequest->getStoreFront()->getName())->toXmlNode(this->getDoc()));
    
this->getBaseNode()->appendChild(searchRequest->getParams()->getParamsNode(this->getDoc()));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

