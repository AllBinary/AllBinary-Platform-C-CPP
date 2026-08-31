
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
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicWorkFlow
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: workFlowDoc: Document;

    private: workFlowName: string;

    private: storeName: string;

public constructor (){

            super();
        this.workFlowName= StringUtil.getInstance()!.EMPTY_STRING;
    
this.workFlowDoc= DomDocumentHelper.create();
    

    workFlowNode: Node = this.workFlowDoc!.createElement(WorkFlowData.getInstance()!.WORKFLOW)!;;
    
this.workFlowDoc!.appendChild(workFlowNode);
    
}


public constructor (HashMap<any, any> hashMap, PageContext pageContext){

            super();
        
    weblisketSession: WeblisketSession = new WeblisketSession(hashMap, pageContext);;
    
this.storeName= weblisketSession!.getStoreName();
    

    requestHashMap: HashMap<any, any> = new RequestParams(pageContext).toHashMap()!;;
    
this.workFlowName= requestHashMap!.get(WorkFlowData.getInstance()!.NAME) as string;
    
this.workFlowDoc= DomDocumentHelper.create(requestHashMap!.get(WorkFlowData.getInstance()!.DATA) as string);
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.workFlowName= hashMap!.get(WorkFlowData.getInstance()!.NAME) as string;
    
this.storeName= hashMap!.get(StoreFrontData.getInstance()!.NAME) as string;
    
this.workFlowDoc= DomDocumentHelper.create(hashMap!.get(WorkFlowData.getInstance()!.DATA) as string);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.workFlowName;
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeName;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    values: Vector = new Vector();;
    
values.add(this.workFlowName);
    
values.add(this.storeName);
    
values.add(DomDocumentHelper.toString(this.workFlowDoc));
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(WorkFlowData.getInstance()!.NAME, this.workFlowName);
    
hashMap!.put(StoreFrontData.getInstance()!.NAME, this.storeName);
    
hashMap!.put(WorkFlowData.getInstance()!.DATA, DomDocumentHelper.toString(this.workFlowDoc));
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
hashMap!.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public Node toXmlNode(Document document){

        try {
            
    hashMap: HashMap<any, any> = this.toHashMap()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    node: Node = document.createElement(WorkFlowData.getInstance()!.WORKFLOW)!;;
    

    nameArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    name: string = nameArray[index]! as string;;
    

    value: string = hashMap!.get(name) as string;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "toXmlNode()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Document toXmlDoc(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.workFlowDoc;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "toXmlDoc()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public Boolean isValid(){

        try {
            
    returnBoolean: Boolean = Boolean.TRUE;;
    

                        if(this.workFlowName == 
                                    null
                                )
                        
                                    {
                                    returnBoolean= Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnBoolean;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    

                        if(this.workFlowName == 
                                    null
                                )
                        stringBuffer!.append("No WorkFlow name specified.")



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

