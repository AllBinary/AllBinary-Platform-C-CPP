
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/request/RequestParams.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/RequestData.h"
//Note: if request is destroyed or messed up this will not work. Use fileRequestParams

RequestParams::RequestParams() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF("New RequestParams Size: 0", this, this->commonStrings->CONSTRUCTOR);
    
}


RequestParams::RequestParams(HttpServletRequest* request) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->map= request->getParameterMap();
    
this->logUtil->putF(JavaString::valueOf("RequestParams Size: ") +JavaString::valueOf(this->getMap()->keySet()->size()), this, this->commonStrings->CONSTRUCTOR);
    
}


RequestParams::RequestParams(PageContext* pageContext) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->map= pageContext->getRequest()->getParameterMap();
    
this->logUtil->putF(JavaString::valueOf("Request Params Size: ") +JavaString::valueOf(this->getMap()->keySet()->size()), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto RequestParams::setMap(Map* map) -> void{
this->map= map;
    
}


    auto RequestParams::getMap() -> Map*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->map;
    
}


    auto RequestParams::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* node = document->createElement(RequestData::REQUEST);;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    Set* keys = this->map->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string key = keyArray[i];;
    

    std::vector<std::string> values = this->map->get(key) as string[];;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->KEY);
    
stringBuffer->append(key);
    
stringBuffer->append(this->VALUE);
    
stringBuffer->append(values[0]);
    
this->logUtil->putF(stringBuffer->toString(), this, "toXmlNode(document)");
    
node->appendChild(ModDomHelper::createNameValueNodes(document, RequestData::PARAMETER, std::string(key), .toCharArray()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "toXmlNode(document)", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    auto RequestParams::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    Set* keys = this->map->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t size = keyArray.size();;
    

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string key = keyArray[i];;
    

    std::vector<std::string> values = this->map->get(key) as string[];;
    
hashMap->put(std::string(key), .toCharArray());
    
}

stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("RequestParams: ");
    
stringBuffer->append(this->map->toString());
    
stringBuffer->append("\ntoHashMap: ");
    
stringBuffer->append(hashMap->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_REQUEST_REQUESTPARAMS_CPP
