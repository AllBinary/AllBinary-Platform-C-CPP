
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: transformInfoInterface: TransformInfoInterface;

    private: mappedName: string;

public constructor (Node node){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Constructing TransformInfo From TransformInfoDomNode: " +node.getNodeName(), this, "TransformInfoDomNode(Node node)");
    

                                    }
                                

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    attributes: NamedNodeMap = node.getAttributes()!;;
    

    attrNode: Attr = attributes.getNamedItem(transformInfoData!.NAME) as Attr;;
    

    name: string = attrNode!.getValue()!;;
    

    nodeList: NodeList = node.getChildNodes()!;;
    

                        if(nodeList!.getLength() > 1)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Constructing Complete TransformInfo Node For: ");
    
stringBuffer!.append(name);
    
stringBuffer!.append(" with ");
    
stringBuffer!.appendint(nodeList!.getLength());
    
stringBuffer!.append(" children");
    
this.logUtil!.putF(stringBuffer!.toString(), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                

    objectFileNameNode: Node = DomSearchHelper.getNode(transformInfoData!.OBJECTFILENAME, nodeList)!;;
    

    objectFileName: string = DomNodeHelper.getTextNodeValue(objectFileNameNode)!;;
    

    objectConfigFileNameNode: Node = DomSearchHelper.getNode(transformInfoData!.OBJECTCONFIGFILENAME, nodeList)!;;
    

    objectConfigFileName: string = DomNodeHelper.getTextNodeValue(objectConfigFileNameNode)!;;
    

    templateFileNameNode: Node = DomSearchHelper.getNode(transformInfoData!.TEMPLATEFILENAME, nodeList)!;;
    

    templateFileName: string = DomNodeHelper.getTextNodeValue(templateFileNameNode)!;;
    

    dataFileNameNode: Node = DomSearchHelper.getNode(transformInfoData!.DATAFILENAME, nodeList)!;;
    

    dataFileName: string = DomNodeHelper.getTextNodeValue(dataFileNameNode)!;;
    
this.transformInfoInterface= new TransformInfo(name, objectFileName, objectConfigFileName, templateFileName, dataFileName) as TransformInfoInterface;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Constructing Partial TransformInfo Node For: ");
    
stringBuffer!.append(name);
    
stringBuffer!.append(" with ");
    
stringBuffer!.appendint(nodeList!.getLength());
    
stringBuffer!.append(" children");
    
this.logUtil!.putF(stringBuffer!.toString(), this, "TransformInfoObjectConfigComponent(Node node)");
    

                                    }
                                
this.transformInfoInterface= new TransformInfo(name) as TransformInfoInterface;
    

                        }
                            

    templateAttrNode: Attr = attributes.getNamedItem(transformInfoData!.MAPPED) as Attr;;
    

                        if(templateAttrNode != 
                                    null
                                )
                        
                                    {
                                    this.mappedName= templateAttrNode!.getValue();
    

                                    }
                                
                        else {
                            this.mappedName= this.getTransformInfoInterface()!.getName();
    

                        }
                            
}


public constructor (TransformInfoInterface transformInfoInterface){

            super();
        this.transformInfoInterface= transformInfoInterface;
    
this.mappedName= transformInfoInterface!.getName();
    
}


public constructor (TransformInfoInterface transformInfoInterface, string mappedName){

            super();
        this.transformInfoInterface= transformInfoInterface;
    
this.mappedName= mappedName;
    
}


public constructor (string name, string mappedName){

            super();
        this.transformInfoInterface= new TransformInfo(name);
    
this.mappedName= mappedName;
    
}


    public TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transformInfoInterface;
    
}


    public string getMappedName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mappedName;
    
}


    public string getReplaceKey(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("<transform:component name=\"");
    
stringBuffer!.append("body");
    
stringBuffer!.append("\"/>");
    

    key: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Component Key: " +key, this, "getReplaceKey()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return key;
    
}


};

            

