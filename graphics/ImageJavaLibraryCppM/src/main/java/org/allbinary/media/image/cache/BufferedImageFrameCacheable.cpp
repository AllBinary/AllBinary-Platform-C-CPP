
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedImageFrameCacheable
            : public Object
        , public CacheableInterface {

    private: int64_t frame;

    private: BufferedImage* bufferedImage;

public: BufferedImageFrameCacheable(BufferedImage* bufferedImage, int64_t frame){
this->frame= frame;
    
this->setBufferedImage(bufferedImage);
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    public: BufferedImage* getBufferedImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImage;
    
}


    private: void setBufferedImage(BufferedImage* bufferedImage){
this->bufferedImage= bufferedImage;
    
}


    public: int64_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    public: void setFrame(int64_t frame){
this->frame= frame;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Frame: ");
    
stringBuffer->appendlong(this->getFrame());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

