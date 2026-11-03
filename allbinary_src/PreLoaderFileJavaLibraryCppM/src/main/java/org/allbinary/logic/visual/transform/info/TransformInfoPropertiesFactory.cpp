
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIESFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoPropertiesFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoProperties.h"

auto TransformInfoPropertiesFactory::instance_owner() -> TransformInfoPropertiesFactory* { static std::unique_ptr<TransformInfoPropertiesFactory> value(new TransformInfoPropertiesFactory()); return value.get(); }
TransformInfoPropertiesFactory* TransformInfoPropertiesFactory::instance = TransformInfoPropertiesFactory::instance_owner();

    auto TransformInfoPropertiesFactory::getInstance() -> TransformInfoPropertiesFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoPropertiesFactory::instance;
    
}


TransformInfoPropertiesFactory::TransformInfoPropertiesFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoPropertiesFactory::getInstance(Node* node) -> TransformInfoProperties*{

    NodeList* transformInfoChildNodeList = node->getChildNodes();;
    

    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    

    NamedNodeMap* attributes = node->getAttributes();;
    

    Attr* attrNode = dynamic_cast<Attr*>(attributes->getNamedItem(transformInfoData->NAME));;
    

    std::string name = attrNode->getValue();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(CommonLabels::getInstance()->NEXT) +JavaString::valueOf(" View Name: ")) +JavaString::valueOf(name), this, "toTransformInfoPropertiesHashMap()");
    

                                    }
                                

    Node* labelNode = DomSearchHelper::getNodeNoThrow(transformInfoData->LABEL, transformInfoChildNodeList);;
    

    std::string label = DomNodeHelper::getTextNodesValue(labelNode);;
    

                        if(false)
                        
                                    {
                                    label= name;
    

                                    }
                                

    Node* descriptionNode = DomSearchHelper::getNode(transformInfoData->DESCRIPTION, transformInfoChildNodeList);;
    

    std::string description = DomNodeHelper::getTextNodesValue(descriptionNode);;
    

    Node* objectFileNode = DomSearchHelper::getNode(transformInfoData->OBJECTFILENAME, transformInfoChildNodeList);;
    

    std::string objectFileName = DomNodeHelper::getTextNodeValue(objectFileNode);;
    

    Node* objectConfigFileNode = DomSearchHelper::getNode(transformInfoData->OBJECTCONFIGFILENAME, transformInfoChildNodeList);;
    

    std::string objectConfigFileName = DomNodeHelper::getTextNodeValue(objectConfigFileNode);;
    

    Node* templateFileNode = DomSearchHelper::getNode(transformInfoData->TEMPLATEFILENAME, transformInfoChildNodeList);;
    

    std::string templateFileName = DomNodeHelper::getTextNodeValue(templateFileNode);;
    

    TransformInfoProperties* transformInfoProperties = new TransformInfoProperties(name, label, description, objectFileName, objectConfigFileName, templateFileName);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return transformInfoProperties;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOPROPERTIESFACTORY_CPP
