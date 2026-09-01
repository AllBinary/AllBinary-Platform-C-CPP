
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
        
            #include "../../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageActionScriptOutputData.h"

class ImageTypes
            : public Object
         {

    public: static ImageTypes valueOf(std::vector<Object*> anyType){

    ImageTypes imageTypes = ImageTypes();;
    




                        for (
    int32_t index = 0;index < anyType.size(); index++)
        {

    InputImageType imageType = InputImageType::getInstance(anyType[index]! as string);;
    
imageTypes.getVector().add(imageType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageTypes;
    
}


    private: Vector vector = Vector();

public: ImageTypes(){
}


public: ImageTypes(Node node){

    NodeList nodeList = node.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node childNode = nodeList.item(index);;
    

                        if(childNode.getNodeName().compareTo(ImageActionScriptOutputData::TYPE) == 0)
                        
                                    {
                                    
    std::string nextImageTypeString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->getVector().add(InputImageType::getInstance(nextImageTypeString));
    

                                    }
                                
                        else {
                            


                            throw Exception("ImageTypes Unknown Node");
                    

                        }
                            
}

}


    public: Vector getVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vector;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node newNode = document.createElement(ImageActionScriptOutputData::TYPES);;
    

    int32_t size = this->vector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType imageType = this->vector.get(index) as InputImageType;;
    
newNode.appendChild(ModDomHelper::createTextNode(document, ImageActionScriptOutputData::TYPE, imageType.getName()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newNode;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("ImageTypes: ");
    

    int32_t size = this->vector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    InputImageType imageType = this->vector.get(index) as InputImageType;;
    
stringBuffer.append(imageType.getName());
    

                        if(index < size -1)
                        stringBuffer.append(", ");
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

