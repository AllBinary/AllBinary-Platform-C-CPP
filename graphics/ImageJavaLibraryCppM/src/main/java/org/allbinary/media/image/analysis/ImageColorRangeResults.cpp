
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRangeInterface.h"
#include "ColorRange.h"

class ImageColorRangeResults
            : public Object
         {
        

    private: colorRangeInterface: ColorRangeInterface;

    private: matchingPixelsChecked: int64_t= 0;

    private: totalPixelsChecked: int64_t= 0;

public constructor (){

            super();
        this.setColorRangeInterface(new ColorRange() as ColorRangeInterface);
    
}


    public ColorRangeInterface getColorRangeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorRangeInterface;
    
}


    public setColorRangeInterface(ColorRangeInterface colorRangeInterface){
this.colorRangeInterface= colorRangeInterface;
    
}


    public int64_t getMatchingPixelsChecked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.matchingPixelsChecked;
    
}


    public setMatchingPixelsChecked(int64_t matchingPixelsChecked){
this.matchingPixelsChecked= matchingPixelsChecked;
    
}


    public addMatchingPixelsChecked(){
this.matchingPixelsChecked++;
    
}


    public int64_t getTotalPixelsChecked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.totalPixelsChecked;
    
}


    public addTotalPixelsChecked(){
this.totalPixelsChecked++;
    
}


    public setTotalPixelsChecked(int64_t totalPixelsChecked){
this.totalPixelsChecked= totalPixelsChecked;
    
}


    public float getPercent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this.getMatchingPixelsChecked() /this.getTotalPixelsChecked());
    
}


};

            

