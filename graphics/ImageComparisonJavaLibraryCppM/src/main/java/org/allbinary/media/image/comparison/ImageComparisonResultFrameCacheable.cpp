
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
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResult.h"

class ImageComparisonResultFrameCacheable
            : public Object
        : public CacheableInterface {

    private: Long frame;

    private: ImageComparisonResult imageComparisonResult;

public: ImageComparisonResultFrameCacheable(ImageComparisonResult imageComparisonResult, Long frame){
this->setImageComparisonResult(imageComparisonResult);
    
this->frame= frame;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    public: Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


    public: void setFrame(Long frame){
this->frame= frame;
    
}


    public: ImageComparisonResult getImageComparisonResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageComparisonResult;
    
}


    public: void setImageComparisonResult(ImageComparisonResult imageComparisonResult){
this->imageComparisonResult= imageComparisonResult;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->constructor.name.toString());
    
stringBuffer.append(" Frame: ");
    
stringBuffer.appendlong(this->getFrame());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

