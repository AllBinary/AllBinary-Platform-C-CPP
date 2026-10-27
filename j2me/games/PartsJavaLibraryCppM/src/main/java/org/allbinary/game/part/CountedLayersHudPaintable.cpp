
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"

class CountedLayersHudPaintable
            : public Object
        , public PaintableInterface, public UpdateMyFontInterface {

    private: static inline int32_t XXStringWidth = 0;

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: std::vector<PartInterface*> partInterfaceArray;

    private: int32_t countedTotalStringColor;

    private: int32_t countedPartsBorder;

    private: int32_t startIndex;

    private: int32_t dropSize;

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: int32_t height= 0;

public: CountedLayersHudPaintable(std::vector<PartInterface*> partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder){
this->partInterfaceArray= partInterfaceArray;
    
this->startIndex= startIndex;
    
this->countedTotalStringColor= countedTotalStringColor;
    
this->countedPartsBorder= countedPartsBorder;
    
this->dropSize= dropSize;
    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->height= font->getHeight();
    

                        if(this->dropSize > font->getHeight())
                        
                                    {
                                    this->height= this->dropSize;
    

                                    }
                                

                        if(CountedLayersHudPaintable::XXStringWidth == 0)
                        
                                    {
                                    
    std::string XXString = "XX";;
    
CountedLayersHudPaintable::XXStringWidth= font->stringWidth(XXString);
    

                                    }
                                
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics* graphics){
this->myFontProcessor->process(graphics);
    

    int32_t lastWidth = this->displayInfoSingleton->getLastWidth();;
    

    int32_t widthEdge = lastWidth -this->dropSize;;
    

    int32_t size = this->partInterfaceArray.size();;
    

    int32_t count = 0;;
    

    int32_t y= 0;;
    

    CountedLayerInterfaceFactoryPart* countedLayerInterfaceFactory;;
    

    PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface;;
    

    AllBinaryLayer* layerInterface;;
    

    std::vector<char> charArray;;
    




                        for (
    int32_t index = this->startIndex;index < size; index++)
        {
countedLayerInterfaceFactory= dynamic_cast<CountedLayerInterfaceFactoryPart*>(this->partInterfaceArray[index]);
    

                        if(countedLayerInterfaceFactory->getTotal() > 0)
                        
                                    {
                                    pickedUpLayerInterfaceFactoryInterface= countedLayerInterfaceFactory->getCountedPickedUpLayerInterfaceFactory();
    
layerInterface= pickedUpLayerInterfaceFactoryInterface->getIconLayer();
    
y= 40 +(count *this->height);
    
layerInterface->setPosition(widthEdge, y, layerInterface->getZP());
    
layerInterface->paint(graphics);
    
graphics->setColor(this->countedTotalStringColor);
    
countedLayerInterfaceFactory->paint(graphics);
    
charArray= countedLayerInterfaceFactory->getTotalString();
    
graphics->drawChars(charArray, 0, charArray.size(), widthEdge -countedLayerInterfaceFactory->getXOffset(), y, 0);
    
count++;
    

                                    }
                                
}


                        if(count > 0)
                        
                                    {
                                    graphics->setColor(this->countedPartsBorder);
    
graphics->drawRect(lastWidth -(CountedLayersHudPaintable::XXStringWidth +this->dropSize), 40, CountedLayersHudPaintable::XXStringWidth +this->dropSize, (count *this->height) +3);
    

                                    }
                                
}


    public: void paintThreed(Graphics* graphics){
}


};

            

