
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputData.h"


ImageTypes::ImageTypes() : vector(new BasicArrayListD()){
}


ImageTypes::ImageTypes(Node* node) : vector(new BasicArrayListD()){

    NodeList* nodeList = node->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(ImageActionScriptOutputData::TYPE) == 0)
                        
                                    {
                                    
    std::string nextImageTypeString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getVector()->add(InputImageType::getInstance(nextImageTypeString));
    

                                    }
                                
                        else {
                            


                            throw Exception("ImageTypes Unknown Node");
                    

                        }
                            
}

}


    auto ImageTypes::valueOf(std::vector<Object*> anyType) -> ImageTypes*{

    ImageTypes* imageTypes = new ImageTypes();;
    




                        for (
    int32_t index = 0;index < anyType.size(); index++)
        {

    InputImageType* imageType = InputImageType::getInstance(JavaBoxes::unbox<std::string>(anyType[index]));;
    
imageTypes->getVector()->add(imageType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageTypes;
    
}


    auto ImageTypes::getVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vector;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageTypes::toXmlNode(Document* document) -> Node*{

    Node* newNode = document->createElement(ImageActionScriptOutputData::TYPES);;
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType* imageType = dynamic_cast<InputImageType*>(this->vector->get(index));;
    
newNode->appendChild(ModDomHelper::createTextNode(document, ImageActionScriptOutputData::TYPE, imageType->getName()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


    auto ImageTypes::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("ImageTypes: ");
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType* imageType = dynamic_cast<InputImageType*>(this->vector->get(index));;
    
stringBuffer->append(imageType->getName());
    

                        if(index < size -1)
                        stringBuffer->append(", ");
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGETYPES_CPP
