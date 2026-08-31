
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class ColorCacheable
            : public Object
        : public CacheableInterface {
        

    private: key: any;

    private: color: Color;

public constructor (any = {} key){

            super();
        this.key= key;
    
this.color= new Color((key as Integer).intValue());
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.key;
    
}


    public Color getColor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.color;
    
}


    public setColor(Color color){
this.color= color;
    
}


};

            

