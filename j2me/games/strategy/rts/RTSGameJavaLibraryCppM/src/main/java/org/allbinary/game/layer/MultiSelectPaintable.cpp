
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/MultiSelectPaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer.h"


MultiSelectPaintable::MultiSelectPaintable() : rootNameList(new BasicArrayListD()), totalCharArray(NullUtil::getInstance()->NULL_CHAR_ARRAY), rootNamesString(StringUtil::getInstance()->EMPTY_STRING), backgroundColor(BasicColorFactory::getInstance()->GREY->intValue()){
}


    auto MultiSelectPaintable::updateMeasurement(Graphics* graphics) -> void{
SelectionHudPaintable::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->totalWidth= font->stringWidth(this->TOTAL);
    
this->textLine2Y= (this->y +font->getHeight());
    
}


    auto MultiSelectPaintable::update(BasicArrayList* list) -> void{
this->clear();
    

    int32_t size = list->size();;
    
this->totalCharArray= this->getPrimitiveLongUtil()->getCharArray(size);
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(list->get(index));;
    

                        if(!this->rootNameList->contains(rtsLayer->getRootName()))
                        
                                    {
                                    this->rootNameList->add(rtsLayer->getRootName());
    

                                    }
                                
}


    std::string COMMA_SEP = CommonSeps::getInstance()->COMMA_SEP;;
    

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = this->rootNameList->size() -1;index >= 0; index--)
        {

    std::string rootName = this->rootNameList->get(index);;
    
stringBuffer->append(rootName);
    

                        if(index != 0)
                        
                                    {
                                    stringBuffer->append(COMMA_SEP);
    

                                    }
                                
}

this->rootNamesString= stringBuffer->toString();
    
}


    auto MultiSelectPaintable::clear() -> void{
this->rootNameList->clear();
    
}


    auto MultiSelectPaintable::paint(Graphics* graphics) -> void{
graphics->setColor(this->backgroundColor);
    
graphics->drawRect(this->getX(), this->y, this->getWidth(), this->getHeight());
    
graphics->setColor(this->getColor());
    
graphics->drawString(this->TOTAL, this->textX, this->y, 0);
    
graphics->drawChars(this->totalCharArray, 0, this->getPrimitiveLongUtil()->getCurrentTotalDigits(), this->textX +this->totalWidth, this->y, 0);
    
graphics->drawString(this->rootNamesString, this->textX, this->textLine2Y, 0);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_MULTISELECTPAINTABLE_CPP
