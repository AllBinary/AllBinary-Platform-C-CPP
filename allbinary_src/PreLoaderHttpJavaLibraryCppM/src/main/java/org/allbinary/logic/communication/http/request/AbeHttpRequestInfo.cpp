
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/request/AbeHttpRequestInfoData.h"

class AbeHttpRequestInfo
            : public Object
         {

    private: const std::string NAME = "AbeHttpRequestInfo";

    private: AbeHttpRequestInfoData* abeHttpRequestInfoData = AbeHttpRequestInfoData::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: std::string httpUserAgent;

    private: std::string remoteAddress;

    private: std::string remoteHost;

    private: std::string remoteHostByAddr;

    private: std::string remotePort;

    private: std::string requestedFilePath;

public: AbeHttpRequestInfo(HashMap<Object*, Object*>* hashMap){

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->httpUserAgent= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->HTTP_USER_AGENT));
    
this->remoteAddress= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->REMOTE_ADDRESS));
    
this->remoteHost= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->REMOTE_HOST));
    
this->remoteHostByAddr= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS));
    
this->remotePort= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->REMOTE_PORT));
    
this->requestedFilePath= stringUtil->getNonNull(hashMap->get(this->abeHttpRequestInfoData->REQUEST_FILE_PATH));
    
}


public: AbeHttpRequestInfo(HttpServletRequest* httpServletRequest){

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->httpUserAgent= stringUtil->EMPTY_STRING;
    

    Enumeration<Object*>* enumuration = httpServletRequest->getHeaderNames();;
    

        while(enumuration->hasMoreElements())
        {

    std::string key = enumuration->nextElement();;
    

    std::string value = httpServletRequest->getHeader(key);;
    

                        if(JavaString::indexOf(key, "user") >= 0)
                        this->httpUserAgent= "key: " +key +" value: " +value;
                                
}

this->remoteHostByAddr= stringUtil->EMPTY_STRING;
    
this->remoteAddress= httpServletRequest->getRemoteAddr();
    
this->remoteHost= httpServletRequest->getRemoteHost();
    
this->requestedFilePath= httpServletRequest->getServletPath();
    
this->remotePort= std::to_string(getRemotePort);
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(abeHttpRequestInfoData->HTTP_USER_AGENT, this->httpUserAgent);
    
hashMap->put(abeHttpRequestInfoData->REMOTE_ADDRESS, this->remoteAddress);
    
hashMap->put(abeHttpRequestInfoData->REMOTE_HOST, this->remoteHost);
    
hashMap->put(abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS, this->remoteHostByAddr);
    
hashMap->put(abeHttpRequestInfoData->REMOTE_PORT, this->remotePort);
    
hashMap->put(abeHttpRequestInfoData->REQUEST_FILE_PATH, this->requestedFilePath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicArrayList* toVector(){

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->httpUserAgent);
    
vector->add(this->remoteAddress);
    
vector->add(this->remoteHost);
    
vector->add(this->remoteHostByAddr);
    
vector->add(this->remotePort);
    
vector->add(this->requestedFilePath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(this->NAME)->append(this->commonSeps->COLON_SEP)->append(abeHttpRequestInfoData->HTTP_USER_AGENT)->append(this->commonSeps->COLON_SEP)->append(this->httpUserAgent)->append(this->commonSeps->SPACE)->append(abeHttpRequestInfoData->REMOTE_ADDRESS)->append(this->commonSeps->COLON_SEP)->append(this->remoteAddress)->append(this->commonSeps->SPACE)->append(abeHttpRequestInfoData->REMOTE_HOST)->append(this->commonSeps->COLON_SEP)->append(this->remoteHost)->append(this->commonSeps->SPACE)->append(abeHttpRequestInfoData->REMOTE_HOST_BY_ADDRESS)->append(this->commonSeps->COLON_SEP)->append(this->remoteHostByAddr)->append(this->commonSeps->SPACE)->append(abeHttpRequestInfoData->REMOTE_PORT)->append(this->commonSeps->COLON_SEP)->append(this->remotePort)->append(this->commonSeps->SPACE)->append(abeHttpRequestInfoData->REQUEST_FILE_PATH)->append(this->commonSeps->COLON_SEP)->append(this->requestedFilePath)->toString();;
    
}


};

            

