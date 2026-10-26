
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
        



            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class KeyValueDrawString
            : public Object
        : public UpdateMyFontInterface {

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::string LABEL;

    private: int32_t labelX;

    private: int32_t valueX= 0;

    private: std::string value = StringUtil::getInstance().EMPTY_STRING;

public: KeyValueDrawString(std::string label, int32_t x){
this->LABEL= label;
    
this->labelX= x;
    
}


    public: void updateMeasurement(Graphics graphics){

    int32_t labelWidth = graphics.getFont().stringWidth(this->LABEL) -LABEL.size();;
    
this->valueX= labelWidth +this->labelX;
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics graphics, int32_t y){
this->myFontProcessor.process(graphics);
    
graphics.drawString(this->LABEL, this->labelX, y, 0);
    
graphics.drawString(this->value, this->valueX, y, 0);
    
}


    public: void update(std::string value){

                        if(true)
                        
                                    {
                                    this->value= value;
    

                                    }
                                
}


};

            

