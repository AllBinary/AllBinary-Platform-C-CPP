
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
        



            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BufferedImageInfo.h"

class BufferedImageCacheable
            : public Object
        : public CacheableInterface {

    private: BufferedImageInfo key;

    private: BufferedImage bufferedImage;

public: BufferedImageCacheable(BufferedImageInfo key){
this->key= key;
    
this->setBufferedImage(BufferedImage(key.getWidth(), key.getHeight(), key.getType()));
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    public: BufferedImage getBufferedImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bufferedImage;
    
}


    private: void setBufferedImage(BufferedImage bufferedImage){
this->bufferedImage= bufferedImage;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->constructor.name.toString());
    
stringBuffer.append(" ");
    
stringBuffer.append(this->getKey().toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

