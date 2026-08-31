
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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueDrawString
            : public Object
        : public UpdateMyFontInterface {
        

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const LABEL: string;

    private: const labelX: int32_t;

    private: valueX: int32_t= 0;

    private: value: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string label, int32_t x){

            super();
        this.LABEL= label;
    
this.labelX= x;
    
}


    public updateMeasurement(Graphics graphics){

    labelWidth: int32_t = graphics.getFont()!.stringWidth(this.LABEL) -this.LABEL.length;;
    
this.valueX= labelWidth +this.labelX;
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public paint(Graphics graphics, int32_t y){
this.myFontProcessor!.process(graphics);
    
graphics.drawString(this.LABEL, this.labelX, y, 0);
    
graphics.drawString(this.value, this.valueX, y, 0);
    
}


    public update(string value){

                        if(value != 
                                    null
                                )
                        
                                    {
                                    this.value= value;
    

                                    }
                                
}


};

            

