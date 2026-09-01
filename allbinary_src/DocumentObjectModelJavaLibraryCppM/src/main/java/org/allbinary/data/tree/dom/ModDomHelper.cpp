
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
        



            #include <vector>
        
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
            
    public: static Node createTextNode(Document document, std::string name, std::string text){

    Node newValueNode = document.createElement(name);;
    

    Node newValueTextNode = document.createTextNode(text);;
    
newValueNode.appendChild(newValueTextNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newValueNode;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createValueNode(Document document, std::string text){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createTextNode(document, DomData::VALUE, text);;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameNode(Document document, std::string text){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createTextNode(document, DomData::NAME, text);;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createIndexNode(Document document, int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createTextNode(document, DomData::INDEX, Integer(index).toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string elementName, std::string nameText, std::string valueText){

    Node newNode = document.createElement(elementName);;
    
newNode.appendChild(ModDomHelper::createNameNode(document, nameText));
    
newNode.appendChild(ModDomHelper::createValueNode(document, valueText));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string elementNameAndNameText, std::string valueText){

    Node newNode = ModDomHelper::createNameValueNodes(document, elementNameAndNameText, elementNameAndNameText, valueText);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueIndexNodes(Document document, std::string elementNameAndNameText, int32_t index, std::string valueText){

    Node newNode = ModDomHelper::createNameValueNodes(document, elementNameAndNameText, valueText);;
    
newNode.appendChild(ModDomHelper::createIndexNode(document, index));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string rootNode, HashMap<any, any> hashMap){

    Node node = document.createElement(rootNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, Node node, HashMap<any, any> hashMap){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    Set keySet = hashMap.keys();;
    

    std::vector<Object*> keyArray = keySet.();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Object* objectKey = keyArray[i];;
    

    std::string name = objectKey as string;;
    

    Object* anyType = hashMap.get(objectKey);;
    

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string value = stringUtil.EMPTY_STRING;;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(anyType instanceof String)
                        
                                    {
                                    
    std::string value = stringUtil.getNonNull(anyType as string);;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(anyType instanceof HashMap)
                        
                                    {
                                    node.appendChild(ModDomHelper::createNameValueNodes(document, name, hashMap));
    

                                    }
                                
                        else {
                            


                            throw Exception("HashMap value is the wrong instance and is: " +ClassUtil::viewAll(anyType, CommonSeps::getInstance().NEW_LINE));
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueNodes(Document document, std::string rootNodeName, std::string duplicateNodeName, Vector valueVector){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    Node node = document.createElement(rootNodeName);;
    

    int32_t size = valueVector.length;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string value = stringUtil.getNonNull(valueVector.get(i) as string);;
    
node.appendChild(ModDomHelper::createNameValueNodes(document, duplicateNodeName, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNameValueIndexNodes(Document document, std::string rootNodeName, std::string duplicateNodeName, Vector valueVector){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    Node node = document.createElement(rootNodeName);;
    

    int32_t size = valueVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string value = stringUtil.getNonNull(valueVector.get(index) as string);;
    
node.appendChild(ModDomHelper::createNameValueIndexNodes(document, duplicateNodeName, index, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNodeWithValueNodes(Document document, std::string rootNode, HashMap<any, any> hashMap){

    Node node = document.createElement(rootNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNodeWithValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node createNodeWithValueNodes(Document document, Node node, HashMap<any, any> hashMap){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    Set keySet = hashMap.keys();;
    

    std::vector<Object*> keyArray = keySet.();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = keyArray[i]! as string;;
    

    Object* anyType = hashMap.get(name);;
    

    std::string value = stringUtil.getNonNull(anyType as string);;
    
node.appendChild(ModDomHelper::createTextNode(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


private: ModDomHelper(){
}


};

            

