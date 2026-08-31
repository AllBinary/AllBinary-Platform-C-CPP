
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
        #include "ColorRange.h"
#include "ColorAverage.h"

class ImageColorResults
            : public Object
         {
        

    private: colorRange: ColorRange;

    private: colorAverage: ColorAverage;

public constructor (){

            super();
        this.setColorRange(new ColorRange());
    
this.getColorRange()!.setMaxRed( -1);
    
this.getColorRange()!.setMaxGreen( -1);
    
this.getColorRange()!.setMaxBlue( -1);
    
this.getColorRange()!.setMinRed(256);
    
this.getColorRange()!.setMinGreen(256);
    
this.getColorRange()!.setMinBlue(256);
    
this.setColorAverage(new ColorAverage());
    
}


    public ColorRange getColorRange(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorRange;
    
}


    public setColorRange(ColorRange colorRange){
this.colorRange= colorRange;
    
}


    public ColorAverage getColorAverage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorAverage;
    
}


    public setColorAverage(ColorAverage colorAverage){
this.colorAverage= colorAverage;
    
}


};

            

