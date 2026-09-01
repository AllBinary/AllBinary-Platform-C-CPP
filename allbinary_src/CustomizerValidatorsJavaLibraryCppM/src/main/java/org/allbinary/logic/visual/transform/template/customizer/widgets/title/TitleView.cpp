
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TitleData.h"

class TitleView
            : public Object
        : public DomNodeInterface {

    private: static const std::string NAME = "None";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string title;

public: TitleView(){
this->title= TitleView::NAME;
    
}


public: TitleView(Node node){

    Node titleTextNode = DomSearchHelper::getNode(TitleData::getInstance().TEXT, node.getChildNodes());;
    

    Node valueNode = DomSearchHelper::getNode(DomData::VALUE, titleTextNode.getChildNodes());;
    
this->title= DomNodeHelper::getTextNodeValue(valueNode);
    

                        if(StringValidationUtil::getInstance().isEmpty(this->title))
                        
                                    {
                                    this->title= TitleView::NAME;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Title: " +this->getTitle(), this, "Consructor()");
    

                                    }
                                
}


public: TitleView(HashMap<any, any> hashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("HashMap: " +hashMap.toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->getFormData(hashMap);
    
}


    public: std::string getTitle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->title;
    
}


    public: void getFormData(HashMap<any, any> hashMap){
this->title= hashMap.get(TitleData::getInstance().TEXT) as string;
    

                        if(StringValidationUtil::getInstance().isEmpty(this->title))
                        
                                    {
                                    this->title= TitleView::NAME;
    

                                    }
                                
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(TitleData::getInstance().TEXT, this->getTitle());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    HashMap<any, any> hashMap = this->toHashMap();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TitleView HashMap: " +hashMap.toString(), this, "toXmlNode()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, TitleData::getInstance().NAME, hashMap);;
    
}


};

            

