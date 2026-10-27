
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"

class TouchButtonsPaintable: public Paintable {

    protected: BasicColor* foregroundBasicColor;

    protected: int32_t foregroundColor;

    protected: BasicColorSetUtil* basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: TouchButtonFactory* touchButtonFactory = TouchButtonFactory::getInstance();

public: TouchButtonsPaintable(BasicColor* basicColor){
this->foregroundBasicColor= basicColor;
    
this->foregroundColor= basicColor->intValue();
    
}


    public: void paint(Graphics* graphics){

    BasicArrayList* list = this->touchButtonFactory->getList();;
    
this->basicSetColorUtil->setBasicColorP3(graphics, this->foregroundBasicColor, this->foregroundColor);
    

    TouchButton* touchButton;;
    




                        for (
    int32_t index = list->size();--index >= 0; )
        {
touchButton= dynamic_cast<TouchButton*>(list->objectArray[index]);
    
touchButton->paint(graphics);
    
}





                        for (
    int32_t index = list->size();--index >= 0; )
        {
touchButton= dynamic_cast<TouchButton*>(list->objectArray[index]);
    
touchButton->paintHint(graphics);
    
}

}


};

            

