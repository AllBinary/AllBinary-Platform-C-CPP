
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

class MultiSelectPaintable: public SelectionHudPaintable {

    private: BasicArrayList* rootNameList = new BasicArrayListD();

    private: std::vector<char> totalCharArray = NullUtil::getInstance()->NULL_CHAR_ARRAY;

    private: std::string rootNamesString = StringUtil::getInstance()->EMPTY_STRING;

    private: const std::string TOTAL = "Total Selected: ";

    private: const int32_t backgroundColor = BasicColorFactory::getInstance()->GREY.intValue();

    private: int32_t totalWidth= 0;

    private: int32_t textLine2Y= 0;

public: MultiSelectPaintable(){
}


    public: void updateMeasurement(Graphics* graphics){
super.updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->totalWidth= font->stringWidth(this->TOTAL);
    
this->textLine2Y= (this->y +font->getHeight());
    
}


    public: void update(BasicArrayList* list){
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


    private: void clear(){
this->rootNameList->clear();
    
}


    public: void paint(Graphics* graphics){
graphics->setColor(this->backgroundColor);
    
graphics->drawRect(this->getX(), this->y, this->getWidth(), this->getHeight());
    
graphics->setColor(this->getColor());
    
graphics->drawString(this->TOTAL, this->textX, this->y, 0);
    
graphics->drawChars(this->totalCharArray, 0, this->getPrimitiveLongUtil()->getCurrentTotalDigits(), this->textX +this->totalWidth, this->y, 0);
    
graphics->drawString(this->rootNamesString, this->textX, this->textLine2Y, 0);
    
}


};

            

