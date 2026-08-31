
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntegerDimension
            : public Object
         {
        

    private: width: int32_t= 0;

    private: height: int32_t= 0;

public constructor (int32_t width, int32_t height){

            super();
        this.setWidth(width);
    
this.setHeight(height);
    
}


    public int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.width;
    
}


    public setWidth(int32_t width){
this.width= width;
    
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.height;
    
}


    public setHeight(int32_t height){
this.height= height;
    
}


};

            

