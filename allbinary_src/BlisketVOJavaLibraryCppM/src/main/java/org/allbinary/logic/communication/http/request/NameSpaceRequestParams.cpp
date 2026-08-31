
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RequestParams.h"
#include "NameSpaceRequestParamData.h"
#include "NameSpaceRequestParam.h"
//containing string values and other hashmaps of the like
class NameSpaceRequestParams: public RequestParams {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Constructing empty", this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


public constructor (HttpServletRequest httpServletRequest){
            super(httpServletRequest);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Constructing from HttpServletRequest", this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


public constructor (PageContext pageContext){
            super(pageContext);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Constructing from PageContext", this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    Node createPackageNode(Document document, string packageName, HashMap<any, any> packagePropertiesHashMap){

    node: Node = document.createElement(packageName)!;;
    

    propertyKeySet: Set = packagePropertiesHashMap!.keys()!;;
    

    propertyKeySetArray: std::vector<any> = propertyKeySet!.toArray()!;;
    

    size: int32_t = propertyKeySetArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    propertyName: string = propertyKeySetArray[index]! as string;;
    

    propertyValue: string = packagePropertiesHashMap!.get(propertyName) as string;;
    

    propertyNode: Node = ModDomHelper.createTextNode(document, propertyName, propertyValue)!;;
    
node.appendChild(propertyNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    Node createPackageMultiNode(Document document, NameSpaceRequestParam nameSpaceRequestParam, string packageName, HashMap<any, any> packagePropertiesHashMap){

    beginIndex: int32_t = packageName!.indexOf('[')!;;
    

    indexValue: string = packageName!.substring(beginIndex +1, packageName!.length -1)!;;
    

    multiElementPackage: string = packageName!.substring(0, beginIndex)!;;
    

    selectedValue: string = nameSpaceRequestParam!.getValue()!;;
    

    propertyValue: string = packagePropertiesHashMap!.get(DomData.VALUE) as string;;
    

                        if(propertyValue!.compareTo(NameSpaceRequestParamData.VALUE) != 0)
                        
                                    {
                                    selectedValue= propertyValue;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nAppending Multinode Element: " +multiElementPackage +"[" +indexValue +"] " +selectedValue, this, "createPackageMultiNode");
    

                                    }
                                

    nextNode: Node = ModDomHelper.createNameValueNodes(document, multiElementPackage, selectedValue)!;;
    

    indexNode: Node = ModDomHelper.createTextNode(document, DomData.INDEX, indexValue)!;;
    
nextNode!.appendChild(indexNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nextNode;
    
}


                //@Throws(Exception.constructor)
            
    Node getRootNode(string rootElementPackage, HashMap<any, any> packagePropertiesHashMap, Document document){

    rootNode: Node = DomSearchHelper.getNodeNoThrow(rootElementPackage, document.getChildNodes())!;;
    

                        if(rootNode == 
                                    null
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nAppending Document Root: " +"\nElementName: " +rootElementPackage +"\nProperties: " +packagePropertiesHashMap!.toString(), this, "getRootNode");
    

                                    }
                                

    node: Node = this.createPackageNode(document, rootElementPackage, packagePropertiesHashMap)!;;
    
document.appendChild(node);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nAppended Document Created: " +DomDocumentHelper.toString(document), this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nUsing Existing Root Node", this, "getRootNode");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootNode;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    Node addNewProperties(Document document, Node node, HashMap<any, any> nextPackagePropertiesHashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("\nAdding Any New Properties: ")!.append(nextPackagePropertiesHashMap!.toString())!.append("\nto node: ")!.append(node.getNodeName())!.toString(), this, "addNewProperties");
    

                                    }
                                

    propertyNameSet: Set = nextPackagePropertiesHashMap!.keys()!;;
    

    propertyNameSetArray: std::vector<any> = propertyNameSet!.toArray()!;;
    

    size: int32_t = propertyNameSetArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextPropertyName: string = propertyNameSetArray[index]! as string;;
    

    propertyValue: string = StringUtil.getInstance()!.getNonNull(nextPackagePropertiesHashMap!.get(nextPropertyName) as string)!;;
    

    valueNode: Node = DomSearchHelper.getNodeNoThrow(nextPropertyName, node.getChildNodes())!;;
    

                        if(valueNode != 
                                    null
                                )
                        
                                    {
                                    
    existingElementNodeTextNodeValue: string = DomNodeHelper.getTextNodeValue(valueNode)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nIf property: \"" +nextPropertyName +" is the same as:\n" +"Node: " +node.getNodeName() +" then: " +propertyValue +"==" +existingElementNodeTextNodeValue, this, "addNewProperties");
    

                                    }
                                

                        if(propertyValue!.compareTo(existingElementNodeTextNodeValue) != 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("At least one Property from NameSpaceRequest Package was different from Node", this, "addNewProperties");
    

                                    }
                                



                            throw new Exception("Property Modifications Should Not Occur");
                    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Adding a new Property: " +nextPropertyName +"=" +propertyValue, this, "addNewProperties");
    

                                    }
                                

    newPropertyNode: Node = ModDomHelper.createTextNode(document, nextPropertyName, propertyValue)!;;
    
node.appendChild(newPropertyNode);
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    bool isElementValueTextNodeEqual(HashMap<any, any> nextPackagePropertiesHashMap, Node node){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nComparing the value property in: " +nextPackagePropertiesHashMap!.toString() +"\nto node child leaves of node: " +node.getNodeName(), this, "isElementValueTextNodeEqual");
    

                                    }
                                

    propertyValue: string = nextPackagePropertiesHashMap!.get(DomData.VALUE) as string;;
    

    valueNode: Node = DomSearchHelper.getNodeNoThrow(DomData.VALUE, node.getChildNodes())!;;
    

                        if(valueNode != 
                                    null
                                )
                        
                                    {
                                    
    existingElementNodeTextNodeValue: string = DomNodeHelper.getTextNodeValue(valueNode)!;;
    

                        if(propertyValue!.compareTo(existingElementNodeTextNodeValue) == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Value Node is the same", this, "isElementValueTextNodeEqual");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    int32_t isElementValueTextNodeUnique(HashMap<any, any> nextPackagePropertiesHashMap, Vector elementNodeVector){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nComparing Properties of: " +elementNodeVector!.length +" Nodes", this, "isElementValueTextNodeUnique");
    

                                    }
                                

    size: int32_t = elementNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    existingElementNode: Node = elementNodeVector!.get(index) as Node;;
    

                        if(this.isElementValueTextNodeEqual(nextPackagePropertiesHashMap, existingElementNode))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


                //@Throws(Exception.constructor)
            
    Document addChildren(Document document, Node rootNode, NameSpaceRequestParam nameSpaceRequestParam){

    node: Node = rootNode;;
    

    packageVector: Vector = nameSpaceRequestParam!.getPackages()!;;
    

    size: int32_t = packageVector!.length!;;
    




                        for (
    index: int32_t = 1;index < size; index++)
        {

    nextPackageName: string = packageVector!.get(index) as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("\nTrying to Add Child to Node: ")!.append(node.getNodeName())!.append("\nwith new PackageName: ")!.append(nextPackageName)!.toString(), this, "addChildren");
    

                                    }
                                

    nextPackagePropertiesHashMap: HashMap<any, any> = nameSpaceRequestParam!.getPackageProperties(index)!;;
    

    elementNodeVector: Vector = DomSearchHelper.getAllNodesNoThrow(nextPackageName, node.getChildNodes())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nDocument Contains " +elementNodeVector!.length +" Node(s) With Same Name", this, "addChildren");
    

                                    }
                                

