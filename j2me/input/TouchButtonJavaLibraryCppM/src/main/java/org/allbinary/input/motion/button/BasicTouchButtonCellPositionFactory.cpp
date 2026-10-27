
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"


BasicTouchButtonCellPositionFactory::BasicTouchButtonCellPositionFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();;
    

    CellPositionFactory* cellPositionFactory = CellPositionFactory::getInstance();;
    
cellPositionFactory->init(touchButtonLocationHelper->getTotalColumns(), touchButtonLocationHelper->getTotalRows());
    
this->TOP_LEFT= cellPositionFactory->getInstanceColRow(0, 0);
    
this->TOP_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, 0);
    
this->BOTTOM_LEFT= cellPositionFactory->getInstanceColRow(0, touchButtonLocationHelper->getTotalRows() -1);
    
this->BOTTOM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, touchButtonLocationHelper->getTotalRows() -1);
    
this->BOTTOM_SECOND_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -2, touchButtonLocationHelper->getTotalRows() -1);
    
this->SECOND_FROM_BOTTOM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, touchButtonLocationHelper->getTotalRows() -2);
    
this->SECOND_FROM_BOTTOM_SECOND_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -2, touchButtonLocationHelper->getTotalRows() -2);
    
this->BOTTOM_SECOND_FROM_LEFT= cellPositionFactory->getInstanceColRow(1, touchButtonLocationHelper->getTotalRows() -1);
    
this->SECOND_FROM_BOTTOM_LEFT= cellPositionFactory->getInstanceColRow(0, touchButtonLocationHelper->getTotalRows() -2);
    
this->SECOND_FROM_BOTTOM_SECOND_FROM_LEFT= cellPositionFactory->getInstanceColRow(1, touchButtonLocationHelper->getTotalRows() -2);
    

                        if(touchButtonLocationHelper->getTotalRows() > 2)
                        
                                    {
                                    this->SECOND_FROM_TOP_LEFT= cellPositionFactory->getInstanceColRow(0, 1);
    
this->SECOND_FROM_TOP_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, 1);
    

                                    }
                                
                        else {
                            this->SECOND_FROM_TOP_LEFT= cellPositionFactory->NONE;
    
this->SECOND_FROM_TOP_RIGHT= cellPositionFactory->NONE;
    

                        }
                            

                        if(touchButtonLocationHelper->getTotalRows() >= 4)
                        
                                    {
                                    this->THIRD_FROM_BOTTOM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, touchButtonLocationHelper->getTotalRows() -3);
    
this->FOURTH_FROM_BOTTOM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -1, touchButtonLocationHelper->getTotalRows() -4);
    
this->THIRD_FROM_BOTTOM_LEFT= cellPositionFactory->getInstanceColRow(0, touchButtonLocationHelper->getTotalRows() -3);
    

                                    }
                                
                        else {
                            this->THIRD_FROM_BOTTOM_RIGHT= cellPositionFactory->NONE;
    
this->FOURTH_FROM_BOTTOM_RIGHT= cellPositionFactory->NONE;
    
this->THIRD_FROM_BOTTOM_LEFT= cellPositionFactory->NONE;
    

                        }
                            

                        if(touchButtonLocationHelper->getTotalColumns() >= 4)
                        
                                    {
                                    this->SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -3, touchButtonLocationHelper->getTotalRows() -2);
    
this->SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -4, touchButtonLocationHelper->getTotalRows() -2);
    
this->BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -3, touchButtonLocationHelper->getTotalRows() -1);
    
this->BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -4, touchButtonLocationHelper->getTotalRows() -1);
    
this->TOP_SECOND_FROM_LEFT= cellPositionFactory->getInstanceColRow(1, 0);
    
this->TOP_SECOND_FROM_RIGHT= cellPositionFactory->getInstanceColRow(touchButtonLocationHelper->getTotalColumns() -2, 0);
    

                                    }
                                
                        else {
                            this->SECOND_FROM_BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory->NONE;
    
this->SECOND_FROM_BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory->NONE;
    
this->BOTTOM_THIRD_FROM_RIGHT= cellPositionFactory->NONE;
    
this->BOTTOM_FOURTH_FROM_RIGHT= cellPositionFactory->NONE;
    
this->TOP_SECOND_FROM_LEFT= cellPositionFactory->NONE;
    
this->TOP_SECOND_FROM_RIGHT= cellPositionFactory->NONE;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASICTOUCHBUTTONCELLPOSITIONFACTORY_CPP
