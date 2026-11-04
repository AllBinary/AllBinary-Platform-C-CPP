
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/ModDomHelper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/java/anyType/clazz/ClassUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/DomData.h"


ModDomHelper::ModDomHelper(){
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createTextNode(Document* document, std::string name, std::string text) -> Node*{

    Node* newValueNode = document->createElement(name);;
    

    Node* newValueTextNode = document->createTextNode(text);;
    
newValueNode->appendChild(newValueTextNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newValueNode;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createValueNode(Document* document, std::string text) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createTextNode(document, DomData::VALUE, text);;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameNode(Document* document, std::string text) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createTextNode(document, DomData::NAME, text);;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createIndexNode(Document* document, int32_t index) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createTextNode(document, DomData::INDEX, JavaString::valueOf((int32_t(index))));;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueNodes(Document* document, std::string elementName, std::string nameText, std::string valueText) -> Node*{

    Node* newNode = document->createElement(elementName);;
    
newNode->appendChild(ModDomHelper::createNameNode(document, nameText));
    
newNode->appendChild(ModDomHelper::createValueNode(document, valueText));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueNodes(Document* document, std::string elementNameAndNameText, std::string valueText) -> Node*{

    Node* newNode = ModDomHelper::createNameValueNodes(document, elementNameAndNameText, elementNameAndNameText, valueText);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueIndexNodes(Document* document, std::string elementNameAndNameText, int32_t index, std::string valueText) -> Node*{

    Node* newNode = ModDomHelper::createNameValueNodes(document, elementNameAndNameText, valueText);;
    
newNode->appendChild(ModDomHelper::createIndexNode(document, index));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newNode;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueNodes(Document* document, std::string rootNode, HashMap<Object*, Object*>* hashMap) -> Node*{

    Node* node = document->createElement(rootNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createNameValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueNodes(Document* document, Node* node, HashMap<Object*, Object*>* hashMap) -> Node*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Set* keySet = hashMap->keys();;
    

    std::vector<Object*> keyArray = keySet->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Object* objectKey = keyArray[i];;
    

    std::string name = JavaBoxes::unbox<std::string>(objectKey);;
    

    Object* anyType = JavaBoxes::toObject(hashMap->get(objectKey));;
    

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string value = stringUtil->EMPTY_STRING;;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const String*>(anyType) != nullptr)
                                    )
                        
                                    {
                                    
    std::string value = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(anyType));;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const HashMap*>(anyType) != nullptr)
                                    )
                        
                                    {
                                    node->appendChild(ModDomHelper::createNameValueNodes(document, name, hashMap));
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("HashMap value is the wrong instance and is: ") +JavaString::valueOf(ClassUtil::viewAll(anyType, CommonSeps::getInstance()->NEW_LINE)));
                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueNodes(Document* document, std::string rootNodeName, std::string duplicateNodeName, BasicArrayList* valueVector) -> Node*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Node* node = document->createElement(rootNodeName);;
    

    int32_t size = valueVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string value = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(valueVector->get(i)));;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, duplicateNodeName, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNameValueIndexNodes(Document* document, std::string rootNodeName, std::string duplicateNodeName, BasicArrayList* valueVector) -> Node*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Node* node = document->createElement(rootNodeName);;
    

    int32_t size = valueVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string value = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(valueVector->get(index)));;
    
node->appendChild(ModDomHelper::createNameValueIndexNodes(document, duplicateNodeName, index, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNodeWithValueNodes(Document* document, std::string rootNode, HashMap<Object*, Object*>* hashMap) -> Node*{

    Node* node = document->createElement(rootNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createNodeWithValueNodes(document, node, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto ModDomHelper::createNodeWithValueNodes(Document* document, Node* node, HashMap<Object*, Object*>* hashMap) -> Node*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    Set* keySet = hashMap->keys();;
    

    std::vector<Object*> keyArray = keySet->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string name = JavaBoxes::unbox<std::string>(keyArray[i]);;
    

    Object* anyType = JavaBoxes::toObject(hashMap->get(name));;
    

    std::string value = stringUtil->getNonNull(JavaBoxes::unbox<std::string>(anyType));;
    
node->appendChild(ModDomHelper::createTextNode(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_MODDOMHELPER_CPP
