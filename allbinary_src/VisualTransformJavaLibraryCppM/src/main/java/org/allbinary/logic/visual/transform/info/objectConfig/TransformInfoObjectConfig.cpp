
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/template/XslData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Attr.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/NamedNodeMap.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigInterface.h"
#include "TransformInfoObjectConfigData.h"

class TransformInfoObjectConfig
            : public Object
        : public TransformInfoObjectConfigInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const ownerTransformInfoInterface: TransformInfoInterface;

    private: document: Document;

    private: outputTypeName: string;

public constructor (Object transformInfoInterface){

            super();
        this.ownerTransformInfoInterface= transformInfoInterface;
    
this.createDocument();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TransformInfo: ");
    

                        if(this.ownerTransformInfoInterface != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(this.ownerTransformInfoInterface!.getName());
    

                                    }
                                
                        else {
                            stringBuffer!.append("No Owner!?#@");
    

                        }
                            
stringBuffer!.append("\nConstructed with document: ");
    
stringBuffer!.append(this.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "Constructor(TransformInfoInterface)");
    

                                    }
                                
}


public constructor (Object transformInfoInterface, Object document){

            super();
        this.ownerTransformInfoInterface= transformInfoInterface;
    
this.document= document;
    

    node: Node = DomSearchHelper.getNodeNoThrow(OutputTypeData.getInstance()!.NAME, this.getRootNode()!.getChildNodes())!;;
    

                        if(node != 
                                    null
                                )
                        
                                    {
                                    this.setOutputTypeName(DomNodeHelper.getTextNodeValue(node));
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TransformInfo: ");
    

                        if(this.ownerTransformInfoInterface != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(this.ownerTransformInfoInterface!.getName());
    

                                    }
                                
                        else {
                            stringBuffer!.append("No Owner!?#@");
    

                        }
                            
stringBuffer!.append("\nConstructed with document: ");
    
stringBuffer!.append(this.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "Constructor(TransformInfoInterface, Document)");
    

                                    }
                                
}


