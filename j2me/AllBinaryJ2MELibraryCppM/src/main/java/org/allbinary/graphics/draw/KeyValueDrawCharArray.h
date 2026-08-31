
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
        #define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueDrawCharArray
            : public Object
        : public UpdateMyFontInterface {
        

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: const LABEL: string;

    private: labelX: int32_t;

    private: valueX: int32_t= 0;

    private: value: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;

    private: len: int32_t= 0;

public constructor (string label, int32_t x);

    public updateMeasurement(Graphics graphics);

    public paint(Graphics graphics, int32_t y);

    public update(std::vector<char> value, int32_t len);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
