
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DrawStringUtil
            : public Object
         {
        

    private: static const instance: DrawStringUtil = new DrawStringUtil();

    public static DrawStringUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DrawStringUtil.instance;
    
}


    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    public drawCenterString(Graphics graphics, string string, int32_t offset, int32_t length, int32_t x, int32_t y){

    width: int32_t = (graphics.getFont()!.substringWidth(string, offset, length)>>1);;
    

        try {
            graphics.drawSubstring(string, offset, length, x -width, y, this.anchor);
    

                //: 
} catch(e) 
            {
PreLogUtil.put(new StringMaker().append("Exception: stringLength: ")!.appendint(string.length)!.append(" offset: ")!.appendint(offset)!.append(" currentLength: ")!.appendint(length)!.toString(), this, "drawCenterString");
    
}

}


    public drawCenterStrings(Graphics graphics, std::vector<string> stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y){

    extraLines: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < stringArray!.length; index++)
        {

    string: string = stringArray[index]!;;
    

                        if(string != this.EMPTY_STRING)
                        
                                    {
                                    
    width: int32_t = graphics.getFont()!.stringWidth(string)!;;
    

    minTotalLines: int32_t = 1;;
    

                        if(width > maxWidth)
                        
                                    {
                                    minTotalLines= (width /maxWidth) +1;
    

                                    }
                                

    linePortion: int32_t = string.length /minTotalLines;;
    

    offset: int32_t = 0;;
    

    currentLength: int32_t = linePortion;;
    

    size: int32_t = string.length!;;
    

        while(offset < size)
        {

                        if(offset +currentLength > size)
                        
                                    {
                                    currentLength= size -offset;
    

                                    }
                                

                        if(offset +currentLength != size)
                        
                                    {
                                    
        while(currentLength > 0 && stringArray[index]![offset +currentLength] != ' ')
        {
currentLength--;
    
}


                        if(currentLength <= 4)
                        
                                    {
                                    currentLength= linePortion;
    

                                    }
                                

                                    }
                                
this.drawCenterString(graphics, string, offset, currentLength, x, y +((index +extraLines++) *charHeight));
    
offset= offset +currentLength;
    
currentLength= linePortion;
    
}

extraLines--;
    

                                    }
                                
}

}


};

            

