
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/imageio/IIOImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IIOImageCacheable
            : public Object
        , public CacheableInterface {

    private: std::string key;

    private: IIOImage* iioImage;

public: IIOImageCacheable(std::string key){
this->key= key;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    public: void setBufferedImage(BufferedImage* bufferedImage){
this->setIioImage(new IIOImage(bufferedImage, 
                            nullptr, 
                            nullptr));
    
}


    public: IIOImage* getIioImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->iioImage;
    
}


    private: void setIioImage(IIOImage* iioImage){
this->iioImage= iioImage;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getClass()->getName());
    
stringBuffer->append(" Reusable IIOImage");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

