
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
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoData.h"
#include "TransformInfoProperties.h"

class TransformInfoPropertiesFactory
            : public Object
         {

    private: static TransformInfoPropertiesFactory instance() { return TransformInfoPropertiesFactory(); }

    public: static TransformInfoPropertiesFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoPropertiesFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoPropertiesFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoProperties getInstance(Node node){

    NodeList transformInfoChildNodeList = node.getChildNodes();;
    

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    NamedNodeMap attributes = node.getAttributes();;
    

    Attr attrNode = attributes.getNamedItem(transformInfoData.NAME);;
    

    std::string name = attrNode.getValue();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(CommonLabels::getInstance().NEXT +" View Name: " +name, this, "toTransformInfoPropertiesHashMap()");
    

                                    }
                                

    Node labelNode = DomSearchHelper::getNodeNoThrow(transformInfoData.LABEL, transformInfoChildNodeList);;
    

    std::string label = DomNodeHelper::getTextNodesValue(labelNode);;
    

                        if(false)
                        
                                    {
                                    label= name;
    

                                    }
                                

    Node descriptionNode = DomSearchHelper::getNode(transformInfoData.DESCRIPTION, transformInfoChildNodeList);;
    

    std::string description = DomNodeHelper::getTextNodesValue(descriptionNode);;
    

    Node objectFileNode = DomSearchHelper::getNode(transformInfoData.OBJECTFILENAME, transformInfoChildNodeList);;
    

    std::string objectFileName = DomNodeHelper::getTextNodeValue(objectFileNode);;
    

    Node objectConfigFileNode = DomSearchHelper::getNode(transformInfoData.OBJECTCONFIGFILENAME, transformInfoChildNodeList);;
    

    std::string objectConfigFileName = DomNodeHelper::getTextNodeValue(objectConfigFileNode);;
    

    Node templateFileNode = DomSearchHelper::getNode(transformInfoData.TEMPLATEFILENAME, transformInfoChildNodeList);;
    

    std::string templateFileName = DomNodeHelper::getTextNodeValue(templateFileNode);;
    

    TransformInfoProperties transformInfoProperties = TransformInfoProperties(name, label, description, objectFileName, objectConfigFileName, templateFileName);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoProperties;
    
}


};

            

