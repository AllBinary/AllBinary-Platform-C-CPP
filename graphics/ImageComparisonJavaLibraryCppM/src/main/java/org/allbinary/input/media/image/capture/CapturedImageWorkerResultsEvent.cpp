
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
        



            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CapturedImageWorkerResultsEvent: public AllBinaryEventObject {
        

    private: const frame: Long;

    private: bufferedImage: BufferedImage;

public constructor (any = {} anyType, Long frame, BufferedImage bufferedImage){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.frame= frame;
    
this.setBufferedImage(bufferedImage);
    
}


    public BufferedImage getBufferedImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bufferedImage;
    
}


    setBufferedImage(BufferedImage bufferedImage){
this.bufferedImage= bufferedImage;
    
}


    public Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.frame;
    
}


};

            

