
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
        



#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapCellPosition: public CellPosition {

    private: GPoint point;

    private: GPoint midPoint;

public: GeographicMapCellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height){
            super(column, row, columns, rows);
                    

                            //For kotlin this is before the body of the constructor.
                    

    int32_t x = this->getColumn() *width;;
    

    int32_t y = this->getRow() *height;;
    

    PointFactory pointFactory = PointFactory::getInstance();;
    
this->point= pointFactory.createXY(x, y);
    
this->midPoint= pointFactory.createXY(x +(width>>1), y +(height>>1));
    
}


    public: GPoint getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: GPoint getMidPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->midPoint;
    
}


    public: void setMidPoint(GPoint midPoint){
this->midPoint= midPoint;
    
}


};

            

