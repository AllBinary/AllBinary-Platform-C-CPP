
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeHttpRequestInfoData.h"

class AbeHttpRequestInfo
            : public Object
         {
        

    private: const NAME: string = "AbeHttpRequestInfo";

    private: const abeHttpRequestInfoData: AbeHttpRequestInfoData = AbeHttpRequestInfoData.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: httpUserAgent: string;

    private: remoteAddress: string;

    private: remoteHost: string;

    private: remoteHostByAddr: string;

    private: remotePort: string;

    private: requestedFilePath: string;

public constructor (HashMap<any, any> hashMap){

            super();
        
    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
this.httpUserAgent= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.HTTP_USER_AGENT) as string);
    
this.remoteAddress= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.REMOTE_ADDRESS) as string);
    
this.remoteHost= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.REMOTE_HOST) as string);
    
this.remoteHostByAddr= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.REMOTE_HOST_BY_ADDRESS) as string);
    
this.remotePort= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.REMOTE_PORT) as string);
    
this.requestedFilePath= stringUtil!.getNonNull(hashMap!.get(this.abeHttpRequestInfoData!.REQUEST_FILE_PATH) as string);
    
}


public constructor (HttpServletRequest httpServletRequest){

            super();
        
    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
this.httpUserAgent= stringUtil!.EMPTY_STRING;
    

    enumuration: Enumeration<any> = httpServletRequest!.getHeaderNames()!;;
    

        while(enumuration.hasMoreElements())
        {

    key: string = enumuration.nextElement()! as string;;
    

    value: string = httpServletRequest!.getHeader(key)!;;
    

                        if(key.indexOf("user") >= 0)
                        this.httpUserAgent= "key: " +key +" value: " +value
}

this.remoteHostByAddr= stringUtil!.EMPTY_STRING;
    
this.remoteAddress= httpServletRequest!.getRemoteAddr();
    
this.remoteHost= httpServletRequest!.getRemoteHost();
    
this.requestedFilePath= httpServletRequest!.getServletPath();
    
this.remotePort= Integer.toString(httpServletRequest!.getRemotePort());
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(abeHttpRequestInfoData!.HTTP_USER_AGENT, this.httpUserAgent);
    
hashMap!.put(abeHttpRequestInfoData!.REMOTE_ADDRESS, this.remoteAddress);
    
hashMap!.put(abeHttpRequestInfoData!.REMOTE_HOST, this.remoteHost);
    
hashMap!.put(abeHttpRequestInfoData!.REMOTE_HOST_BY_ADDRESS, this.remoteHostByAddr);
    
hashMap!.put(abeHttpRequestInfoData!.REMOTE_PORT, this.remotePort);
    
hashMap!.put(abeHttpRequestInfoData!.REQUEST_FILE_PATH, this.requestedFilePath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.httpUserAgent);
    
vector.add(this.remoteAddress);
    
vector.add(this.remoteHost);
    
vector.add(this.remoteHostByAddr);
    
vector.add(this.remotePort);
    
vector.add(this.requestedFilePath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(this.NAME)!.append(this.commonSeps!.COLON_SEP)!.append(abeHttpRequestInfoData!.HTTP_USER_AGENT)!.append(this.commonSeps!.COLON_SEP)!.append(this.httpUserAgent)!.append(this.commonSeps!.SPACE)!.append(abeHttpRequestInfoData!.REMOTE_ADDRESS)!.append(this.commonSeps!.COLON_SEP)!.append(this.remoteAddress)!.append(this.commonSeps!.SPACE)!.append(abeHttpRequestInfoData!.REMOTE_HOST)!.append(this.commonSeps!.COLON_SEP)!.append(this.remoteHost)!.append(this.commonSeps!.SPACE)!.append(abeHttpRequestInfoData!.REMOTE_HOST_BY_ADDRESS)!.append(this.commonSeps!.COLON_SEP)!.append(this.remoteHostByAddr)!.append(this.commonSeps!.SPACE)!.append(abeHttpRequestInfoData!.REMOTE_PORT)!.append(this.commonSeps!.COLON_SEP)!.append(this.remotePort)!.append(this.commonSeps!.SPACE)!.append(abeHttpRequestInfoData!.REQUEST_FILE_PATH)!.append(this.commonSeps!.COLON_SEP)!.append(this.requestedFilePath)!.toString();;
    
}


};

            