public constructor (Object transformInfoInterface, string name, string type){

            super();
        this.ownerTransformInfoInterface= transformInfoInterface;
    
this.createDocument();
    

    configNameAttr: Attr = this.document.createAttribute(TransformInfoObjectConfigData.getInstance()!.NAME)!;;
    
configNameAttr!.setValue(name);
    

    objectConfigNode: Node = this.document.getElementsByTagName(TransformInfoObjectConfigData.getInstance()!.NAME)!.item(0)!;;
    
objectConfigNode!.appendChild(configNameAttr);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TransformInfo: ");
    

                        if(this.ownerTransformInfoInterface != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(this.ownerTransformInfoInterface!.getName());
    

                                    }
                                
                        else {
                            stringBuffer!.append("No Owner!?#@");
    

                        }
                            
stringBuffer!.append("\nConstructed with document: ");
    
stringBuffer!.append(this.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "Constructor(TransformInfoInterface, name, type)");
    

                                    }
                                
}


    createDocument(){
this.document= DomDocumentHelper.create();
    

    objectConfigNode: Node = this.document.createElement(TransformInfoObjectConfigData.getInstance()!.NAME)!;;
    
this.document.appendChild(objectConfigNode);
    
}


    TransformInfoInterface getTransformInfoInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ownerTransformInfoInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.document;
    
}


    setDocument(Document document){
this.document= document;
    
}


    public bool containsView(TransformInfoInterface transformInfoInterface){

    objectConfigNode: Node = this.document.getElementsByTagName(TransformInfoObjectConfigData.getInstance()!.NAME)!.item(0)!;;
    

    viewNodeList: NodeList = objectConfigNode!.getChildNodes()!;;
    

    numberOfViews: int32_t = viewNodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfViews; index++)
        {

    viewNode: Node = viewNodeList!.item(index)!;;
    

    viewAttributes: NamedNodeMap = viewNode!.getAttributes()!;;
    

    attrNode: Attr = viewAttributes!.getNamedItem(TransformInfoData.getInstance()!.NAME) as Attr;;
    

                        if(transformInfoInterface!.getName()!.compareTo(attrNode!.getValue()) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    NamedNodeMap getTemplateAttributes(){

    componentNode: Node = this.document.getElementsByTagName(TransformInfoObjectConfigData.getInstance()!.NAME)!.item(0)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return componentNode!.getAttributes();;
    
}


                //@Throws(Exception.constructor)
            
    public string getName(){

    attrNode: Attr = this.getTemplateAttributes()!.getNamedItem(TransformInfoObjectConfigData.getInstance()!.NAME) as Attr;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return attrNode!.getValue();;
    
}


                //@Throws(Exception.constructor)
            
    public setName(string name){

    attrNode: Attr = this.getTemplateAttributes()!.getNamedItem(TransformInfoObjectConfigData.getInstance()!.NAME) as Attr;;
    
attrNode!.setValue(name);
    
}


                //@Throws(Exception.constructor)
            
    Vector getNodeVector(string nodeName){

    componentsNodeList: NodeList = this.document.getElementsByTagName(nodeName)!;;
    

                        if(componentsNodeList != 
                                    null
                                 && componentsNodeList!.getLength() > 0)
                        
                                    {
                                    
    viewNodeVector: Vector = DomSearchHelper.getAllNodes(TransformInfoData.getInstance()!.NAME, componentsNodeList!.item(0)!.getChildNodes())!;;
    

    numberOfViews: int32_t = viewNodeVector!.length!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Number Of ");
    
stringBuffer!.append(nodeName);
    
stringBuffer!.append(" Nodes: ");
    
stringBuffer!.appendint(numberOfViews);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "getNodeVector(nodename)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewNodeVector;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Vector();
    
}


                //@Throws(Exception.constructor)
            
    Vector getTransformDomNodes(string nodeName){

    viewVector: Vector = new Vector();;
    

    viewNodeVector: Vector = this.getNodeVector(nodeName)!;;
    

    size: int32_t = viewNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    viewNode: Node = viewNodeVector!.get(index) as Node;;
    
viewVector!.add(new TransformInfoDomNode(viewNode));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransforms(string nodeName){

    viewVector: Vector = new Vector();;
    

    viewNodeVector: Vector = this.getNodeVector(nodeName)!;;
    

    size: int32_t = viewNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    viewNode: Node = viewNodeVector!.get(index) as Node;;
    
viewVector!.add(new TransformInfoDomNode(viewNode).getTransformInfoInterface());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransformsGroup(string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Started: " +group, this, "getTransformsGroup()");
    

                                    }
                                

    viewVector: Vector = new Vector();;
    

    GROUP: string = TransformInfosData.getInstance()!.GROUP;;
    

    componentsNodeList: NodeList = this.document.getElementsByTagName(GROUP)!;;
    

                        if(componentsNodeList != 
                                    null
                                 && componentsNodeList!.getLength() > 0)
                        
                                    {
                                    
    componentsNode: Node = componentsNodeList!.item(0)!;;
    

    length: int32_t = componentsNodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < length; index++)
        {

    node: Node = componentsNodeList!.item(index)!;;
    

    attributes: NamedNodeMap = node.getAttributes()!;;
    

    attrNode: Attr = attributes.getNamedItem(GROUP) as Attr;;
    

    value: string = attrNode!.getValue()!;;
    

                        if(value.compareTo(group) == 0)
                        
                                    {
                                    componentsNode= node;
    
break;

                    

                                    }
                                
}


    viewNodeVector: Vector = DomSearchHelper.getAllNodes(TransformInfoData.getInstance()!.NAME, componentsNode!.getChildNodes())!;;
    

    numberOfViews: int32_t = viewNodeVector!.length!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Number Of Nodes: " +numberOfViews, this, "getTransformsGroup()");
    

                                    }
                                

    size: int32_t = viewNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    viewNode: Node = viewNodeVector!.get(index) as Node;;
    
viewVector!.add(new TransformInfoDomNode(viewNode));
    
}


                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
                        if(componentsNodeList == 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF("Number Of Nodes: NULL", this, "getTransformsGroup()");
    

                                    }
                                
                        else {
                            this.logUtil!.putF("Number Of Nodes: 0", this, "getTransformsGroup()");
    

                        }
                            

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransformDomNodes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransformDomNodes(TransformInfosData.getInstance()!.GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransforms(TransformInfosData.getInstance()!.NAME);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getGroupTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransforms(TransformInfosData.getInstance()!.GROUP);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getParentTransforms(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTransforms(TransformInfoData.getInstance()!.PARENT);;
    
}


    Node getRootNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.document.getElementsByTagName(TransformInfoObjectConfigData.getInstance()!.NAME)!.item(0);;
    
}


    public setOutputTypeName(string outputTypeName){
this.outputTypeName= outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    public string getOutputTypeName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.outputTypeName;
    
}


                //@Throws(Exception.constructor)
            
    public string getInputOutputTypeName(){

    node: Node = DomSearchHelper.getNode(InputOutputTypeData.getInstance()!.NAME, this.getRootNode()!.getChildNodes())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper.getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    public string getInputOutputTypeFile(){

    node: Node = DomSearchHelper.getNode(InputOutputTypeData.getInstance()!.FILE, this.getRootNode()!.getChildNodes())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper.getTextNodeValue(node);;
    
}


                //@Throws(Exception.constructor)
            
    public string getImportUriPath(){

    node: Node = DomSearchHelper.getNode(XslData.getInstance()!.ROOT_IMPORT_URI, this.getRootNode()!.getChildNodes())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper.getTextNodeValue(node);;
    
}


    public string toString(){

        try {
            
                        if(this.document != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper.toString(this.document);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.putF("DOM Document error", this, this.commonStrings!.TOSTRING);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