    isElementValueTextNodeUniqueIndex: int32_t = this.isElementValueTextNodeUnique(nextPackagePropertiesHashMap, elementNodeVector)!;;
    

                        if((elementNodeVector!.length == 0 || isElementValueTextNodeUniqueIndex ==  -1) && !nextPackageName!.endsWith(CommonSeps.getInstance()!.BRACKET_CLOSE))
                        
                                    {
                                    
    nextNode: Node = this.createPackageNode(document, nextPackageName, nextPackagePropertiesHashMap)!;;
    
node.appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nAppended Package: " +node.getNodeName(), this, "addChildren");
    
this.logUtil!.putF("\nAppended Document Created: " +DomDocumentHelper.toString(document), this, "addChildren");
    

                                    }
                                

                                    }
                                
                             else 
                        if(nextPackageName!.endsWith(CommonSeps.getInstance()!.BRACKET_CLOSE))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Package is MultiNode: just append", this, "addChildren");
    

                                    }
                                

    nextNode: Node = this.createPackageMultiNode(document, nameSpaceRequestParam, nextPackageName, nextPackagePropertiesHashMap)!;;
    
node.appendChild(nextNode);
    
node= nextNode;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nAppended Multinode Element: " +DomDocumentHelper.toString(document), this, "addChildren");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Value Node already exists: Now compare (properties to leaf nodes)", this, "addChildren");
    

                                    }
                                

    nodeNameDuplicateNode: Node = elementNodeVector!.get(isElementValueTextNodeUniqueIndex) as Node;;
    
