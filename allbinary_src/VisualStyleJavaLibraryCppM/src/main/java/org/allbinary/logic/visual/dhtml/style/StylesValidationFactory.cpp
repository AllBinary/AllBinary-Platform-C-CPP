
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StylesData.h"
#include "StyleData.h"

class StylesValidationFactory
            : public Object
         {

    private: static StylesValidationFactory instance() { return StylesValidationFactory(); }

    public: static StylesValidationFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StylesValidationFactory::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getInstance(HashMap<Object*, Object*> hashMap){

    Document stylesDocument = hashMap.get(NameSpaceRequestParamData::DOCUMENT);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StylesValidationFactory::getInstance().getInstance(stylesDocument);;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: StylesValidationFactory(){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstance(Document document){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    NodeList nodeList = document.getElementsByTagName(StylesData::getInstance().NAME);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Style Present: " +XmlDocumentHelper::toString(document), this, commonStrings.GET_INSTANCE);
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Styles Present: " +nodeList.getLength(), this, commonStrings.GET_INSTANCE);
    

                                    }
                                




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node stylesNode = nodeList.item(index);;
    

    BasicArrayList styleNodeList = DomSearchHelper::getAllNodes(StyleData::getInstance().NAME, stylesNode.getChildNodes());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Number Of Style Nodes Present: " +styleNodeList.size(), this, commonStrings.GET_INSTANCE);
    

                                    }
                                




                        for (
    int32_t styleNodesIndex = 0;styleNodesIndex < styleNodeList.size(); styleNodesIndex++)
        {

    Node styleNode = styleNodeList.get(styleNodesIndex);;
    

    BasicArrayList cssElementStyleNodeList = DomSearchHelper::getAllNodes(CssElementData::getInstance().NAME, styleNode.getChildNodes());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Number Of Element Nodes Present: " +cssElementStyleNodeList.size(), this, commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CssElementsValidationFactory::getInstance(cssElementStyleNodeList);;
    
}

}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("No Style Present", this, commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListD();
    
}


};

            

