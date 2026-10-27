
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/property/CssPropertiesValidationFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/css/CssElementData.h"
#include "org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h"

class CssElementView
            : public Object
        , public DomNodeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: const std::string TITLE = "title";

    private: const std::string DESCRIPTION = "description";

    private: std::string value;

    private: std::string title;

    private: std::string description;

    protected: BasicArrayList* cssElementVector;

    protected: BasicArrayList* cssPropertyVector;

public: CssElementView(){
this->cssPropertyVector= new BasicArrayListD();
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->title= stringUtil->EMPTY_STRING;
    
this->description= stringUtil->EMPTY_STRING;
    
this->value= stringUtil->EMPTY_STRING;
    
}


public: CssElementView(Node* node){

        try {
            
    Node* valueNode = DomSearchHelper::getNode(DomData::VALUE, node->getChildNodes());;
    
this->value= DomNodeHelper::getTextNodeValue(valueNode);
    

    Node* titleValueNode = DomSearchHelper::getNodeNoThrow(this->TITLE, node->getChildNodes());;
    

                        if(titleValueNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->title= DomNodeHelper::getTextNodeValue(titleValueNode);
    

                                    }
                                
                        else {
                            
    StringUtil* stringUtil = StringUtil::getInstance();;
    
this->title= stringUtil->EMPTY_STRING;
    

                        }
                            

    Node* descriptionValueNode = DomSearchHelper::getNodeNoThrow(this->DESCRIPTION, node->getChildNodes());;
    

                        if(descriptionValueNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->description= DomNodeHelper::getTextNodeValue(descriptionValueNode);
    

                                    }
                                
                        else {
                            this->description= StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Value: ")->append(this->value)->append("\nTitle: ")->append(this->title)->append("\nDescription: ")->append(this->description)->toString(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    BasicArrayList* cssElementStyleNodeVector = DomSearchHelper::getAllNodes(CssElementData::getInstance()->NAME, node->getChildNodes());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Child Css Elements: " +cssElementStyleNodeVector->size(), this, "CssElementView()");
    

                                    }
                                
this->cssElementVector= CssElementsValidationFactory::getInstance(cssElementStyleNodeVector);
    

    NodeList* nodeList = node->getChildNodes();;
    
this->cssPropertyVector= CssPropertiesValidationFactory::getInstance(nodeList);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put((new StringMaker())->append("Value: ")->append(this->value)->append("\nTitle: ")->append(this->title)->append("\nDescription: ")->append(this->description)->toString(), this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw new Exception("CssElementView");
                    
}

}


    public: std::string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(DomData::VALUE, this->value);
    
hashMap->put(this->TITLE, this->title);
    
hashMap->put(this->DESCRIPTION, this->description);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("CssView HashMap: " +hashMap->toString(), this, "toXmlNode");
    

                                    }
                                

    Node* node = ModDomHelper::createNodeWithValueNodes(document, CssElementData::getInstance()->NAME, hashMap);;
    

    int32_t size = this->cssPropertyVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DomNodeInterface* cssPropertyDomNodeInterface = dynamic_cast<DomNodeInterface*>(this->cssPropertyVector->get(index));;
    
node->appendChild(cssPropertyDomNodeInterface->toXmlNode(document));
    
}


    int32_t size2 = this->cssElementVector->size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    DomNodeInterface* cssElementDomNodeInterface = dynamic_cast<DomNodeInterface*>(this->cssElementVector->get(index));;
    
node->appendChild(cssElementDomNodeInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

