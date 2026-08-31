
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
        



            #include "../../../../java/lang/Object.h"
        
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
        #include "PartInterface.h"
#include "CountedLayerInterfaceFactoryPart.h"

class CountedLayersHudPaintable
            : public Object
        : public PaintableInterface, public UpdateMyFontInterface {
        

    private: static XXStringWidth: int32_t = 0;

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const partInterfaceArray: std::vector<PartInterface>;

    private: const countedTotalStringColor: int32_t;

    private: const countedPartsBorder: int32_t;

    private: const startIndex: int32_t;

    private: const dropSize: int32_t;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: height: int32_t= 0;

public constructor (std::vector<PartInterface> partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder){

            super();
        this.partInterfaceArray= partInterfaceArray;
    
this.startIndex= startIndex;
    
this.countedTotalStringColor= countedTotalStringColor;
    
this.countedPartsBorder= countedPartsBorder;
    
this.dropSize= dropSize;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.height= font.getHeight();
    

                        if(this.dropSize > font.getHeight())
                        
                                    {
                                    this.height= this.dropSize;
    

                                    }
                                

                        if(CountedLayersHudPaintable.XXStringWidth == 0)
                        
                                    {
                                    
    XXString: string = "XX";;
    
CountedLayersHudPaintable.XXStringWidth= font.stringWidth(XXString);
    

                                    }
                                
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    lastWidth: int32_t = this.displayInfoSingleton!.getLastWidth()!;;
    

    widthEdge: int32_t = lastWidth -this.dropSize;;
    

    size: int32_t = this.partInterfaceArray!.length
                ;;
    

    count: int32_t = 0;;
    

    y: int32_t= 0;;
    

    countedLayerInterfaceFactory: CountedLayerInterfaceFactoryPart;;
    

    pickedUpLayerInterfaceFactoryInterface: PickedUpLayerInterfaceFactoryInterface;;
    

    layerInterface: AllBinaryLayer;;
    

    charArray: std::vector<char>;;
    




                        for (
    index: int32_t = this.startIndex;index < size; index++)
        {
countedLayerInterfaceFactory= this.partInterfaceArray[index]! as CountedLayerInterfaceFactoryPart;
    

                        if(countedLayerInterfaceFactory!.getTotal() > 0)
                        
                                    {
                                    pickedUpLayerInterfaceFactoryInterface= countedLayerInterfaceFactory!.getCountedPickedUpLayerInterfaceFactory();
    
layerInterface= pickedUpLayerInterfaceFactoryInterface!.getIconLayer();
    
y= 40 +(count *this.height);
    
layerInterface!.setPosition(widthEdge, y, layerInterface!.getZP());
    
layerInterface!.paint(graphics);
    
graphics.setColor(this.countedTotalStringColor);
    
countedLayerInterfaceFactory!.paint(graphics);
    
charArray= countedLayerInterfaceFactory!.getTotalString();
    
graphics.drawChars(charArray, 0, charArray!.length, widthEdge -countedLayerInterfaceFactory!.getXOffset(), y, 0);
    
count++;
    

                                    }
                                
}


                        if(count > 0)
                        
                                    {
                                    graphics.setColor(this.countedPartsBorder);
    
graphics.drawRect(lastWidth -(CountedLayersHudPaintable.XXStringWidth +this.dropSize), 40, CountedLayersHudPaintable.XXStringWidth +this.dropSize, (count *this.height) +3);
    

                                    }
                                
}


    public paintThreed(Graphics graphics){
}


};

            

