
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonsMappingPaintable.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"


TouchButtonsMappingPaintable::TouchButtonsMappingPaintable(BasicColor* basicColor) : logUtil(LogUtil::getInstance()), paintableTable(std::vector<std::vector<Paintable*>>(0, std::vector<Paintable*>(0))), touchButtonLocationHelper(new TouchButtonLocationHelper()){
this->foregroundColor= basicColor->intValue();
    
this->init();
    
}


    auto TouchButtonsMappingPaintable::init() -> void{

        try {
            this->paintableTable= this->createPaintableTable();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "updateRectangle", &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto TouchButtonsMappingPaintable::createPaintableTable() -> std::vector<std::vector<Paintable*>>{

    int32_t totalColumns = this->touchButtonLocationHelper->getTotalColumns();;
    

    int32_t totalRows = this->touchButtonLocationHelper->getTotalRows();;
    

    std::vector<std::vector<Paintable*>> paintableTable = std::vector<std::vector<Paintable*>>(totalColumns, std::vector<Paintable*>(totalRows));;
    

    CellPositionFactory* cellPositionFactory = CellPositionFactory::getInstance();;
    

    CommonButtons* commonButtons = CommonButtons::getInstance();;
    




                        for (
    int32_t index = totalColumns -1;index >= 0; index--)
        {




                        for (
    int32_t rowIndex = totalRows -1;rowIndex >= 0; rowIndex--)
        {
this->paintableTable[index][rowIndex]= TouchButton::createButton(BasicTouchInputFactory::getInstance()->NONE, TouchButtonBlankResource::getInstance(), commonButtons->NORMAL_BUTTON, cellPositionFactory->getInstanceColRow(index, rowIndex), this->touchButtonLocationHelper->getColumnsRemainderHalf(), this->touchButtonLocationHelper->getRowsRemainderHalf());
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paintableTable;
    
}


    auto TouchButtonsMappingPaintable::paint(Graphics* graphics) -> void{

    int32_t totalColumns = this->touchButtonLocationHelper->getTotalColumns();;
    

    int32_t totalRows = this->touchButtonLocationHelper->getTotalRows();;
    




                        for (
    int32_t index = totalColumns -1;index >= 0; index--)
        {




                        for (
    int32_t rowIndex = totalRows -1;rowIndex >= 0; rowIndex--)
        {
this->paintableTable[index][rowIndex].paint(graphics);
    
}

}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_CPP
