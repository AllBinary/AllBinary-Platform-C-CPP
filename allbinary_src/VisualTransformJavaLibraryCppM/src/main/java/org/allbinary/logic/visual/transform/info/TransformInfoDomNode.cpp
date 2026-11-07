
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"


TransformInfoDomNode::TransformInfoDomNode(Node* node) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Constructing TransformInfo From TransformInfoDomNode: ") +JavaString::valueOf(node->getNodeName()), this, "TransformInfoDomNode(Node node)");
    

                                    }
                                

    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    

    NamedNodeMap* attributes = node->getAttributes();;
    

    Attr* attrNode = dynamic_cast<Attr*>(attributes->getNamedItem(transformInfoData->NAME));;
    

    std::string name = attrNode->getValue();;
    

    NodeList* nodeList = node->getChildNodes();;
    

                        if(nodeList->getLength() > 1)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Constructing Complete TransformInfo Node For: ");
    
stringBuffer->append(name);
    
stringBuffer->append(" with ");
    
stringBuffer->appendint(nodeList->getLength());
    
stringBuffer->append(" children");
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                

    Node* objectFileNameNode = DomSearchHelper::getNode(transformInfoData->OBJECTFILENAME, nodeList);;
    

    std::string objectFileName = DomNodeHelper::getTextNodeValue(objectFileNameNode);;
    

    Node* objectConfigFileNameNode = DomSearchHelper::getNode(transformInfoData->OBJECTCONFIGFILENAME, nodeList);;
    

    std::string objectConfigFileName = DomNodeHelper::getTextNodeValue(objectConfigFileNameNode);;
    

    Node* templateFileNameNode = DomSearchHelper::getNode(transformInfoData->TEMPLATEFILENAME, nodeList);;
    

    std::string templateFileName = DomNodeHelper::getTextNodeValue(templateFileNameNode);;
    

    Node* dataFileNameNode = DomSearchHelper::getNode(transformInfoData->DATAFILENAME, nodeList);;
    

    std::string dataFileName = DomNodeHelper::getTextNodeValue(dataFileNameNode);;
    
this->transformInfoInterface= dynamic_cast<TransformInfoInterface*>(new TransformInfo(name, objectFileName, objectConfigFileName, templateFileName, dataFileName));
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Constructing Partial TransformInfo Node For: ");
    
stringBuffer->append(name);
    
stringBuffer->append(" with ");
    
stringBuffer->appendint(nodeList->getLength());
    
stringBuffer->append(" children");
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                
this->transformInfoInterface= dynamic_cast<TransformInfoInterface*>(new TransformInfo(name));
    

                        }
                            

    Attr* templateAttrNode = dynamic_cast<Attr*>(attributes->getNamedItem(transformInfoData->MAPPED));;
    

                        if(templateAttrNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->mappedName= templateAttrNode->getValue();
    

                                    }
                                
                        else {
                            this->mappedName= this->getTransformInfoInterface()->getName();
    

                        }
                            
}


TransformInfoDomNode::TransformInfoDomNode(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    
this->mappedName= transformInfoInterface->getName();
    
}


TransformInfoDomNode::TransformInfoDomNode(TransformInfoInterface* transformInfoInterface, std::string mappedName) : logUtil(LogUtil::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    
this->mappedName= mappedName;
    
}


TransformInfoDomNode::TransformInfoDomNode(std::string name, std::string mappedName) : logUtil(LogUtil::getInstance()){
this->transformInfoInterface= new TransformInfo(name);
    
this->mappedName= mappedName;
    
}


    auto TransformInfoDomNode::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoInterface;
    
}


    auto TransformInfoDomNode::getMappedName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mappedName;
    
}


    auto TransformInfoDomNode::getReplaceKey() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("<transform:component name=\"");
    
stringBuffer->append("body");
    
stringBuffer->append("\"/>");
    

    std::string key = JavaString::valueOf(stringBuffer);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Component Key: ") +JavaString::valueOf(key), this, "getReplaceKey()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return key;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFODOMNODE_CPP