node= this.addNewProperties(document, nodeNameDuplicateNode, nextPackagePropertiesHashMap);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("\nDuplicate Node Found: Moving to next child ^", this, "addChildre");
    

                                    }
                                

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    Document addNameSpace(string key, string value, Document document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("NameSpace key: ")!.append(key)!.append(" Value: ")!.append(value)!.toString(), this, "addNameSpace");
    

                                    }
                                

    nameSpaceRequestParam: NameSpaceRequestParam = new NameSpaceRequestParam(key, value);;
    

    packageVector: Vector = nameSpaceRequestParam!.getPackages()!;;
    

    size: int32_t = packageVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    packageName: string = packageVector!.get(index) as string;;
    

    packagePropertiesHashMap: HashMap<any, any> = nameSpaceRequestParam!.getPackageProperties(packageVector!.indexOf(packageName))!;;
    

    rootNode: Node = this.getRootNode(packageName, packagePropertiesHashMap, document)!;;
    

                        if(index < size -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.addChildren(document, rootNode as Node, nameSpaceRequestParam);;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    document: Document = DomDocumentHelper.create()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    keys: Set = this.getMap()!.keySet()!;;
    

    keyArray: std::vector<any> = keys.toArray()!;;
    

    keySize: int32_t = keyArray!.length
                ;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("NameSpace Request Size: " +keys.size(), this, "toHashMap");
    

                                    }
                                




                        for (
    i: int32_t = 0;i < keySize; i++)
        {

    key: string = keyArray[i]! as string;;
    

    anyType: any = this.getMap()!.get(key)!;;
    

    className: string = anyType!.constructor.name.toString()! as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Request Param Class: " +className, this, "toHashMap");
    

                                    }
                                

                        if(this.getMap()!.get(key) instanceof String)
                        
                                    {
                                    
    value: string = this.getMap()!.get(key) as string;;
    

                        if(key.indexOf(NameSpaceRequestParamData.NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Not NameSpace key: " +key +" Value: " +value, this, "toHashMap()");
    

                                    }
                                
hashMap!.put(key.toCharArray().slice(0, ).join(''), value.toCharArray().slice(0, ).join(''));
    

                                    }
                                
                        else {
                            document= this.addNameSpace(key.toCharArray().slice(0, ).join(''), value.toCharArray().slice(0, ).join(''), document);
    

                        }
                            

                                    }
                                
                             else 
                        if(this.getMap()!.get(key) instanceof )
                        
                                    {
                                    
    values: std::vector<string> = this.getMap()!.get(key) as string[];;
    

                        if(key.indexOf(NameSpaceRequestParamData.NAME) < 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("Not NameSpace key: " +key +" Value: " +values[0], this, "toHashMap()");
    

                                    }
                                
hashMap!.put(key.toCharArray().slice(0, ).join(''), .toCharArray());
    

                                    }
                                
                        else {
                            document= this.addNameSpace(key.toCharArray().slice(0, ).join(''), .toCharArray(), document);
    

                        }
                            

                                    }
                                
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    this.logUtil!.putF("NameSpaceRequestParams: " +this.getMap()!.toString() +"\ntoHashMap(): " +hashMap!.toString() +"\nDocument Created: " +DomDocumentHelper.toString(document), this, "toHashMap()");
    

                                    }
                                
hashMap!.put(NameSpaceRequestParamData.DOCUMENT, document);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


};

            

