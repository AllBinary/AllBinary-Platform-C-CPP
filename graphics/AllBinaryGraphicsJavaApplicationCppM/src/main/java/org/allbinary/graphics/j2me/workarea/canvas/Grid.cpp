
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/Grid.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Grid::Grid(){
}


Grid::Grid(Grid* grid){
this->grid= grid->grid;
    
this->showGrid(grid->isGridOn_);
    
this->isGridPossible_= grid->isGridPossible_;
    
this->setZoom(grid->getZoom());
    
}


    auto Grid::isGridOn() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isGridOn_;
    
}


    auto Grid::isGridPossible() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isGridPossible_;
    
}


    auto Grid::getGrid() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->grid;
    
}


    auto Grid::getZoom() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->zoom;
    
}


    auto Grid::showGrid(bool value) -> void{
this->isGridOn_= value;
    
}


    auto Grid::setZoom(int32_t zoom) -> void{
this->zoom= zoom;
    

                        if(this->zoom < 1)
                        
                                    {
                                    zoom= 1;
    

                                    }
                                
this->isChanged= true;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_CPP
