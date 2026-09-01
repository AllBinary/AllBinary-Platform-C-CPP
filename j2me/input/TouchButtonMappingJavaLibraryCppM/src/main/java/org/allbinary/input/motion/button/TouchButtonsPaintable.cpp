
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonFactory.h"
#include "TouchButton.h"

class TouchButtonsPaintable: public Paintable {

    protected: BasicColor foregroundBasicColor;

    protected: int32_t foregroundColor;

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: const TouchButtonFactory touchButtonFactory = TouchButtonFactory::getInstance();

public: TouchButtonsPaintable(BasicColor basicColor){
this->foregroundBasicColor= basicColor;
    
this->foregroundColor= basicColor.intValue();
    
}


    public: void paint(Graphics graphics){

    BasicArrayList list = this->touchButtonFactory.getList();;
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->foregroundBasicColor, this->foregroundColor);
    

    TouchButton touchButton;;
    




                        for (
    int32_t index = list.size();--index >= 0; )
        {
touchButton= list.objectArray[index]! as TouchButton;
    
touchButton.paint(graphics);
    
}





                        for (
    int32_t index = list.size();--index >= 0; )
        {
touchButton= list.objectArray[index]! as TouchButton;
    
touchButton.paintHint(graphics);
    
}

}


};

            

