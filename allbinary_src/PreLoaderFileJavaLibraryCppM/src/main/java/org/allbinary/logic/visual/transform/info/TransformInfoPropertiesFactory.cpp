
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
        

    private: static const instance: TransformInfoPropertiesFactory = new TransformInfoPropertiesFactory();

    public static TransformInfoPropertiesFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoPropertiesFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public TransformInfoProperties getInstance(Node node){

    transformInfoChildNodeList: NodeList = node.getChildNodes()!;;
    

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    attributes: NamedNodeMap = node.getAttributes()!;;
    

    attrNode: Attr = attributes.getNamedItem(transformInfoData!.NAME) as Attr;;
    

    name: string = attrNode!.getValue()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Next View Name: " +name, this, "toTransformInfoPropertiesHashMap()");
    

                                    }
                                

    labelNode: Node = DomSearchHelper.getNodeNoThrow(transformInfoData!.LABEL, transformInfoChildNodeList)!;;
    

    label: string = DomNodeHelper.getTextNodesValue(labelNode)!;;
    

                        if(label == 
                                    null
                                )
                        
                                    {
                                    label= name;
    

                                    }
                                

    descriptionNode: Node = DomSearchHelper.getNode(transformInfoData!.DESCRIPTION, transformInfoChildNodeList)!;;
    

    description: string = DomNodeHelper.getTextNodesValue(descriptionNode)!;;
    

    objectFileNode: Node = DomSearchHelper.getNode(transformInfoData!.OBJECTFILENAME, transformInfoChildNodeList)!;;
    

    objectFileName: string = DomNodeHelper.getTextNodeValue(objectFileNode)!;;
    

    objectConfigFileNode: Node = DomSearchHelper.getNode(transformInfoData!.OBJECTCONFIGFILENAME, transformInfoChildNodeList)!;;
    

    objectConfigFileName: string = DomNodeHelper.getTextNodeValue(objectConfigFileNode)!;;
    

    templateFileNode: Node = DomSearchHelper.getNode(transformInfoData!.TEMPLATEFILENAME, transformInfoChildNodeList)!;;
    

    templateFileName: string = DomNodeHelper.getTextNodeValue(templateFileNode)!;;
    

    transformInfoProperties: TransformInfoProperties = new TransformInfoProperties(name, label, description, objectFileName, objectConfigFileName, templateFileName);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return transformInfoProperties;
    
}


};

            

