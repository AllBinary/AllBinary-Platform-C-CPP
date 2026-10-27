
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Grid
            : public Object
         {

    public: GPoint* grid;

    public: bool isGridOn = true;

    public: bool isGridPossible = false;

    private: int32_t zoom = 3;

    public: bool isChanged = true;

public: Grid();

public: Grid(Grid* grid);

    public: bool isGridOn();

    public: bool isGridPossible();

    public: GPoint* getGrid();

    public: int32_t getZoom();

    public: void showGrid(bool value);

    public: void setZoom(int32_t zoom);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_GRID_H
