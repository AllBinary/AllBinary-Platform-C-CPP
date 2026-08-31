
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Grid
            : public Object
         {
        

    public grid: GPoint;

    public isGridOn: bool = true;

    public isGridPossible: bool = false;

    private: zoom: int32_t = 3;

    public isChanged: bool = true;

public constructor (){

            super();
        }


public constructor (Grid grid){

            super();
        this.grid= grid.grid;
    
this.showGrid(grid.isGridOn);
    
this.isGridPossible= grid.isGridPossible;
    
this.setZoom(grid.getZoom());
    
}


    public bool isGridOn(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isGridOn;
    
}


    public bool isGridPossible(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isGridPossible;
    
}


    public GPoint getGrid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.grid;
    
}


    public int32_t getZoom(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.zoom;
    
}


    public showGrid(bool value){
this.isGridOn= value;
    
}


    public setZoom(int32_t zoom){
this.zoom= zoom;
    

                        if(this.zoom < 1)
                        
                                    {
                                    zoom= 1;
    

                                    }
                                
this.isChanged= true;
    
}


};

            

