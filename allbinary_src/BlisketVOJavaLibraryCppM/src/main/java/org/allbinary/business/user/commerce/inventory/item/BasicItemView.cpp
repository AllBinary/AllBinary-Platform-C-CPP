
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"

class BasicItemView
            : public Object
        , public DomNodeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: BasicItemData* basicItemData = BasicItemData::getInstance();

    private: ItemInterface* itemInterface;

    private: BasicArrayList* vector;

public: BasicItemView(ItemInterface* itemInterface, BasicArrayList* vector){
this->itemInterface= itemInterface;
    
this->vector= vector;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toXmlNode");
    

                                    }
                                

    HashMap<Object*, Object*>* hashMap = this->itemInterface->toHashMap();;
    

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    
hashMap->put(this->basicItemData->IMAGE, EMPTY_STRING);
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Set* keySet = hashMap->keys();;
    

    Node* node = document->createElement(this->basicItemData->ITEM);;
    

    std::vector<Object*> nameArray = keySet->();;
    

    int32_t size2 = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    std::string name = nameArray[index];;
    

    std::string value = hashMap->get(name);;
    
value= stringUtil->getNonNull(value);
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}


    Node* totalNode = ModDomHelper::createNameValueNodes(document, this->basicItemData->TOTAL, this->itemInterface->getTotal()->toString());;
    
node->appendChild(totalNode);
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(this->vector->get(index));;
    

    Node* customNode = domNodeInterface->toXmlNode(document);;
    
node->appendChild(customNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: Document* toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

