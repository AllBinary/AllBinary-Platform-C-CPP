
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomData.h"

class ModDomHelper
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static Node createTextNode(Document document, string name, string text){

    newValueNode: Node = document.createElement(name)!;;
    

    newValueTextNode: Node = document.createTextNode(text)!;;
    
newValueNode!.appendChild(newValueTextNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newValueNode;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createValueNode(Document document, string text){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createTextNode(document, DomData.VALUE, text);;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameNode(Document document, string text){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createTextNode(document, DomData.NAME, text);;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createIndexNode(Document document, int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createTextNode(document, DomData.INDEX, new Integer(index).toString());;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueNodes(Document document, string elementName, string nameText, string valueText){

    newNode: Node = document.createElement(elementName)!;;
    
newNode!.appendChild(ModDomHelper.createNameNode(document, nameText));
    
newNode!.appendChild(ModDomHelper.createValueNode(document, valueText));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueNodes(Document document, string elementNameAndNameText, string valueText){

    newNode: Node = ModDomHelper.createNameValueNodes(document, elementNameAndNameText, elementNameAndNameText, valueText)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueIndexNodes(Document document, string elementNameAndNameText, int32_t index, string valueText){

    newNode: Node = ModDomHelper.createNameValueNodes(document, elementNameAndNameText, valueText)!;;
    
newNode!.appendChild(ModDomHelper.createIndexNode(document, index));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueNodes(Document document, string rootNode, HashMap<any, any> hashMap){

    node: Node = document.createElement(rootNode)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueNodes(Document document, Node node, HashMap<any, any> hashMap){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    keyArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    objectKey: any = keyArray[i]!;;
    

    name: string = objectKey as string;;
    

    anyType: any = hashMap!.get(objectKey);;
    

                        if(anyType == 
                                    null
                                )
                        
                                    {
                                    
    value: string = stringUtil!.EMPTY_STRING;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(anyType instanceof String)
                        
                                    {
                                    
    value: string = stringUtil!.getNonNull(anyType as string)!;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(anyType instanceof HashMap)
                        
                                    {
                                    node.appendChild(ModDomHelper.createNameValueNodes(document, name, hashMap));
    

                                    }
                                
                        else {
                            


                            throw new Exception("HashMap value is the wrong instance and is: " +ClassUtil.viewAll(anyType, CommonSeps.getInstance()!.NEW_LINE));
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueNodes(Document document, string rootNodeName, string duplicateNodeName, Vector valueVector){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    node: Node = document.createElement(rootNodeName)!;;
    

    size: int32_t = valueVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    value: string = stringUtil!.getNonNull(valueVector!.get(i) as string)!;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, duplicateNodeName, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNameValueIndexNodes(Document document, string rootNodeName, string duplicateNodeName, Vector valueVector){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    node: Node = document.createElement(rootNodeName)!;;
    

    size: int32_t = valueVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    value: string = stringUtil!.getNonNull(valueVector!.get(index) as string)!;;
    
node.appendChild(ModDomHelper.createNameValueIndexNodes(document, duplicateNodeName, index, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNodeWithValueNodes(Document document, string rootNode, HashMap<any, any> hashMap){

    node: Node = document.createElement(rootNode)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNodeWithValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public static Node createNodeWithValueNodes(Document document, Node node, HashMap<any, any> hashMap){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    keyArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    name: string = keyArray[i]! as string;;
    

    anyType: any = hashMap!.get(name);;
    

    value: string = stringUtil!.getNonNull(anyType as string)!;;
    
node.appendChild(ModDomHelper.createTextNode(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


private constructor (){

            super();
        }


};

            

