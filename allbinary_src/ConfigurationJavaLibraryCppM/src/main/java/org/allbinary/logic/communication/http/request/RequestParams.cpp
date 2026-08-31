
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
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestData.h"
//Note: if request is destroyed or messed up this will not work. Use fileRequestParams
class RequestParams
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: map: Map;

public constructor (){

            super();
        this.logUtil!.putF("New RequestParams Size: 0", this, this.commonStrings!.CONSTRUCTOR);
    
}


public constructor (HttpServletRequest request){

            super();
        this.map= request.getParameterMap();
    
this.logUtil!.putF("RequestParams Size: " +this.getMap()!.keySet()!.size(), this, this.commonStrings!.CONSTRUCTOR);
    
}


public constructor (PageContext pageContext){

            super();
        this.map= pageContext!.getRequest()!.getParameterMap();
    
this.logUtil!.putF("Request Params Size: " +this.getMap()!.keySet()!.size(), this, this.commonStrings!.CONSTRUCTOR);
    
}


    setMap(Map map){
this.map= map;
    
}


    Map getMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.map;
    
}


    private: const KEY: string = "Key: ";

    private: const VALUE: string = " Value: ";

    public Node toXmlNode(Document document){

        try {
            
    node: Node = document.createElement(RequestData.REQUEST)!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    keys: Set = this.map.keySet()!;;
    

    keyArray: std::vector<any> = keys.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    key: string = keyArray[i]! as string;;
    

    values: std::vector<string> = this.map.get(key) as string[];;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.KEY);
    
stringBuffer!.append(key);
    
stringBuffer!.append(this.VALUE);
    
stringBuffer!.append(values[0]!);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "toXmlNode(document)");
    
node.appendChild(ModDomHelper.createNameValueNodes(document, RequestData.PARAMETER, key.toCharArray().slice(0, ).join(''), .toCharArray()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "toXmlNode(document)", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    keys: Set = this.map.keySet()!;;
    

    keyArray: std::vector<any> = keys.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    key: string = keyArray[i]! as string;;
    

    values: std::vector<string> = this.map.get(key) as string[];;
    
hashMap!.put(key.toCharArray().slice(0, ).join(''), .toCharArray());
    
}

stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("RequestParams: ");
    
stringBuffer!.append(this.map.toString());
    
stringBuffer!.append("\ntoHashMap: ");
    
stringBuffer!.append(hashMap!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


};

            

