
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
        
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"
#include "TransformInfoData.h"
#include "TransformInfo.h"

class TransformInfoDomNode
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: TransformInfoInterface transformInfoInterface;

    private: std::string mappedName;

public: TransformInfoDomNode(Node node){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Constructing TransformInfo From TransformInfoDomNode: " +node.getNodeName(), this, "TransformInfoDomNode(Node node)");
    

                                    }
                                

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    NamedNodeMap attributes = node.getAttributes();;
    

    Attr attrNode = attributes.getNamedItem(transformInfoData.NAME) as Attr;;
    

    std::string name = attrNode.getValue();;
    

    NodeList nodeList = node.getChildNodes();;
    

                        if(nodeList.getLength() > 1)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Constructing Complete TransformInfo Node For: ");
    
stringBuffer.append(name);
    
stringBuffer.append(" with ");
    
stringBuffer.appendint(nodeList.getLength());
    
stringBuffer.append(" children");
    
this->logUtil.putF(stringBuffer.toString(), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                

    Node objectFileNameNode = DomSearchHelper::getNode(transformInfoData.OBJECTFILENAME, nodeList);;
    

    std::string objectFileName = DomNodeHelper::getTextNodeValue(objectFileNameNode);;
    

    Node objectConfigFileNameNode = DomSearchHelper::getNode(transformInfoData.OBJECTCONFIGFILENAME, nodeList);;
    

    std::string objectConfigFileName = DomNodeHelper::getTextNodeValue(objectConfigFileNameNode);;
    

    Node templateFileNameNode = DomSearchHelper::getNode(transformInfoData.TEMPLATEFILENAME, nodeList);;
    

    std::string templateFileName = DomNodeHelper::getTextNodeValue(templateFileNameNode);;
    

    Node dataFileNameNode = DomSearchHelper::getNode(transformInfoData.DATAFILENAME, nodeList);;
    

    std::string dataFileName = DomNodeHelper::getTextNodeValue(dataFileNameNode);;
    
this->transformInfoInterface= TransformInfo(name, objectFileName, objectConfigFileName, templateFileName, dataFileName) as TransformInfoInterface;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Constructing Partial TransformInfo Node For: ");
    
stringBuffer.append(name);
    
stringBuffer.append(" with ");
    
stringBuffer.appendint(nodeList.getLength());
    
stringBuffer.append(" children");
    
this->logUtil.putF(stringBuffer.toString(), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                
this->transformInfoInterface= TransformInfo(name) as TransformInfoInterface;
    

                        }
                            

    Attr templateAttrNode = attributes.getNamedItem(transformInfoData.MAPPED) as Attr;;
    

                        if(templateAttrNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->mappedName= templateAttrNode.getValue();
    

                                    }
                                
                        else {
                            this->mappedName= this->getTransformInfoInterface().getName();
    

                        }
                            
}


public: TransformInfoDomNode(TransformInfoInterface transformInfoInterface){
this->transformInfoInterface= transformInfoInterface;
    
this->mappedName= transformInfoInterface.getName();
    
}


public: TransformInfoDomNode(TransformInfoInterface transformInfoInterface, std::string mappedName){
this->transformInfoInterface= transformInfoInterface;
    
this->mappedName= mappedName;
    
}


public: TransformInfoDomNode(std::string name, std::string mappedName){
this->transformInfoInterface= TransformInfo(name);
    
this->mappedName= mappedName;
    
}


    public: TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformInfoInterface;
    
}


    public: std::string getMappedName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mappedName;
    
}


    public: std::string getReplaceKey(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("<transform:component name=\"");
    
stringBuffer.append("body");
    
stringBuffer.append("\"/>");
    

    std::string key = stringBuffer.toString();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Component Key: " +key, this, "getReplaceKey()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return key;
    
}


};

            

