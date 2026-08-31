
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MyFontProcessor.h"
#include "UpdateMyFontInterface.h"

class UpdateMyFontProcessor: public MyFontProcessor {
        

    private: const updateMeasurementProcessor: UpdateMyFontInterface;

public constructor (UpdateMyFontInterface keyValueDrawCharArray){

            super();
        this.updateMeasurementProcessor= keyValueDrawCharArray;
    
}


    public process(Graphics graphics){
this.updateMeasurementProcessor!.updateMeasurement(graphics);
    
}


};

            

