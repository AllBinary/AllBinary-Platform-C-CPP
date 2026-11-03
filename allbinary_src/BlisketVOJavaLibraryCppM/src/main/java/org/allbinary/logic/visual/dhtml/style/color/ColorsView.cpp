
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/dhtml/style/color/ColorsView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/color/ColorData.h"
#include "org/allbinary/logic/visual/dhtml/style/color/ColorsData.h"


ColorsView::ColorsView() : commonPhoneStrings(CommonPhoneStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto ColorsView::getColorNode(Document* document, int32_t redIndex, int32_t greenIndex, int32_t blueIndex) -> Node*{

    StringMaker* hexColorStringBuffer = new StringMaker();;
    

                        if(redIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(redIndex));
    

                        if(greenIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(greenIndex));
    

                        if(blueIndex < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(blueIndex));
    

    Node* colorNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance()->NAME, hexColorStringBuffer->toString());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return colorNode;
    
}


                //@Throws(Exception.constructor)
            
    auto ColorsView::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNameValueNodes(document, ColorsData::getInstance()->NAME, "RGB Colors In Hex");;
    

    Node* blackNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance()->NAME, "000000");;
    
node->appendChild(blackNode);
    




                        for (
    int32_t index = 0;index < this->MAX; )
        {

    StringMaker* hexColorStringBuffer = new StringMaker();;
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(index));
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(index));
    

                        if(index < this->HEXRADIX)
                        
                                    {
                                    hexColorStringBuffer->append(this->commonPhoneStrings->ZERO);
    

                                    }
                                
hexColorStringBuffer->append(std::to_string(index));
    

    Node* colorNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance()->NAME, hexColorStringBuffer->toString());;
    
node->appendChild(colorNode);
    
}


    Node* whiteNode = ModDomHelper::createNameValueNodes(document, ColorData::getInstance()->NAME, "FFFFFF");;
    
node->appendChild(whiteNode);
    




                        for (
    int32_t blueIndex = this->MAX /2;blueIndex < this->MAX; )
        {




                        for (
    int32_t greenIndex = 0;greenIndex < this->MAX /2; )
        {




                        for (
    int32_t redIndex = 0;redIndex < this->MAX /2; )
        {
node->appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
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
node->appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
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
node->appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
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
node->appendChild(this->getColorNode(document, redIndex, greenIndex, blueIndex));
    
}

}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_COLOR_COLORSVIEW_CPP
