
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/imageio/IIOImage.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IIOImageCacheable
            : public Object
        : public CacheableInterface {
        

    private: key: string;

    private: iioImage: IIOImage;

public constructor (string key){

            super();
        this.key= key;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.key;
    
}


    public setBufferedImage(BufferedImage bufferedImage){
this.setIioImage(new IIOImage(bufferedImage, 
                            nullptr, 
                            nullptr));
    
}


    public IIOImage getIioImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.iioImage;
    
}


    setIioImage(IIOImage iioImage){
this.iioImage= iioImage;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.constructor.name.toString()!);
    
stringBuffer!.append(" Reusable IIOImage");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

