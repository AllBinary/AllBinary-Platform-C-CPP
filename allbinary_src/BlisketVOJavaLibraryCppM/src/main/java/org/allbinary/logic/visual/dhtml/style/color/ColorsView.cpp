
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
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorData.h"
#include "ColorsData.h"

class ColorsView
            : public Object
        : public DomNodeInterface {

    private: const CommonPhoneStrings commonPhoneStrings = CommonPhoneStrings::getInstance();

    private: const int32_t HEXRADIX = 16;

    private: const int32_t MAX = 255;

    const int32_t delta = 20;

public: ColorsView(){
}


                //@Throws(Exception.constructor)
            
    public: Node getColorNode(Document document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex){

    StringMaker hexColorStringBuffer = StringMaker();;
    

                        if(redIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(redIndex));
    

                        if(greenIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(greenIndex));
    

                        if(blueIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(blueIndex));
    

    Node colorNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance().NAME, hexColorStringBuffer.toString());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return colorNode;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createNameValueNodes(document, ColorsData::getInstance().NAME, "RGB Colors In Hex");;
    

    Node blackNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance().NAME, "000000");;
    
node.appendChild(blackNode);
    




                        for (
    int32_t index = 0;index < this->MAX; )
        {

    StringMaker hexColorStringBuffer = StringMaker();;
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(index));
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(index));
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer.append(this->commonPhoneStrings.ZERO);
    

                                    }
                                
hexColorStringBuffer.append(std::to_string(index));
    

    Node colorNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance().NAME, hexColorStringBuffer.toString());;
    
node.appendChild(colorNode);
    
}


    Node whiteNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance().NAME, "FFFFFF");;
    
node.appendChild(whiteNode);
    




                        for (
    int32_t blueIndex = this->MAX /2;blueIndex < this->MAX; )
        {




                        for (
    int32_t greenIndex = 0;greenIndex < this->MAX /2; )
        {




                        for (
    int32_t redIndex = 0;redIndex < this->MAX /2; )
        {
node.appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    int32_t redIndex = this->MAX /2;redIndex < this->MAX; )
        {




                        for (
    int32_t greenIndex = 0;greenIndex < this->MAX /2; )
        {




                        for (
    int32_t blueIndex = 0;blueIndex < this->MAX /2; )
        {
node.appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    int32_t greenIndex = this->MAX /2;greenIndex < this->MAX; )
        {




                        for (
    int32_t redIndex = 0;redIndex < this->MAX /2; )
        {




                        for (
    int32_t blueIndex = 0;blueIndex < this->MAX /2; )
        {
node.appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}





                        for (
    int32_t greenIndex = 0;greenIndex < this->MAX; )
        {




                        for (
    int32_t redIndex = 0;redIndex < this->MAX; )
        {




                        for (
    int32_t blueIndex = 0;blueIndex < this->MAX; )
        {
node.appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

