
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Document workFlowDoc;

    private: std::string workFlowName;

    private: std::string storeName;

public: BasicWorkFlow(){
this->workFlowName= StringUtil::getInstance().EMPTY_STRING;
    
this->workFlowDoc= DomDocumentHelper::create();
    

    Node workFlowNode = this->workFlowDoc.createElement(WorkFlowData::getInstance().WORKFLOW);;
    
this->workFlowDoc.appendChild(workFlowNode);
    
}


public: BasicWorkFlow(HashMap<Object*, Object*> hashMap, PageContext pageContext){

    WeblisketSession weblisketSession = WeblisketSession(hashMap, pageContext);;
    
this->storeName= weblisketSession.getStoreName();
    

    HashMap<Object*, Object*> requestHashMap = RequestParams(pageContext).toHashMap();;
    
this->workFlowName= requestHashMap.get(WorkFlowData::getInstance().NAME);
    
this->workFlowDoc= DomDocumentHelper::create(requestHashMap.get(WorkFlowData::getInstance().DATA));
    
}


public: BasicWorkFlow(HashMap<Object*, Object*> hashMap){
this->workFlowName= hashMap.get(WorkFlowData::getInstance().NAME);
    
this->storeName= hashMap.get(StoreFrontData::getInstance().NAME);
    
this->workFlowDoc= DomDocumentHelper::create(hashMap.get(WorkFlowData::getInstance().DATA));
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->workFlowName;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector(){

    BasicArrayList values = BasicArrayListD();;
    
values.add(this->workFlowName);
    
values.add(this->storeName);
    
values.add(XmlDocumentHelper::toString(this->workFlowDoc));
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.add(time);
    
values.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(WorkFlowData::getInstance().NAME, this->workFlowName);
    
hashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    
hashMap.put(WorkFlowData::getInstance().DATA, XmlDocumentHelper::toString(this->workFlowDoc));
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
hashMap.put(EntryData::getInstance().LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: Node toXmlNode(Document document){

        try {
            
    HashMap<Object*, Object*> hashMap = this->toHashMap();;
    

    Set keySet = hashMap.keys();;
    

    Node node = document.createElement(WorkFlowData::getInstance().WORKFLOW);;
    

    std::vector<Object*> nameArray = keySet.();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string name = nameArray[index];;
    

    std::string value = hashMap.get(name);;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toXmlNode()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: Document toXmlDoc(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->workFlowDoc;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toXmlDoc()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: Boolean isValid(){

        try {
            
    Boolean returnBoolean = Boolean::TRUE;;
    

                        if(false)
                        
                                    {
                                    returnBoolean= Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnBoolean;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    

                        if(false)
                        stringBuffer.append("No WorkFlow name specified.");
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Getting Validation Info";
    
}

}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

