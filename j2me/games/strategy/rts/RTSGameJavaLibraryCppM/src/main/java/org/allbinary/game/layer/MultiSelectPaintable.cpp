
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
        #include "SelectionHudPaintable.h"
#include "RTSLayer.h"

class MultiSelectPaintable: public SelectionHudPaintable {
        

    private: const rootNameList: BasicArrayList = new BasicArrayListD();

    private: totalCharArray: std::vector<char> = NullUtil.getInstance()!.NULL_CHAR_ARRAY;

    private: rootNamesString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const TOTAL: string = "Total Selected: ";

    private: const backgroundColor: int32_t = BasicColorFactory.getInstance()!.GREY.intValue()!;

    private: totalWidth: int32_t= 0;

    private: textLine2Y: int32_t= 0;

public constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.totalWidth= font.stringWidth(this.TOTAL);
    
this.textLine2Y= (this.y +font.getHeight());
    
}


    public update(BasicArrayList list){
this.clear();
    

    size: int32_t = list.size()!;;
    
this.totalCharArray= this.getPrimitiveLongUtil()!.getCharArray(size);
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = list.get(index) as RTSLayer;;
    

                        if(!this.rootNameList!.contains(rtsLayer!.getRootName()))
                        
                                    {
                                    this.rootNameList!.add(rtsLayer!.getRootName());
    

                                    }
                                
}


    COMMA_SEP: string = CommonSeps.getInstance()!.COMMA_SEP;;
    

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = this.rootNameList!.size() -1;index >= 0; index--)
        {

    rootName: string = this.rootNameList!.get(index) as string;;
    
stringBuffer!.append(rootName);
    

                        if(index != 0)
                        
                                    {
                                    stringBuffer!.append(COMMA_SEP);
    

                                    }
                                
}

this.rootNamesString= stringBuffer!.toString();
    
}


    clear(){
this.rootNameList!.clear();
    
}


    public paint(Graphics graphics){
graphics.setColor(this.backgroundColor);
    
graphics.drawRect(this.getX(), this.y, this.getWidth(), this.getHeight());
    
graphics.setColor(this.getColor());
    
graphics.drawString(this.TOTAL, this.textX, this.y, 0);
    
graphics.drawChars(this.totalCharArray, 0, this.getPrimitiveLongUtil()!.getCurrentTotalDigits(), this.textX +this.totalWidth, this.y, 0);
    
graphics.drawString(this.rootNamesString, this.textX, this.textLine2Y, 0);
    
}


};

            

